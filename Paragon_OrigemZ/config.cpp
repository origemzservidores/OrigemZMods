class CfgPatches
{
	class Paragon_OrigemZ
	{
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Data",
			"DZ_Scripts",
		};
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class Paragon_OrigemZ
	{
		name="Paragon_OrigemZ";
		credits="SigWar";
		author="OrigemZ Servidores";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[]=
				{
					"Paragon_OrigemZ/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[]=
				{
					"Paragon_OrigemZ/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"Paragon_OrigemZ/Scripts/5_Mission"
				};
			};
		};
	};
};
