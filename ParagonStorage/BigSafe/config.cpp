class CfgPatches
{
	class Paragon_Safe
	{
		units[]=
		{
			"Paragon_BigSafe_Black",
			"Paragon_BigSafe_Grey",
			"Paragon_BigSafe_Rainbow"
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
	class BigSafe_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\BigSafe\BigSafe.p3d";
		hologramMaterial="BigSafe";
		hologramMaterialPath="ParagonStorage\BigSafe\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,4};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock",
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
			"Shoulder12"
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
					"Shoulder12"
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
								"ParagonStorage\BigSafe\data\BigSafe.rvmat",
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\Safe\data\Safe_Wheel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\BigSafe\data\BigSafe.rvmat",
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\Safe\data\Safe_Wheel.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\BigSafe\data\BigSafe.rvmat",
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\Safe\data\Safe_Wheel.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\BigSafe\data\BigSafe.rvmat",
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\Safe\data\Safe_Wheel.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\BigSafe\data\BigSafe.rvmat",
								"ParagonStorage\Safe\data\Safe.rvmat",
								"ParagonStorage\Safe\data\Safe_Wheel.rvmat"
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
			itemsCargoSize[]={10,20};
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
	class Paragon_BigSafe_Black: BigSafe_ColorBase
	{
		scope=2;
		displayName="Black Big Safe";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigSafe\data\BigSafe_Black.paa",
			"ParagonStorage\BigSafe\data\BigSafe_Code.paa",
			"ParagonStorage\BigSafe\data\Safe_Wheel.paa"
		};
	};
	class Paragon_BigSafe_Grey: BigSafe_ColorBase
	{
		scope=2;
		displayName="Grey Big Safe";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigSafe\data\BigSafe_Grey.paa",
			"ParagonStorage\BigSafe\data\BigSafe_Code.paa",
			"ParagonStorage\BigSafe\data\Safe_Wheel.paa"
		};
	};
	class Paragon_BigSafe_Rainbow: BigSafe_ColorBase
	{
		scope=2;
		displayName="Holographic Big Safe";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigSafe\data\BigSafe_White.paa",
			"ParagonStorage\BigSafe\data\BigSafe_Code.paa",
			"ParagonStorage\BigSafe\data\Safe_Wheel.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\BigSafe\data\BigSafe_Rainbow.rvmat",
			"ParagonStorage\BigSafe\data\BigSafe_Code.rvmat",
			"ParagonStorage\BigSafe\data\Safe_Wheel.rvmat"
		};
	};
};
