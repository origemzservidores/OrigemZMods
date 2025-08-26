class CfgPatches
{
	class Grill
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts", "DZ_Characters", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Data"};
	};
};

class CfgVehicles
{
	class Inventory_Base;

	class Paragon_Grill_ColorBase: Inventory_Base
	{
		scope = 0;
		displayName = "Grill ColorBase";
		descriptionShort = "Uma grelha robusta para cozinhar alimentos ao ar livre.";
		model = "ParagonStorage\Grill\Data\Grill.p3d";
		heavyItem = 1;
		simulation = "house";
		ladders[] = {};
		weight = 15000;
		absorbency = 0.3;
		irTarget = 0;
		accuracy = 0.1;
		destrType = "DestructBuilding";
		storageCategory = 1;
		alignHologramToTerain = 1;
		physLayer = "item_large";
		attachments[] = {};
		canBeDigged = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "seachest_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "seachest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Paragon_Grill : Paragon_Grill_ColorBase
	{
		scope = 2;
		displayName = "Grill";
		descriptionShort = "Uma grelha robusta para cozinhar alimentos ao ar livre.";
		hiddenSelectionsTextures[] = {"ParagonStorage\Grill\Data\Grill_co.paa","ParagonStorage\Grill\Data\Grill_co.paa"};
	};
};

