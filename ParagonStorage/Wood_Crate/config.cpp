class CfgPatches
{
	class Paragon_Wood_Crate
	{
		units[]=
		{
			"Paragon_Wood_Crate"
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
	class Wood_Crate_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Wood_Crate\WoodCrate.p3d";
		hologramMaterial="WoodCrate";
		hologramMaterialPath="ParagonStorage\Wood_Crate\data";
		attachments[]=
		{
			"Paragon_BigSign"
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
								"ParagonStorage\Wood_Crate\data\Wood_Crate.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Wood_Crate\data\Wood_Crate.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Wood_Crate\data\Wood_Crate.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Wood_Crate\data\Wood_Crate.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Wood_Crate\data\Wood_Crate.rvmat"
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
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
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
	class Paragon_Wood_Crate: Wood_Crate_ColorBase
	{
		scope=2;
		displayName="Wooden Crate";
		descriptionShort="The Wood Crate has 600 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Wood_Crate\data\Wood_Crate_co.paa"
		};
	};
};
