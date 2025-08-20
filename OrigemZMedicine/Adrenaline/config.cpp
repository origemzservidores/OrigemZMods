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
	class OZM_Med_Adrenaline: Inventory_Base
	{
		scope=2;
		displayName="#ozm_adrenalina_name";
		descriptionShort="#ozm_adrenalina_desc";
		model="\OrigemZMedicine\Adrenaline\Adrenaline.p3d";
		weight=125;
		absorbency=0.80000001;
		itemSize[]={1,3};
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
								"OrigemZMedicine\Adrenaline\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Adrenaline\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"OrigemZMedicine\Adrenaline\Data\camo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"OrigemZMedicine\Adrenaline\Data\camo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"OrigemZMedicine\Adrenaline\Data\camo_destruct.rvmat"
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
				class Syringe_out
				{
					soundSet="Syringe_out_SoundSet";
					id=201;
				};
				class Syringe_spear
				{
					soundSet="Syringe_spear_SoundSet";
					id=202;
				};
				class Syringe_splash
				{
					soundSet="Syringe_splash_SoundSet";
					id=203;
				};
			};
		};
	};
};
