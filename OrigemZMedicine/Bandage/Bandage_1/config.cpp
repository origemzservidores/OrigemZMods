class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[]=
		{
			"OZM_BandageDressing_1"
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
	class BandageDressing;
	class OZM_BandageDressing_1: BandageDressing
	{
		scope=2;
		displayName="Curativo de Bandagem";
		descriptionShort="Bandagem (alemão Binde — fita, atadura) é uma faixa de tecido (gaze, lona, tela, flanela), usada para enfaixar feridas, fazer ataduras e encadernação de livros.";
		model="\OrigemZMedicine\Bandage\Bandage_1\BandageDressing.p3d";
		inventorySlot[]=
		{
			"MedicalBandage"
		};
		isMeleeWeapon=1;
		varQuantityInit=3;
		varQuantityMin=0;
		varQuantityMax=3;
		quantityBar=1;
		varQuantityDestroyOnMin=1;
		varCleannessInit=1;
		rotationFlags=17;
		weight=345;
		absorbency=0.80000001;
		itemSize[]={1,2};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
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
								"OrigemZMedicine\Bandage\Bandage_1\data\BandageDressing.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Bandage\Bandage_1\data\BandageDressing.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
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
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
			};
		};
	};
};
