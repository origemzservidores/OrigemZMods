class CfgPatches
{
	class OrigemZMedicine
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class OrigemZMedicine
	{
		dir="OrigemZMedicine";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="OrigemZMedicine";
		credits="raNty for Original mod OZM_Medecine";
		author="OrigemZ Servidores";
		authorID="0";
		version=1;
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
				value="";
				files[]=
				{
					"OrigemZMedicine/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"OrigemZMedicine/Scripts/4_World"
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class Medkit_start_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"OrigemZMedicine\Sound\Medkit_start.ogg",
				1
			}
		};
		volume=1.5;
	};
	class Medkit_loop_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"OrigemZMedicine\Sound\Medkit_injection.ogg",
				1
			}
		};
		volume=1.5;
	};
	class Medkit_loop1_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"OrigemZMedicine\Sound\Medkit_splint.ogg",
				1
			}
		};
		volume=1.5;
	};
	class Medkit_loop2_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"OrigemZMedicine\Sound\Medkit_bandage.ogg",
				1
			}
		};
		volume=1.5;
	};
	class Medkit_end_SoundShader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"OrigemZMedicine\Sound\Medkit_end.ogg",
				1
			}
		};
		volume=1.5;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class Medkit_start_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Medkit_start_SoundShader"
		};
	};
	class Medkit_loop_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Medkit_loop_SoundShader"
		};
	};
	class Medkit_loop1_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Medkit_loop1_SoundShader"
		};
	};
	class Medkit_loop2_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Medkit_loop2_SoundShader"
		};
	};
	class Medkit_end_Soundset: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"Medkit_end_SoundShader"
		};
	};
};
