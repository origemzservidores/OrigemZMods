// Priority Queue ----------------------------------
modded class LoginQueueBase extends LoginScreenBase
{
    protected ImageWidget m_tShader;
    protected ImageWidget m_bShader;
    protected ProgressBarWidget m_ProgressLoading;
    protected ButtonWidget m_btnVip;

    override Widget Init()
    {    
        // Use CUI Layout    
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("OrigemZUI/gui/layouts/cui.dialog_queue_position.layout");
        // Vanilla Elements
        m_HintPanel = new UiHintPanelLoading(layoutRoot.FindAnyWidget("hint_frame0"));
        m_txtPosition = TextWidget.Cast(layoutRoot.FindAnyWidget("LoadingMsg"));
        m_txtNote = TextWidget.Cast(layoutRoot.FindAnyWidget("txtNote"));
        m_btnLeave = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnLeave"));
        m_btnVip = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnVip"));
        
        m_tShader = ImageWidget.Cast(layoutRoot.FindAnyWidget("TopShader"));
        m_bShader = ImageWidget.Cast(layoutRoot.FindAnyWidget("BottomShader"));
        m_ProgressLoading = ProgressBarWidget.Cast(layoutRoot.FindAnyWidget("LoadingBar"));
        
        m_btnLeave.SetColor(colorScheme.TipIcon());
        m_tShader.SetColor(colorScheme.TopShader());
        m_bShader.SetColor(colorScheme.BottomShader());
        m_ProgressLoading.SetColor(colorScheme.Loadingbar());

        return layoutRoot;
    }

    override bool OnClick(Widget w, int x, int y, int button)
	{
		if (w == m_btnVip)
		{
			GetGame().OpenURL(origem_urlPriorityQ);
			return true;
		}
		return super.OnClick(w, x, y, button);
	}

    override void SetPosition(int position)
    {
        if (position != m_iPosition)
        {
            m_iPosition = position;
            m_txtPosition.SetText("Position in Queue " + position.ToString());
            m_txtPosition.SetColor(colorScheme.LoadingMsg());
        }
    }
};

// Logging In Screen ------------------------------
modded class LoginTimeBase extends LoginScreenBase
{
    protected ImageWidget m_LSBackground;
    protected ImageWidget m_tShader;
    protected ImageWidget m_bShader;
    protected ImageWidget m_tipIcon;
    protected TextWidget m_loadingMsg;
    protected ImageWidget m_exitIcon;
    protected TextWidget m_ExitText;
    protected ProgressBarWidget m_ProgressLoading;

    override Widget Init()
    {
        // Use CUI Layout
        layoutRoot = GetGame().GetWorkspace().CreateWidgets("OrigemZUI/gui/layouts/cui.dialog_login_time.layout");
        // CUI 2.0 Elements
        m_LSBackground = ImageWidget.Cast(layoutRoot.FindAnyWidget("Background"));
        m_exitIcon = ImageWidget.Cast(layoutRoot.FindAnyWidget("Exit"));
        m_tShader = ImageWidget.Cast(layoutRoot.FindAnyWidget("TopShader"));
        m_bShader = ImageWidget.Cast(layoutRoot.FindAnyWidget("BottomShader"));
        m_loadingMsg = TextWidget.Cast(layoutRoot.FindAnyWidget("LoadingMsg"));
        m_LSBackground = ImageWidget.Cast(layoutRoot.FindAnyWidget("ImageBackground"));
        m_ProgressLoading = ProgressBarWidget.Cast(layoutRoot.FindAnyWidget("LoadingBar"));
        m_ExitText = TextWidget.Cast(layoutRoot.FindAnyWidget("ExitText"));
        // Vanilla Elements
        m_txtLabel = TextWidget.Cast(layoutRoot.FindAnyWidget("txtLabel"));
        m_btnLeave = ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnLeave"));
        // m_txtDescription.Show(true);
        // layoutRoot.FindAnyWidget("notification_root").Show(false);     
        // Theme the elements. 
        m_LSBackground.LoadImageFile(0, GetRandomBackground()); 
        m_ProgressLoading.SetColor(colorScheme.Loadingbar());
        m_tShader.SetColor(colorScheme.TopShader());
        m_bShader.SetColor(colorScheme.BottomShader());
        m_exitIcon.SetColor(colorScheme.TipIcon());
        m_txtLabel.SetColor(colorScheme.LoadingMsg());
        return layoutRoot;
    }

    override bool OnMouseEnter(Widget w, int x, int y)
    {
        if (w == m_btnLeave)
        {
            m_ExitText.SetColor(colorScheme.TipIcon());
            m_btnLeave.SetColor(UIColor.Transparent());
            return true;
        }
        return false;
    }
    
    override bool OnMouseLeave(Widget w, Widget enterW, int x, int y)
    {
        if (w == m_btnLeave)
        {
            m_ExitText.SetColor(colorScheme.PrimaryText());
            return true;
        }
        return false;
    }   
    
    // Change the wording in the countdown timer text
    override void SetTime(int time)
    {
        string text = "";
        TimeConversions.ConvertSecondsToFullTime(time, m_FullTime);
        if (!m_IsRespawn)
            text = "#menu_loading_in_";
        else
            text = "#dayz_game_spawning_in_";

        if (m_FullTime.m_Days > 0)
            text += "dhms";
        else if (m_FullTime.m_Hours > 0)
            text += "hms";
        else if (m_FullTime.m_Minutes > 0)
            text += "ms";
        else
            text += "s";
            
        text = Widget.TranslateString(text);
        text = string.Format(text, m_FullTime.m_Seconds, m_FullTime.m_Minutes, m_FullTime.m_Hours, m_FullTime.m_Days);
        m_txtLabel.SetText(text);
        
        if (m_IsRespawn && time <= 1)
            GetGame().SetLoginTimerFinished();
        // Change this text in quotes to whatever you want.
        m_txtLabel.SetText("JOINING IN " + time.ToString());
    }   
};

