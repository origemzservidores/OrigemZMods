class ToxicZoneSettings
{
    int Version = 1; 
    bool Enable = false;
    int ShockDamage = 10;
    int BleedingSources = 1;
    int SecondsToDeliverShockDamage = 60;

    // Singleton instance
    static ref ToxicZoneSettings m_Instance; // Evita que cria uma nova instância toda vez que é chamado o metodo

    void ToxicZoneSettings() {}

    void DefaultSettings()
    {
        Enable = false;
        ShockDamage = 10;
        BleedingSources = 1;
        SecondsToDeliverShockDamage = 60;
        SaveSettings();
    }

    void SaveSettings()
    {
        JsonFileLoader<ToxicZoneSettings>.JsonSaveFile(TOXICZONE_CONFIG_FILENAME, this);
    }

    static void CheckDirectories()
    {
        if (!FileExist(TOXICZONE_CONFIG_ROOT_SERVER)) MakeDirectory(TOXICZONE_CONFIG_ROOT_SERVER);
        if (!FileExist(TOXICZONE_CONFIG_DIR_SERVER)) MakeDirectory(TOXICZONE_CONFIG_DIR_SERVER);
    }

    // Método singleton para acesso global
    static ToxicZoneSettings Get()
    {
        if (!m_Instance)
            m_Instance = Load();
        return m_Instance;
    }

    // Carrega do disco
    static ToxicZoneSettings Load()
    {
        ToxicZoneSettings settings = new ToxicZoneSettings();
        CheckDirectories();

        if (FileExist(TOXICZONE_CONFIG_FILENAME))
        {
            JsonFileLoader<ToxicZoneSettings>.JsonLoadFile(TOXICZONE_CONFIG_FILENAME, settings);
        }
        else
        {
            settings.DefaultSettings();
        }
        return settings;
    }
}