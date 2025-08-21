class PlayerTrophyManager
{
    static ref PlayerTrophyManager s_Instance;

    static PlayerTrophyManager GetInstance()
    {
        if (!s_Instance)
        {
            s_Instance = new PlayerTrophyManager();
        }
        return s_Instance;
    }

    int GetTrophyValue(string playerId64)
    {
        #ifdef SERVER
        int value = 0;
        if (TrophyListDataBase && TrophyListDataBase.Find(playerId64, value))
            return value;
        return 0;
        #else
        // CLIENT: retorna 0, o valor real vem via RPC
        return 0;
        #endif
    }

    #ifdef SERVER
    ref map<string, int> TrophyListDataBase;

    void PlayerTrophyManager()
    {
        Initialize();
    }

    void Initialize()
    {
        if (!FileExist("$profile:OrigemZ/Trophy/DataBase/PlayerTrophy.json"))
        {
            TrophyListDataBase = new map<string, int>();
            SaveToJson();
        }
        else
        {
            LoadFromJson();
        }
    }

    void AddTrophy(string playerId64, int trophyValue, PlayerBase player = null)
    {
        int currentValue;

        if (TrophyListDataBase.Find(playerId64, currentValue))
        {
            TrophyListDataBase.Set(playerId64, currentValue + trophyValue);
        }
        else
        {
            TrophyListDataBase.Insert(playerId64, trophyValue);
        }

        SaveToJson();

        // Envia via RPC para o cliente atualizar a HUD e mostrar mensagem
        if (player && player.GetIdentity())
        {
            int updatedPoints = GetTrophyValue(playerId64);
            SendTrophyNotification(player, "OrigemZ", "Parabéns você coletou mais um troféu!", 3);
            //string msg = "Parabéns você coletou mais um troféu, agora você possui total de " + updatedPoints + " troféus!";
            Param1<int> paramsToClient = new Param1<int>(updatedPoints);
            GetRPCManager().SendRPC("OrigemZ_Trophy", "UpdateTrophyCount", paramsToClient, true, player.GetIdentity());
        }
    }

    void SendTrophyNotification(PlayerBase player, string title, string message, int duration = 60)
    {
        if (player && player.GetIdentity())
        {
            string logoPath = "OrigemZ_Trophy/Data/Hud/Trophy.edds";
            PlayerIdentity ident = player.GetIdentity();
            NotificationSystem.SendNotificationToPlayerIdentityExtended(ident, duration, title, message, logoPath);
        }
    }

    void SaveToJson()
    {
        JsonFileLoader<PlayerTrophyManager>.JsonSaveFile("$profile:OrigemZ/Trophy/DataBase/PlayerTrophy.json", this);
    }

    void LoadFromJson()
    {
        JsonFileLoader<PlayerTrophyManager>.JsonLoadFile("$profile:OrigemZ/Trophy/DataBase/PlayerTrophy.json", this);
    }
    #endif
};