[CF_RegisterModule(TrophyModule)]
class TrophyModule: CF_ModuleWorld
{
    ref TrophySettings settings;

    override void OnInit() 
    {
        super.OnInit();
        EnableMissionStart();
    }

    override void OnMissionStart(Class sender, CF_EventArgs args)
    {
        super.OnMissionStart(sender, args);

        if (GetGame().IsServer())
        {
            settings = TrophySettings.Load();
        }
    }
};