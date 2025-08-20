class CfgPatches
{
	class Paragon_Locker
	{
		units[]=
		{
			"Paragon_Locker_Black",
			"Paragon_Locker_Blue",
			"Paragon_Locker_Green",
			"Paragon_Locker_Purple",
			"Paragon_Locker_Red",
			"Paragon_Locker_White",
			"Paragon_Locker_Yellow"
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
	class Locker_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Locker\Locker.p3d";
		hologramMaterial="Locker";
		hologramMaterialPath="ParagonStorage\Locker\data";
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
			"Shoulder",
			"Att_CombinationLock",
			"CodeLock"
		};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo"
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
					"Shoulder"
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
								"ParagonStorage\Locker\data\Locker.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Locker\data\Locker.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Locker\data\Locker.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Locker\data\Locker.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Locker\data\Locker.rvmat"
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
			itemsCargoSize[]={4,10};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=0.89999998;
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
	class Paragon_Locker_Black: Locker_ColorBase
	{
		scope=2;
		displayName="Black Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Black.paa"
		};
	};
	class Paragon_Locker_Blue: Locker_ColorBase
	{
		scope=2;
		displayName="Blue Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Blue.paa"
		};
	};
	class Paragon_Locker_Green: Locker_ColorBase
	{
		scope=2;
		displayName="Green Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Green.paa"
		};
	};
	class Paragon_Locker_Purple: Locker_ColorBase
	{
		scope=2;
		displayName="Purple Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Purple.paa"
		};
	};
	class Paragon_Locker_Red: Locker_ColorBase
	{
		scope=2;
		displayName="Red Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Red.paa"
		};
	};
	class Paragon_Locker_White: Locker_ColorBase
	{
		scope=2;
		displayName="White Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_White.paa"
		};
	};
	class Paragon_Locker_Yellow: Locker_ColorBase
	{
		scope=2;
		displayName="Yellow Locker";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Locker\data\Locker_Yellow.paa"
		};
	};
};
