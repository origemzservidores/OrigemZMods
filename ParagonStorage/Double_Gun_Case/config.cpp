class CfgPatches
{
	class Paragon_Double_Gun_Case
	{
		units[]=
		{
			"Paragon_DGunCase_Brown",
			"Paragon_DGunCase_Grey",
			"Paragon_DGunCase_Cherry"
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
	class Double_Gun_Case_ColorBase: Paragon_Lockable_Base
	{
		scope=0;
		model="ParagonStorage\Double_Gun_Case\DoubleGunCase.p3d";
		hologramMaterial="Double_Gun_Case";
		hologramMaterialPath="ParagonStorage\Gun_case\data";
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
			"Att_CombinationLock",
			"CodeLock"
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
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock",
					"CodeLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
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
					"Shoulder12"
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
								"ParagonStorage\Gun_case\data\Gun_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonStorage\Gun_case\data\Gun_Case.rvmat"
							}
						},
						
						{
							0.50999999,
							
							{
								"ParagonStorage\Gun_case\data\Gun_Case.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonStorage\Gun_case\data\Gun_Case.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ParagonStorage\Gun_case\data\Gun_Case.rvmat"
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
			class door
			{
				source="user";
				initPhase=0;
				animPeriod=1.2;
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
	class Paragon_DGunCase_Brown: Double_Gun_Case_ColorBase
	{
		scope=2;
		displayName="Brown Double Gun Case";
		descriptionShort="The Double Gun Case holds 12 guns and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_case\data\Gun_Case_co.paa"
		};
	};
	class Paragon_DGunCase_Grey: Double_Gun_Case_ColorBase
	{
		scope=2;
		displayName="Grey Double Gun Case";
		descriptionShort="The Double Gun Case holds 12 guns and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_case\data\Gun_Case_Grey.paa"
		};
	};
	class Paragon_DGunCase_Cherry: Double_Gun_Case_ColorBase
	{
		scope=2;
		displayName="Cherry Double Gun Case";
		descriptionShort="The Double Gun Case holds 12 guns and , can be dismatled by pliers. Manufactured by Paragon";
		hiddenSelectionsTextures[]=
		{
			"ParagonStorage\Gun_case\data\Gun_Case_Cherry.paa"
		};
	};
};
