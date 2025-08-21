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

	class OZ_FirefightersBalaclavaMask: BalaclavaMask_ColorBase
	{
		scope=2;
		displayName="Balaclava de Bombeiro";
		descriptionShort="Um item indispensável para entrar em áreas de calor extremo.";
		color="white";
		hiddenSelectionsTextures[]=
		{
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersBalaclavaMask_co.paa",
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersBalaclavaMask_co.paa",
			"\OrigemAssets\FireClothes\Data\Masks\OZ_FirefightersBalaclavaMask_co.paa"
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
}
