class CfgPatches
{
	class ParagonStorage_Proxies
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Tops",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Weapons_Firearms",
			"DZ_Characters_Pants",
			"DZ_Gear_Containers",
			"DZ_Characters_Shoes",
			"DZ_Gear_Consumables",
			"DZ_Weapons_Explosives",
			"DZ_Characters_Gloves"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Grenade_Base: Inventory_Base
	{
		absorbency=0.5;
		itemSize[]={1,2};
		inventorySlot[]+=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"Grenade1",
			"Grenade2",
			"Grenade3",
			"Grenade4"
		};
	};
	class HandSaw: Inventory_Base
	{
		inventorySlot[]+=
		{
			"HandSaw1",
			"HandSaw2",
			"HandSaw3",
			"HandSaw4",
			"HandSaw5",
			"HandSaw6"
		};
	};
	class Pliers: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Pliers1",
			"Pliers2"
		};
	};
	class Screwdriver: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Screwdriver1",
			"Screwdriver2"
		};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Hatchet1",
			"Hatchet2",
			"Hatchet3"
		};
	};
	class WoodAxe: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Axe",
			"Shoulder",
			"Melee"
		};
	};
	class FirefighterAxe: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Axe",
			"Shoulder",
			"Melee"
		};
	};
	class Pickaxe: Inventory_Base
	{
		inventorySlot[]+=
		{
			"Pickaxe",
			"Shoulder",
			"Melee"
		};
	};
	class RA_CodeLock: Inventory_Base
	{
		inventorySlot[]+=
		{
			"CodeLock"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder1";
		model="ParagonStorage\Proxies\Shoulder1.p3d";
	};
	class ProxyShoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder2";
		model="ParagonStorage\Proxies\Shoulder2.p3d";
	};
	class ProxyShoulder3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder3";
		model="ParagonStorage\Proxies\Shoulder3.p3d";
	};
	class ProxyShoulder4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder4";
		model="ParagonStorage\Proxies\Shoulder4.p3d";
	};
	class ProxyShoulder5: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder5";
		model="ParagonStorage\Proxies\Shoulder5.p3d";
	};
	class ProxyShoulder6: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder6";
		model="ParagonStorage\Proxies\Shoulder6.p3d";
	};
	class ProxyShoulder7: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder7";
		model="ParagonStorage\Proxies\Shoulder7.p3d";
	};
	class ProxyShoulder8: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder8";
		model="ParagonStorage\Proxies\Shoulder8.p3d";
	};
	class ProxyShoulder9: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder9";
		model="ParagonStorage\Proxies\Shoulder9.p3d";
	};
	class ProxyShoulder10: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder10";
		model="ParagonStorage\Proxies\Shoulder10.p3d";
	};
	class ProxyShoulder11: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder11";
		model="ParagonStorage\Proxies\Shoulder11.p3d";
	};
	class ProxyShoulder12: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder12";
		model="ParagonStorage\Proxies\Shoulder12.p3d";
	};
	class ProxyShoulder13: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder13";
		model="ParagonStorage\Proxies\Shoulder13.p3d";
	};
	class ProxyShoulder14: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder14";
		model="ParagonStorage\Proxies\Shoulder14.p3d";
	};
	class ProxyShoulder15: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder15";
		model="ParagonStorage\Proxies\Shoulder15.p3d";
	};
	class ProxyShoulder16: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder16";
		model="ParagonStorage\Proxies\Shoulder16.p3d";
	};
	class ProxyShoulder17: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder17";
		model="ParagonStorage\Proxies\Shoulder17.p3d";
	};
	class ProxyShoulder18: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder18";
		model="ParagonStorage\Proxies\Shoulder18.p3d";
	};
	class ProxyShoulder19: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder19";
		model="ParagonStorage\Proxies\Shoulder19.p3d";
	};
	class ProxyShoulder20: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder20";
		model="ParagonStorage\Proxies\Shoulder20.p3d";
	};
	class ProxyPistol1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol1";
		model="ParagonStorage\Proxies\Pistol1.p3d";
	};
	class ProxyPistol2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol2";
		model="ParagonStorage\Proxies\Pistol2.p3d";
	};
	class ProxyPistol3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol3";
		model="ParagonStorage\Proxies\Pistol3.p3d";
	};
	class ProxyPistol4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol4";
		model="ParagonStorage\Proxies\Pistol4.p3d";
	};
	class ProxyPistol5: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol5";
		model="ParagonStorage\Proxies\Pistol5.p3d";
	};
	class ProxyPistol6: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol6";
		model="ParagonStorage\Proxies\Pistol6.p3d";
	};
	class ProxyGrenade1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Grenade1";
		model="ParagonStorage\Proxies\Grenade1.p3d";
	};
	class ProxyGrenade2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Grenade2";
		model="ParagonStorage\Proxies\Grenade2.p3d";
	};
	class ProxyGrenade3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Grenade3";
		model="ParagonStorage\Proxies\Grenade3.p3d";
	};
	class ProxyGrenade4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Grenade4";
		model="ParagonStorage\Proxies\Grenade4.p3d";
	};
	class ProxyHandSaw1: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw1";
		model="ParagonStorage\Proxies\HandSaw1.p3d";
	};
	class ProxyHandSaw2: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw2";
		model="ParagonStorage\Proxies\HandSaw2.p3d";
	};
	class ProxyHandSaw3: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw3";
		model="ParagonStorage\Proxies\HandSaw3.p3d";
	};
	class ProxyHandSaw4: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw4";
		model="ParagonStorage\Proxies\HandSaw4.p3d";
	};
	class ProxyHandSaw5: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw5";
		model="ParagonStorage\Proxies\HandSaw5.p3d";
	};
	class ProxyHandSaw6: ProxyAttachment
	{
		scope=2;
		inventorySlot="HandSaw6";
		model="ParagonStorage\Proxies\HandSaw6.p3d";
	};
	class ProxyHatchet1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hatchet1";
		model="ParagonStorage\Proxies\Hatchet1.p3d";
	};
	class ProxyHatchet2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hatchet2";
		model="ParagonStorage\Proxies\Hatchet2.p3d";
	};
	class ProxyHatchet3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hatchet3";
		model="ParagonStorage\Proxies\Hatchet3.p3d";
	};
	class ProxyPliers1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pliers1";
		model="ParagonStorage\Proxies\Pliers1.p3d";
	};
	class ProxyPliers2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pliers2";
		model="ParagonStorage\Proxies\Pliers2.p3d";
	};
	class ProxyScrewdriver1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Screwdriver1";
		model="ParagonStorage\Proxies\Screwdriver1.p3d";
	};
	class ProxyScrewdriver2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Screwdriver2";
		model="ParagonStorage\Proxies\Screwdriver2.p3d";
	};
	class ProxyAxe: ProxyAttachment
	{
		scope=2;
		inventorySlot="Axe";
		model="ParagonStorage\Proxies\Axe.p3d";
	};
	class ProxyPickaxe: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pickaxe";
		model="ParagonStorage\Proxies\Pickaxe.p3d";
	};
	class ProxyCodeLock: ProxyAttachment
	{
		scope=2;
		inventorySlot="CodeLock";
		model="ParagonStorage\Proxies\CodeLock.p3d";
	};
};
class CfgSlots
{
	class Slot_Shoulder1
	{
		name="Shoulder1";
		displayName="Shoulder1";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder2
	{
		name="Shoulder2";
		displayName="Shoulder2";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder3
	{
		name="Shoulder3";
		displayName="Shoulder3";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder4
	{
		name="Shoulder4";
		displayName="Shoulder4";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder5
	{
		name="Shoulder5";
		displayName="Shoulder5";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder6
	{
		name="Shoulder6";
		displayName="Shoulder6";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder7
	{
		name="Shoulder7";
		displayName="Shoulder7";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder8
	{
		name="Shoulder8";
		displayName="Shoulder8";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder9
	{
		name="Shoulder9";
		displayName="Shoulder9";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder10
	{
		name="Shoulder10";
		displayName="Shoulder10";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder11
	{
		name="Shoulder11";
		displayName="Shoulder11";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder12
	{
		name="Shoulder12";
		displayName="Shoulder12";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder13
	{
		name="Shoulder13";
		displayName="Shoulder13";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder14
	{
		name="Shoulder14";
		displayName="Shoulder14";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder15
	{
		name="Shoulder15";
		displayName="Shoulder15";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder16
	{
		name="Shoulder16";
		displayName="Shoulder16";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder17
	{
		name="Shoulder17";
		displayName="Shoulder17";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder18
	{
		name="Shoulder18";
		displayName="Shoulder18";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder19
	{
		name="Shoulder19";
		displayName="Shoulder19";
		ghostIcon="shoulderleft";
	};
	class Slot_Shoulder20
	{
		name="Shoulder20";
		displayName="Shoulder20";
		ghostIcon="shoulderleft";
	};
	class Slot_Pistol1
	{
		name="Pistol1";
		displayName="Pistol1";
		ghostIcon="pistol";
	};
	class Slot_Pistol2
	{
		name="Pistol2";
		displayName="Pistol2";
		ghostIcon="pistol";
	};
	class Slot_Pistol3
	{
		name="Pistol3";
		displayName="Pistol3";
		ghostIcon="pistol";
	};
	class Slot_Pistol4
	{
		name="Pistol4";
		displayName="Pistol4";
		ghostIcon="pistol";
	};
	class Slot_Pistol5
	{
		name="Pistol5";
		displayName="Pistol5";
		ghostIcon="pistol";
	};
	class Slot_Pistol6
	{
		name="Pistol6";
		displayName="Pistol6";
		ghostIcon="pistol";
	};
	class Slot_Grenade1
	{
		name="Grenade1";
		displayName="Grenade1";
		ghostIcon="grenade";
	};
	class Slot_Grenade2
	{
		name="Grenade2";
		displayName="Grenade2";
		ghostIcon="grenade";
	};
	class Slot_Grenade3
	{
		name="Grenade3";
		displayName="Grenade3";
		ghostIcon="grenade";
	};
	class Slot_Grenade4
	{
		name="Grenade4";
		displayName="Grenade4";
		ghostIcon="grenade";
	};
	class Slot_HandSaw1
	{
		name="HandSaw1";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_HandSaw2
	{
		name="HandSaw2";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_HandSaw3
	{
		name="HandSaw3";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_HandSaw4
	{
		name="HandSaw4";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_HandSaw5
	{
		name="HandSaw5";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_HandSaw6
	{
		name="HandSaw6";
		displayName="HandSaw";
		ghostIcon="set:Storage_Slots image:Storage_HandSaw";
	};
	class Slot_Hatchet1
	{
		name="Hatchet1";
		displayName="Hatchet";
		ghostIcon="set:Storage_Slots image:Storage_Hatchet";
	};
	class Slot_Hatchet2
	{
		name="Hatchet2";
		displayName="Hatchet";
		ghostIcon="set:Storage_Slots image:Storage_Hatchet";
	};
	class Slot_Hatchet3
	{
		name="Hatchet3";
		displayName="Hatchet";
		ghostIcon="set:Storage_Slots image:Storage_Hatchet";
	};
	class Slot_Pliers1
	{
		name="Pliers1";
		displayName="Pliers";
		ghostIcon="set:Storage_Slots image:Storage_Pliers";
	};
	class Slot_Pliers2
	{
		name="Pliers2";
		displayName="Pliers";
		ghostIcon="set:Storage_Slots image:Storage_Pliers";
	};
	class Slot_Screwdriver1
	{
		name="Screwdriver1";
		displayName="Screwdriver";
		ghostIcon="set:Storage_Slots image:Storage_ScrewDriver";
	};
	class Slot_Screwdriver2
	{
		name="Screwdriver2";
		displayName="Screwdriver";
		ghostIcon="set:Storage_Slots image:Storage_ScrewDriver";
	};
	class Slot_Axe
	{
		name="Axe";
		displayName="Axe";
		ghostIcon="set:Storage_Slots image:Storage_Axe";
	};
	class Slot_Pickaxe
	{
		name="Pickaxe";
		displayName="Pickaxe";
		ghostIcon="set:Storage_Slots image:Storage_PickAxe";
	};
};
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]+=
		{
			"Shoulder",
			"Melee",
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
			"Shoulder18",
			"Shoulder19",
			"Shoulder20"
		};
	};
	class PistolCore;
	class Pistol_Base: PistolCore
	{
		inventorySlot[]+=
		{
			"Pistol",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4",
			"Pistol5",
			"Pistol6",
			"Pistol7",
			"Pistol8",
			"Pistol9",
			"Pistol10"
		};
	};
};
