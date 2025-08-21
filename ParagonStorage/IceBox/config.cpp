class CfgPatches
{
	class Paragon_IceBox
	{
		units[]=
		{
			"Paragon_IceBox"
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
	class IceBox_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\IceBox\IceBox.p3d";
		hologramMaterial="IceBox";
		hologramMaterialPath="ParagonStorage\IceBox\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.25;
			cordLength=5;
			plugType=1 + 2;
			attachmentAction=1;
			updateInterval=50;
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
								"ParagonStorage\IceBox\data\IceBox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\IceBox\data\IceBox.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\IceBox\data\IceBox.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\IceBox\data\IceBox.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\IceBox\data\IceBox.rvmat"
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
				animPeriod=1.15;
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
	class Paragon_IceBox: IceBox_ColorBase
	{
		scope=2;
		displayName="Ice Box";
		descriptionShort="The Ice Freezer holds 80 slots of food and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\IceBox\data\IceBox_co.paa"
		};
	};
};
