class CfgPatches
{
	class Paragon_Tool_Bench
	{
		units[]=
		{
			"Paragon_ToolB_Black",
			"Paragon_ToolB_Red",
			"Paragon_ToolB_White",
			"Paragon_ToolB_Blue",
			"Paragon_ToolB_Yellow"
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
	class Tool_Bench_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Tool_Bench\ToolBench.p3d";
		hologramMaterial="ToolBench";
		hologramMaterialPath="ParagonStorage\Tool_Bench\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,4};
		attachments[]=
		{
			"HandSaw1",
			"HandSaw2",
			"HandSaw3",
			"HandSaw4",
			"HandSaw5",
			"HandSaw6",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Pliers1",
			"Pliers2",
			"Screwdriver1",
			"Screwdriver2",
			"Axe",
			"Pickaxe",
			"Melee"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_melee",
			"slot_melee_rifle"
		};
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
								"ParagonStorage\Tool_Bench\data\Tool_Bench.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Tool_Bench\data\Tool_Bench.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Tool_Bench\data\Tool_Bench.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Tool_Bench\data\Tool_Bench.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Tool_Bench\data\Tool_Bench.rvmat"
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
			itemsCargoSize[]={10,3};
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
	class Paragon_ToolB_Black: Tool_Bench_ColorBase
	{
		scope=2;
		displayName="Black Tool Bench";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Tool_Bench\data\ToolBench_Black.paa"
		};
	};
	class Paragon_ToolB_Red: Tool_Bench_ColorBase
	{
		scope=2;
		displayName="Red Tool Bench";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Tool_Bench\data\ToolBench_Red.paa"
		};
	};
	class Paragon_ToolB_White: Tool_Bench_ColorBase
	{
		scope=2;
		displayName="White Tool Bench";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Tool_Bench\data\ToolBench_White.paa"
		};
	};
	class Paragon_ToolB_Blue: Tool_Bench_ColorBase
	{
		scope=2;
		displayName="Blue Tool Bench";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Tool_Bench\data\ToolBench_Blue.paa"
		};
	};
	class Paragon_ToolB_Yellow: Tool_Bench_ColorBase
	{
		scope=2;
		displayName="Yellow Tool Bench";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Tool_Bench\data\ToolBench_Yellow.paa"
		};
	};
};
