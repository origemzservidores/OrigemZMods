class CfgPatches
{
	class Paragon_BigTent
	{
		units[]=
		{
			"Paragon_BigTent_Black",
			"Paragon_BigTent_White",
			"Paragon_BigTent_Green"
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
	class BigTent_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\BigTent\BigTent.p3d";
		hologramMaterial="BigTent";
		hologramMaterialPath="ParagonStorage\BigTent\data";
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
		forceFarBubble="true";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
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
								"ParagonStorage\BigTent\data\BigTent.rvmat",
								"ParagonStorage\BigTent\data\BigTent2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\BigTent\data\BigTent.rvmat",
								"ParagonStorage\BigTent\data\BigTent2.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\BigTent\data\BigTent.rvmat",
								"ParagonStorage\BigTent\data\BigTent2.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\BigTent\data\BigTent.rvmat",
								"ParagonStorage\BigTent\data\BigTent2.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\BigTent\data\BigTent.rvmat",
								"ParagonStorage\BigTent\data\BigTent2.rvmat"
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
			itemsCargoSize[]={10,75};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1;
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
	class Paragon_BigTent_Black: BigTent_ColorBase
	{
		scope=2;
		displayName="Black Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigTent\data\BigTent_Black.paa",
			"ParagonStorage\BigTent\data\BigTent2_Black.paa"
		};
	};
	class Paragon_BigTent_White: BigTent_ColorBase
	{
		scope=2;
		displayName="White Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigTent\data\BigTent_White.paa",
			"ParagonStorage\BigTent\data\BigTent2_White.paa"
		};
	};
	class Paragon_BigTent_Green: BigTent_ColorBase
	{
		scope=2;
		displayName="Green Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\BigTent\data\BigTent_Green.paa",
			"ParagonStorage\BigTent\data\BigTent2_Green.paa"
		};
	};
};
