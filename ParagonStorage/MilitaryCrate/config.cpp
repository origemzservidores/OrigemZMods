class CfgPatches
{
	class Paragon_MilitaryCrate
	{
		units[]=
		{
			"Paragon_MiliCrate_Black",
			"Paragon_MiliCrate_Grey",
			"Paragon_MiliCrate_Tan",
			"Paragon_MiliCrate_Green",
			"Paragon_MiliCrate_Blue"
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
	class MilitaryCrate_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\MilitaryCrate\MilitaryCrate.p3d";
		hologramMaterial="MilitaryCrate";
		hologramMaterialPath="ParagonStorage\MilitaryCrate\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock",
			"Paragon_BigSign"
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
								"ParagonStorage\MilitaryCrate\data\MilitaryCrate.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\MilitaryCrate\data\MilitaryCrate.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\MilitaryCrate\data\MilitaryCrate.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\MilitaryCrate\data\MilitaryCrate.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\MilitaryCrate\data\MilitaryCratervmat"
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
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=0.85000002;
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
	class Paragon_MiliCrate_Black: MilitaryCrate_ColorBase
	{
		scope=2;
		displayName="Black Military Crate";
		descriptionShort="The military crate holds 400 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryCrate\data\MilitaryCrate_Black.paa"
		};
	};
	class Paragon_MiliCrate_Grey: MilitaryCrate_ColorBase
	{
		scope=2;
		displayName="Medium Grey Crate";
		descriptionShort="The military crate holds 400 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryCrate\data\MilitaryCrate_Grey.paa"
		};
	};
	class Paragon_MiliCrate_Tan: MilitaryCrate_ColorBase
	{
		scope=2;
		displayName="Medium Tan Crate";
		descriptionShort="The military crate holds 400 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryCrate\data\MilitaryCrate_Tan.paa"
		};
	};
	class Paragon_MiliCrate_Green: MilitaryCrate_ColorBase
	{
		scope=2;
		displayName="Medium Green Crate";
		descriptionShort="The military crate holds 400 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryCrate\data\MilitaryCrate_Green.paa"
		};
	};
	class Paragon_MiliCrate_Blue: MilitaryCrate_ColorBase
	{
		scope=2;
		displayName="Medium Blue Crate";
		descriptionShort="The military crate holds 400 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryCrate\data\MilitaryCrate_Blue.paa"
		};
	};
};
