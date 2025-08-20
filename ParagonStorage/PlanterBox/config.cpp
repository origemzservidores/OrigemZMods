class CfgPatches
{
	class Paragon_PlanterBox
	{
		units[]=
		{
			"Paragon_PlanterBox",
			"Paragon_GreenHouse",
			"Paragon_LargeGreenHouse"
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
	class GardenPlotPolytunnel;
	class Paragon_PlanterBox: GardenPlotPolytunnel
	{
		scope=2;
		displayName="PlanterBox";
		descriptionShort="The PlanterBox can grow up to 3 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon";
		model="ParagonStorage\PlanterBox\PlanterBox.p3d";
		hologramMaterial="PlanterBox";
		hologramMaterialPath="ParagonStorage\PlanterBox\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={15,15,15};
		alignHologramToTerain=1;
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3"
		};
		hiddenSelections[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3"
		};
		physLayer="item_large";
		useEntityHierarchy="true";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\PlanterBox\data\Dirt_co.paa",
			"ParagonStorage\PlanterBox\data\PlanterBox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\PlanterBox\data\Dirt.rvmat",
			"ParagonStorage\PlanterBox\data\PlanterBox.rvmat"
		};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="Seeds";
				description="";
				icon="set:dayz_inventory image:cat_gp_filling";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3"
				};
			};
		};
	};
	class Paragon_GreenHouse: GardenPlotPolytunnel
	{
		scope=2;
		displayName="Green House";
		descriptionShort="The Green House can grow up to 9 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon";
		model="ParagonStorage\PlanterBox\GreenHouse.p3d";
		hologramMaterial="GreenHouse";
		hologramMaterialPath="ParagonStorage\PlanterBox\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={15,15,15};
		alignHologramToTerain=1;
		storageCategory=1;
		itemIsOpenable=1;
		useEntityHierarchy="true";
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9"
		};
		hiddenSelections[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9"
		};
		physLayer="item_large";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\PlanterBox\data\Beams_co.paa",
			"ParagonStorage\PlanterBox\data\Glass.paa",
			"ParagonStorage\PlanterBox\data\Base_co.paa",
			"ParagonStorage\PlanterBox\data\Door_co.paa",
			"ParagonStorage\PlanterBox\data\Dirt_co.paa",
			"ParagonStorage\PlanterBox\data\PlanterBox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\Base.rvmat",
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\Dirt.rvmat",
			"ParagonStorage\PlanterBox\data\PlanterBox.rvmat"
		};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="Seeds";
				description="";
				icon="set:dayz_inventory image:cat_gp_filling";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9"
				};
			};
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
	};
	class Paragon_LargeGreenHouse: GardenPlotPolytunnel
	{
		scope=2;
		displayName="Large Green House";
		descriptionShort="The Large Green House can grow up to 13 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon";
		model="ParagonStorage\PlanterBox\LargeGreenHouse.p3d";
		hologramMaterial="LargeGreenHouse";
		hologramMaterialPath="ParagonStorage\PlanterBox\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={15,15,15};
		alignHologramToTerain=1;
		storageCategory=1;
		itemIsOpenable=1;
		useEntityHierarchy="true";
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
		hiddenSelections[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
		physLayer="item_large";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\PlanterBox\data\Beams_co.paa",
			"ParagonStorage\PlanterBox\data\Glass.paa",
			"ParagonStorage\PlanterBox\data\Base_co.paa",
			"ParagonStorage\PlanterBox\data\Door_co.paa",
			"ParagonStorage\PlanterBox\data\Dirt_co.paa",
			"ParagonStorage\PlanterBox\data\PlanterBox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\Base.rvmat",
			"ParagonStorage\PlanterBox\data\GreenHouse.rvmat",
			"ParagonStorage\PlanterBox\data\Dirt.rvmat",
			"ParagonStorage\PlanterBox\data\PlanterBox.rvmat"
		};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="Seeds";
				description="";
				icon="set:dayz_inventory image:cat_gp_filling";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9",
					"SeedBase_10",
					"SeedBase_11",
					"SeedBase_12",
					"SeedBase_13"
				};
			};
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
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxytomato_seeds: ProxyAttachment
	{
		model="DZ\gear\cultivation\tomato_seeds";
		scope=2;
		inventorySlot[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
	};
};
