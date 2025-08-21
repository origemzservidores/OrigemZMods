modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy(pType, pBehavior);
		pType.AddItemInHandsProfileIK("StorageBox_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
		pType.AddItemInHandsProfileIK("RFSolarPanelKit", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			 		"dz/anims/anm/player/ik/heavy/wooden_crate.anm");
		pType.AddItemInHandsProfileIK("WaterBarrel_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			 		"dz/anims/anm/player/ik/heavy/generator.anm");   			
	};	
};