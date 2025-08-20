class CfgPatches
{
	class Paragon_Compound
	{
		units[]=
		{
			"Paragon_Compound_Gate",
			"Paragon_Compound_Wall"
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
		expansionIsOpenable = 1;
	};
	class Compound_Gate_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Compound\Compound_Gate.p3d";
		hologramMaterial="Compound";
		hologramMaterialPath="ParagonStorage\Compound\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		attachments[]=
		{
			"Att_CombinationLock",
			"CodeLock"
		};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		forceFarBubble="true";
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
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
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
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door1
			{
				source="user";
				initPhase=0;
				animPeriod=1.8;
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
	class Paragon_Compound_Gate: Compound_Gate_ColorBase
	{
		scope=2;
		displayName="Compound Gate";
		descriptionShort="Compound Gate, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Compound\data\Compound_Wood_co.paa"
		};
	};
	class Compound_Wall_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonStorage\Compound\Compound_Wall.p3d";
		hologramMaterial="Compound";
		hologramMaterialPath="ParagonStorage\Compound\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=5000;
		itemBehaviour=0;
		itemSize[]={6,6};
		carveNavmesh=1;
		canBeDigged=0;
		physLayer="item_large";
		forceFarBubble="true";
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
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Compound\data\Compound.rvmat"
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
			openable=1;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class door1
			{
				source="user";
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
	class Paragon_Compound_Wall: Compound_Wall_ColorBase
	{
		scope=2;
		displayName="Compound Wall";
		descriptionShort="Compound Wall, can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Compound\data\Compound_Wood_co.paa"
		};
	};
};
