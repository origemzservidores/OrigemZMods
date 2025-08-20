// #define OrigemZ_VanillaGroup
// #define OrigemZ_SDT
// #define OrigemZ_Fullmod
#define OrigemZ_Nobase

// RANDOMIZE IMAGES ----------------------------------------------------------------
// If you dont want to use the UiHintPanel you can use these instead.
string GetRandomBackground()
{
	DayZGame dzgame = DayZGame.Cast(GetGame());
	if (!dzgame)
	{
		return OrigemZHudVars.origemz_tela_logo;
	}

	DayZLoadState state = dzgame.GetLoadState();

	if (state != DayZLoadState.MAIN_MENU_START && state != DayZLoadState.MAIN_MENU_START && state != DayZLoadState.CONNECT_START && state != DayZLoadState.MISSION_START && state != DayZLoadState.MAIN_MENU_CONTROLLER_SELECT)
	{
		return OrigemZHudVars.origemz_tela_logo;
	}
	else
	{
		// If you add more images be sure to change the image count. 
		int bgIndex = Math.RandomInt(0, OrigemZHudVars.OrigemZImagesCount - 1);
		return OrigemZHudVars.origemz_load_images[bgIndex];
	}
	
}

// static bool ShowDeadScreen = false;

class GameOverScreen
{
	static string GetRandomGameOverScreen()
	{
		const string images[] = {
			"OrigemZUI/GUI/Images/Death/Death1.edds",
			"OrigemZUI/GUI/Images/Death/Death1.edds"
		};
		// If you add more images be sure to change the image count. 
		const int IMAGES_COUNT = 1;
		int bgIndex = Math.RandomInt(0, IMAGES_COUNT - 1);
		return images[bgIndex];
	}
};

// SOCIALS & LINKS ---------------------------------------------------------------
// Set your links Here
static string origem_urlDiscord   = "https://discord.gg/origemz";
static string origem_urlFacebook  = "#";
static string origem_urlTwitter   = "#";
static string origem_urlReddit    = "#";
static string origem_urlYoutube   = "https://www.youtube.com/@origemz";
static string origem_urlWebsite   = "https://www.origemz.com"; 
static string origem_urlPriorityQ = "https://origemz.com/#/planosvip";
static string origem_urlCustom    = "#";


// DIALOGS ------------------------------------------------------------------------
// There is No Need to mess with anything below this line. 
const int COLORFUL_EXIT				= 666;
const int COLORFUL_CONFIGURE 		= 667;
const int COLORFUL_DEFAULTS 		= 668;


class OrigemZHudVars
{
	static const string origemz_tela_logo = "OrigemZUI/GUI/Images/Bakcgrounds_Loadscreens/origemz_tela_preta.edds";
	static const string origemz_mainmenu_reddragon = "OrigemZUI/GUI/Images/parocinadores/Logo-Redragon.edds";
	static const string origemz_mainmenu_ecxon = "OrigemZUI/GUI/Images/parocinadores/logo_ecxon.edds";
	
	#ifdef OrigemZ_VanillaGroup
	static const string origemz_hints_json = "OrigemZUI/Scripts/data/hintsVanillaGroup.json";
	static const string origemz_mainmenu_background = "OrigemZUI/GUI/Images/parocinadores/tela_menu_sdt_vanillaplus.edds";
	static const string origemz_load_images[] = {
		"OrigemZUI/GUI/Images/parocinadores/craft_mergulho_reddragon.edds", 
		"OrigemZUI/GUI/Images/parocinadores/craft_vanilla_plus_btc_reddragon.edds",
		"OrigemZUI/GUI/Images/parocinadores/load_craft_c4_novo_reddragon.edds"
	};
	static const int OrigemZImagesCount = 3;
	#endif

	#ifdef OrigemZ_SDT
	static const string origemz_hints_json = "OrigemZUI/Scripts/data/hintsVanillaSDT.json";
	static const string origemz_mainmenu_background = "OrigemZUI/GUI/Images/parocinadores/tela_menu_sdt_vanillaplus.edds";
	static const string origemz_load_images[] = {
		"OrigemZUI/GUI/Images/parocinadores/load_craft_c4_novo_reddragon.edds", 
		"OrigemZUI/GUI/Images/Bakcgrounds_Loadscreens/loading_vanilla.edds"
	};
	static const int OrigemZImagesCount = 2;
	#endif

	#ifdef OrigemZ_Fullmod
	static const string origemz_hints_json = "OrigemZUI/Scripts/data/hintsFullmod.json";
	static const string origemz_mainmenu_background = "OrigemZUI/GUI/Images/parocinadores/tela_menu_fullmod.edds";
	static const string origemz_load_images[] = {
		"OrigemZUI/GUI/Images/parocinadores/load_craft_c4_novo_reddragon.edds", 
		"OrigemZUI/GUI/Images/parocinadores/craft_btc_fullmod_c4.edds"
	};
	static const int OrigemZImagesCount = 2;
	#endif

	#ifdef OrigemZ_Nobase
	static const string origemz_hints_json = "OrigemZUI/Scripts/data/hintsNobase.json";
	static const string origemz_mainmenu_background = "OrigemZUI/GUI/Images/Bakcgrounds_Loadscreens/mainmenu-nobase.edds";
	static const string origemz_load_images[] = {
		"OrigemZUI/gui/Images/Bakcgrounds_Loadscreens/loading-nobase.edds",
		"OrigemZUI/gui/Images/Bakcgrounds_Loadscreens/origemz_tela_preta.edds"
	};
	static const int OrigemZImagesCount = 2;
	#endif
}

