class CfgPatches
{
	class Paragon_HeliPad
	{
		units[]=
		{
			"Paragon_HeliPad"
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
	class HeliPad_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\HeliPad\HeliPad.p3d";
		hologramMaterial="HeliPad";
		hologramMaterialPath="ParagonStorage\HeliPad\data";
		slopeTolerance=0.40000001;
		useEntityHierarchy="true";
		yawPitchRollLimit[]={45,45,45};
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
			"Camo2",
			"Camo3"
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
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\Detail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\Detail.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\Detail.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\Detail.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\HeliPad.rvmat",
								"ParagonStorage\HeliPad\data\Detail.rvmat"
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
			itemsCargoSize[]={0,0};
			openable=1;
			allowOwnedCargoManipulation=1;
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
	class Paragon_HeliPad: HeliPad_ColorBase
	{
		scope=2;
		displayName="HeliPad";
		descriptionShort="HeliPad, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\HeliPad\data\HeliPad.paa",
			"ParagonStorage\HeliPad\data\mesh.paa",
			"ParagonStorage\HeliPad\data\Detail.paa"
		};
	};
};
