modded class IngameHud
{
    protected Widget m_Trophy_Widget;
    protected ImageWidget m_Trophy_Image;
    protected TextWidget m_Trophy_Text;
    protected bool m_TrophyWidgetInitialized = false;
    protected string m_TrophyString = "0";

    static bool g_TrophyEnabled = false; // Pega o estado de ativação dos troféus do servidor para poder transferir pro cliente

    void IngameHud()
    {
        GetRPCManager().AddRPC("OrigemZ_Trophy", "UpdateTrophyCount", this, SingleplayerExecutionType.Client);
        GetRPCManager().AddRPC("OrigemZ_Trophy", "SyncTrophyEnable", this, SingleplayerExecutionType.Client);
        InitTrophyWidget(); // Sempre inicializa o widget ao criar o HUD
    }

    void SyncTrophyEnable(CallType type, ref ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type == CallType.Client)
        {
            Param1<bool> param;
            if (ctx.Read(param))
            {
                g_TrophyEnabled = param.param1;
                // Atualiza visibilidade do widget imediatamente após receber o valor
                UpdateTrophyWidgetVisibility();
            }
        }
    }

    void InitTrophyWidget()
    {
        if (!m_TrophyWidgetInitialized)
        {
            m_Trophy_Widget = GetGame().GetWorkspace().CreateWidgets("OrigemZTrophy/Data/Hud/TrophyCount.layout");
            m_Trophy_Image = ImageWidget.Cast(m_Trophy_Widget.FindAnyWidget("Trophy"));
            m_Trophy_Text = TextWidget.Cast(m_Trophy_Widget.FindAnyWidget("Count"));
            m_TrophyWidgetInitialized = true;
            m_Trophy_Widget.Show(false); // Inicialmente escondido
        }
    }

    void UpdateTrophyWidget(int trophyCount)
    {
        m_TrophyString = trophyCount.ToString();
        if (!m_TrophyWidgetInitialized)
            InitTrophyWidget();
        if (m_Trophy_Widget && m_Trophy_Text)
            m_Trophy_Text.SetText(m_TrophyString);
    }

    override void ShowHudInventory(bool show)
    {
        super.ShowHudInventory(show);
        UpdateTrophyWidgetVisibility(show);
    }

    void UpdateTrophyWidgetVisibility(bool show = false)
    {
        if (!m_TrophyWidgetInitialized) return;

        if (g_TrophyEnabled && show)
            ShowTrophyWidget();
        else
            HideTrophyWidget();
    }

    void HideTrophyWidget()
    {
        if (m_Trophy_Widget)
            m_Trophy_Widget.Show(false);
    }

    void ShowTrophyWidget()
    {
        if (m_Trophy_Widget)
            m_Trophy_Widget.Show(true);
    }

    void UpdateTrophyCount(CallType type, ref ParamsReadContext ctx, PlayerIdentity sender, Object target)
    {
        if (type == CallType.Client)
        {
            Param1<int> paramsData;
            if (ctx.Read(paramsData))
            {
                int trophyCount = paramsData.param1;
                UpdateTrophyWidget(trophyCount);
            }
        }
    }
};