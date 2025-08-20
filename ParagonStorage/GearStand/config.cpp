class CfgPatches
{
	class Paragon_GearStand
	{
		units[]=
		{
			"Paragon_GearStand",
			"Paragon_GearStandC_B",
			"Paragon_GearStandC_G",
			"Paragon_GearStandC_C"
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
	class Container_Base;
	class Paragon_Lockable_Base: Container_Base
	{
	};
	class GearStand_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\GearStand\GearStand.p3d";
		hologramMaterial="GearStand";
		hologramMaterialPath="ParagonStorage\GearStand\data";
		attachments[]=
		{
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Shoulder",
			"Melee"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		clothingType="male";
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		class GUIInventoryAttachmentsProps
		{
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Melee"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,3};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Paragon_GearStand: GearStand_ColorBase
	{
		scope=2;
		displayName="GearStand";
		descriptionShort="The GearStand has holds a full gear set and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\GearStand\data\GearStand_co.paa"
		};
	};
	class GearStand_Case_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\GearStand\GearStand_Case.p3d";
		hologramMaterial="GearStand_Case";
		hologramMaterialPath="ParagonStorage\GearStand\data";
		attachments[]=
		{
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Shoulder",
			"Melee",
			"Att_CombinationLock",
			"CodeLock"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		clothingType="male";
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		class GUIInventoryAttachmentsProps
		{
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock",
					"CodeLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Shoulder",
					"Melee"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand_Case.rvmat",
								"ParagonStorage\GearStand\data\GearStand.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,3};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door1
			{
				source="user";
				initPhase=0;
				animPeriod=1.2;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Paragon_GearStandC_B: GearStand_Case_ColorBase
	{
		scope=2;
		displayName="Brown Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Case\data\Gun_Case_co.paa",
			"ParagonStorage\Gun_Case\data\Glass.paa",
			"ParagonStorage\GearStand\data\GearStand_co.paa"
		};
	};
	class Paragon_GearStandC_G: GearStand_Case_ColorBase
	{
		scope=2;
		displayName="Grey Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Case\data\Gun_Case_Grey.paa",
			"ParagonStorage\Gun_Case\data\Glass.paa",
			"ParagonStorage\GearStand\data\GearStand_co.paa"
		};
	};
	class Paragon_GearStandC_C: GearStand_Case_ColorBase
	{
		scope=2;
		displayName="Cherry Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Case\data\Gun_Case_Cherry.paa",
			"ParagonStorage\Gun_Case\data\Glass.paa",
			"ParagonStorage\GearStand\data\GearStand_co.paa"
		};
	};
};
