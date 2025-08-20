class CfgPatches
{
	class Paragon_Dumpster
	{
		units[]=
		{
			"Paragon_Dumpster",
			"Paragon_Dumpster_Static"
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
	class Dumpster_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Dumpster\Dumpster.p3d";
		hologramMaterial="Dumpster";
		hologramMaterialPath="ParagonStorage\Dumpster\data";
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
								"ParagonStorage\Dumpster\data\Dumpster.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Dumpster\data\Dumpster.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Dumpster\data\Dumpster.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Dumpster\data\Dumpster.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Dumpster\data\Dumpster.rvmat"
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
	class Paragon_Dumpster: Dumpster_ColorBase
	{
		scope=2;
		displayName="Dumpster";
		descriptionShort="The Dumpster Can delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Dumpster\data\Dumpster_co.paa"
		};
	};
	class Paragon_Dumpster_Static: Dumpster_ColorBase
	{
		scope=2;
		displayName="Dumpster";
		descriptionShort="The Dumpster Can delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Dumpster\data\Dumpster_co.paa"
		};
	};
};
