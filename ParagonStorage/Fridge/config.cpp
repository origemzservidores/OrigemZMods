class CfgPatches
{
	class Paragon_Fridge
	{
		units[]=
		{
			"Paragon_Fridge_Black",
			"Paragon_Fridge_White"
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
	class Fridge_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Fridge\Fridge.p3d";
		hologramMaterial="Fridge";
		hologramMaterialPath="ParagonStorage\Fridge\data";
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
								"ParagonStorage\Fridge\data\Fridge.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Fridge\data\Fridge.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Fridge\data\Fridge.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Fridge\data\Fridge.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Fridge\data\Fridge.rvmat"
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
	class Paragon_Fridge_Black: Fridge_ColorBase
	{
		scope=2;
		displayName="Black Fridge";
		descriptionShort="The Fridge holds 100 slots of food and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Fridge\data\Fridge_Black.paa",
			"ParagonStorage\Gun_Case\data\Glass.paa",
			"ParagonStorage\Fridge\data\Fridge_Black.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Fridge\data\Fridge.rvmat.paa",
			"ParagonStorage\Fridge\data\Fridge.rvmat.paa",
			"ParagonStorage\Fridge\data\Glass.rvmat.paa"
		};
	};
	class Paragon_Fridge_White: Fridge_ColorBase
	{
		scope=2;
		displayName="White Fridge";
		descriptionShort="The Fridge holds 100 slots of food and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Fridge\data\Fridge_White.paa",
			"ParagonStorage\Gun_Case\data\Glass.paa",
			"ParagonStorage\Fridge\data\Fridge_White.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\Fridge\data\Fridge.rvmat.paa",
			"ParagonStorage\Fridge\data\Fridge.rvmat.paa",
			"ParagonStorage\Fridge\data\Glass.rvmat.paa"
		};
	};
};
