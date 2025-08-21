class TrophySettings
{
    int Version = 1; 
    bool Enable = false;
    int TrophyPoints = 1;

    static ref TrophySettings m_Instance; // Evita que cria uma nova instância toda vez que é chamado o metodo

    void TrophySettings() {}

    void DefaultSettings()
    {
        Enable = false;
        TrophyPoints = 1;
        SaveSettings();
    }

    void SaveSettings()
    {
        JsonFileLoader<TrophySettings>.JsonSaveFile(TROPHY_CONFIG_FILENAME, this);
    }

    static void CheckDirectories()
    {
        if (!FileExist(TROPHY_CONFIG_ROOT_SERVER)) MakeDirectory(TROPHY_CONFIG_ROOT_SERVER);
        if (!FileExist(TROPHY_CONFIG_DIR_SERVER)) MakeDirectory(TROPHY_CONFIG_DIR_SERVER);
        if (!FileExist(TROPHY_CONFIG_DATABASE_DIR)) MakeDirectory(TROPHY_CONFIG_DATABASE_DIR);
    }

    static TrophySettings Get()
    {
        if (!m_Instance)
            m_Instance = Load();
        return m_Instance;
    }

    static TrophySettings Load()
    {
        TrophySettings settings = new TrophySettings();
        CheckDirectories();

        if (FileExist(TROPHY_CONFIG_FILENAME))
        {
            JsonFileLoader<TrophySettings>.JsonLoadFile(TROPHY_CONFIG_FILENAME, settings);
        }
        else
        {
            settings.DefaultSettings();
        }
        return settings;
    }

    bool IsEnabled()
    {
        return Enable;
    }
}