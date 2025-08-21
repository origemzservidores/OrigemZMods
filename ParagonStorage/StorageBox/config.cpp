class CfgPatches
{
	class Paragon_StorageBox
	{
		requiredAddons[]=
		{
			"DZ_Data"
		};
		units[]=
		{
			"StorageBox_Tcrate_Black",
			"StorageBox_Tcrate_Grey",
			"StorageBox_Tcrate_Tan",
			"StorageBox_Tcrate_Green",
			"StorageBox_Tcrate_Blue",
			"StorageBox_Scrate_Black",
			"StorageBox_Scrate_Grey",
			"StorageBox_Scrate_Tan",
			"StorageBox_Scrate_Green",
			"StorageBox_Scrate_Blue",
			"StorageBox_Mcrate_Black",
			"StorageBox_Mcrate_Grey",
			"StorageBox_Mcrate_Tan",
			"StorageBox_Mcrate_Green",
			"StorageBox_Mcrate_Blue",
			"StorageBox_GunRack_Black",
			"StorageBox_GunRack_Tan",
			"StorageBox_GunRack_Green",
			"StorageBox_DGunRack_Black",
			"StorageBox_DGunRack_Tan",
			"StorageBox_DGunRack_Green",
			"StorageBox_GunCase_Brown",
			"StorageBox_GunCase_Grey",
			"StorageBox_GunCase_Cherry",
			"StorageBox_DGunCase_Brown",
			"StorageBox_DGunCase_Grey",
			"StorageBox_DGunCase_Cherry",
			"StorageBox_GunWall_Black",
			"StorageBox_GunWall_Tan",
			"StorageBox_GunWall_Green",
			"StorageBox_IceBox",
			"StorageBox_Locker_Black",
			"StorageBox_Locker_Green",
			"StorageBox_Locker_Purple",
			"StorageBox_Locker_Blue",
			"StorageBox_Locker_Red",
			"StorageBox_Locker_White",
			"StorageBox_Locker_Yellow",
			"StorageBox_MetalRack_Black",
			"StorageBox_MetalRack_Tan",
			"StorageBox_MetalRack_Green",
			"StorageBox_HotDog_Cart",
			"StorageBox_Mcabinet_Black",
			"StorageBox_Mcabinet_Tan",
			"StorageBox_Mcabinet_Green",
			"StorageBox_Mlocker_Black",
			"StorageBox_Mlocker_Grey",
			"StorageBox_Mlocker_Tan",
			"StorageBox_Mlocker_Green",
			"StorageBox_Mlocker_Blue",
			"StorageBox_Safe_Black",
			"StorageBox_Safe_Green",
			"StorageBox_Safe_Grey",
			"StorageBox_Safe_Blue",
			"StorageBox_Safe_Gold",
			"StorageBox_Safe_White",
			"StorageBox_Safe_Rainbow",
			"StorageBox_SmallSafe_Black",
			"StorageBox_SmallSafe_Green",
			"StorageBox_SmallSafe_Grey",
			"StorageBox_SmallSafe_Blue",
			"StorageBox_SmallSafe_Gold",
			"StorageBox_SmallSafe_White",
			"StorageBox_SmallSafe_Rainbow",
			"StorageBox_BigSafe_Black",
			"StorageBox_BigSafe_Grey",
			"StorageBox_BigSafe_Rainbow",
			"StorageBox_ToolB_Black",
			"StorageBox_ToolB_Red",
			"StorageBox_ToolB_White",
			"StorageBox_ToolB_Blue",
			"StorageBox_ToolB_Yellow",
			"StorageBox_Wood_Crate",
			"StorageBox_Pallet_Black",
			"StorageBox_Pallet_Tan",
			"StorageBox_Pallet_Green",
			"StorageBox_HeliPad",
			"StorageBox_MiliCrate_Black",
			"StorageBox_MiliCrate_Grey",
			"StorageBox_MiliCrate_Tan",
			"StorageBox_MiliCrate_Green",
			"StorageBox_MiliCrate_Blue",
			"StorageBox_Fridge_Black",
			"StorageBox_Fridge_White",
			"StorageBox_Container_Black",
			"StorageBox_Container_Grey",
			"StorageBox_Container_Tan",
			"StorageBox_Container_Green",
			"StorageBox_Container_Blue",
			"StorageBox_Container_Red",
			"StorageBox_IC_Freezer",
			"StorageBox_GearStand",
			"StorageBox_PlanterBox",
			"StorageBox_P_GreenHouse",
			"StorageBox_LargeGreenHouse",
			"StorageBox_Adoor_Black",
			"StorageBox_Adoor_Gold",
			"StorageBox_Adoor_Green",
			"StorageBox_Adoor_Blue",
			"StorageBox_Adoor_Rainbow",
			"StorageBox_Rdoor_Black",
			"StorageBox_Rdoor_Green",
			"StorageBox_GearStandC_B",
			"StorageBox_GearStandC_G",
			"StorageBox_GearStandC_C",
			"StorageBox_Wlocker_Black",
			"StorageBox_Wlocker_Grey",
			"StorageBox_Wlocker_Green",
			"StorageBox_Wlocker_Tan",
			"StorageBox_Wlocker_Blue",
			"StorageBox_Bdoor",
			"StorageBox_Compound_Gate",
			"StorageBox_Compound_Wall",
			"StorageBox_BigTent_Black",
			"StorageBox_BigTent_White",
			"StorageBox_BigTent_Green",
			"StorageBox_Dumpster",
			"StorageBox_GraffitiCan",
			"StorageBox_TrashCan",
			"StorageBox_WoodStorage",
			"StorageBox_WallRack_Black",
			"StorageBox_WallRack_Green",
			"StorageBox_WallRack_Tan",
			"StorageBox_Weapons_Rack_Black",
			"StorageBox_Weapons_Rack_Green",
			"StorageBox_Weapons_Rack_Tan",
			"StorageBox_WellPump"
		};
		weapons[]={};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class StorageBox_ColorBase: Inventory_Base
	{
		scope=0;
		model="ParagonStorage\StorageBox\StorageBox.p3d";
		itemSize[]={6,4};
		hiddenSelections[]=
		{
			"Camo"
		};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_large";
		rotationFlags=2;
		weight=1000;
		itemBehaviour=2;
		class Cargo
		{
			itemsCargoSize[]={0,0};
			openable=0;
			allowOwnedCargoManipulation=0;
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
	//---------- NOVOS ITENS -----------//
	class StorageBox_WellPump: StorageBox_ColorBase
	{
		scope=2;
		displayName="Well Pump Box";
		descriptionShort="Kit de Bomba de Poço.";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WellPump.paa"
		};
	};
	class StorageBox_FuelPump: StorageBox_ColorBase
	{
		scope=2;
		displayName="Fuel Pump Box";
		descriptionShort="Kit de Bomba de Combustível.";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_FuelPump.paa"
		};
	};
	class StorageBox_Tcrate_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Tiny Crate Box";
		descriptionShort="The Tiny crate holds 100 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Tcrate_Black.paa"
		};
	};
	class StorageBox_Tcrate_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Tiny Crate Box";
		descriptionShort="The Tiny crate holds 100 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Tcrate_Grey.paa"
		};
	};
	class StorageBox_Tcrate_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Tiny Crate Box";
		descriptionShort="The Tiny crate holds 100 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Tcrate_Tan.paa"
		};
	};
	class StorageBox_Tcrate_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Tiny Crate Box";
		descriptionShort="The Tiny crate holds 100 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Tcrate_Green.paa"
		};
	};
	class StorageBox_Tcrate_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Tiny Crate Box";
		descriptionShort="The Tiny crate holds 100 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Tcrate_Blue.paa"
		};
	};
	class StorageBox_Scrate_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Small Crate Box";
		descriptionShort="The small crate holds 200 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Scrate_Black.paa"
		};
	};
	class StorageBox_Scrate_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Small Crate Box";
		descriptionShort="The small crate holds 200 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Scrate_Grey.paa"
		};
	};
	class StorageBox_Scrate_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Small Crate Box";
		descriptionShort="The small crate holds 200 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Scrate_Tan.paa"
		};
	};
	class StorageBox_Scrate_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Small Crate Box";
		descriptionShort="The small crate holds 200 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Scrate_Green.paa"
		};
	};
	class StorageBox_Scrate_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Small Crate Box";
		descriptionShort="The small crate holds 200 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Scrate_Blue.paa"
		};
	};
	class StorageBox_Mcrate_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Medium Crate Box";
		descriptionShort="The medium crate holds 300 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Mcrate_Black.paa"
		};
	};
	class StorageBox_Mcrate_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Medium Crate Box";
		descriptionShort="The medium crate holds 300 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Mcrate_Grey.paa"
		};
	};
	class StorageBox_Mcrate_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Medium Crate Box";
		descriptionShort="The medium crate holds 300 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Mcrate_Tan.paa"
		};
	};
	class StorageBox_Mcrate_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Medium Crate Box";
		descriptionShort="The medium crate holds 300 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Mcrate_Green.paa"
		};
	};
	class StorageBox_Mcrate_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Medium Crate Box";
		descriptionShort="The medium crate holds 300 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Mcrate_Blue.paa"
		};
	};
	class StorageBox_GunRack_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Gun Rack Box";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunRack_Black.paa"
		};
	};
	class StorageBox_GunRack_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Gun Rack Box";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunRack_Tan.paa"
		};
	};
	class StorageBox_GunRack_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Gun Rack Box";
		descriptionShort="The Gun Rack holds 9 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunRack_Green.paa"
		};
	};
	class StorageBox_DGunRack_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Double Gun Rack Box";
		descriptionShort="The Double Gun Rack holds 18 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunRack_Black.paa"
		};
	};
	class StorageBox_DGunRack_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Double Gun Rack Box";
		descriptionShort="The Double Gun Rack holds 18 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunRack_Tan.paa"
		};
	};
	class StorageBox_DGunRack_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Double Gun Rack Box";
		descriptionShort="The Double Gun Rack holds 18 guns and 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunRack_Green.paa"
		};
	};
	class StorageBox_GunCase_Brown: StorageBox_ColorBase
	{
		scope=2;
		displayName="Brown Gun Case Box";
		descriptionShort="The Gun Case holds 6 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunCase_Brown.paa"
		};
	};
	class StorageBox_GunCase_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Gun Case Box";
		descriptionShort="The Gun Case holds 6 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunCase_Grey.paa"
		};
	};
	class StorageBox_GunCase_Cherry: StorageBox_ColorBase
	{
		scope=2;
		displayName="Cherry Gun Case Box";
		descriptionShort="The Gun Case hold 6 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunCase_Cherry.paa"
		};
	};
	class StorageBox_DGunCase_Brown: StorageBox_ColorBase
	{
		scope=2;
		displayName="Brown Double Gun Case Box";
		descriptionShort="The Double Gun Case holds 12 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunCase_Brown.paa"
		};
	};
	class StorageBox_DGunCase_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Double Gun Case Box";
		descriptionShort="The Double Gun Case holds 12 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunCase_Grey.paa"
		};
	};
	class StorageBox_DGunCase_Cherry: StorageBox_ColorBase
	{
		scope=2;
		displayName="Cherry Double Gun Case Box";
		descriptionShort="The Double Gun Case holds 12 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_DGunCase_Cherry.paa"
		};
	};
	class StorageBox_GunWall_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Gun Wall Box";
		descriptionShort="The Gun Wall holds 7 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunWall_Black.paa"
		};
	};
	class StorageBox_GunWall_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Gun Wall Box";
		descriptionShort="The Gun Wall holds 7 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunWall_Tan.paa"
		};
	};
	class StorageBox_GunWall_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Gun Wall Box";
		descriptionShort="The Gun Wall holds 7 guns and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GunWall_Green.paa"
		};
	};
	class StorageBox_IceBox: StorageBox_ColorBase
	{
		scope=2;
		displayName="Ice Freezer Box";
		descriptionShort="The Ice Freezer holds 80 slots of food and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_IceBox.paa"
		};
	};
	class StorageBox_Locker_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Black.paa"
		};
	};
	class StorageBox_Locker_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Green.paa"
		};
	};
	class StorageBox_Locker_Purple: StorageBox_ColorBase
	{
		scope=2;
		displayName="Purple Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Purple.paa"
		};
	};
	class StorageBox_Locker_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Blue.paa"
		};
	};
	class StorageBox_Locker_Red: StorageBox_ColorBase
	{
		scope=2;
		displayName="Red Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Red.paa"
		};
	};
	class StorageBox_Locker_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_White.paa"
		};
	};
	class StorageBox_Locker_Yellow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Yellow Locker Box";
		descriptionShort="The Locker holds a full gear set and 1 gun, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Locker_Yellow.paa"
		};
	};
	class StorageBox_MetalRack_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Metal Rack Box";
		descriptionShort="The Metal Rack holds 250 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MetalRack_Black.paa"
		};
	};
	class StorageBox_MetalRack_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Metal Rack Box";
		descriptionShort="The Metal Rack holds 250 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MetalRack_Tan.paa"
		};
	};
	class StorageBox_MetalRack_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Metal Rack Box";
		descriptionShort="The Metal Rack holds 250 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MetalRack_Green.paa"
		};
	};
	class StorageBox_HotDog_Cart: StorageBox_ColorBase
	{
		scope=2;
		displayName="HotDog Cart Box";
		descriptionShort="The HotDog Cart holds 150 slots of food and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_HotDog_Cart.paa"
		};
	};
	class StorageBox_Mcabinet_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Military cabinet Box";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Military_Cabinet_Black.paa"
		};
	};
	class StorageBox_Mcabinet_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Military cabinet Box";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Military_Cabinet_Tan.paa"
		};
	};
	class StorageBox_Mcabinet_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Military cabinet Box";
		descriptionShort="The Military cabinet holds a full gear set and 5 guns, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Military_Cabinet_Green.paa"
		};
	};
	class StorageBox_Mlocker_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Military locker Box";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage.Can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryLocker_Black.paa"
		};
	};
	class StorageBox_Mlocker_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Military locker Box";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage.Can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryLocker_Grey.paa"
		};
	};
	class StorageBox_Mlocker_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Military locker Box";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage.Can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryLocker_Tan.paa"
		};
	};
	class StorageBox_Mlocker_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Military locker Box";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage.Can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryLocker_Green.paa"
		};
	};
	class StorageBox_Mlocker_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Military locker Box";
		descriptionShort="The Military locker holds a full gear set, 8 guns, and has 50 slots of storage.Can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryLocker_Blue.paa"
		};
	};
	class StorageBox_Safe_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Black.paa"
		};
	};
	class StorageBox_Safe_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Green.paa"
		};
	};
	class StorageBox_Safe_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Grey.paa"
		};
	};
	class StorageBox_Safe_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Blue.paa"
		};
	};
	class StorageBox_Safe_Gold: StorageBox_ColorBase
	{
		scope=2;
		displayName="Gold Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Gold.paa"
		};
	};
	class StorageBox_Safe_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_White.paa"
		};
	};
	class StorageBox_Safe_Rainbow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Holographic Safe Box";
		descriptionShort="The Safe holds 6 guns and 80 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Safe_Rainbow.paa"
		};
	};
	class StorageBox_SmallSafe_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Black.paa"
		};
	};
	class StorageBox_SmallSafe_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Green.paa"
		};
	};
	class StorageBox_SmallSafe_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Grey.paa"
		};
	};
	class StorageBox_SmallSafe_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Blue.paa"
		};
	};
	class StorageBox_SmallSafe_Gold: StorageBox_ColorBase
	{
		scope=2;
		displayName="Gold Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Gold.paa"
		};
	};
	class StorageBox_SmallSafe_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_White.paa"
		};
	};
	class StorageBox_SmallSafe_Rainbow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Holographic Small Safe Box";
		descriptionShort="The Small Safe holds 150 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_SmallSafe_Rainbow.paa"
		};
	};
	class StorageBox_BigSafe_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Big Safe Box";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigSafe_Black.paa"
		};
	};
	class StorageBox_BigSafe_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Big Safe Box";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigSafe_Grey.paa"
		};
	};
	class StorageBox_BigSafe_Rainbow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Holographic Big Safe Box";
		descriptionShort="The Big Safe holds 12 guns and 200 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigSafe_Grey.paa"
		};
	};
	class StorageBox_ToolB_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Tool Bench Box";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_ToolB_Black.paa"
		};
	};
	class StorageBox_ToolB_Red: StorageBox_ColorBase
	{
		scope=2;
		displayName="Red Tool Bench Box";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_ToolB_Red.paa"
		};
	};
	class StorageBox_ToolB_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Tool Bench Box";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_ToolB_White.paa"
		};
	};
	class StorageBox_ToolB_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Tool Bench Box";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_ToolB_Blue.paa"
		};
	};
	class StorageBox_ToolB_Yellow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Yellow Tool Bench Box";
		descriptionShort="The Tool Bench holds a bunch of tools and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_ToolB_Yellow.paa"
		};
	};
	class StorageBox_Wood_Crate: StorageBox_ColorBase
	{
		scope=2;
		displayName="Wood Crate Box";
		descriptionShort="The Wood Crate has 600 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Wood_Crate.paa"
		};
	};
	class StorageBox_Pallet_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Pallet Storage Box";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_PalletStorage_Black.paa"
		};
	};
	class StorageBox_Pallet_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Pallet Storage Box";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_PalletStorage_Tan.paa"
		};
	};
	class StorageBox_Pallet_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Pallet Storage Box";
		descriptionShort="The Pallet Storage has 500 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_PalletStorage_Green.paa"
		};
	};
	class StorageBox_HeliPad: StorageBox_ColorBase
	{
		scope=2;
		displayName="HeliPad Storage Box";
		descriptionShort="HeliPad, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_HeliPad.paa"
		};
	};
	class StorageBox_MiliCrate_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Military Crate Box";
		descriptionShort="The military crate holds 400 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryCrate_Black.paa"
		};
	};
	class StorageBox_MiliCrate_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Military Crate Box";
		descriptionShort="The military crate holds 400 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryCrate_Grey.paa"
		};
	};
	class StorageBox_MiliCrate_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Military Crate Box";
		descriptionShort="The military crate holds 400 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryCrate_Tan.paa"
		};
	};
	class StorageBox_MiliCrate_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Military Crate Box";
		descriptionShort="The military crate holds 400 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryCrate_Green.paa"
		};
	};
	class StorageBox_MiliCrate_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Military Crate Box";
		descriptionShort="The military crate holds 400 slots of storage and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_MilitaryCrate_Blue.paa"
		};
	};
	class StorageBox_Fridge_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Fridge Box";
		descriptionShort="The Fridge holds 100 slots of food and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Fridge_Black.paa"
		};
	};
	class StorageBox_Fridge_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Fridge Box";
		descriptionShort="The Fridge holds 100 slots of food and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Fridge_White.paa"
		};
	};
	class StorageBox_Container_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Black.paa"
		};
	};
	class StorageBox_Container_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Grey.paa"
		};
	};
	class StorageBox_Container_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Tan.paa"
		};
	};
	class StorageBox_Container_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Green.paa"
		};
	};
	class StorageBox_Container_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Blue.paa"
		};
	};
	class StorageBox_Container_Red: StorageBox_ColorBase
	{
		scope=2;
		displayName="Red Cargo Container Box";
		descriptionShort="The Cargo Container has 1000 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Container_Red.paa"
		};
	};
	class StorageBox_IC_Freezer: StorageBox_ColorBase
	{
		scope=2;
		displayName="Nestle Ice Ceram Freezer";
		descriptionShort="The Ice Ceram Freezer holds 150 slots of food and can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_IC_Freezer.paa"
		};
	};
	class StorageBox_GearStand: StorageBox_ColorBase
	{
		scope=2;
		displayName="GearStand";
		descriptionShort="The GearStand has holds a full gear set and has 30 slots of storage, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GearStand.paa"
		};
	};
	class StorageBox_PlanterBox: StorageBox_ColorBase
	{
		scope=2;
		displayName="PlanterBox";
		descriptionShort="The PlanterBox can grow up to 2 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_PlanterBox.paa"
		};
	};
	class StorageBox_P_GreenHouse: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green House";
		descriptionShort="The Green House can grow up to 9 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GreenHouse.paa"
		};
	};
	class StorageBox_LargeGreenHouse: StorageBox_ColorBase
	{
		scope=2;
		displayName="Large Green House";
		descriptionShort="The Large Green House can grow up to 13 plants for all your growing needs, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_L_GreenHouse.paa"
		};
	};
	class StorageBox_Adoor_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black armored door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Adoor_Black.paa"
		};
	};
	class StorageBox_Adoor_Gold: StorageBox_ColorBase
	{
		scope=2;
		displayName="Gold armored door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Adoor_Gold.paa"
		};
	};
	class StorageBox_Adoor_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green armored door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Adoor_Green.paa"
		};
	};
	class StorageBox_Adoor_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue armored door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Adoor_Blue.paa"
		};
	};
	class StorageBox_Adoor_Rainbow: StorageBox_ColorBase
	{
		scope=2;
		displayName="Holographic armored door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Adoor_Rainbow.paa"
		};
	};
	class StorageBox_Rdoor_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Reinforced door";
		descriptionShort="Place the lockable Reinforced Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Rdoor_Black.paa"
		};
	};
	class StorageBox_Rdoor_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Reinforced door";
		descriptionShort="Place the lockable Reinforced Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Rdoor_Green.paa"
		};
	};
	class StorageBox_GearStandC_B: StorageBox_ColorBase
	{
		scope=2;
		displayName="Brown Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GearStandC_B.paa"
		};
	};
	class StorageBox_GearStandC_G: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GearStandC_G.paa"
		};
	};
	class StorageBox_GearStandC_C: StorageBox_ColorBase
	{
		scope=2;
		displayName="Cherry Gear Stand Case";
		descriptionShort="The Gear Stand Case has holds a full gear set and has 30 slots of storage is also lockable, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GearStandC_C.paa"
		};
	};
	class StorageBox_Wlocker_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WLocker_Black.paa"
		};
	};
	class StorageBox_Wlocker_Grey: StorageBox_ColorBase
	{
		scope=2;
		displayName="Grey Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WLocker_Grey.paa"
		};
	};
	class StorageBox_Wlocker_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WLocker_Green.paa"
		};
	};
	class StorageBox_Wlocker_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WLocker_Tan.paa"
		};
	};
	class StorageBox_Wlocker_Blue: StorageBox_ColorBase
	{
		scope=2;
		displayName="Blue Weapons Locker";
		descriptionShort="The Weapons locker holds 16 guns, 6 Pistols, and has 40 slots of storage., can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WLocker_Blue.paa"
		};
	};
	class StorageBox_Bdoor: StorageBox_ColorBase
	{
		scope=2;
		displayName="Bunker door";
		descriptionShort="Place the lockable Bunker Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Bdoor.paa"
		};
	};
	class StorageBox_Compound_Gate: StorageBox_ColorBase
	{
		scope=2;
		displayName="Compound Gate";
		descriptionShort="Compound Gate, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Compund_Gate.paa"
		};
	};
	class StorageBox_Compound_Wall: StorageBox_ColorBase
	{
		scope=2;
		displayName="Compound Wall";
		descriptionShort="Compound Wall, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Compund_Wall.paa"
		};
	};
	class StorageBox_BigTent_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigTent_Black.paa"
		};
	};
	class StorageBox_BigTent_White: StorageBox_ColorBase
	{
		scope=2;
		displayName="White Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigTent_White.paa"
		};
	};
	class StorageBox_BigTent_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Big Tent";
		descriptionShort="The Big Tent has 750 slots of storage, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_BigTent_Green.paa"
		};
	};
	class StorageBox_Dumpster: StorageBox_ColorBase
	{
		scope=2;
		displayName="Dumpster";
		descriptionShort="The Dumpster Can delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Dumpster.paa"
		};
	};
	class StorageBox_GraffitiCan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Graffiti Trash Can";
		descriptionShort="The Graffiti Trash Can will delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_GraffitiCan.paa"
		};
	};
	class StorageBox_TrashCan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Trash Can";
		descriptionShort="The Trash Can will delete any unwanted items, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_TrashCan.paa"
		};
	};
	class StorageBox_WoodStorage: StorageBox_ColorBase
	{
		scope=2;
		displayName="Wood Storage";
		descriptionShort="The Wood Storage holds a bunch of logs, planks, and nails, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WoodStorage.paa"
		};
	};
	class StorageBox_WallRack_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WallRack_Black.paa"
		};
	};
	class StorageBox_WallRack_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WallRack_Green.paa"
		};
	};
	class StorageBox_WallRack_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Wall Rack";
		descriptionShort="The Wall Rack holds 6 guns, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_WallRack_Tan.paa"
		};
	};
	class StorageBox_Weapons_Rack_Black: StorageBox_ColorBase
	{
		scope=2;
		displayName="Black Weapons Rack";
		descriptionShort="The Weapons Rack holds 10 guns and 3 pistols, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Weapons_Rack_Black.paa"
		};
	};
	class StorageBox_Weapons_Rack_Green: StorageBox_ColorBase
	{
		scope=2;
		displayName="Green Weapons Rack";
		descriptionShort="The Weapons Rack holds 10 guns and 3 pistols, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Weapons_Rack_Green.paa"
		};
	};
	class StorageBox_Weapons_Rack_Tan: StorageBox_ColorBase
	{
		scope=2;
		displayName="Tan Weapons Rack";
		descriptionShort="The Weapons Rack holds 10 guns and 3 pistols, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\StorageBox\data\StorageBox_Weapons_Rack_Tan.paa"
		};
	};
};
