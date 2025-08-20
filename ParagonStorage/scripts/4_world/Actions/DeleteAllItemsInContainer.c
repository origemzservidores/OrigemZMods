modded class Container_Base
{
    void DeleteAllItemsInContainer()
    {
        
        CargoBase cargo = GetInventory().GetCargo();
        for (int i = cargo.GetItemCount() - 1; i >= 0; i--)
        {
            ItemBase item = ItemBase.Cast(cargo.GetItem(i));
            if (item)
            {
                GetGame().ObjectDelete(item);
            }
        }
        for (int j = GetInventory().AttachmentCount() - 1; j >= 0; j--)
        {
            ItemBase attachment = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(j));
            if (attachment)
            {
                GetGame().ObjectDelete(attachment);
            }
        }
    }
    bool IsContainerEmpty()
    {
        CargoBase cargo = GetInventory().GetCargo();
        if(cargo.GetItemCount() <= 0 && GetInventory().AttachmentCount() <= 0)
            return true;
        return false;
    }
}