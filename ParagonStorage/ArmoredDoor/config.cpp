class CfgPatches
{
	class Paragon_ArmoredDoor
	{
		units[]=
		{
			"Paragon_Adoor_Black",
			"Paragon_Adoor_Gold",
			"Paragon_Adoor_Green",
			"Paragon_Adoor_Blue",
			"Paragon_Adoor_Rainbow"
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
	class Paragon_Lockable_Base: Container_Base
	{
	};
	class ArmoredDoor_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\ArmoredDoor\ArmoredDoor.p3d";
		hologramMaterial="ArmoredDoor";
		hologramMaterialPath="ParagonStorage\ArmoredDoor\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		allowOwnedCargoManipulation=1;
		itemSize[]={6,4};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock"
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
								"ParagonStorage\ArmoredDoor\data\ArmoredDoor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\ArmoredDoor\data\ArmoredDoor.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\ArmoredDoor\data\ArmoredDoor.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\ArmoredDoor\data\ArmoredDoor.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\ArmoredDoor\data\ArmoredDoor.rvmat"
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
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
			};
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
	class Paragon_Adoor_Black: ArmoredDoor_ColorBase
	{
		scope=2;
		displayName="Black Armored Door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_Black.paa"
		};
	};
	class Paragon_Adoor_Gold: ArmoredDoor_ColorBase
	{
		scope=2;
		displayName="Gold Armored Door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_Gold.paa"
		};
	};
	class Paragon_Adoor_Green: ArmoredDoor_ColorBase
	{
		scope=2;
		displayName="Green Armored Door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_Green.paa"
		};
	};
	class Paragon_Adoor_Blue: ArmoredDoor_ColorBase
	{
		scope=2;
		displayName="Blue Armored Door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_Blue.paa"
		};
	};
	class Paragon_Adoor_Rainbow: ArmoredDoor_ColorBase
	{
		scope=2;
		displayName="Holographic Armored Door";
		descriptionShort="Place the lockable Armored Door in your door ways for extra protection, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_White.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ParagonStorage\ArmoredDoor\data\ArmoredDoor_Rainbow.rvmat"
		};
	};
};
