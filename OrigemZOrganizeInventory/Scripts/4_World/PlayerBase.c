class EntityProperty
{
    EntityAI entity;
    int area;
    int width, height;
    bool flip;

    void EntityProperty(EntityAI _entity, int _width, int _height, bool _flip)
    {
        entity = _entity;
        width = _width;
        height = _height;
        area = _width * _height;
        flip = _flip;
    }
}

class EntityPropSorter // Classe para ordenar propriedades de entidades
{
    static void SortByMaxSide(array<ref EntityProperty> arr) // Função para ordenar por lado máximo
    {
        int n = arr.Count();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                int sideA = Math.Max(arr[j].width, arr[j].height);
                int sideB = Math.Max(arr[j + 1].width, arr[j + 1].height);
                if (sideA < sideB)
                {
                    auto temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    static void SortByAreaAsc(array<ref EntityProperty> arr) // Função para ordenar por área (crescente)
    {
        int n = arr.Count();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j].area > arr[j + 1].area)
                {
                    auto temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

modded class PlayerBase extends ManBase
{
    ref OrganizeInventorySettings m_OrganizeInventorySettings;

    int nowTime = 0, lastTime = 0;
    int SortLimitTime;

    override void Init()
    {
        super.Init();

        if (!m_OrganizeInventorySettings)
            m_OrganizeInventorySettings = OrganizeInventorySettings.Load();
    }

    void PlayerBase()
    {
        RegisterNetSyncVariableInt("SortLimitTime", 1, 99);
        #ifdef SERVER
        SortLimitTime = G_SortTimeLimit;
        SetSynchDirty();
        #endif
    }

    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx) // Função para tratar RPCs
    {
        super.OnRPC(sender, rpc_type, ctx);

        Object entityIB;
        Param1<Object> param;

        if (rpc_type == BACKPACKSORT.RE_CARGO)
        {
            if (ctx.Read(param))
                entityIB = param.param1;

            EntityCargoSort(entityIB, true);
        }

        if (rpc_type == BACKPACKSORT.ADD_CARGO)
        {
            if (ctx.Read(param))
                entityIB = param.param1;

            EntityCargoSort(entityIB);
        }
    }

    void EntityCargoSort(Object obj, bool optimize = false) // Função para organizar o cargo do dayz
    {
        if (!m_OrganizeInventorySettings || !m_OrganizeInventorySettings.Enable)
            return;

        nowTime = GetGame().GetTime();
        if (lastTime > 0 && nowTime - lastTime < SortLimitTime * 1000)
            return;

        EntityAI entity = EntityAI.Cast(obj);
        if (!entity)
            return;

        CargoBase cargo = entity.GetInventory().GetCargo();
        if (!cargo)
            return;

        int cargoW = cargo.GetWidth();
        int cargoH = cargo.GetHeight();

        int itemCount = cargo.GetItemCount();
        array<ItemBase> cargoItems = new array<ItemBase>;
        array<ref EntityProperty> cargoProps = new array<ref EntityProperty>;

        // Coleta todos os itens do cargo
        for (int i = 0; i < itemCount; i++)
        {
            EntityAI currentItem = cargo.GetItem(i);
            if (!currentItem)
                continue;
            cargoItems.Insert(ItemBase.Cast(currentItem));
            int w1 = 1;
            int h1 = 1;
            cargo.GetItemSize(i, w1, h1);

            InventoryLocation itemsrc = new InventoryLocation();
            currentItem.GetInventory().GetCurrentInventoryLocation(itemsrc);
            bool flip = itemsrc.GetFlip();

            if (flip)
            {
                int temp = w1;
                w1 = h1;
                h1 = temp;
            }

            cargoProps.Insert(new EntityProperty(currentItem, w1, h1, flip));
        }

        CombineStackableItems(cargoItems); // Junta em stacks

        foreach (ItemBase itemDrop : cargoItems) // Remove todos os itens do cargo: dropa no chão para evitar conflito de posição
        {
            vector dropPos = entity.GetPosition() + "1 0 1";
            dropPos[1] = GetGame().SurfaceY(dropPos[0], dropPos[2]);
            entity.GetInventory().DropEntity(InventoryMode.SERVER, this, itemDrop);
            itemDrop.SetPosition(dropPos);
            itemDrop.PlaceOnSurface();
        }

        // Ordena pelo maior lado primeiro
        EntityPropSorter.SortByMaxSide(cargoProps);

        // Cria grid vazio
        array<ref array<int>> grid = CreateEmptyGrid(cargoW, cargoH);

        // Primeira rodada: tenta encaixar cada item SEM rotação (apenas na orientação original)
       
        array<ref EntityProperty> notPlaced = new array<ref EntityProperty>;
        foreach (EntityProperty prop : cargoProps)
        {
            ItemBase itemBase = ItemBase.Cast(prop.entity);
            InventoryLocation src = new InventoryLocation();
            itemBase.GetInventory().GetCurrentInventoryLocation(src);
            InventoryLocation dst = new InventoryLocation();

            bool placed = TryPlaceItem(grid, prop.width, prop.height, cargo, itemBase, src, dst, cargoW, cargoH, prop.flip);

            if (!placed)
                notPlaced.Insert(prop);
        }

        // Segunda rodada: tenta encaixar os que sobraram, ainda sem flip
         EntityPropSorter.SortByAreaAsc(notPlaced);
        array<ref EntityProperty> stillNotPlaced = new array<ref EntityProperty>;
        foreach (EntityProperty prop2 : notPlaced)
        {
            ItemBase itemBase2 = ItemBase.Cast(prop2.entity);
            InventoryLocation src2 = new InventoryLocation();
            itemBase2.GetInventory().GetCurrentInventoryLocation(src2);
            InventoryLocation dst2 = new InventoryLocation();

            bool placed2 = TryPlaceItem(grid, prop2.width, prop2.height, cargo, itemBase2, src2, dst2, cargoW, cargoH, prop2.flip);

            if (!placed2)
                stillNotPlaced.Insert(prop2); // ficou no chão mesmo após a segunda rodada
        }

        lastTime = nowTime;
    }

    array<ref array<int>> CreateEmptyGrid(int w, int h) 
    {
        array<ref array<int>> grid = new array<ref array<int>>;
        for (int y = 0; y < h; y++)
        {
            array<int> row = new array<int>;
            for (int x = 0; x < w; x++)
                row.Insert(0);
            grid.Insert(row);
        }
        return grid;
    }

    bool TryPlaceItem(array<ref array<int>> grid, int width, int height, CargoBase cargo, ItemBase itemBase, InventoryLocation src, InventoryLocation dst, int cargoW, int cargoH, bool flip)
    {
        for (int y = 0; y <= cargoH - height; y++)
        {
            for (int x = 0; x <= cargoW - width; x++)
            {
                if (CanPlaceItem(grid, x, y, width, height))
                {
                    PlaceItem(grid, x, y, width, height);
                    dst.SetCargoAuto(cargo, itemBase, y, x, flip);
                    InventoryInputUserData.SendServerMove(null, InventoryCommandType.SYNC_MOVE, src, dst);
                    GameInventory.LocationSyncMoveEntity(src, dst);
                    return true;
                }
            }
        }
        return false;
    }

    void CombineStackableItems(ref array<ItemBase> items) // Função para combinar itens empilháveis
    {
        for (int i = 0; i < items.Count(); i++)
        {
            ItemBase itemA = items[i];
            if (!itemA)
                continue;

            for (int j = i + 1; j < items.Count(); j++)
            {
                ItemBase itemB = items[j];
                if (!itemB || !itemA.CanBeCombined(itemB, false))
                    continue;

                if (itemA.IsInherited(Ammunition_Base))
                {
                    Magazine magA = Magazine.Cast(itemA);
                    if (magA && magA.GetAmmoCount() > 0)
                        magA.CombineItems(itemB);
                }
                else
                    itemA.CombineItems(itemB);

                if (itemB.GetQuantity() <= 0)
                {
                    items.Remove(j);
                    j--;
                }
            }
        }
    }

    bool CanPlaceItem(array<ref array<int>> grid, int x, int y, int width, int height)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (grid[y + i][x + j] != 0)
                    return false;
            }
        }
        return true;
    }

    void PlaceItem(array<ref array<int>> grid, int x, int y, int width, int height)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                grid[y + i][x + j] = 1;
            }
        }
    }
}