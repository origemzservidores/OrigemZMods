class CfgPatches
{
	class OrigemAssets
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1; 		
			requiredAddons[]={"DZ_Scripts","DZ_Data", "DZ_Gear_Consumables", "DZ_Vehicles_Wheeled", "DZ_Structures_Residential", "DZ_Sounds_Effects", "DZ_Sounds_Weapons"};
	};
};
class CfgMods
{
	class OrigemAssets
	{
		type="mod";
		dir="OrigemAssets";
		name="Origem Assets";
		author="SigWar";
		
		dependencies[]={"Mission","Game"}; 
		
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"OrigemAssets/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"OrigemAssets/Scripts/5_Mission"
				};
			};
		};
	};
};
