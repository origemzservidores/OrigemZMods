class CfgPatches
{
	class Paragon_Safe
	{
		units[]=
		{
			"Paragon_Safe_Black",
			"Paragon_Safe_Grey",
			"Paragon_Safe_Gold",
			"Paragon_Safe_Green",
			"Paragon_Safe_Blue",
			"Paragon_Safe_White",
			"Paragon_Safe_Rainbow"
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
	class Safe_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Safe\Safe.p3d";
		hologramMaterial="Safe";
		hologramMaterialPath="ParagonStorage\Safe\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		allowOwnedCargoManipulation=1;
		itemSize[]={6,4};
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
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
			"Camo3",
			"Camo4"
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
					"Shoulder6"
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
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\Safe\data\Safe_Extra.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
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
			itemsCargoSize[]={10,8};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
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
	class Paragon_Safe_Black: Safe_ColorBase
	{
		scope=2;
		displayName="Black Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_Black.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\Safe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_Black.paa"
		};
	};
	class Paragon_Safe_Grey: Safe_ColorBase
	{
		scope=2;
		displayName="Grey Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_Grey.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_Grey.paa"
		};
	};
	class Paragon_Safe_Gold: Safe_ColorBase
	{
		scope=2;
		displayName="Gold Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_Gold.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_White.paa"
		};
	};
	class Paragon_Safe_Green: Safe_ColorBase
	{
		scope=2;
		displayName="Green Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_Green.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_Green.paa"
		};
	};
	class Paragon_Safe_Blue: Safe_ColorBase
	{
		scope=2;
		displayName="Blue Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_Blue.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_Blue.paa"
		};
	};
	class Paragon_Safe_White: Safe_ColorBase
	{
		scope=2;
		displayName="White Safe";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_White.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_White.paa"
		};
	};
	class Paragon_Safe_Rainbow: Safe_ColorBase
	{
		scope=2;
		displayName="Holographic Safe";
		descriptionShort="The Holographic holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Safe\data\Safe_White.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\Safe\data\Safe_White.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Safe\data\Safe_Rainbow.rvmat",
			"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
			"ParagonStorage\SmallSafe\data\Money.rvmat",
			"ParagonStorage\Safe\data\Safe_Extra.rvmat"
		};
	};
};
