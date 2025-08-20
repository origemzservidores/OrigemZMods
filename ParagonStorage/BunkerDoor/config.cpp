class CfgPatches
{
	class Paragon_BunkerDoor
	{
		units[]=
		{
			"Paragon_Bdoor"
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
	class BunkerDoor_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\BunkerDoor\BunkerDoor.p3d";
		hologramMaterial="BunkerDoor";
		hologramMaterialPath="ParagonStorage\BunkerDoor\data";
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
								"ParagonStorage\BunkerDoor\data\BunkerDoor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\BunkerDoor\data\BunkerDoor.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\BunkerDoor\data\BunkerDoor.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\BunkerDoor\data\BunkerDoor.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\BunkerDoor\data\BunkerDoor.rvmat"
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
				animPeriod=1.5;
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
	class Paragon_Bdoor: BunkerDoor_ColorBase
	{
		scope=2;
		displayName="Bunker Door";
		descriptionShort="Place the lockable Bunker Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BunkerDoor\data\BunkerDoor_co.paa"
		};
	};
};
