class CfgPatches
{
	class Paragon_DoubleGunRack
	{
		units[]=
		{
			"Paragon_DGunRack_Black",
			"Paragon_DGunRack_Green",
			"Paragon_DGunRack_Tan"
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
	class DoubleGunRack_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Double_Gun_Rack\DoubleGunRack.p3d";
		hologramMaterial="DoubleGunRack";
		hologramMaterialPath="ParagonStorage\Gun_Rack\data";
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
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Shoulder17",
			"Shoulder18"
		};
		carveNavmesh=1;
		canBeDigged=0;
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
					"Shoulder9",
					"Shoulder10",
					"Shoulder11",
					"Shoulder12",
					"Shoulder13",
					"Shoulder14",
					"Shoulder15",
					"Shoulder16",
					"Shoulder17",
					"Shoulder18"
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
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat",
								"ParagonStorage\Gun_Rack\data\GunRack.rvmat"
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
	class Paragon_DGunRack_Black: DoubleGunRack_ColorBase
	{
		scope=2;
		displayName="Black Double Gun Rack";
		descriptionShort="The Double Gun Rack holds 19 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Black.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
	class Paragon_DGunRack_Green: DoubleGunRack_ColorBase
	{
		scope=2;
		displayName="Green Double Gun Rack";
		descriptionShort="The Double Gun Rack holds 19 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Green.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
	class Paragon_DGunRack_Tan: DoubleGunRack_ColorBase
	{
		scope=2;
		displayName="Tan Double Gun Rack";
		descriptionShort="The Double Gun Rack holds 19 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_Rack\data\GunRack_Tan.paa",
			"ParagonStorage\Gun_Rack\data\Cage.paa"
		};
	};
};
