class OrganizeInventorySettings
{
    int Version = 1; 
    bool Enable = false;

    // Singleton instance
    static ref OrganizeInventorySettings m_Instance; // Evita que cria uma nova instância toda vez que é chamado o metodo

    void OrganizeInventorySettings() {}

    void DefaultSettings()
    {
        Enable = false;
        SaveSettings();
    }

    void SaveSettings()
    {
        JsonFileLoader<OrganizeInventorySettings>.JsonSaveFile(ORGANIZEINVENTORY_CONFIG_FILENAME, this);
    }

    static void CheckDirectories()
    {
        if (!FileExist(ORGANIZEINVENTORY_CONFIG_ROOT_SERVER)) MakeDirectory(ORGANIZEINVENTORY_CONFIG_ROOT_SERVER);
        if (!FileExist(ORGANIZEINVENTORY_CONFIG_DIR_SERVER)) MakeDirectory(ORGANIZEINVENTORY_CONFIG_DIR_SERVER);
    }

    // Método singleton para acesso global
    static OrganizeInventorySettings Get()
    {
        if (!m_Instance)
            m_Instance = Load();
        return m_Instance;
    }

    // Carrega do disco
    static OrganizeInventorySettings Load()
    {
        OrganizeInventorySettings settings = new OrganizeInventorySettings();
        CheckDirectories();

        if (FileExist(ORGANIZEINVENTORY_CONFIG_FILENAME))
        {
            JsonFileLoader<OrganizeInventorySettings>.JsonLoadFile(ORGANIZEINVENTORY_CONFIG_FILENAME, settings);
        }
        else
        {
            settings.DefaultSettings();
        }
        return settings;
    }
}