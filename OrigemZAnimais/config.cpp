class CfgPatches
{
	class OrigemZAnimais
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals", "DZ_Data_Bliss", "DZ_AI_Bliss", "DZ_Weapons_Melee", "DZ_Gear_Consumables", "DZ_Data"};
	};
};
class CfgMods
{
	class OrigemZAnimais
	{
		name = "OrigemZAnimais";
		credits = "byFD";
		author = "DEV FD";
		authorID = "76561198379870520";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Mission", "World", "Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"OrigemZAnimais/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"OrigemZAnimais/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"OrigemZAnimais/Scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class WolfPelt;
	class BearPelt;
	class BearSteakMeat;
	class WolfSteakMeat;
	class Animal_UrsusArctos;
	class Animal_CanisLupus_White;

	//----------CARNE MOD PARA URSO E LOBO----------//
	class OZ_ToxicWolfMeat : WolfSteakMeat
	{
		scope = 2;
		displayName = "Toxic Wolf Meat";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"cs_raw"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Meat\Toxic_Meat_co.paa",
				"OrigemZAnimais\Data\Wolf\Meat\meat_steak_baked_CO.paa",
				"OrigemZAnimais\Data\Wolf\Meat\meat_steak_baked_CO.paa",
				"OrigemZAnimais\Data\Wolf\Meat\meat_steak_dried_CO.paa",
				"OrigemZAnimais\Data\Wolf\Meat\meat_steak_burned_CO.paa"};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0, 0, 0};
					nutrition_properties[] = {2.5, 140, 70, 1, 0, 4};
					cooking_properties[] = {0, 0};
				};
				class Rotten
				{
					visual_properties[] = {-1, -1, 5};
					nutrition_properties[] = {4, 105, 35, 1, 0, "4 + 16"};
					cooking_properties[] = {0, 0};
				};
				class Baked
				{
					visual_properties[] = {0, 1, 1};
					nutrition_properties[] = {1.75, 245, 52.5, 1, 0};
					cooking_properties[] = {70, 45};
				};
				class Boiled
				{
					visual_properties[] = {0, 2, 2};
					nutrition_properties[] = {1.5, 175, 70, 1, 0};
					cooking_properties[] = {70, 55};
				};
				class Dried
				{
					visual_properties[] = {0, 3, 3};
					nutrition_properties[] = {0.75, 140, 7, 1, 0};
					cooking_properties[] = {70, 120, 80};
				};
				class Burned
				{
					visual_properties[] = {0, 4, 4};
					nutrition_properties[] = {2, 105, 17.5, 1, 0, 16};
					cooking_properties[] = {100, 30};
				};
			};
		};
	};
	class OZ_BlackBearMeat : BearSteakMeat
	{
		scope = 2;
		displayName = "Black Bear Meat";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		model = "\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		weight = 0;
		weightPerQuantityUnit = 1.3;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		itemSize[] = {3, 3};
		inventorySlot[] =
			{
				"Ingredient",
				"DirectCookingA",
				"DirectCookingB",
				"DirectCookingC",
				"SmokingA",
				"SmokingB",
				"SmokingC",
				"SmokingD"
			};
		hiddenSelections[] =
			{
				"cs_raw"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Meat\BlackBearMeatRaw_co.paa",
				"dz\gear\food\data\meat_steak_baked_CO.paa",
				"dz\gear\food\data\meat_steak_boiled_co.paa",
				"dz\gear\food\data\meat_steak_dried_CO.paa",
				"dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] =
			{
				"dz\gear\food\data\meat_steak_raw.rvmat",
				"dz\gear\food\data\meat_steak_baked.rvmat",
				"dz\gear\food\data\meat_steak_boiled.rvmat",
				"dz\gear\food\data\meat_steak_dried.rvmat",
				"dz\gear\food\data\meat_steak_burnt.rvmat",
				"dz\gear\food\data\meat_steak_rotten.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
						{

							{1,
							 {}},

							{0.69999999,
							 {}},

							{0.5,
							 {}},

							{0.30000001,
							 {}},

							{0,
							 {}}};
				};
			};
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0, 0, 0};
					nutrition_properties[] = {5, 50, 50, 1, 0, 4};
					cooking_properties[] = {0, 0};
				};
				class Rotten
				{
					visual_properties[] = {-1, -1, 5};
					nutrition_properties[] =
						{
							10,
							25,
							25,
							1,
							0,
							"4 + 		  16"};
					cooking_properties[] = {0, 0};
				};
				class Baked
				{
					visual_properties[] = {0, 1, 1};
					nutrition_properties[] = {2, 400, 50, 1, 0};
					cooking_properties[] = {70, 45};
				};
				class Boiled
				{
					visual_properties[] = {0, 2, 2};
					nutrition_properties[] = {2, 350, 150, 1, 0};
					cooking_properties[] = {70, 55};
				};
				class Dried
				{
					visual_properties[] = {0, 3, 3};
					nutrition_properties[] = {3, 350, 0, 1, 0};
					cooking_properties[] = {70, 120, 80};
				};
				class Burned
				{
					visual_properties[] = {0, 4, 4};
					nutrition_properties[] = {5, 50, 0, 1, 0, 16};
					cooking_properties[] = {100, 30};
				};
			};
		};
		class NoiseImpact
		{
			strength = 600;
			type = "sound";
		};
		soundImpactType = "organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	//---------- PELES ----------//

	class OZ_WolfPelt_Toxic_10000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 10000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Toxic_20000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 20000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Toxic_30000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 30000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Toxic_40000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 40000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Toxic_50000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 50000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co3.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Toxic_100000HP : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Tóxic 100000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_toxic_co3.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Peste_Azul : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Peste Azul";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_co_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Peste_Verde : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Peste Verde";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_co_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Peste_Vermelha : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Peste Vermelha";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_co_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};
	class OZ_WolfPelt_Peste_Roxo : WolfPelt
	{
		scope = 2;
		displayName = "Pele Lobo Peste Roxo";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		weight = 1200;
		itemSize[] = {5, 3};
		peltGain = 6;
		hiddenSelections[] =
			{
				"camo"};
		hiddenSelectionsTextures[] = {"OrigemZAnimais\Data\Wolf\Pele\pelt_wolf_co_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 9000;
				};
			};
		};
	};

	class OZ_BlackBearPelt : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Preto";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 5};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\PeltBearBlack_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\PeltBearBlack_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};

	class OZ_BearPelt_Peste_Vermelha : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Peste Vermelha";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 4};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteVermelha_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteVermelha_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class OZ_BearPelt_Peste_Azul : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Peste Azul";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 4};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteAzul_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteAzul_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class OZ_BearPelt_Peste_Verde : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Peste Verde";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 4};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteVerde_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteVerde_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class OZ_BearPelt_Peste_Roxo : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Peste Roxo";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 4};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteRoxa_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteRoxa_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class OZ_BearPelt_Peste_Amarela : BearPelt
	{
		scope = 2;
		displayName = "Pele Urso Peste Amarela";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		itemSize[] = {10, 4};
		peltGain = 10;
		hiddenSelections[] =
			{
				"camo",
				"zbytek"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteAmarela_co.paa",
				"OrigemZAnimais\Data\Bear\Pele\pelt_bear_PesteAmarela_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] =
						{

							{1,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.69999999,

							 {"DZ\gear\consumables\data\pelt_bear.rvmat"}},

							{0.5,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0.30000001,

							 {"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},

							{0,

							 {"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	//---------- ANIMAIS ----------//
	class OZ_Animal_UrsusArctos_Peste_Azul : Animal_UrsusArctos
	{
		scope = 2;
		armor = 1.2;
		displayName = "Urso Peste Azul";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\bear_PesteAzul_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 16000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 16000;
				};
				class Shock
				{
					hitpoints = 16000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BearPelt_Peste_Azul";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 15;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {8, 8};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class OZ_Animal_UrsusArctos_Peste_Verde : Animal_UrsusArctos
	{
		scope = 2;
		armor = 1.2;
		displayName = "Urso Peste Verde";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\bear_PesteVerde_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 20000;
				};
				class Shock
				{
					hitpoints = 20000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BearPelt_Peste_Verde";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 15;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {8, 8};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class OZ_Animal_UrsusArctos_Peste_Vermelha : Animal_UrsusArctos
	{
		scope = 2;
		armor = 3.0;
		displayName = "Urso Peste Vermelha";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\bear_PesteVermelha_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 24000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 24000;
				};
				class Shock
				{
					hitpoints = 24000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BearPelt_Peste_Vermelha";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 15;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {8, 8};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class OZ_Animal_UrsusArctos_Peste_Roxo : Animal_UrsusArctos
	{
		scope = 2;
		armor = 3.0;
		displayName = "Urso Peste Roxo";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\bear_PesteRoxa_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 40000;
				};
				class Shock
				{
					hitpoints = 40000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BearPelt_Peste_Roxo";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 15;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {8, 8};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class OZ_Animal_UrsusArctos_Peste_Amarela : Animal_UrsusArctos
	{
		scope = 2;
		armor = 3.0;
		displayName = "Urso Peste Amarela";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\bear_PesteAmarela_co.paa"};
		hiddenSelectionsMaterials[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\ursus_arctor.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 60000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 60000;
				};
				class Shock
				{
					hitpoints = 60000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BearPelt_Peste_Amarela";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 10;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {8, 8};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	//---------- LOBOS ----------//
	class OZ_Animal_CanisLupus_Peste_Azul : Animal_CanisLupus_White
	{
		scope = 2;
		displayName = "Lobo Peste Azul";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_Peste_Azul.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_wolf_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 1000;
				};
				class Shock
				{
					hitpoints = 1000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Peste_Azul";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Peste_Verde : Animal_CanisLupus_White
	{
		scope = 2;
		displayName = "Lobo Peste Verde";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_Peste_Verde.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_wolf_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 2000;
				};
				class Shock
				{
					hitpoints = 2000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Peste_Verde";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Peste_Vermelha : Animal_CanisLupus_White
	{
		scope = 2;
		displayName = "Lobo Peste Vermelho";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_Peste_Vermelha.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_wolf_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 4000;
				};
				class Shock
				{
					hitpoints = 4000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Peste_Vermelha";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Peste_Roxo : Animal_CanisLupus_White
	{
		scope = 2;
		displayName = "Lobo Peste Roxo";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_Peste_Roxa.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_wolf_black.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 10000;
				};
				class Shock
				{
					hitpoints = 10000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Peste_Roxo";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "WolfSteakMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_ColorBase : Animal_CanisLupus_White
	{
		scope = 0;
		displayName = "Lobo Tóxic ColorBase";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_2_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_2.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 10000;
				};
				class Shock
				{
					hitpoints = 10000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_10000HP";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_10000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 10000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_1_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_1.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 10000;
				};
				class Shock
				{
					hitpoints = 10000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_10000HP";
				count = 1;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_20000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 20000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_1_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_1.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 20000;
				};
				class Shock
				{
					hitpoints = 20000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_20000HP";
				count = 1;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_30000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 30000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_2_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_2.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 30000;
				};
				class Shock
				{
					hitpoints = 30000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_30000HP";
				count = 1;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_40000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 40000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_2_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_2.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 40000;
				};
				class Shock
				{
					hitpoints = 40000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_40000HP";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_50000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 50000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_3_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_3.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 50000;
				};
				class Shock
				{
					hitpoints = 50000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_50000HP";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	class OZ_Animal_CanisLupus_Toxic_100000HP : OZ_Animal_CanisLupus_Toxic_ColorBase
	{
		scope = 2;
		displayName = "Lobo Tóxic 100000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		hiddenSelections[] =
			{
				"Camo",
				"CamoHair"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Wolf\Wolf\wolf_toxic_3_co.paa",
				"OrigemZAnimais\Data\Wolf\Wolf\fur_Toxic_3.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 100000;
				};
				class Shock
				{
					hitpoints = 100000;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_WolfPelt_Toxic_100000HP";
				count = 2;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "OZ_ToxicWolfMeat";
				count = 6;
				itemZones[] =
					{
						"Zone_Chest",
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3, 3};
				quantityMinMaxCoef[] = {0.5, 1};
			};
		};
	};
	//----------ANIMAIS PARA EVENTOS DINÂMICOS (BEAR) BASE----------//
	class OZ_Animal_UrsusArctos_ColorBase : Animal_UrsusArctos
	{
		scope = 0;
		displayName = "Bear Event ColorBase";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		model = "\DZ\animals_bliss\ursus_arctos\ursus_arctos.p3d";
		hiddenSelections[] =
			{
				"body_injury",
				"flags"};
		hiddenSelectionsTextures[] =
			{
				"OrigemZAnimais\Data\Bear\Urso\Bear_DynamicEvents_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {0, 0};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 0;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 0;
				};
				class Shock
				{
					hitpoints = 0;
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "OZ_BlackBearPelt";
				count = 1;
				itemZones[] =
					{
						"Zone_Pelvis",
						"Zone_Belly"};
				quantityCoef = 0;
				transferToolDamageCoef = 0;
			};
			class ObtainedSteaks
			{
				item = "OZ_BlackBearMeat";
				count = 5;
				itemZones[] =
					{
						"Zone_Belly",
						"Zone_Pelvis"};
				countByZone[] = {3, 3};
				quantityMinMaxCoef[] = {0.69999999, 1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2, 1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.5, 0.80000001};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.30000001, 1};
				transferToolDamageCoef = 1;
			};
		};
	};
	//----------ANIMAIS PARA EVENTOS DINÂMICOS (BEAR) VARIANTES----------//
	class OZ_Animal_UrsusArctos_2000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 2000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 2000;
				};
				class Shock
				{
					hitpoints = 2000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_4000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 4000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 4000;
				};
				class Shock
				{
					hitpoints = 4000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_6000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 6000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 6000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 6000;
				};
				class Shock
				{
					hitpoints = 6000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_8000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 8000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 8000;
				};
				class Shock
				{
					hitpoints = 8000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_10000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 10000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 10000;
				};
				class Shock
				{
					hitpoints = 10000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_50000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 50000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 50000;
				};
				class Shock
				{
					hitpoints = 50000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_75000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 75000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 75000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 75000;
				};
				class Shock
				{
					hitpoints = 75000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_100000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 100000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 100000;
				};
				class Shock
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_200000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 200000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 200000;
				};
				class Shock
				{
					hitpoints = 200000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_300000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 300000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 300000;
				};
				class Shock
				{
					hitpoints = 300000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_400000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 400000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 400000;
				};
				class Shock
				{
					hitpoints = 400000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_500000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 500000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 500000;
				};
				class Shock
				{
					hitpoints = 500000;
				};
			};
		};
	};

	class OZ_Animal_UrsusArctos_600000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 600000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 600000;
				};
				class Shock
				{
					hitpoints = 600000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_700000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 700000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 700000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 700000;
				};
				class Shock
				{
					hitpoints = 700000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_800000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 800000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 800000;
				};
				class Shock
				{
					hitpoints = 800000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_900000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 900000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 900000;
				};
				class Shock
				{
					hitpoints = 900000;
				};
			};
		};
	};
	class OZ_Animal_UrsusArctos_1000000HP : OZ_Animal_UrsusArctos_ColorBase
	{
		scope = 2;
		armor = 1.2;
		displayName = "Bear 1000000HP";
		descriptionShort = "Animais Exclusivos do Servidor OrigemZ by: DEV FD";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLabels[] = {1, 0.69999999, 0.5, 0.30000001, 0};
				};
				class Blood
				{
					hitpoints = 1000000;
				};
				class Shock
				{
					hitpoints = 1000000;
				};
			};
		};
	};
};
