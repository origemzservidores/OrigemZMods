modded class MissionGameplay
{
	private ref Widget LogoRootWidget;
	private ref ImageWidget LogoWidget;

	private bool LogoEnabled;
	
	void ~MissionGameplay()
	{
		delete LogoRootWidget;
		delete LogoWidget;
	}

	override void OnMissionStart()
    {
        super.OnMissionStart();

		LogoRootWidget = GetGame().GetWorkspace().CreateWidgets("OrigemZUI/Data/OrigemLayout.layout");
		LogoWidget = ImageWidget.Cast(LogoRootWidget.FindAnyWidget("logoWidget"));
		LogoWidget.Show(true);
    }

	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);

		if (!LogoRootWidget || !LogoWidget) 
		{
			return;
		}

		if (GetGame().GetInput().LocalPress("OZ_ToggleLogo", true))
		{
			LogoEnabled = !LogoWidget.IsVisible();
		}
		
		//if (IsControlDisabled() || IsPaused() || m_Hud.IsHideHudPlayer() || !m_Hud.GetHudState() || !LogoEnabled || !GetGame().GetPlayer())
		if (!GetGame().GetPlayer() || IsPaused()) 
		{
			if (LogoWidget.IsVisible())
			{
				LogoWidget.Show(false);
			}
			return;
		}

		if (!LogoWidget.IsVisible())
		{
			LogoWidget.Show(true);
		}
	}
}