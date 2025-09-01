[CF_RegisterModule(FireMaskModule)]
class FireMaskModule: CF_ModuleWorld
{
    ref FireMaskSettings settings;

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
            settings = FireMaskSettings.Load();
        }
    }
}