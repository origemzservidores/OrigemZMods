class CfgPatches
{
	class OrigemTextures
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1; 		
			requiredAddons[]={
				"DZ_Scripts",
				"DZ_Data"
				};
	};
};
class CfgMods
{
	class OrigemTextures
	{
		type="mod";
		dir="OrigemTextures";
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
					"OrigemTextures/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				files[]=
				{
					"OrigemTextures/Scripts/5_Mission"
				};
			};
		};
	};
};
