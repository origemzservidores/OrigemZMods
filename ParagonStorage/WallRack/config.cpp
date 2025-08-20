class CfgPatches
{
	class Paragon_WallRack
	{
		units[]=
		{
			"Paragon_WallRack_Black",
			"Paragon_WallRack_Green",
			"Paragon_WallRack_Tan"
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
	class WallRack_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\WallRack\WallRack.p3d";
		hologramMaterial="WallRack";
		hologramMaterialPath="ParagonStorage\WallRack\data";
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6"
		};
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
		class GUIInventoryAttachmentsProps
		{
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
					"Shoulder5",
					"Shoulder6"
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
								"ParagonStorage\WallRack\data\WallRack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\WallRack\data\WallRack.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\WallRack\data\WallRack.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\WallRack\data\WallRack.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\WallRack\data\WallRack.rvmat"
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
			openable=0;
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
	class Paragon_WallRack_Black: WallRack_ColorBase
	{
		scope=2;
		displayName="Black Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WallRack\data\WallRack_co.paa"
		};
	};
	class Paragon_WallRack_Green: WallRack_ColorBase
	{
		scope=2;
		displayName="Green Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WallRack\data\WallRack_Green.paa"
		};
	};
	class Paragon_WallRack_Tan: WallRack_ColorBase
	{
		scope=2;
		displayName="Tan Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\WallRack\data\WallRack_Tan.paa"
		};
	};
};
