class CfgPatches
{
	class OZ_Backpacks
	{
		units[]=
		{
			"OZ_Tshirt_Black",
			"OZ_Tshirt_ImFriendly",
			"OZ_BomberJacket_Origem",
			"OZ_Drybag_black",
			"OZ_Backpack_blood",
			"OZ_Backpack_Yellow",
			"OZ_Backpack_Green",
			"OZ_Backpack_Grey"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Gear_Food",
			"DZ_Gear_Navigation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Camping",
			"DZ_Gear_Optics",
			"DZ_Gear_Crafting",
			"DZ_Weapons_Firearms",
			"DZ_Radio",
			"DZ_Characters_Belts"

		};
	};
};
class cfgVehicles
{
	//Camisetas Undead
	class Clothing;	
	class TShirt_ColorBase;
	
	//TShirt
	class OZ_Tshirt_Black: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\tshirt_origem_co.paa",
			"OrigemAssets\Backpacks\data\tshirt_origem_co.paa",
			"OrigemAssets\Backpacks\data\tshirt_origem_co.paa"
		};
	};

	class OZ_Tshirt_ImFriendly: TShirt_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\tshirt_ImFriendly_co.paa",
			"OrigemAssets\Backpacks\data\tshirt_ImFriendly_co.paa",
			"OrigemAssets\Backpacks\data\tshirt_ImFriendly_co.paa"
		};
	};

	//BomberJack
	class BomberJacket_ColorBase;
	class OZ_BomberJacket_Origem: BomberJacket_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\BomberJacket_origem_co.paa",
			"OrigemAssets\Backpacks\data\BomberJacket_origem_co.paa",
			"OrigemAssets\Backpacks\data\BomberJacket_origem_co.paa"
		};
	};
	
	//Drybag Black Undead
	class DryBag_Orange;
	class OZ_Drybag_black: DryBag_Orange
	{

		displayName="UV Drybag black";
		descriptionShort="UV Drybag black";
		model="\dz\characters\backpacks\drybag_g.p3d";
		visibilityModifier=1;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"firstaidkit",
			"waterproofbag",
			"binocular",
			"GasCooker",
			"CookingEquipment",
			"Belt_Left",
			"Compass",
			"WalkieTalkie",
			"flashlight",
			"cookingtripod",
			"Chemlight",
			"shoulder",
			"fishingpole",
			"tent"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={10,10};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		canBeDigged=1;
		//allowOwnedCargoManipulation=1;  //Fix bugs
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\DryBag_origem_co.paa",
			"OrigemAssets\Backpacks\data\DryBag_origem_co.paa",
			"OrigemAssets\Backpacks\data\DryBag_origem_co.paa"
		};
	};
	
	//Mountain Backpacks
	class MountainBag_Green;
	class OZ_Backpack_blood: MountainBag_Green
	{
		displayName="Mountain Backpack Blood";
		descriptionShort="Mountain Backpack Blood";
		visibilityModifier=1;
		model="\dz\characters\backpacks\mountain_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"firstaidkit",
			"waterproofbag",
			"binocular",
			"GasCooker",
			"CookingEquipment",
			"Belt_Left",
			"Compass",
			"WalkieTalkie",
			"flashlight",
			"cookingtripod",
			"Chemlight",
			"shoulder",
			"fishingpole",
			"tent"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={10,10};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		canBeDigged=1;
		//allowOwnedCargoManipulation=1;  //Fix bugs
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\mountain_blood_co.paa",
			"OrigemAssets\Backpacks\data\mountain_blood_co.paa",
			"OrigemAssets\Backpacks\data\mountain_blood_co.paa"
		};
	};
	
	// UV Backpack Colors
	class OZ_Backpack_Yellow: OZ_Backpack_blood
	{
		scope=2;
		displayName="Mountain Backpack Yellow";
		descriptionShort="Mountain Backpack Yellow";
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\mountain_camoyelow_co.paa",
			"OrigemAssets\Backpacks\data\mountain_camoyelow_co.paa",
			"OrigemAssets\Backpacks\data\mountain_camoyelow_co.paa"
		};
	};
	
	class OZ_Backpack_Green: OZ_Backpack_blood
	{
		scope=2;
		displayName="Mountain Backpack Green";
		descriptionShort="Mountain Backpack Green";
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\mountain_camogreen_co.paa",
			"OrigemAssets\Backpacks\data\mountain_camogreen_co.paa",
			"OrigemAssets\Backpacks\data\mountain_camogreen_co.paa"
		};
	};
	
	class OZ_Backpack_Grey: OZ_Backpack_blood
	{
		scope=2;
		displayName="Mountain Backpack Grey";
		descriptionShort="Mountain Backpack Grey";
		hiddenSelectionsTextures[]=
		{
			"OrigemAssets\Backpacks\data\mountain_grey_co.paa",
			"OrigemAssets\Backpacks\data\mountain_grey_co.paa",
			"OrigemAssets\Backpacks\data\mountain_grey_co.paa"
		};
	};
	
	class Container_Base;
	class Transmitter_Base;
	class Inventory_Base;
	class Bottle_Base;
	class FishingRod_Base_New;
	class ItemOptics;
	class Trap_Base;
	class BearTrap: Trap_Base
	{
		inventorySlot[]=
		{
			"tent"
		};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		inventorySlot[]=
		{
			"waterproofbag",
			"waterproofbag1",
			"waterproofbag2"
		};
	};
	class OrienteeringCompass: Inventory_Base
	{
		inventorySlot[]=
		{
			"Compass",
			"MassCompass"
		};
	};
	class Compass: Inventory_Base
	{
		inventorySlot[]=
		{
			"Compass",
			"MassCompass"
		};
	};
	class FishingRod: FishingRod_Base_New
	{
		inventorySlot[]=
		{
			"Shoulder",
			"melee",
			"fishingpole"
		};
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		inventorySlot[]=
		{
			"Shoulder",
			"melee",
			"fishingpole"
		};
	};
	class Binoculars: ItemOptics
	{
		inventorySlot[]=
		{
			"binocular"
		};
	};
	class MediumTent: Container_Base
	{
		inventorySlot[]=
		{
			"tent"
		};
		allowOwnedCargoManipulation=0;
	};
	class PersonalRadio: Transmitter_Base
	{
		inventorySlot[]=
		{
			"walkietalkie",
			"MassRadio"
		};
	};
	class PortableGasStove: Inventory_Base
	{
		inventorySlot[]=
		{
			"GasCooker",
			"fishingpole"
		};
	};
	class FirstAidKit: Container_Base
	{
		inventorySlot[]=
		{
			"firstaidkit",
			"FirstAid"
		};
	};
	class Flashlight: Inventory_Base
	{
		inventorySlot[]=
		{
			"flashlight",
			"MassFlashlight"
		};
	};
	class CamoNet: Inventory_Base
	{
		inventorySlot[]=
		{
			"CamoNet",
			"Wall_Camonet",
			"Level_1_Wall_1_Camonet",
			"Level_1_Wall_2_Camonet",
			"Level_1_Wall_3_Camonet",
			"Level_2_Wall_1_Camonet",
			"Level_2_Wall_2_Camonet",
			"Level_2_Wall_3_Camonet",
			"Level_3_Wall_1_Camonet",
			"Level_3_Wall_2_Camonet",
			"Level_3_Wall_3_Camonet",
			"tent"
		};
	};
};
class CfgNonAIVehicles
{
	//TODO: Criar os proxis no .p3d
	class ProxyAttachment;
	class ProxyWaterproofBag: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"waterproofbag"
		};
		model="\dz\gear\containers\WaterproofBag.p3d";
	};
};
class CfgSlots
{
	class Slot_flashlight
	{
		name="flashlight";
		displayName="Flashlight";
		ghostIcon="flashlight";
	};
	class Slot_binocular
	{
		name="binocular";
		displayName="Bonocular";
		ghostIcon="opticacog";
	};
	class Slot_GasCooker
	{
		name="GasCooker";
		displayName="GasCooker";
		ghostIcon="cookingequipment";
	};
	class Slot_Compass
	{
		name="Compass";
		displayName="Compass";
		ghostIcon="default";
	};
	class Slot_tent
	{
		name="tent";
		displayName="Tent | Trap";
		ghostIcon="back";
	};
	class Slot_FirstAid
	{
		name="firstaidkit";
		displayName="First Aid Kit";
		ghostIcon="hips";
	};
	class Slot_waterproofbag
	{
		name="waterproofbag";
		displayName="Waterproof Bag";
		ghostIcon="pouches";
	};
	class Slot_fishingpole
	{
		name="fishingpole";
		displayName="Fishing Pole";
		ghostIcon="default";
	};
};	

