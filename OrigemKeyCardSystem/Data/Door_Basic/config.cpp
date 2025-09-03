class CfgPatches
{
	class OrigemKeyCardSystem
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Signs"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class OZ_Door_BasicT1: HouseNoDestruct
	{
		scope = 2;
		model = "OrigemKeyCardSystem\Data\Door_Basic\OrigemZ_BasicDoor.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"OrigemKeyCardSystem\Data\Door_Basic\Textures\OZ_DoorBasic_T1_co.paa"
		};
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 2.5;
				initPhase = 0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class OZ_Door_BasicT2: HouseNoDestruct
	{
		scope = 2;
		model = "OrigemKeyCardSystem\Data\Door_Basic\OrigemZ_BasicDoor.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"OrigemKeyCardSystem\Data\Door_Basic\Textures\OZ_DoorBasic_T2_co.paa"
		};
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 2.5;
				initPhase = 0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class OZ_Door_BasicT3: HouseNoDestruct
	{
		scope = 2;
		model = "OrigemKeyCardSystem\Data\Door_Basic\OrigemZ_BasicDoor.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"OrigemKeyCardSystem\Data\Door_Basic\Textures\OZ_DoorBasic_T3_co.paa"
		};
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 2.5;
				initPhase = 0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class OZ_Door_BasicT4: HouseNoDestruct
	{
		scope = 2;
		model = "OrigemKeyCardSystem\Data\Door_Basic\OrigemZ_BasicDoor.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"OrigemKeyCardSystem\Data\Door_Basic\Textures\OZ_DoorBasic_T4_co.paa"
		};
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 2.5;
				initPhase = 0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
	class OZ_Door_BasicT5: HouseNoDestruct
	{
		scope = 2;
		model = "OrigemKeyCardSystem\Data\Door_Basic\OrigemZ_BasicDoor.p3d";
		hiddenSelections[] = 
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = 
		{
			"OrigemKeyCardSystem\Data\Door_Basic\Textures\OZ_DoorBasic_T5_co.paa"
		};
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 2.5;
				initPhase = 0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};

};
