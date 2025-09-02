class CfgPatches
{
	class OrigemZOrganizeInventory
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 2;
		requiredAddons[] = {"DZ_Data","DZ_Animals","DZ_Characters","DZ_AI","DZ_Scripts"};
	};
};
class CfgMods
{
	class CargoSorting;
	class Inventory_Base;
	class Container_Base;
	class Clothing_Base;

	class OrigemZOrganizeInventory
	{
		name = "OrigemZOrganizeInventory";
		credits = "OrigemZ";
		author = "DEV05";
		authorID = "76561199882141233";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Mission", "World", "Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"OrigemZOrganizeInventory/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"OrigemZOrganizeInventory/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"OrigemZOrganizeInventory/scripts/5_Mission"};
			};
		};
	};
};
