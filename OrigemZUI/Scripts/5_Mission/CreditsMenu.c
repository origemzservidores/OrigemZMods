modded class CreditsMenu extends UIScriptedMenu
{
    override Widget Init()
	{
		float x_f;
		int x, y;
		
		layoutRoot	= GetGame().GetWorkspace().CreateWidgets( "OrigemZUI/gui/layouts/new_ui/credits/credits.layout", null );
		m_Logo		= ImageWidget.Cast( layoutRoot.FindAnyWidget( "Logo" ) );
		m_Scroller	= ScrollWidget.Cast( layoutRoot.FindAnyWidget( "CreditsPanel" ) );
		m_Content	= WrapSpacerWidget.Cast( layoutRoot.FindAnyWidget( "CreditsContent" ) );
		m_InfoPanelText = RichTextWidget.Cast( layoutRoot.FindAnyWidget( "InfoPanelText" ) );
		m_InfoPanel = layoutRoot.FindAnyWidget( "InfoPanel" );
		
		GetScreenSize( x, y );
		
		m_MenuFadeInIncrement	= 1 / MENU_FADEIN_TIME;
		m_LogoFadeInIncrement	= 1 / LOGO_FADEIN_TIME;
		m_ScrollIncrement		= CREDIT_SCROLL_SPEED * ( y / 1080 );
		
		m_Scroller.VScrollToPos01( 0 );
		m_Scroller.GetScreenSize( x_f, m_ScrollSize );
		
		GetGame().GameScript.Call( this, "LoadDataAsync", null );
		
		UpdateInfoPanelText(GetGame().GetInput().GetCurrentInputDevice());
		
		return layoutRoot;
	}

    override void LoadDataAsync()
	{
		m_CreditsData = CustomCreditsLoader.GetData();
		for( int i = 1; i <= m_CreditsData.Departments.Count(); i++ )
		{
			ref CreditsDepartmentElement e = new CreditsDepartmentElement( i, m_Content, m_CreditsData.Departments.Get( i - 1 ) );
			m_CreditsEntries.Insert( e );
		}
		m_Content.Update();
	}
}