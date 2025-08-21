modded class MissionServer
{
    private ref PlayerTrophyManager trophyManager;

    void MissionServer()
    {
        trophyManager = PlayerTrophyManager.GetInstance();
        #ifdef SERVER
        trophyManager.Initialize();
        #endif
    }

    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);

        string playerId64 = identity.GetPlainId();
        int trophyPoints = trophyManager.GetTrophyValue(playerId64);

        // Envia os pontos de troféu para o cliente 
        Param1<int> paramsToClient = new Param1<int>(trophyPoints);
        GetRPCManager().SendRPC("OrigemZ_Trophy", "UpdateTrophyCount", paramsToClient, true, player.GetIdentity());

        // Envia RPC para sincronizar a ativação dos troféus via .json
        GetRPCManager().SendRPC("OrigemZ_Trophy", "SyncTrophyEnable", new Param1<bool>(TrophySettings.Get().IsEnabled()), true, identity);
    }
}