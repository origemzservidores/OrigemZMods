class CfgPatches
{
	class Paragon_WaterBarrel
	{
		units[]=
		{
			"Paragon_WaterBarrel_Blue",
			"Paragon_WaterBarrel_Black",
			"Paragon_WaterBarrel_Green",
			"Paragon_WaterBarrel_Yellow",
			"Paragon_WaterBarrel_Red"
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
	class Canteen;
	class WaterBarrel_ColorBase: Canteen
	{
		scope=0;
		model="ParagonStorage\WaterBarrel\WaterBarrel.p3d";
		hologramMaterial="WaterBarrel";
		hologramMaterialPath="ParagonStorage\WaterBarrel\data";
		inventorySlot[]={};
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={8,10};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=50000;
		varLiquidTypeInit=512;
		quantityBar=1;
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=2508;
		varTemperatureThawTime=2508;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
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
								"ParagonStorage\WaterBarrel\data\WaterBarrel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\WaterBarrel\data\WaterBarrel.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\WaterBarrel\data\WaterBarrel.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\WaterBarrel\data\WaterBarrel.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\WaterBarrel\data\WaterBarrel.rvmat"
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
			itemsCargoSize[]={0,0};
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
	class Paragon_WaterBarrel_Blue: WaterBarrel_ColorBase
	{
		scope=2;
		displayName="Water Barrel";
		descriptionShort="The Water Barrel holds water, great for filling your water bottles. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WaterBarrel\data\WaterBarrel_co.paa"
		};
	};
	class Paragon_WaterBarrel_Black: WaterBarrel_ColorBase
	{
		scope=2;
		displayName="Black Water Barrel";
		descriptionShort="The Water Barrel holds water, great for filling your water bottles. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WaterBarrel\data\WaterBarrel_Black.paa"
		};
	};
	class Paragon_WaterBarrel_Green: WaterBarrel_ColorBase
	{
		scope=2;
		displayName="Green Water Barrel";
		descriptionShort="The Water Barrel holds water, great for filling your water bottles. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WaterBarrel\data\WaterBarrel_Green.paa"
		};
	};
	class Paragon_WaterBarrel_Yellow: WaterBarrel_ColorBase
	{
		scope=2;
		displayName="Yellow Water Barrel";
		descriptionShort="The Water Barrel holds water, great for filling your water bottles. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WaterBarrel\data\WaterBarrel_Yellow.paa"
		};
	};
	class Paragon_WaterBarrel_Red: WaterBarrel_ColorBase
	{
		scope=2;
		displayName="Red Water Barrel";
		descriptionShort="The Water Barrel holds water, great for filling your water bottles. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WaterBarrel\data\WaterBarrel_Red.paa"
		};
	};
};
