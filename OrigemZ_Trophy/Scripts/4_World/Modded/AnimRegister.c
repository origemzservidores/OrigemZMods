modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);

        //Animação do Troféu
        //pType.AddItemInHandsProfileIK("OZ_Trophy", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nails_box.anm");
        //Animação do Troféu Premium
        //pType.AddItemInHandsProfileIK("OZ_Trophy_Premium", "dz/anims/workspaces/player/player_main/player_heavy.asi", pBehavior, "dz/anims/anm/player/ik/gear/nails_box.anm");
        //Animação do Troféu Box
        pType.AddItemInHandsProfileIK("OZ_Trophy_Box", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/protector_case.anm");
    };
};