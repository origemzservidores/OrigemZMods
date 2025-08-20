class CfgPatches
{
	class Paragon_GraffitiCan
	{
		units[]=
		{
			"Paragon_GraffitiCan",
			"Paragon_GraffitiCan_Static"
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
	class GraffitiCan_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\GraffitiCan\GraffitiCan.p3d";
		hologramMaterial="GraffitiCan";
		hologramMaterialPath="ParagonStorage\GraffitiCan\data";
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
								"ParagonStorage\GraffitiCan\data\GraffitiCan.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\GraffitiCan\data\GraffitiCan.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\GraffitiCan\data\GraffitiCan.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\GraffitiCan\data\GraffitiCan.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\GraffitiCan\data\GraffitiCan.rvmat"
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
			itemsCargoSize[]={10,10};
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
	class Paragon_GraffitiCan: GraffitiCan_ColorBase
	{
		scope=2;
		displayName="Graffiti Trash Can";
		descriptionShort="The Graffiti Trash Can will delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\GraffitiCan\data\GraffitiCan_co.paa"
		};
	};
	class Paragon_GraffitiCan_Static: GraffitiCan_ColorBase
	{
		scope=2;
		displayName="Graffiti Trash Can";
		descriptionShort="The Graffiti Trash Can will delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\GraffitiCan\data\GraffitiCan_co.paa"
		};
	};
};
