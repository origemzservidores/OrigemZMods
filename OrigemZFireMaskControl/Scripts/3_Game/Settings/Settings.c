class FireMaskSettings
{
    int Version = 1; 
    bool Enable = false;
    bool ShowChatMessage = false;
    float ConsumptionPerSecond = 0.125; 

    // Singleton instance
    static ref FireMaskSettings m_Instance; // Evita que cria uma nova instância toda vez que é chamado o metodo

    void FireMaskSettings() {}

    void DefaultSettings()
    {
        Enable = false;
        ShowChatMessage = false;
        ConsumptionPerSecond = 0.125; // 30 minutos de duração
        SaveSettings();
    }

    void SaveSettings()
    {
        JsonFileLoader<FireMaskSettings>.JsonSaveFile(FIREMASK_CONFIG_FILENAME, this);
    }

    static void CheckDirectories()
    {
        if (!FileExist(FIREMASK_CONFIG_ROOT_SERVER)) MakeDirectory(FIREMASK_CONFIG_ROOT_SERVER);
        if (!FileExist(FIREMASK_CONFIG_DIR_SERVER)) MakeDirectory(FIREMASK_CONFIG_DIR_SERVER);
    }

    // Método singleton para acesso global
    static FireMaskSettings Get()
    {
        if (!m_Instance)
            m_Instance = Load();
        return m_Instance;
    }

    // Carrega do disco
    static FireMaskSettings Load()
    {
        FireMaskSettings settings = new FireMaskSettings();
        CheckDirectories();

        if (FileExist(FIREMASK_CONFIG_FILENAME))
        {
            JsonFileLoader<FireMaskSettings>.JsonLoadFile(FIREMASK_CONFIG_FILENAME, settings);
        }
        else
        {
            settings.DefaultSettings();
        }
        return settings;
    }
}