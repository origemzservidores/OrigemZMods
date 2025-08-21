class OZ_Trophy_Premium : ItemBase
{
    TrophySettings m_TrophySettings;

    void OZ_Trophy_Premium()
    {
        m_TrophySettings = TrophySettings.Get();
    }

    override void EEInventoryIn(Man newParentMan, EntityAI diz, EntityAI newParent)
    {
        super.EEInventoryIn(newParentMan, diz, newParent);

        #ifdef SERVER
        if (!m_TrophySettings || !m_TrophySettings.IsEnabled())
            return;

        PlayerBase player = PlayerBase.Cast(newParentMan);
        if (player)
        {
            ref PlayerTrophyManager trophyManager = PlayerTrophyManager.GetInstance();
            if (trophyManager)
            {
                trophyManager.AddTrophy(player.GetIdentity().GetPlainId(), m_TrophySettings.TrophyPoints, player);
            }
            this.Delete();
        }
        #endif
    }
};