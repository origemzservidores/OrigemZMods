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
	class BandageDressing;
	class OZM_Med_Turnicket: BandageDressing
	{
		scope=2;
		displayName="Torniquete Hemostático CAT";
		descriptionShort="O torniquete CAT (combat application tourniquet) previne a perda de sangue ao bloquear o fluxo sanguíneo através da aplicação de pressão na extremidade ferida. Ele utiliza um sistema de tensão autorregulável e uma fivela resistente a puxões.";
		model="\OrigemZMedicine\Turnicket\Turnicket.p3d";
		isMeleeWeapon=1;
		rotationFlags=17;
		varQuantityInit=3;
		varQuantityMin=0;
		varQuantityMax=3;
		weight=50;
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
								"OrigemZMedicine\Turnicket\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Turnicket\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"OrigemZMedicine\Turnicket\Data\camo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"OrigemZMedicine\Turnicket\Data\camo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"OrigemZMedicine\Turnicket\Data\camo_destruct.rvmat"
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
