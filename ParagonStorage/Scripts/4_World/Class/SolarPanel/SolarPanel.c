class Paragon_SolarPanel_ColorBase extends PowerGeneratorBase
{
    // Sempre retorna energia máxima
    int CurrentEnergy()
    {
        return 999999;
    }

    // Construtor
    void Paragon_SolarPanel_ColorBase()
    {
        SetEventMask(EntityEvent.INIT); // Se necessário
        RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
        RegisterNetSyncVariableBool("m_IsPlaceSound");
    }

    // Apenas liga o painel, ignora teto e horário
    void CheckDaylight()
    {
        if (GetGame().IsServer())
        {
            GetCompEM().SwitchOn();
        }
    }

    override void EEInit()
    {
        super.EEInit();

        if (GetGame().IsServer() || !GetGame().IsMultiplayer())
        {
            m_UTSSettings = new UniversalTemperatureSourceSettings();
            m_UTSSettings.m_ManualUpdate = true;
            m_UTSSettings.m_TemperatureMin = 0;
            m_UTSSettings.m_TemperatureMax = 100;
            m_UTSSettings.m_RangeFull = 1;
            m_UTSSettings.m_RangeMax = 2.5;
            m_UTSSettings.m_TemperatureCap = 8;
            m_UTSLEngine = new UniversalTemperatureSourceLambdaConstant();
            m_UTSource = new UniversalTemperatureSource(this, m_UTSSettings, m_UTSLEngine);

            GetCompEM().SwitchOn();
        }
    }
}

class Paragon_SolarPanel extends Paragon_SolarPanel_ColorBase {};