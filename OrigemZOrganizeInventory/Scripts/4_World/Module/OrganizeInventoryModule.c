[CF_RegisterModule(OrganizeInventoryModule)]
class OrganizeInventoryModule: CF_ModuleWorld
{
    ref OrganizeInventorySettings settings;

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
            settings = OrganizeInventorySettings.Load();
        }
    }
}