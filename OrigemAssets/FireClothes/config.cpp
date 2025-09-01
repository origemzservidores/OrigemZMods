class CfgPatches
{
	class FireClothes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "JM_CF_Scripts"};
	};
};

class CfgVehicles
{
	class Clothing;
	class FirefighterJacket_ColorBase;
	class FirefightersPants_ColorBase;
	class FirefightersHelmet_ColorBase;
	class BalaclavaMask_ColorBase;
	class NBCGloves_ColorBase;
	class CombatBoots_ColorBase;

	class OZ_FirefightersJacket: FirefighterJacket_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_FirefighterJacket_ColorBase0";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Tops\OZ_FirefightersJacket_co.paa",
			"\OrigemAssets\FireClothes\Data\Tops\OZ_FirefightersJacket_co.paa",
			"\OrigemAssets\FireClothes\Data\Tops\OZ_FirefightersJacket_co.paa"
		};
	};

	class OZ_FirefightersPants: FirefightersPants_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_FirefightersPants_ColorBase0";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Pants\OZ_FirefightersPants_co.paa",
			"\OrigemAssets\FireClothes\Data\Pants\OZ_FirefightersPants_co.paa",
			"\OrigemAssets\FireClothes\Data\Pants\OZ_FirefightersPants_co.paa"
		};
	};

	class OZ_FirefightersHelmet: FirefightersHelmet_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_FirefightersHelmet_ColorBase0";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Headgear\OZ_FirefightersHelmet_co.paa",
			"\OrigemAssets\FireClothes\Data\Headgear\OZ_FirefightersHelmet_co.paa",
			"\OrigemAssets\FireClothes\Data\Headgear\OZ_FirefightersHelmet_co.paa"
		};
	};

	class OZ_FirefightersGloves: NBCGloves_ColorBase
	{
		scope=2;
		displayName="Luvas de Bombeiro";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Gloves\OZ_FirefightersGloves_co.paa",
			"\OrigemAssets\FireClothes\Data\Gloves\OZ_FirefightersGloves_co.paa",
			"\OrigemAssets\FireClothes\Data\Gloves\OZ_FirefightersGloves_co.paa"
		};
	};

	class OZ_FirefightersBoots: CombatBoots_ColorBase
	{
		scope=2;
		displayName="Bota de Bombeiro";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Shoes\OZ_FirefightersBoots_co.paa",
			"\OrigemAssets\FireClothes\Data\Shoes\OZ_FirefightersBoots_co.paa",
			"\OrigemAssets\FireClothes\Data\Shoes\OZ_FirefightersBoots_co.paa"
		};
	};

	class OZ_FirefightersMask : Clothing
	{
		scope=2;
		displayName="Máscara de Bombeiro";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		model="\DZ\characters\masks\GasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		rotationFlags=2;
		weight=730;
		weightPerQuantityUnit=0.2;
		itemSize[]={3,4};
		varWetMax=0.49000001;
		heatIsolation=0.60000002;
		visibilityModifier=0.89999998;
		noHelmet=1;
		noEyewear=1;
		varQuantityInit=225;
		varQuantityMin=0;
		varQuantityMax=225;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityDestroyOnMin=0;
		headSelectionsToHide[]={"Clipping_Gasmask"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersMask_co.paa",
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersMask_co.paa",
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersMask_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GasMask_destruct.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\GasMask_m.p3d";
			female="\DZ\characters\masks\GasMask_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundImpactType="plastic";
		soundVoiceType="gasmask";
		soundVoicePriority=5;
	};
}
