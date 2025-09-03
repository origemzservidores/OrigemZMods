class CfgPatches {
	class OrigemKeyCardSystemServer {
		requiredAddons[] = {"OrigemKeyCardSystem"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMods {
	class OrigemKeyCardSystemServer {
		name = "OrigemKeyCardSystemServer";
		type = "mod";
		dependencies[] = {"World", "Mission"};
		
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"OrigemKeyCardSystemServer\4_World"};
			};
			
			class missionScriptModule {
				value = "";
				files[] = {"OrigemKeyCardSystemServer\5_Mission"};
			};
		};
	};
};
