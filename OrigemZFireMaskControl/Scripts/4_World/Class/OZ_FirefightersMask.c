class OZ_FirefightersMask extends MaskBase
{
    ref FireMaskSettings m_FireMaskSettings;

    void LoadFireMaskSettings()
    {
        if (!m_FireMaskSettings)
            m_FireMaskSettings = FireMaskSettings.Load();
    }

    override void OnWasAttached(EntityAI parent, int slot_id) // Método chamado quando a máscara é equipada
    {
        super.OnWasAttached(parent, slot_id);
        if (slot_id == InventorySlots.MASK)
        {
            StartPeriodicConsumption();
        }
    }

    override void OnWasDetached(EntityAI parent, int slot_id) // Método chamado quando a máscara é desequipada
    {
        super.OnWasDetached(parent, slot_id);
        if (slot_id == InventorySlots.MASK)
        {
            StopPeriodicConsumption();
        }
    }

    void StartPeriodicConsumption() // Inicia o consumo periódico
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.ConsumeIfEquipped, 1000, true); // Chama o método a cada segundo
    }

    void StopPeriodicConsumption() // Para o consumo periódico
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(this.ConsumeIfEquipped);
    }

    void ConsumeIfEquipped() // Método chamado para consumir o filtro se a máscara estiver equipada dentro da zona HOT
    {
        LoadFireMaskSettings();
        if (!m_FireMaskSettings.Enable)
            return;

        PlayerBase player = PlayerBase.Cast(GetHierarchyRootPlayer());
        if (player && IsEquippedByPlayer())
        {
            if (player.IsInEffectAreaAP(EEffectAreaTypeAP.HOT_AREA)) // Flag da área quente mod AP
            {
                if (GetQuantity() > 0)
                {
                    float consumoPorTick = m_FireMaskSettings.ConsumptionPerSecond;

                    // Calcula tempo restante em segundos
                    float segundosRestantes = GetQuantity() / consumoPorTick;
                    int minutos = Math.Floor(segundosRestantes / 60);
                    int segundos = Math.Round(segundosRestantes) - (minutos * 60);

                    if (m_FireMaskSettings.ShowChatMessage)
                        player.MessageStatus("[Máscara de bombeiro] Tempo restante do filtro: " + minutos + "m " + segundos + "s");

                    float novaQuantidade = GetQuantity() - consumoPorTick;
                    if (novaQuantidade < 0)
                        novaQuantidade = 0;
                    SetQuantity(novaQuantidade);
                }
                else if (!IsRuined())
                {
                    if(m_FireMaskSettings.ShowChatMessage)
                        player.MessageStatus("[Máscara de bombeiro] Seu tempo acabou, filtro embutido esgotado!");

                    SetHealth("", "", 0); // Arruína a máscara
                }
            }
        }
    }

    bool IsEquippedByPlayer() // Verifica se a máscara está equipada por um jogador
    {
        EntityAI parent = GetHierarchyParent();
        if (parent && parent.IsInherited(PlayerBase))
        {
            PlayerBase player = PlayerBase.Cast(parent);
            EntityAI equipped = player.GetInventory().FindAttachment(InventorySlots.MASK);
            return (equipped == this);
        }
        return false;
    }
}