class CfgPatches
{
	class Paragon_MilitaryLocker
	{
		units[]=
		{
			"Paragon_Mlocker_Black",
			"Paragon_Mlocker_Grey",
			"Paragon_Mlocker_Green",
			"Paragon_Mlocker_Tan",
			"Paragon_Mlocker_Blue"
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
	class MilitaryLocker_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\MilitaryLocker\MilitaryLocker.p3d";
		hologramMaterial="MilitaryLocker";
		hologramMaterialPath="ParagonStorage\MilitaryLocker\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
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
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Att_CombinationLock",
			"CodeLock"
		};
		carveNavmesh=1;
		canBeDigged=0;
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
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8"
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
								"ParagonStorage\MilitaryLocker\data\MilitaryLocker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\MilitaryLocker\data\LockerDoors.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\MilitaryLocker\data\MilitaryLocker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\MilitaryLocker\data\LockerDoors.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\MilitaryLocker\data\MilitaryLocker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\MilitaryLocker\data\LockerDoors.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\MilitaryLocker\data\MilitaryLocker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\MilitaryLocker\data\LockerDoors.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\MilitaryLocker\data\MilitaryLocker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\MilitaryLocker\data\LockerDoors.rvmat"
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
			itemsCargoSize[]={10,4};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door1_l
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
	class Paragon_Mlocker_Black: MilitaryLocker_ColorBase
	{
		scope=2;
		displayName="Black Military Locker";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryLocker\data\MilitaryLocker_Black.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\MilitaryLocker\data\LockerDoors_Black.paa"
		};
	};
	class Paragon_Mlocker_Grey: MilitaryLocker_ColorBase
	{
		scope=2;
		displayName="Grey Military Locker";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryLocker\data\MilitaryLocker_Grey.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\MilitaryLocker\data\LockerDoors_Grey.paa"
		};
	};
	class Paragon_Mlocker_Green: MilitaryLocker_ColorBase
	{
		scope=2;
		displayName="Green Military Locker";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryLocker\data\MilitaryLocker_Green.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\MilitaryLocker\data\LockerDoors_Green.paa"
		};
	};
	class Paragon_Mlocker_Tan: MilitaryLocker_ColorBase
	{
		scope=2;
		displayName="Tan Military Locker";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryLocker\data\MilitaryLocker_Tan.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\MilitaryLocker\data\LockerDoors_Tan.paa"
		};
	};
	class Paragon_Mlocker_Blue: MilitaryLocker_ColorBase
	{
		scope=2;
		displayName="Blue Military Locker";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MilitaryLocker\data\MilitaryLocker_Blue.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\MilitaryLocker\data\LockerDoors_Blue.paa"
		};
	};
};
