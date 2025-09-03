class CfgPatches {
	class OrigemKeyCardSystem {
		units[] = {
			"OZ_Crate_Military", 
			"OZ_Crate_Black", 
			"OZ_Crate_Blue", 
			"OZ_Crate_Green", 
			"OZ_Crate_LightBlue", 
			"OZ_Crate_Lime",
			"OZ_Crate_Orange", 
			"OZ_Crate_Purple", 
			"OZ_Crate_Red", 
			"OZ_Crate_Yellow",
			"OZ_Crate_Gray"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		weapons[] = {};
	};
};

class CfgVehicles {

	class Container_Base;	// External class reference
	class OZ_Crate_Base : Container_Base {
		scope = 1;
		displayName = "Military Crate";
		descriptionShort = "A military crate capable of holding a large amount of items.";
		canBeDigged = 0;
		hiddenSelections[] = {"camo"};
		model = "OrigemKeyCardSystem\Data\Crate\OZ_Crate.p3d";
		physLayer = "item_large";
		// Forece render distance
		overrideDrawArea="2.0";
		forceFarBubble="true";
		
		class Cargo {
			itemsCargoSize[] = {10, 100};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
				};
			};
			
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
				
				class FragGrenade {
					class Health {
						damage = 0;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
			};
		};
	};
	
	class OZ_Crate_Military : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\crate_co.paa"};
	};
	class OZ_Crate_Black : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Black_co.paa"};
	};
	class OZ_Crate_Blue : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Blue_co.paa"};
	};
	class OZ_Crate_Green : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Green_co.paa"};
	};
	class OZ_Crate_LightBlue : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\LightBlue_co.paa"};
	};
	class OZ_Crate_Lime : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Lime_co.paa"};
	};
	class OZ_Crate_Orange : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Orange_co.paa"};
	};
	class OZ_Crate_Purple : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Purple_co.paa"};
	};
	class OZ_Crate_Red : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Red_co.paa"};
	};
	class OZ_Crate_Yellow : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Yellow_co.paa"};
	};
	class OZ_Crate_Gray : OZ_Crate_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Crate\Textures\Grey_co.paa"};
	};
	
};
