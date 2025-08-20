class CfgPatches
{
	class Paragon_Pallet_Storage
	{
		units[]=
		{
			"Paragon_Pallet_Black",
			"Paragon_Pallet_Tan",
			"Paragon_Pallet_Green"
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
	class Pallet_Storage_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Pallet_Storage\Pallet_Storage.p3d";
		hologramMaterial="Pallet_Storage";
		hologramMaterialPath="ParagonStorage\Pallet_Storage\data";
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
								"ParagonStorage\Pallet_Storage\data\Boxes.rvmat",
								"ParagonStorage\Pallet_Storage\data\Straps.rvmat",
								"ParagonStorage\Pallet_Storage\data\Pallet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Pallet_Storage\data\Boxes.rvmat",
								"ParagonStorage\Pallet_Storage\data\Straps.rvmat",
								"ParagonStorage\Pallet_Storage\data\Pallet.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Pallet_Storage\data\Boxes.rvmat",
								"ParagonStorage\Pallet_Storage\data\Straps.rvmat",
								"ParagonStorage\Pallet_Storage\data\Pallet.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Pallet_Storage\data\Boxes.rvmat",
								"ParagonStorage\Pallet_Storage\data\Straps.rvmat",
								"ParagonStorage\Pallet_Storage\data\Pallet.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Pallet_Storage\data\Boxes.rvmat",
								"ParagonStorage\Pallet_Storage\data\Straps.rvmat",
								"ParagonStorage\Pallet_Storage\data\Pallet.rvmat"
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
			itemsCargoSize[]={10,50};
			openable=1;
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
	class Paragon_Pallet_Black: Pallet_Storage_ColorBase
	{
		scope=2;
		displayName="Black Pallet Storage";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Pallet_Storage\data\Boxes_Black.paa",
			"ParagonStorage\Pallet_Storage\data\Straps_co.paa",
			"ParagonStorage\Pallet_Storage\data\Pallet_co.paa"
		};
	};
	class Paragon_Pallet_Tan: Pallet_Storage_ColorBase
	{
		scope=2;
		displayName="Tan Pallet Storage";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Pallet_Storage\data\Boxes_Tan.paa",
			"ParagonStorage\Pallet_Storage\data\Straps_co.paa",
			"ParagonStorage\Pallet_Storage\data\Pallet_co.paa"
		};
	};
	class Paragon_Pallet_Green: Pallet_Storage_ColorBase
	{
		scope=2;
		displayName="Green Pallet Storage";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Pallet_Storage\data\Boxes_Green.paa",
			"ParagonStorage\Pallet_Storage\data\Straps_co.paa",
			"ParagonStorage\Pallet_Storage\data\Pallet_co.paa"
		};
	};
};
