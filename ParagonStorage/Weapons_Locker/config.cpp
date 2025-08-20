class CfgPatches
{
	class Paragon_Weapons_Locker
	{
		units[]=
		{
			"Paragon_Wlocker_Black",
			"Paragon_Wlocker_Grey",
			"Paragon_Wlocker_Green",
			"Paragon_Wlocker_Tan",
			"Paragon_Wlocker_Blue"
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
		expansionIsOpenable = 1;
	};
	class WeaponsLocker_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Weapons_Locker\Weapons_Locker.p3d";
		hologramMaterial="Weapons_Locker";
		hologramMaterialPath="ParagonStorage\Weapons_Locker\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4",
			"Pistol5",
			"Pistol6",
			"Att_CombinationLock",
			"CodeLock"
		};
		carveNavmesh=1;
		canBeDigged=0;
		storageCategory=1;
		useEntityHierarchy="true";
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
					"Shoulder8",
					"Shoulder9",
					"Shoulder10",
					"Shoulder11",
					"Shoulder12",
					"Shoulder13",
					"Shoulder14",
					"Shoulder15",
					"Shoulder16"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
			class Pistols
			{
				name="Pistols";
				description="";
				attachmentSlots[]=
				{
					"Pistol1",
					"Pistol2",
					"Pistol3",
					"Pistol4",
					"Pistol5",
					"Pistol6"
				};
				icon="set:dayz_inventory image:pistol";
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
								"ParagonStorage\Weapons_Locker\data\Weapons_Locker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Weapons_Locker\data\Weapons_Locker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Weapons_Locker\data\Weapons_Locker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Weapons_Locker\data\Weapons_Locker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Weapons_Locker\data\Weapons_Locker.rvmat",
								"ParagonStorage\MilitaryLocker\data\Cage.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
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
			class door1
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
	class Paragon_Wlocker_Black: WeaponsLocker_ColorBase
	{
		scope=2;
		displayName="Black Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Weapons_Locker\data\Weapons_Locker_co.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
	class Paragon_Wlocker_Grey: WeaponsLocker_ColorBase
	{
		scope=2;
		displayName="Grey Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Weapons_Locker\data\Weapons_Locker_Grey.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
	class Paragon_Wlocker_Green: WeaponsLocker_ColorBase
	{
		scope=2;
		displayName="Green Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Weapons_Locker\data\Weapons_Locker_Green.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
	class Paragon_Wlocker_Tan: WeaponsLocker_ColorBase
	{
		scope=2;
		displayName="Tan Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Weapons_Locker\data\Weapons_Locker_Tan.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
	class Paragon_Wlocker_Blue: WeaponsLocker_ColorBase
	{
		scope=2;
		displayName="Blue Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Weapons_Locker\data\Weapons_Locker_Blue.paa",
			"ParagonStorage\MilitaryLocker\data\Cage.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
};
