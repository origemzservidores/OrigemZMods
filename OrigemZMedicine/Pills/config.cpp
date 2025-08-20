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
	class OZM_Med_Pills_Heal: Edible_Base
	{
		scope=2;
		displayName="#ozm_healpills_name";
		descriptionShort="#ozm_healpills_desc";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		itemSize[]={1,2};
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.89999998;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camo_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
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
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Painkiller: Edible_Base
	{
		scope=2;
		displayName="Analgésico";
		descriptionShort="Analgésico é um medicamento de origem natural, semissintética e sintética, destinado a aliviar a dor — analgesia.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoAnalgin_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
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
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Adrenalin: Edible_Base
	{
		scope=2;
		displayName="#ozm_adrenalinpills_name";
		descriptionShort="#ozm_adrenalinpills_desc";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoAdrenaline_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
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
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Cholera: Edible_Base
	{
		scope=2;
		displayName="Comprimidos contra Cólera";
		descriptionShort="Cólera é uma infecção intestinal aguda, antropozoonótica, causada por bactérias do tipo Vibrio cholerae. Caracteriza-se por mecanismo de transmissão fecal-oral, afeta o intestino delgado, causando diarreia aquosa, vômitos, perda rápida de fluidos e eletrólitos, levando a diversos graus de desidratação até choque hipovolêmico e morte.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoCholera_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0.75;
			treatment=0.5;
			diseaseExit=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Disearse: Edible_Base
	{
		scope=2;
		displayName="Comprimidos para Resfriado";
		descriptionShort="Medicamentos destinados ao tratamento de várias doenças virais: gripe, herpes, infecção por HIV, entre outros. Podem ser usados na prevenção de infecção por alguns vírus.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoDisearse_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0;
			treatment=0.89999998;
			diseaseExit=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Curu: Edible_Base
	{
		scope=0;
		displayName="Comprimidos para Kuru";
		descriptionShort="Medicamentos destinados ao tratamento de uma doença muito perigosa e fatal chamada Kuru. Esses medicamentos são muito difíceis de encontrar e são muito caros.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoKuru_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0.75;
			treatment=0.5;
			diseaseExit=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Salmonella: Edible_Base
	{
		scope=2;
		displayName="Comprimidos para Salmonela";
		descriptionShort="Medicamentos destinados ao tratamento de doenças intestinais.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoSalmonella_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0.75;
			treatment=0.5;
			diseaseExit=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class OZM_Med_Pills_Ugol: Edible_Base
	{
		scope=2;
		displayName="Comprimidos contra Intoxicação";
		descriptionShort="Medicamentos destinados ao tratamento e eliminação de toxinas do corpo. Caro análogo ao carvão ativado.";
		model="OrigemZMedicine\Pills\Pills.p3d";
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={1,2};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		varTemperatureMax=1;
		weight=20;
		weightPerQuantityUnit=2;
		stackedUnit="pills";
		quantityBar=0;
		absorbency=0.69999999;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Pills\Data\camoUgol_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Pills\Data\camo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\painkiller2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\painkiller2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Medicine
		{
			prevention=0.75;
			treatment=0.5;
			diseaseExit=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet="VitaminBottle_open_SoundSet";
					id=201;
				};
				class VitaminBottle_shake
				{
					soundSet="VitaminBottle_shake_SoundSet";
					id=202;
				};
				class VitaminBottle_close
				{
					soundSet="VitaminBottle_close_SoundSet";
					id=203;
				};
				class pickUpItem
				{
					soundSet="vitaminbottle_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
};
