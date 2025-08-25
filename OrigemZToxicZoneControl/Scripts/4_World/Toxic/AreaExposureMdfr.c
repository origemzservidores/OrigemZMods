modded class AreaExposureMdfr
{
    protected float m_ToxicExposureTime;
    protected float m_ShockTimer;
    protected ref ToxicZoneSettings m_ToxicZoneSettings;

    override void Init()
    {
        super.Init();
        if (!m_ToxicZoneSettings)
            m_ToxicZoneSettings = ToxicZoneSettings.Load();
    }

    override void OnDeactivate(PlayerBase player)
    {
        super.OnDeactivate(player);
        m_ToxicExposureTime = 0;
        m_ShockTimer = 0;
    }

    override void OnTick(PlayerBase player, float deltaT)
    {
        super.OnTick(player, deltaT);

        if (!m_ToxicZoneSettings || !m_ToxicZoneSettings.Enable)
            return;

        if (!IsInStaticToxicZone(player))
        {
            Print("[DEBUG][OnTick] Fora da zona estática. Não aplica efeitos do mod.");
            return;
        }
        else
        {
            Print("[DEBUG][OnTick] Dentro da zona estática! Efeitos do mod ativos.");
        }

        float unconThreshold = m_ToxicZoneSettings.SecondsToDeliverShockDamage;

        if (!IsWearingProtectiveClothing(player))
        {
            m_ToxicExposureTime += deltaT;
        }
        else
        {
            m_ToxicExposureTime -= deltaT;
            if (m_ToxicExposureTime < 0)
                m_ToxicExposureTime = 0;
        }

        if (m_ToxicExposureTime >= unconThreshold)
        {
            m_ShockTimer += deltaT;
            if (m_ShockTimer >= 5)
            {
                player.AddHealth("", "Shock", -m_ToxicZoneSettings.ShockDamage);
                m_ShockTimer = 0;
                Print("[DEBUG][OnTick] Dano da config do MOD sendo aplicado: -" + m_ToxicZoneSettings.ShockDamage + " Shock");
            }
        }
        else
        {
            m_ShockTimer = 0;
        }
    }

    override void BleedingSourceCreateCheck(PlayerBase player)
    {
        if (!m_ToxicZoneSettings || !m_ToxicZoneSettings.Enable)
        {
            super.BleedingSourceCreateCheck(player);
            return;
        }

        if (!IsInStaticToxicZone(player))
        {
            Print("[DEBUG][BleedingSourceCreateCheck] Fora da zona estática. Usando vanilla.");
            super.BleedingSourceCreateCheck(player);
            return;
        }

        if (IsWearingProtectiveClothing(player))
            return;

        int maxCuts = 1;
        if (m_ToxicZoneSettings.BleedingSources > 0)
            maxCuts = m_ToxicZoneSettings.BleedingSources;

        Print("[DEBUG][BleedingSourceCreateCheck] Criando cortes via MOD. Quantidade: " + maxCuts);

        for (int i = 0; i < maxCuts; i++)
        {
            super.BleedingSourceCreateCheck(player);
        }
    }

    bool IsWearingProtectiveClothing(PlayerBase player)
    {
        array<int> protectionSlots = {InventorySlots.MASK, InventorySlots.BODY, InventorySlots.LEGS, InventorySlots.FEET, InventorySlots.GLOVES};

        foreach (int slot : protectionSlots)
        {
            if (PluginTransmissionAgents.GetProtectionLevelEx(DEF_CHEMICAL, slot, player, true) < 1.0)
                return false;
        }
        return true;
    }

    // Usa a lista de triggers ativos do player para detectar zona estática
    bool IsInStaticToxicZone(PlayerBase player)
    {
        ref array<ContaminatedTrigger> triggers = player.GetActiveContaminatedTriggers();
        if (!player || !triggers)
        {
            Print("[DEBUG][IsInStaticToxicZone] Nenhuma lista de triggers ativa.");
            return false;
        }
        foreach (ContaminatedTrigger trig : triggers)
        {
            if (trig && trig.IsInherited(ContaminatedTrigger) && !trig.IsInherited(ContaminatedTrigger_Dynamic) && !trig.IsInherited(ContaminatedTrigger_Local))
            {
                Print("[DEBUG][IsInStaticToxicZone] Trigger é ContaminatedTrigger (zona estática vanilla).");
                return true;
            }
        }
        Print("[DEBUG][IsInStaticToxicZone] Nenhum trigger estático ativo.");
        return false;
    }
}