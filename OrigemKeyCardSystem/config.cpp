class CfgPatches {
	class OrigemKeyCardSystem {
		requiredAddons[] = {"DZ_Characters"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMods {
	class OrigemKeyCardSystem {
		name = "OrigemKeyCardSystem";
		credits = "";
		author = "Herosper";
		authorID = "0";
		version = 1.0;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"OrigemKeyCardSystem\4_World"};
			};
		};
	};
};

class CfgSounds {
	class KeyCard_DoorAlarm {
		sound[] = {"OrigemKeyCardSystem\Assets\Sounds\VaultAlarm15sec", 1, 1, 1000};
	};
};
