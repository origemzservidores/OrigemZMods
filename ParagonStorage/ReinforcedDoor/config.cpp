class CfgPatches
{
	class Paragon_ReinforcedDoor
	{
		units[]=
		{
			"Paragon_Rdoor_Black",
			"Paragon_Rdoor_Green"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class Paragon_Lockable_Base: Container_Base
	{
	};
	class ReinforcedDoor_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\ReinforcedDoor\ReinforcedDoor.p3d";
		hologramMaterial="ReinforcedDoor";
		hologramMaterialPath="ParagonStorage\ReinforcedDoor\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		allowOwnedCargoManipulation=1;
		itemSize[]={6,4};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock"
		};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Paragon_Rdoor_Black: ReinforcedDoor_ColorBase
	{
		scope=2;
		displayName="Black Reinforced Door";
		descriptionShort="Place the lockable Reinforced Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor_Black.paa"
		};
	};
	class Paragon_Rdoor_Green: ReinforcedDoor_ColorBase
	{
		scope=2;
		displayName="Green Reinforced Door";
		descriptionShort="Place the lockable Reinforced Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ReinforcedDoor\data\ReinforcedDoor_Green.paa"
		};
	};
};
