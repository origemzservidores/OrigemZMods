class CfgPatches
{
	class Paragon_IceCeramFreezer
	{
		units[]=
		{
			"Paragon_IC_Freezer"
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
	class IceCeramFreezer_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\IceCeramFreezer\IceCeramFreezer.p3d";
		hologramMaterial="IceCeramFreezer";
		hologramMaterialPath="ParagonStorage\IceCeramFreezer\data";
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
			"Camo",
			"Camo2"
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
								"ParagonStorage\IceCeramFreezer\data\IceCeramFreezer.rvmat",
								"ParagonStorage\IceCeramFreezer\data\Glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\IceCeramFreezer\data\IceCeramFreezer.rvmat",
								"ParagonStorage\IceCeramFreezer\data\Glass.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\IceCeramFreezer\data\IceCeramFreezer.rvmat",
								"ParagonStorage\IceCeramFreezer\data\Glass.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\IceCeramFreezer\data\IceCeramFreezer.rvmat",
								"ParagonStorage\IceCeramFreezer\data\Glass.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\IceCeramFreezer\data\IceCeramFreezer.rvmat",
								"ParagonStorage\IceCeramFreezer\data\Glass.rvmat"
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
			itemsCargoSize[]={10,15};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1.15;
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
	class Paragon_IC_Freezer: IceCeramFreezer_ColorBase
	{
		scope=2;
		displayName="Nestle Ice Ceram Freezer";
		descriptionShort="The Ice Ceram Freezer holds 150 slots of food and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\IceCeramFreezer\data\IceCreamFreezer_nestle.paa",
			"ParagonStorage\IceCeramFreezer\data\Glass.paa"
		};
	};
};
