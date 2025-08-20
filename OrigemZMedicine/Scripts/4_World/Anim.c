modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
		super.RegisterOneHanded( pType, pBehavior );
		
		    pType.AddItemInHandsProfileIK( "OZM_Med_Analgin", "dz/anims/workspaces/player/player_main/props/player_main_1h_tablets.asi", pBehavior,	"dz/anims/anm/player/ik/gear/painkillers2.anm");
		    pType.AddItemInHandsProfileIK( "OZM_Ai2", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm" );
        pType.AddItemInHandsProfileIK( "OZM_Ai2_Army", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm" );
        pType.AddItemInHandsProfileIK( "OZM_Ai2_Nauk", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm" );
        pType.AddItemInHandsProfileIK( "OZM_Med_Adrenaline", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", pBehavior, "dz/anims/anm/player/ik/gear/morphine.anm");		
		    pType.AddItemInHandsProfileIK( "OZM_Med_MedKit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/first_aid_kit.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Heal", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Painkiller", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Adrenalin", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Cholera", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Disearse", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Curu", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Salmonella", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
        pType.AddItemInHandsProfileIK( "OZM_Med_Pills_Ugol", "dz/anims/workspaces/player/player_main/props/player_main_1h_pills.asi", pBehavior,			"dz/anims/anm/player/ik/gear/VitaminBottle.anm");
	}
}