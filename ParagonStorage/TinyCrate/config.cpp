class CfgPatches
{
	class Paragon_TinyCrate
	{
		units[]=
		{
			"Paragon_TinyCrate_Black",
			"Paragon_TinyCrate_Grey",
			"Paragon_TinyCrate_Tan",
			"Paragon_TinyCrate_Green",
			"Paragon_TinyCrate_Blue"
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
	class TinyCrate_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\TinyCrate\TinyCrate.p3d";
		hologramMaterial="TinyCrate";
		hologramMaterialPath="ParagonStorage\MediumCrate\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,4};
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
			itemsCargoSize[]={10,10};
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
	class Paragon_TinyCrate_Black: TinyCrate_ColorBase
	{
		scope=2;
		displayName="Tiny Black Crate";
		descriptionShort="The Tiny crate holds 100 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Black.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_TinyCrate_Grey: TinyCrate_ColorBase
	{
		scope=2;
		displayName="Tiny Grey Crate";
		descriptionShort="The Tiny crate holds 100 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Grey.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_TinyCrate_Tan: TinyCrate_ColorBase
	{
		scope=2;
		displayName="Tiny Tan Crate";
		descriptionShort="The Tiny crate holds 100 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Tan.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_TinyCrate_Green: TinyCrate_ColorBase
	{
		scope=2;
		displayName="Tiny Green Crate";
		descriptionShort="The Tiny crate holds 100 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Green.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
	class Paragon_TinyCrate_Blue: TinyCrate_ColorBase
	{
		scope=2;
		displayName="Tiny Blue Crate";
		descriptionShort="The Tiny crate holds 100 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MediumCrate\data\Body_Blue.paa",
			"ParagonStorage\MediumCrate\data\Parts.paa",
			"ParagonStorage\MediumCrate\data\Inside.paa"
		};
	};
};
