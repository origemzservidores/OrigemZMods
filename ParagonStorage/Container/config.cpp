class CfgPatches
{
	class Paragon_Container
	{
		units[]=
		{
			"Paragon_Container_Black",
			"Paragon_Container_Grey",
			"Paragon_Container_Tan",
			"Paragon_Container_Green",
			"Paragon_Container_Blue",
			"Paragon_Container_Red"
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
	class Container_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Container\Container.p3d";
		hologramMaterial="Container";
		hologramMaterialPath="ParagonStorage\Container\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock"
		};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonStorage\Container\data\Container_Detail.rvmat",
								"ParagonStorage\Container\data\Container.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Container\data\Container_Detail.rvmat",
								"ParagonStorage\Container\data\Container.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Container\data\Container_Detail.rvmat",
								"ParagonStorage\Container\data\Container.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Container\data\Container_Detail.rvmat",
								"ParagonStorage\Container\data\Container.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Container\data\Container_Detail.rvmat",
								"ParagonStorage\Container\data\Container.rvmat"
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
			itemsCargoSize[]={10,100};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door1
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
	class Paragon_Container_Black: Container_ColorBase
	{
		scope=2;
		displayName="Black Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Black.paa",
			"ParagonStorage\Container\data\Container_Black.paa"
		};
	};
	class Paragon_Container_Grey: Container_ColorBase
	{
		scope=2;
		displayName="Grey Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Grey.paa",
			"ParagonStorage\Container\data\Container_Grey.paa"
		};
	};
	class Paragon_Container_Tan: Container_ColorBase
	{
		scope=2;
		displayName="Tan Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Tan.paa",
			"ParagonStorage\Container\data\Container_Tan.paa"
		};
	};
	class Paragon_Container_Green: Container_ColorBase
	{
		scope=2;
		displayName="Green Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Green.paa",
			"ParagonStorage\Container\data\Container_Green.paa"
		};
	};
	class Paragon_Container_Blue: Container_ColorBase
	{
		scope=2;
		displayName="Blue Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Blue.paa",
			"ParagonStorage\Container\data\Container_Blue.paa"
		};
	};
	class Paragon_Container_Red: Container_ColorBase
	{
		scope=2;
		displayName="Red Cargo Container";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Container\data\Container_Detail_Red.paa",
			"ParagonStorage\Container\data\Container_Red.paa"
		};
	};
};
