class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[]={};
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
	class Inventory_Base;
	class OZM_Med_MedKit: Inventory_Base
	{
		scope=2;
		displayName="#ozm_kitmedico_name";
		descriptionShort="#ozm_kitmedico_desc";
		model="\OrigemZMedicine\MedKit\MedKit_Grizzly.p3d";
		weight=1500;
		absorbency=0.80000001;
		isMeleeWeapon=1;
		rotationFlags=1;
		itemBehaviour=1;
		itemSize[]={3,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\MedKit\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\MedKit\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"OrigemZMedicine\MedKit\Data\camo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"OrigemZMedicine\MedKit\Data\camo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"OrigemZMedicine\MedKit\Data\camo_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="ammobox_drop_SoundSet";
					id=898;
				};
				class Medkit_loop
				{
					soundSet="Medkit_loop_Soundset";
					id=201;
				};
				class Medkit_loop1
				{
					soundSet="Medkit_loop1_Soundset";
					id=202;
				};
				class Medkit_loop2
				{
					soundSet="Medkit_loop2_Soundset";
					id=203;
				};
				class Medkit_start
				{
					soundSet="Medkit_start_Soundset";
					id=204;
				};
				class Medkit_end
				{
					soundSet="Medkit_end_Soundset";
					id=205;
				};
			};
		};
	};
};


