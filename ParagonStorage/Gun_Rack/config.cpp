class CfgPatches
{
	class Paragon_GunRack
	{
		units[]=
		{
			"Paragon_GunRack_Black",
			"Paragon_GunRack_Green",
			"Paragon_GunRack_Tan"
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
	class GunRack_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Gun_Rack\GunRack.p3d";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9"
		};
		carveNavmesh=1;
		canBeDigged=0;
		storageCategory=1;
		alignHologramToTerain=1;
		useEntityHierarchy="true";
		physLayer="item_large";
		rotationFlags=0;
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
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
					"Shoulder6",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9"
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
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\Cage.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\Cage.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\Cage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\Cage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat"
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
	class Paragon_GunRack_Black: GunRack_ColorBase
	{
		scope=2;
		displayName="Black Gun Rack";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Black.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
	class Paragon_GunRack_Green: GunRack_ColorBase
	{
		scope=2;
		displayName="Green Gun Rack";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Green.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
	class Paragon_GunRack_Tan: GunRack_ColorBase
	{
		scope=2;
		displayName="Tan Gun Rack";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Tan.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
};
