class CfgPatches
{
	class Paragon_SmallCrate
	{
		units[]=
		{
			"Paragon_SmallCrate_Black",
			"Paragon_SmallCrate_Grey",
			"Paragon_SmallCrate_Tan",
			"Paragon_SmallCrate_Green",
			"Paragon_SmallCrate_Blue"
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
	class SmallCrate_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\SmallCrate\SmallCrate.p3d";
		hologramMaterial="SmallCrate";
		hologramMaterialPath="ParagonStorage\MediumCrate\data";
		attachments[]=
		{
			"Paragon_SmallSign"
		};
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
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
								"ParagonStorage\MediumCrate\data\Body.rvmat",
								"ParagonStorage\MediumCrate\data\Parts.rvmat",
								"ParagonStorage\MediumCrate\data\Inside.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\MediumCrate\data\Body.rvmat",
								"ParagonStorage\MediumCrate\data\Parts.rvmat",
								"ParagonStorage\MediumCrate\data\Inside.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\MediumCrate\data\Body.rvmat",
								"ParagonStorage\MediumCrate\data\Parts.rvmat",
								"ParagonStorage\MediumCrate\data\Inside.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\MediumCrate\data\Body.rvmat",
								"ParagonStorage\MediumCrate\data\Parts.rvmat",
								"ParagonStorage\MediumCrate\data\Inside.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\MediumCrate\data\Body.rvmat",
								"ParagonStorage\MediumCrate\data\Parts.rvmat",
								"ParagonStorage\MediumCrate\data\Inside.rvmat"
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
			itemsCargoSize[]={10,15};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class lid
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
	class Paragon_SmallCrate_Black: SmallCrate_ColorBase
	{
		scope=2;
		displayName="Small Black Crate";
		descriptionShort="The small crate holds 200 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Black.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_SmallCrate_Grey: SmallCrate_ColorBase
	{
		scope=2;
		displayName="Small Grey Crate";
		descriptionShort="The small crate holds 200 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Grey.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_SmallCrate_Tan: SmallCrate_ColorBase
	{
		scope=2;
		displayName="Small Tan Crate";
		descriptionShort="The small crate holds 200 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Tan.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_SmallCrate_Green: SmallCrate_ColorBase
	{
		scope=2;
		displayName="Small Green Crate";
		descriptionShort="The small crate holds 200 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Green.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_SmallCrate_Blue: SmallCrate_ColorBase
	{
		scope=2;
		displayName="Small Blue Crate";
		descriptionShort="The small crate holds 200 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Blue.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
};
