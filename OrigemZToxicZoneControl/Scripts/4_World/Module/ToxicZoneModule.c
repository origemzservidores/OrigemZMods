[CF_RegisterModule(ToxicZoneModule)]
class ToxicZoneModule: CF_ModuleWorld
{
    ref ToxicZoneSettings settings;

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
            settings = ToxicZoneSettings.Load();
        }
    }
}