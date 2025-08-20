class CfgPatches
{
	class Paragon_Military_Cabinet
	{
		units[]=
		{
			"Paragon_Mcabinet_Black",
			"Paragon_Mcabinet_Tan",
			"Paragon_Mcabinet_Green"
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
	class Military_Cabinet_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Military_Cabinet\Military_Cabinet.p3d";
		hologramMaterial="WoodCrate";
		hologramMaterialPath="ParagonStorage\Military_Cabinet\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		attachments[]=
		{
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5"
		};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		class GUIInventoryAttachmentsProps
		{
			class Gear
			{
				name="Gear";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Weapons
			{
				name="Weapons";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
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
								"ParagonStorage\Military_Cabinet\data\Military_Cabinet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Military_Cabinet\data\Military_Cabinet.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Military_Cabinet\data\Military_Cabinet.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Military_Cabinet\data\Military_Cabinet.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Military_Cabinet\data\Military_Cabinet.rvmat"
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
			itemsCargoSize[]={10,4};
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
	class Paragon_Mcabinet_Black: Military_Cabinet_ColorBase
	{
		scope=2;
		displayName="Military Cabinet";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Military_Cabinet\data\Military_Cabinet_Black.paa"
		};
	};
	class Paragon_Mcabinet_Tan: Military_Cabinet_ColorBase
	{
		scope=2;
		displayName="Military Cabinet";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Military_Cabinet\data\Military_Cabinet_Tan.paa"
		};
	};
	class Paragon_Mcabinet_Green: Military_Cabinet_ColorBase
	{
		scope=2;
		displayName="Military Cabinet";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Military_Cabinet\data\Military_Cabinet_Green.paa"
		};
	};
};
