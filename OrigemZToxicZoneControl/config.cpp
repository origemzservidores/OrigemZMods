class CfgPatches
{
	class OrigemZToxicZoneControl
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "JM_CF_Scripts"};
	};
};
class CfgMods
{
	class OrigemZToxicZoneControl
	{
		name = "OrigemZToxicZoneControl";
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
				files[] = {"OrigemZToxicZoneControl/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"OrigemZToxicZoneControl/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"OrigemZToxicZoneControl/scripts/5_mission"};
			};
		};
	};
};
