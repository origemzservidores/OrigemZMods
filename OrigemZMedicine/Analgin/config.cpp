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
	class Edible_Base;
	class OZM_Med_Analgin: Edible_Base
	{
		scope=2;
		displayName="Comprimidos de Analgin";
		descriptionShort="O mais simples e mais barato dos analgésicos conhecidos.";
		model="\OrigemZMedicine\Analgin\Analgin.p3d";
		inventorySlot[]=
		{
			"OZM_Tablet"
		};
		isMeleeWeapon=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varCleannessInit=1;
		rotationFlags=17;
		weight=50;
		stackedUnit="pills";
		absorbency=0.80000001;
		itemSize[]={1,2};
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
								"OrigemZMedicine\Analgin\Data\camp.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Analgin\Data\camp.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"OrigemZMedicine\Analgin\Data\camp_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"OrigemZMedicine\Analgin\Data\camp_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"OrigemZMedicine\Analgin\Data\camp_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=0;
			water=-50;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Tablets_open
				{
					soundSet="Tablets_open_SoundSet";
					id=201;
				};
				class Tablets_catch
				{
					soundSet="Tablets_catch_SoundSet";
					id=202;
				};
				class Tablets_close
				{
					soundSet="Tablets_close_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="purificationtablets_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="purificationtablets_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
