#define private		0
#define protected	1
#define public		2

class CfgPatches {
	class OrigemKeyCardSystem {
		units[] = {
			"OZ_Keycard_BasicT1", 
			"OZ_Keycard_BasicT2", 
			"OZ_Keycard_BasicT3", 
			"OZ_Keycard_BasicT4", 
			"OZ_Keycard_BasicT5",
			"OZ_Keycard_ReforcedT1",
			"OZ_Keycard_ReforcedT2",
			"OZ_Keycard_ReforcedT3",
			"OZ_Keycard_ReforcedT4",
			"OZ_Keycard_ReforcedT5",
			"OZ_Keycard_Reforced_Hot",
			"OZ_Keycard_Reforced_Cold",
			"OZ_Keycard_DoorBigT1",
			"OZ_Keycard_DoorBigT2",
			"OZ_Keycard_DoorBigT3"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		weapons[] = {};
	};
};

class CfgVehicles {
	class Inventory_Base;	// External class reference
	
	class OZ_Keycard_Base : Inventory_Base {
		scope = private;
		displayName = "Keycard";
		descriptionShort = "A keycard used to grant access to locked rooms around the map.";
		model = "OrigemKeyCardSystem\Data\Keycard\OZ_Keycard.p3d";
		hiddenSelections[] = {"camo"};
		rotationFlags=17;
		weight=130;
		itemSize[]={2,1};
		CardTier = 0;
	};
	
	// Basic Keycards
	class OZ_Keycard_BasicT1 : OZ_Keycard_Base {
		scope = public;
		displayName = "Baisc Doors Keycard T1";
		descriptionShort = "A keycard used to access the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Basic_WhiteCard_co.paa"};
		CardTier = 1;
	};
	
	class OZ_Keycard_BasicT2 : OZ_Keycard_Base {
		scope = public;
		displayName = "Baisc Doors Keycard T2";
		descriptionShort = "A keycard used to access the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Basic_GreenCard_co.paa"};
		CardTier = 2;
	};
	
	class OZ_Keycard_BasicT3 : OZ_Keycard_Base {
		scope = public;
		displayName = "Baisc Doors Keycard T3";
		descriptionShort = "A keycard used to access the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Basic_BlueCard_co.paa"};
		CardTier = 3;
	};
	
	class OZ_Keycard_BasicT4 : OZ_Keycard_Base {
		scope = public;
		displayName = "Baisc Doors Keycard T4";
		descriptionShort = "A keycard used to access the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Basic_YellowCard_co.paa"};
		CardTier = 4;
	};

	class OZ_Keycard_BasicT5 : OZ_Keycard_Base {
		scope = public;
		displayName = "Baisc Doors Keycard T5";
		descriptionShort = "A keycard used to access the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Basic_RedCard_co.paa"};
		CardTier = 5;
	};

	// Reinforced Keycards
	class OZ_KeycardReforced_Base : Inventory_Base {
		scope = private;
		displayName = "Keycard";
		descriptionShort = "A keycard used to grant access to locked rooms around the map.";
		model = "OrigemKeyCardSystem\Data\Keycard\OZ_Keycard_Vertical.p3d";
		hiddenSelections[] = {"camo"};
		rotationFlags=17;
		weight=130;
		itemSize[]={1,2};
		CardTier = 0;
	};

	class OZ_Keycard_ReforcedT1 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard T1";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Green_co.paa"};
		CardTier = 1;
	};

	class OZ_Keycard_ReforcedT2 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard T2";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Blue_co.paa"};
		CardTier = 2;
	};

	class OZ_Keycard_ReforcedT3 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard T3";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Yellow_co.paa"};
		CardTier = 3;
	};

	class OZ_Keycard_ReforcedT4 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard T4";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Red_co.paa"};
		CardTier = 4;
	};

	class OZ_Keycard_ReforcedT5 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard T5";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Black_co.paa"};
		CardTier = 5;
	};

	//---------- NOVAS PORTAS ----------//
	class OZ_Keycard_Reforced_Hot : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard Hot";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Hot_co.paa"};
		CardTier = Calor;
	};
	class OZ_Keycard_Reforced_Cold : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Reinforced Doors Keycard Cold";
		descriptionShort = "A keycard used to access reinforced the locked rooms";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Reforced_Cold_co.paa"};
		CardTier = Fria;
	};

	// Door Big Keycards
	class OZ_Keycard_DoorBigT1 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Area Doors Keycard T1";
		descriptionShort = "A keycard used to access areas in the map";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Area_Green_co.paa"};
		CardTier = 1;
	};
	
	class OZ_Keycard_DoorBigT2 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Area Doors Keycard T2";
		descriptionShort = "A keycard used to access areas in the map";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Area_Blue_co.paa"};
		CardTier = 2;
	};

	class OZ_Keycard_DoorBigT3 : OZ_KeycardReforced_Base {
		scope = public;
		displayName = "Area Doors Keycard T3";
		descriptionShort = "A keycard used to access areas in the map";
		hiddenSelectionsTextures[] = {"OrigemKeyCardSystem\Data\Keycard\Textures\Area_Yellow_co.paa"};
		CardTier = 3;
	};
	
};
