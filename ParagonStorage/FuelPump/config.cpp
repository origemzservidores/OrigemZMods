class CfgPatches
{
	class WellPump
	{
		units[] = {"OZ_Furniture_WellPump","OZ_Furniture_WellPump_Kit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts", "DZ_Characters", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Data"};
	};
};

class CfgVehicles
{	
	class Inventory_Base;
	
	class Paragon_FuelPump_ColorBase: Inventory_Base
	{
		scope=0;
		displayName = "Fuel Pump ColorBase";
		descriptionShort = "Bomba de combustível utilizada para extrair e armazenar combustível. Essencial para abastecimento de veículos.";
		model="\ParagonStorage\FuelPump\Data\Fuel_Pump.p3d";
		physLayer = "item_large";
		class AnimationSources
		{
			class Arm
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
		};
	};
	class Paragon_FuelPump: Paragon_FuelPump_ColorBase
	{
		scope=2;
		displayName = "Fuel Pump";
		descriptionShort = "Bomba de combustível utilizada para extrair e armazenar combustível. Essencial para abastecimento de veículos	.";
	};
};

