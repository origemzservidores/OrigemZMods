class CfgPatches
{
	class Paragon_HotDog
	{
		units[]=
		{
			"Paragon_HotDog_Cart"
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
	class HotDog_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\HotDog\HotDog.p3d";
		hologramMaterial="HotDog";
		hologramMaterialPath="ParagonStorage\HotDog\data";
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
			"Camo2"
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
								"ParagonStorage\HotDog\data\HotDog.rvmat",
								"ParagonStorage\HotDog\data\HotDog_Details.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\HotDog\data\HotDog.rvmat",
								"ParagonStorage\HotDog\data\HotDog_Details.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\HotDog\data\HotDog.rvmat",
								"ParagonStorage\HotDog\data\HotDog_Details.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\HotDog\data\HotDog.rvmat",
								"ParagonStorage\HotDog\data\HotDog_Details.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\HotDog\data\HotDog.rvmat",
								"ParagonStorage\HotDog\data\HotDog_Details.rvmat"
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
	class Paragon_HotDog_Cart: HotDog_ColorBase
	{
		scope=2;
		displayName="HotDog Cart";
		descriptionShort="The HotDog Cart holds 150 slots of food and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\HotDog\data\HotDog_co.paa",
			"ParagonStorage\HotDog\data\HotDog_Details.paa"
		};
	};
};