// Loading Screen (UH DUH!) --------------------
modded class LoadingScreen
{
    protected ImageWidget m_Background;
    protected ImageWidget m_tShader;
    protected ImageWidget m_bShader;
    protected ImageWidget m_tipIcon;
    protected TextWidget m_loadingMsg;

    void LoadingScreen(DayZGame game)
    {
        m_DayZGame = game;
        // Use the CUI 2.0 custom layout 
        m_WidgetRoot = game.GetLoadingWorkspace().CreateWidgets("OrigemZUI/gui/layouts/cui.loading.layout");
        
        // CUI 2.0 Elements
        Class.CastTo(m_tShader, m_WidgetRoot.FindAnyWidget("TopShader"));
        Class.CastTo(m_bShader, m_WidgetRoot.FindAnyWidget("BottomShader"));
        Class.CastTo(m_loadingMsg, m_WidgetRoot.FindAnyWidget("LoadingMsg"));
        
        // Load BG and Progress Bar
        m_Background = ImageWidget.Cast(m_WidgetRoot.FindAnyWidget("ImageBackground"));
        UpdateBackground();

        m_ProgressLoading = ProgressBarWidget.Cast(m_WidgetRoot.FindAnyWidget("LoadingBar"));
        ProgressAsync.SetProgressData(m_ProgressLoading);
        ProgressAsync.SetUserData(m_Background);
        m_Background.Show(true);
        
        // Theme the elements. 
        m_ProgressLoading.SetColor(colorScheme.Loadingbar());
        m_tShader.SetColor(colorScheme.TopShader());
        m_bShader.SetColor(colorScheme.BottomShader());
        m_loadingMsg.SetColor(colorScheme.LoadingMsg());
        
        // I plan to make this timed and show some silly loading comments from the community.
        // m_loadingMsg.SetText(m_DayZGame.GetLoadState().ToString());
        UpdateStatus();
    }

    override void SetTitle(string title)
    {
        // This function is intentionally left blank because it is no longer used.
    }

    override void Show()
    {
        // Use Random Background Images
        m_Background = ImageWidget.Cast(m_WidgetRoot.FindAnyWidget("ImageBackground"));        
        m_Background.LoadImageFile(0, GetRandomBackground()); 
    }

    void UpdateBackground()
    {
        // Use Random Background Images
        m_Background = ImageWidget.Cast(m_WidgetRoot.FindAnyWidget("ImageBackground"));        
        m_Background.LoadImageFile(0, GetRandomBackground()); 
    }

    void UpdateStatus()
    {
        DayZLoadState state = m_DayZGame.GetLoadState();
        switch (state)
        {
            case DayZLoadState.UNDEFINED:
                m_loadingMsg.SetText("LOADING GAME");
                break;
            case DayZLoadState.MAIN_MENU_START:
                m_loadingMsg.SetText("LOADING MAIN MENU");
                break;
            case DayZLoadState.MAIN_MENU_CONTROLLER_SELECT:
                m_loadingMsg.SetText("LOADING CHARACTER");
                break;
            case DayZLoadState.MAIN_MENU_USER_SELECT:
                m_loadingMsg.SetText("LOADING USER");
                break;
            case DayZLoadState.JOIN_START:
                m_loadingMsg.SetText("JOINING GAME");
                break;
            case DayZLoadState.JOIN_CONTROLLER_SELECT:
                m_loadingMsg.SetText("SELECTING CONTROLLER");
                break;
            case DayZLoadState.JOIN_USER_SELECT:
                m_loadingMsg.SetText("SELECTING USER");
                break;
            case DayZLoadState.PARTY_START:
                m_loadingMsg.SetText("STARTING PARTY");
                break;
            case DayZLoadState.PARTY_CONTROLLER_SELECT:
                m_loadingMsg.SetText("SELECTING PARTY CONTROLLER");
                break;
            case DayZLoadState.PARTY_USER_SELECT:
                m_loadingMsg.SetText("SELECTING PARTY USER");
                break;
            case DayZLoadState.CONNECT_START:
                m_loadingMsg.SetText("CONTACTING SERVER");
                break;
            case DayZLoadState.CONNECT_USER_SELECT:
                m_loadingMsg.SetText("SELECTING USER FOR CONNECTION");
                break;
            case DayZLoadState.CONNECT_CONTROLLER_SELECT:
                m_loadingMsg.SetText("SELECTING CONTROLLER FOR CONNECTION");
                break;
            case DayZLoadState.MISSION_START:
                m_loadingMsg.SetText("STARTING MISSION");
                break;
            case DayZLoadState.MISSION_USER_SELECT:
                m_loadingMsg.SetText("SELECTING USER FOR MISSION");
                break;
            case DayZLoadState.MISSION_CONTROLLER_SELECT:
                m_loadingMsg.SetText("SELECTING CONTROLLER FOR MISSION");
                break;
            default:
                m_loadingMsg.SetText("LOADING GAME");
                break;
        }

        UpdateBackground();
    }
};

modded class DayZGame
{
    override void SetLoadState(DayZLoadState state)
    {
        super.SetLoadState(state);
        m_loading.UpdateStatus();
        // m_loading.m_HintPanel.UpdateHintImage(); // hint panel nao is in ingamemnu only
    }

    // #ifdef EXPANSIONMODCORE
    //     override void Expansion_SetGameVersionText(TextWidget version_widget) {};
    // #endif
};