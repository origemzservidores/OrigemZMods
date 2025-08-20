modded class MainMenu extends UIScriptedMenu
{
// Social Buttons
	private Widget m_Discord;
	private Widget m_Twitter;
	private Widget m_Youtube;
	private Widget m_Reddit;
	private Widget m_Facebook;
	private Widget m_Meta;

	// Social Icons
	private Widget m_DiscordImg;
	private Widget m_TwitterImg;
	private Widget m_YoutubeImg;
	private Widget m_RedditImg;
	private Widget m_FacebookImg;
	private Widget m_MetaImg;
	
	// Top Nav Buttons
	private Widget m_ExitBtn;
	private Widget m_SettingsBtn;
	private Widget m_TutorialBtn;
	private Widget m_MessageBtn;

	// Top Nav Icons
	private Widget m_ExitBtnImg;
	private Widget m_SettingsBtnImg;
	private Widget m_TutorialBtnImg;
	private Widget m_MessageBtnImg;
	
	// Custom Buttons (No Icons)
	private Widget m_Website;
	private Widget m_PriorityQueue;
	private Widget m_CharacterBtn;

	// CUI Shaders
	private Widget m_TopShader;
	private Widget m_BottomShader;
	
	// Visual Elements
	private	Widget m_welcomeBack;
	private Widget m_SurvivorBox;
	private Widget m_StatsBox;
	private Widget m_SurvivorDivider;
	private Widget m_MenuDivider;
	private Widget m_ProgressLoading;
	private TextWidget m_Version;

	// Background
	private ImageWidget m_Background;

	// Patrocinadores
	private ImageWidget m_LogoRedDragon;
	private ImageWidget m_LogoRedEcxon;

	const string SOUND_HOVER		= "Effect_Menu_Hover";
	const string SOUND_CLICK		= "Effect_Menu_Click";
	protected EffectSound m_sound_hover;
	protected EffectSound m_sound_click;
	
	override Widget Init()
	{
		// Load the layout file
		layoutRoot					= GetGame().GetWorkspace().CreateWidgets( "OrigemZUI/gui/layouts/new_ui/cui.main_menu.layout" );
		m_Version					= layoutRoot.FindAnyWidget( "version" );
		// Social Buttons  
		m_Discord 					= layoutRoot.FindAnyWidget( "DiscordBtn" );
		m_DiscordImg 				= layoutRoot.FindAnyWidget( "DiscordBtn_img" );
		m_Twitter 					= layoutRoot.FindAnyWidget( "TwitterBtn" );
		m_TwitterImg 				= layoutRoot.FindAnyWidget( "TwitterBtn_img" );
		m_Youtube 					= layoutRoot.FindAnyWidget( "YoutubeBtn" );
		m_YoutubeImg 				= layoutRoot.FindAnyWidget( "YoutubeBtn_img" );
		m_Reddit 					= layoutRoot.FindAnyWidget( "RedditBtn" );
		m_RedditImg 				= layoutRoot.FindAnyWidget( "RedditBtn_img" );
		m_Facebook 					= layoutRoot.FindAnyWidget( "FacebookBtn" );
		m_FacebookImg 				= layoutRoot.FindAnyWidget( "FacebookBtn_img" );
		m_Meta 						= layoutRoot.FindAnyWidget( "MetaBtn" );
		m_MetaImg 					= layoutRoot.FindAnyWidget( "MetaBtn_img" );
		
		// Shaders
		m_TopShader 			    = layoutRoot.FindAnyWidget( "TopShader" );
		m_BottomShader 			    = layoutRoot.FindAnyWidget( "BottomShader" );

		// Call to action Buttons
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_ChooseServer				= layoutRoot.FindAnyWidget( "choose_server" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "customize_character" );
		m_CharacterBtn 				= layoutRoot.FindAnyWidget( "character_button" );
		m_PrevCharacter				= layoutRoot.FindAnyWidget( "prev_character" );
		m_NextCharacter				= layoutRoot.FindAnyWidget( "next_character" );

		// Custom C2A Buttons
		m_PriorityQueue				= layoutRoot.FindAnyWidget( "QueueBtn" );
		m_Website					= layoutRoot.FindAnyWidget( "WebsiteBtn" );

		// Top Naviagtion Buttons
		m_ExitBtn		 		    = layoutRoot.FindAnyWidget( "ExitBtn" );
		m_ExitBtnImg		 		= layoutRoot.FindAnyWidget( "ExitBtn_img" );
		m_SettingsBtn				= layoutRoot.FindAnyWidget( "SettingsBtn" );
		m_SettingsBtnImg		 	= layoutRoot.FindAnyWidget( "SettingsBtn_img" );
		m_TutorialBtn				= layoutRoot.FindAnyWidget( "TutorialBtn" );
		m_TutorialBtnImg		 	= layoutRoot.FindAnyWidget( "TutorialBtn_img" );
		m_MessageBtn				= layoutRoot.FindAnyWidget( "MessageBtn" );
		m_MessageBtnImg		 		= layoutRoot.FindAnyWidget( "MessageBtn_img" );

		// Misc Elements
		m_welcomeBack				= layoutRoot.FindAnyWidget( "WelcomeBack" );
		m_SurvivorDivider			= layoutRoot.FindAnyWidget( "SurvivorDivider" );
		m_SurvivorBox				= layoutRoot.FindAnyWidget( "SurvivorBox" );
		m_StatsBox					= layoutRoot.FindAnyWidget( "StatisticsBoxBG" );
		m_MenuDivider				= layoutRoot.FindAnyWidget( "MenuDivider" );
		
		// Vanilla 
		m_Play						= layoutRoot.FindAnyWidget( "play" );
		m_ChooseServer				= layoutRoot.FindAnyWidget( "choose_server" );
		m_Stats						= new MainMenuStats( layoutRoot.FindAnyWidget("StatsBox"));
		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );
		m_ScenePC					= m_Mission.GetIntroScenePC();
		m_PlayerName				= TextWidget.Cast(layoutRoot.FindAnyWidget("character_name_text"));
		string version;

		// Background
		m_Background				= ImageWidget.Cast(layoutRoot.FindAnyWidget("ImageBackground"));
		m_Background.LoadImageFile(0, OrigemZHudVars.origemz_mainmenu_background);


		// Patrocinadores
		m_LogoRedDragon				= ImageWidget.Cast(layoutRoot.FindAnyWidget("LogoRedDragon"));
		m_LogoRedDragon.LoadImageFile(0, OrigemZHudVars.origemz_mainmenu_reddragon);

		m_LogoRedEcxon				= ImageWidget.Cast(layoutRoot.FindAnyWidget("LogoRedEcxon"));
		m_LogoRedEcxon.LoadImageFile(0, OrigemZHudVars.origemz_mainmenu_ecxon);
		
		GetGame().GetVersion( version );
		GetGame().GetUIManager().ScreenFadeOut(0);
		SetFocus( null );
		GetDayZGame().GetBacklit().MainMenu_OnShow();
		
		// Colorful UI Theming -----------------------------------------
		// Visual Elements
		m_welcomeBack.SetColor(colorScheme.WelcomeBack());
		m_SurvivorBox.SetColor(colorScheme.SurvivorBox());
		m_StatsBox.SetColor(colorScheme.StatsBox());
		m_TopShader.SetColor(colorScheme.TopShader());
		m_BottomShader.SetColor(colorScheme.BottomShader());
		m_MenuDivider.SetColor(colorScheme.Separator());
		m_SurvivorDivider.SetColor(colorScheme.Separator());

		// Top Nav Icons
		m_SettingsBtnImg.SetColor(colorScheme.NavIcon());
		m_TutorialBtnImg.SetColor(colorScheme.NavIcon());
		m_MessageBtnImg.SetColor(colorScheme.NavIcon());
		m_ExitBtnImg.SetColor(colorScheme.NavIcon());
		
		// Social Icons
		m_DiscordImg.SetColor(UIColor.discord());
		m_TwitterImg.SetColor(UIColor.twitter());
		m_YoutubeImg.SetColor(UIColor.youtube());
		m_RedditImg.SetColor(UIColor.reddit());
		m_FacebookImg.SetColor(UIColor.meta());
		m_MetaImg.SetColor(UIColor.meta());

		// This progress bar is just used as trim. 
		m_ProgressLoading = ProgressBarWidget.Cast( layoutRoot.FindAnyWidget("LoadingBar") );
		m_ProgressLoading.SetColor(colorScheme.Loadingbar());

		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );
		return layoutRoot;
	}
	
	protected void PlayHover()
	{
		if (!m_ScenePC)
			return;
		
		SEffectManager.PlaySoundOnObject(SOUND_HOVER, m_ScenePC.GetIntroCharacter().GetCharacterObj());
	}

	protected void PlayClick()
	{
		if (!m_ScenePC)
			return;
		
		SEffectManager.PlaySoundOnObject(SOUND_CLICK, m_ScenePC.GetIntroCharacter().GetCharacterObj());
	}

	override bool OnMouseLeave(Widget w, Widget enterW, int x, int y)
	{

		if (IsFocusable(w) || IsFocusableCustom(w))
		{
			ColorNormal(w);
			return true;
		}
		return false;
	}

	override bool OnClick(Widget w, int x, int y, int button)
	{
		PlayClick();
		if ( w == m_Discord )
		{
			GetGame().OpenURL(origem_urlDiscord);
			return true;
		}
		else if ( w == m_Twitter )
		{
			GetGame().OpenURL(origem_urlTwitter);
			return true;
		}
		else if ( w == m_Reddit )
		{
			GetGame().OpenURL(origem_urlReddit);
			return true;
		}
		else if ( w == m_Youtube )
		{
			GetGame().OpenURL(origem_urlYoutube);
			return true;
		}	
		else if (  w == m_Facebook )
		{
			GetGame().OpenURL(origem_urlFacebook);
			return true;
		}
		else if ( w == m_Website )
		{
			GetGame().OpenURL(origem_urlWebsite);
			return true;
		}
		else if ( w == m_PriorityQueue )
		{
			GetGame().OpenURL(origem_urlPriorityQ);
			return true;
		}
		else if ( w == m_CharacterBtn )
		{
			OpenMenuCustomizeCharacter();
			return true;
		}
		else if (w == m_TutorialBtn)
		{
			OpenTutorials();
			return true;
		}	
		else if ( w == m_SettingsBtn )
		{
			OpenSettings();
			return true;
		}
		else if ( w == m_MessageBtn )
		{
			OpenCredits();
			return true;
		}	
		else if ( w == m_ExitBtn )
		{
			Exit();
			return true;
		}		
		return super.OnClick(w, x, y, button);
	};

	override void ColorHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = colorScheme.ButtonHover();
		int color_img = colorScheme.ButtonHover();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}

	override void ColorNormal( Widget w )
	{
		if( !w )
			return;
		
		int color_pnl = UIColor.Transparent();
		int color_lbl = colorScheme.PrimaryText();
		int color_img = colorScheme.PrimaryText();

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);
	}

	void TwitterHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = UIColor.twitter();
		int color_img = UIColor.twitter();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}

	void DiscordHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = UIColor.discord();
		int color_img = UIColor.discord();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}

	void YoutubeHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = UIColor.youtube();
		int color_img = UIColor.youtube();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}

	void RedditHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = UIColor.reddit();
		int color_img = UIColor.reddit();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}

	void MetaHighlight( Widget w )
	{
		if( !w )
			return;	
			
		int color_pnl = UIColor.Transparent();
		int color_lbl = UIColor.meta();
		int color_img = UIColor.meta();	

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);	
	}
	
	override void LoadMods()
	{
		// Kill this annoying shit
	}
	
	override bool OnMouseEnter( Widget w, int x, int y )
	{
		
		if( w == m_CharacterBtn )
		{
			PlayHover();
			TwitterHighlight( w );
			return true;
		}
		if( w == m_Twitter )
		{
			PlayHover();
			TwitterHighlight( w );
			return true;
		}
		if( w == m_Facebook )
		{
			PlayHover();
			MetaHighlight( w );
			return true;
		}
		if( w == m_Meta )
		{
			PlayHover();
			MetaHighlight( w );
			return true;
		}
		if( w == m_Discord )
		{
			PlayHover();
			DiscordHighlight( w );
			return true;
		}
		if( w == m_Youtube )
		{
			PlayHover();
			YoutubeHighlight( w );
			return true;
		}
		if( w == m_Reddit )
		{
			PlayHover();
			RedditHighlight( w );
			return true;
		}
		if( IsFocusable( w ) || IsFocusableCustom(w))
		{
			PlayHover();
			ColorHighlight( w );
			return true;
		}
		return false;
	}

	override void Exit()
	{
		GetGame().GetUIManager().ShowDialog("#main_menu_exit", "#main_menu_exit_desc", IDC_MAIN_QUIT, DBT_YESNO, DBB_YES, DMT_QUESTION, this);
	}

	bool IsFocusableCustom(Widget w)
	{
		private bool focusable = false;
		if (!w)
			return false;

		if ( w == m_CharacterBtn || w == m_Twitter || w == m_Facebook || w == m_Meta || w == m_Discord || w == m_Youtube || w == m_Reddit || m_MessageBtn )
			focusable = true;
		
		return focusable;
	}
}