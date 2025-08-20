
class CfgPatches
{
	class OrigemZUI
	{
        requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Sounds_Effects"};
	};
};

class CfgAddons
{
	class PreloadBanks{};
	class PreloadAddons
	{
		class DayZ
		{
			list[] = {"DZ_Data","DZ_Scripts","DZ_UI","DZ_UIFonts","DZ_Sounds_Effects","COLORFUL_HUD"};
		};
	};
};

class CfgMods 
{
	class OrigemZUI
	{
		name = "DayZ-Mod-Template";
		dir = "OrigemZUI";
		creditsJson = "OrigemZUI/Scripts/Credits.json";
		inputs = "OrigemZUI/Scripts/Inputs.xml";
		type = "mod";

		dependencies[] =
		{
			"Game", "World", "Mission"
		};
		class defs
		{
			class imageSets
			{
				files[]= {"OrigemZUI/GUI/imagesets/CUI.imageset"};
			};
			class gameScriptModule
			{
				files[] = 
				{
					"OrigemZUI/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[] = 
				{
					"OrigemZUI/scripts/4_World"
				};
			};
			class missionScriptModule 
			{
				files[] = 
				{
					"OrigemZUI/scripts/5_Mission"
				};
			};
		};
	};	
};

class CfgSoundSets
{
	class Music_Menu_SoundSet
	{
		soundShaders[]=
		{
			"DZNC_Music_Menu_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};

	class Effect_Menu_Hover
	{
		soundShaders[]=
		{
			"ORZ_Music_Hover_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};

	class Effect_Menu_Click
	{
		soundShaders[]=
		{
			"ORZ_Music_Click_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
};	

class CfgSoundShaders
{
	class DZNC_Music_Menu_SoundShader
	{
		samples[] = 
		{
			{"\OrigemZUI\GUI\sounds\MainMenu.ogg", 1}
			// If you want to use more than one song to override the new vanilla main menu music that is based on time of day, 
			// you can add more lines like the one above. But using just one song will override all of them
			// {"\OrigemZUI\GUI\sounds\MainMenu_1.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_2.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_3.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_4.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_5.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_6.ogg", 1}
		};
		volume = 0.5;
	};

	class ORZ_Music_Hover_SoundShader
	{
		samples[] = 
		{
			{"\OrigemZUI\GUI\sounds\hover.ogg", 1}
			// If you want to use more than one song to override the new vanilla main menu music that is based on time of day, 
			// you can add more lines like the one above. But using just one song will override all of them
			// {"\OrigemZUI\GUI\sounds\MainMenu_1.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_2.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_3.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_4.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_5.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_6.ogg", 1}
		};
		volume = 0.5;
	};

	class ORZ_Music_Click_SoundShader
	{
		samples[] = 
		{
			{"\OrigemZUI\GUI\sounds\click.ogg", 1}
			// If you want to use more than one song to override the new vanilla main menu music that is based on time of day, 
			// you can add more lines like the one above. But using just one song will override all of them
			// {"\OrigemZUI\GUI\sounds\MainMenu_1.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_2.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_3.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_4.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_5.ogg", 1},
			// {"\OrigemZUI\GUI\sounds\MainMenu_6.ogg", 1}
		};
		volume = 0.5;
	};
};
