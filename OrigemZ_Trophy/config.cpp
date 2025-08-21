class CfgPatches
{
	class OrigemZ_Trophy
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "JM_CF_Scripts"};
	};
};

class CfgMods
{
	class OrigemZ_Trophy
	{
		name = "OrigemZ_Trophy";
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
				files[] = {"OrigemZ_Trophy/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"OrigemZ_Trophy/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"OrigemZ_Trophy/Scripts/5_Mission"};
			};
		};
	};
};