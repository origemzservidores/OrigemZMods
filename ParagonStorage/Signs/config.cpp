class CfgPatches
{
	class SmallSign
	{
		units[]=
		{
			"Paragon_SmallSign_Guns",
			"Paragon_SmallSign_Attachments",
			"Paragon_SmallSign_Ammo",
			"Paragon_SmallSign_Building",
			"Paragon_SmallSign_Clothes",
			"Paragon_SmallSign_Food",
			"Paragon_SmallSign_Meds",
			"Paragon_SmallSign_Sellables",
			"Paragon_SmallSign_Armor",
			"Paragon_SmallSign_Guns_Glow",
			"Paragon_SmallSign_Attachments_Glow",
			"Paragon_SmallSign_Ammo_Glow",
			"Paragon_SmallSign_Building_Glow",
			"Paragon_SmallSign_Clothes_Glow",
			"Paragon_SmallSign_Food_Glow",
			"Paragon_SmallSign_Meds_Glow",
			"Paragon_SmallSign_Sellables_Glow",
			"Paragon_SmallSign_Armor_Glow",
			"Paragon_MedSign_Guns",
			"Paragon_MedSign_Attachments",
			"Paragon_MedSign_Ammo",
			"Paragon_MedSign_Building",
			"Paragon_MedSign_Clothes",
			"Paragon_MedSign_Food",
			"Paragon_MedSign_Meds",
			"Paragon_MedSign_Sellables",
			"Paragon_MedSign_Armor",
			"Paragon_MedSign_Guns_Glow",
			"Paragon_MedSign_Attachments_Glow",
			"Paragon_MedSign_Ammo_Glow",
			"Paragon_MedSign_Building_Glow",
			"Paragon_MedSign_Clothes_Glow",
			"Paragon_MedSign_Food_Glow",
			"Paragon_MedSign_Meds_Glow",
			"Paragon_MedSign_Sellables_Glow",
			"Paragon_MedSign_Armor_Glow",
			"Paragon_BigSign_Guns",
			"Paragon_BigSign_Attachments",
			"Paragon_BigSign_Ammo",
			"Paragon_BigSign_Building",
			"Paragon_BigSign_Clothes",
			"Paragon_BigSign_Food",
			"Paragon_BigSign_Meds",
			"Paragon_BigSign_Sellables",
			"Paragon_BigSign_Armor",
			"Paragon_BigSign_Guns_Glow",
			"Paragon_BigSign_Attachments_Glow",
			"Paragon_BigSign_Ammo_Glow",
			"Paragon_BigSign_Building_Glow",
			"Paragon_BigSign_Clothes_Glow",
			"Paragon_BigSign_Food_Glow",
			"Paragon_BigSign_Meds_Glow",
			"Paragon_BigSign_Sellables_Glow",
			"Paragon_BigSign_Armor_Glow"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Paragon_SmallSign_Base: Inventory_Base
	{
		scope=0;
		model="ParagonStorage\Signs\SmallSign.p3d";
		displayName="Small Sign";
		descriptionShort="A Sign that attaches to small crates for organization";
		inventorySlot[]=
		{
			"Paragon_SmallSign"
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		itemSize[]={3,3};
		weight=300;
		rotationFlags=16;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class Paragon_SmallSign_Guns: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Guns.paa"
		};
	};
	class Paragon_SmallSign_Attachments: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Attachments.paa"
		};
	};
	class Paragon_SmallSign_Ammo: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Ammo.paa"
		};
	};
	class Paragon_SmallSign_Building: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Building.paa"
		};
	};
	class Paragon_SmallSign_Clothes: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Clothes.paa"
		};
	};
	class Paragon_SmallSign_Food: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Food.paa"
		};
	};
	class Paragon_SmallSign_Meds: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Meds.paa"
		};
	};
	class Paragon_SmallSign_Sellables: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Sellables.paa"
		};
	};
	class Paragon_SmallSign_Armor: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Armor.paa"
		};
	};
	class Paragon_SmallSign_Guns_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Guns.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Guns.paa"
		};
	};
	class Paragon_SmallSign_Attachments_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Attachments.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Attachments.paa"
		};
	};
	class Paragon_SmallSign_Ammo_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Ammo.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Ammo.paa"
		};
	};
	class Paragon_SmallSign_Building_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Building.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Building.paa"
		};
	};
	class Paragon_SmallSign_Clothes_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Clothes.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Clothes.paa"
		};
	};
	class Paragon_SmallSign_Food_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Food.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Food.paa"
		};
	};
	class Paragon_SmallSign_Meds_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Meds.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Meds.paa"
		};
	};
	class Paragon_SmallSign_Sellables_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Sellables.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Sellables.paa"
		};
	};
	class Paragon_SmallSign_Armor_Glow: Paragon_SmallSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Emissive_Armor.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\SmallSign_Armor.paa"
		};
	};
	class Paragon_MedSign_Base: Inventory_Base
	{
		scope=0;
		model="ParagonStorage\Signs\MedSign.p3d";
		displayName="Medium Sign";
		descriptionShort="A Sign that attaches to Medium crates for organization";
		inventorySlot[]=
		{
			"Paragon_MedSign"
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		itemSize[]={4,3};
		weight=300;
		rotationFlags=16;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class Paragon_MedSign_Guns: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Guns.paa"
		};
	};
	class Paragon_MedSign_Attachments: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Attachments.paa"
		};
	};
	class Paragon_MedSign_Ammo: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Ammo.paa"
		};
	};
	class Paragon_MedSign_Building: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Building.paa"
		};
	};
	class Paragon_MedSign_Clothes: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Clothes.paa"
		};
	};
	class Paragon_MedSign_Food: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Food.paa"
		};
	};
	class Paragon_MedSign_Meds: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Meds.paa"
		};
	};
	class Paragon_MedSign_Sellables: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Sellables.paa"
		};
	};
	class Paragon_MedSign_Armor: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Armor.paa"
		};
	};
	class Paragon_MedSign_Guns_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Guns.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Guns.paa"
		};
	};
	class Paragon_MedSign_Attachments_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Attachments.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Attachments.paa"
		};
	};
	class Paragon_MedSign_Ammo_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Ammo.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Ammo.paa"
		};
	};
	class Paragon_MedSign_Building_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Building.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Building.paa"
		};
	};
	class Paragon_MedSign_Clothes_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Clothes.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Clothes.paa"
		};
	};
	class Paragon_MedSign_Food_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Food.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Food.paa"
		};
	};
	class Paragon_MedSign_Meds_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Meds.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Meds.paa"
		};
	};
	class Paragon_MedSign_Sellables_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Sellables.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Sellables.paa"
		};
	};
	class Paragon_MedSign_Armor_Glow: Paragon_MedSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Armor.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Armor.paa"
		};
	};
	class Paragon_BigSign_Base: Inventory_Base
	{
		scope=0;
		model="ParagonStorage\Signs\BigSign.p3d";
		displayName="Big Sign";
		descriptionShort="A Sign that attaches to Military crates and Big crates for organization";
		inventorySlot[]=
		{
			"Paragon_BigSign"
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		itemSize[]={5,3};
		weight=300;
		rotationFlags=16;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class Paragon_BigSign_Guns: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Guns.paa"
		};
	};
	class Paragon_BigSign_Attachments: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Attachments.paa"
		};
	};
	class Paragon_BigSign_Ammo: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Ammo.paa"
		};
	};
	class Paragon_BigSign_Building: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Building.paa"
		};
	};
	class Paragon_BigSign_Clothes: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Clothes.paa"
		};
	};
	class Paragon_BigSign_Food: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Food.paa"
		};
	};
	class Paragon_BigSign_Meds: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Meds.paa"
		};
	};
	class Paragon_BigSign_Sellables: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Sellables.paa"
		};
	};
	class Paragon_BigSign_Armor: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Armor.paa"
		};
	};
	class Paragon_BigSign_Guns_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Guns.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Guns.paa"
		};
	};
	class Paragon_BigSign_Attachments_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Attachments.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Attachments.paa"
		};
	};
	class Paragon_BigSign_Ammo_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Ammo.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Ammo.paa"
		};
	};
	class Paragon_BigSign_Building_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Building.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Building.paa"
		};
	};
	class Paragon_BigSign_Clothes_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Clothes.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Clothes.paa"
		};
	};
	class Paragon_BigSign_Food_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Food.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Food.paa"
		};
	};
	class Paragon_BigSign_Meds_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Meds.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Meds.paa"
		};
	};
	class Paragon_BigSign_Sellables_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Sellables.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Sellables.paa"
		};
	};
	class Paragon_BigSign_Armor_Glow: Paragon_BigSign_Base
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Signs\data\MedSign_Emissive_Armor.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Signs\data\MedSign_Armor.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySmallSign: ProxyAttachment
	{
		scope=2;
		inventorySlot="Paragon_SmallSign";
		model="ParagonStorage\Signs\SmallSign.p3d";
	};
	class ProxyMedSign: ProxyAttachment
	{
		scope=2;
		inventorySlot="Paragon_MedSign";
		model="ParagonStorage\Signs\MedSign.p3d";
	};
	class ProxyBigSign: ProxyAttachment
	{
		scope=2;
		inventorySlot="Paragon_BigSign";
		model="ParagonStorage\Signs\BigSign.p3d";
	};
};
class CfgSlots
{
	class Slot_Paragon_SmallSign
	{
		name="Paragon_SmallSign";
		displayName="SmallSign";
		ghostIcon="set:Storage_Slots image:Storage_Signs";
	};
	class Slot_Paragon_MedSign
	{
		name="Paragon_MedSign";
		displayName="MedSign";
		ghostIcon="set:Storage_Slots image:Storage_Signs";
	};
	class Slot_Paragon_BigSign
	{
		name="Paragon_BigSign";
		displayName="BigSign";
		ghostIcon="set:Storage_Slots image:Storage_Signs";
	};
};
