class CfgPatches
{
	class Paragon_MetalRack
	{
		units[]=
		{
			"Paragon_MetalRack_Black",
			"Paragon_MetalRack_Tan",
			"Paragon_MetalRack_Green"
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
	class MetalRack_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\MetalRack\MetalRack.p3d";
		hologramMaterial="MetalRack";
		hologramMaterialPath="ParagonStorage\MetalRack\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		attachments[]={};
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
								"ParagonStorage\MetalRack\data\MetalRack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\MetalRack\data\MetalRack.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\MetalRack\data\MetalRack.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\MetalRack\data\MetalRack.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\MetalRack\data\MetalRack.rvmat"
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
			itemsCargoSize[]={10,25};
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
	class Paragon_MetalRack_Black: MetalRack_ColorBase
	{
		scope=2;
		displayName="Black Metal Rack";
		descriptionShort="The Metal Rack holds 250 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MetalRack\data\MetalRack_Black.paa"
		};
	};
	class Paragon_MetalRack_Tan: MetalRack_ColorBase
	{
		scope=2;
		displayName="Tan Metal Rack";
		descriptionShort="The Metal Rack holds 250 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MetalRack\data\MetalRack_Tan.paa"
		};
	};
	class Paragon_MetalRack_Green: MetalRack_ColorBase
	{
		scope=2;
		displayName="Green Metal Rack";
		descriptionShort="The Metal Rack holds 250 slots of storage and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\MetalRack\data\MetalRack_Green.paa"
		};
	};
};
