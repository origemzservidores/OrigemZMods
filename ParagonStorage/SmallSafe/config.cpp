class CfgPatches
{
	class Paragon_SmallSafe
	{
		units[]=
		{
			"Paragon_SmallSafe_Black",
			"Paragon_SmallSafe_Grey",
			"Paragon_SmallSafe_Gold",
			"Paragon_SmallSafe_Green",
			"Paragon_SmallSafe_Blue",
			"Paragon_SmallSafe_White",
			"Paragon_SmallSafe_Rainbow"
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
	class SmallSafe_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\SmallSafe\SmallSafe.p3d";
		hologramMaterial="SmallSafe";
		hologramMaterialPath="ParagonStorage\SmallSafe\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,4};
		attachments[]=
		{
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
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\SmallSafe\data\Safe_Wheel.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\SmallSafe\data\Safe_Wheel.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\SmallSafe\data\Safe_Wheel.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\SmallSafe\data\Safe_Wheel.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\Money.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat",
								"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
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
			itemsCargoSize[]={10,15};
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
	class Paragon_SmallSafe_Black: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Black SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Black.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_Grey: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Grey SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_Gold: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Gold SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Gold.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_Green: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Green SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Green.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_Blue: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Blue SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Blue.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_White: SmallSafe_ColorBase
	{
		scope=2;
		displayName="White SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_White.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
	};
	class Paragon_SmallSafe_Rainbow: SmallSafe_ColorBase
	{
		scope=2;
		displayName="Holographic SmallSafe";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_White.paa",
			"ParagonStorage\SmallSafe\data\Money.paa",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.paa",
			"ParagonStorage\SmallSafe\data\SmallSafe_Grey.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\SmallSafe\data\SmallSafe_Rainbow.rvmat",
			"ParagonStorage\SmallSafe\data\Money.rvmat",
			"ParagonStorage\SmallSafe\data\Safe_Wheel.rvmat",
			"ParagonStorage\SmallSafe\data\SmallSafe.rvmat"
		};
	};
};
