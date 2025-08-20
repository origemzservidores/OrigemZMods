class OZM_Med_Adrenaline: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAdrenalineTarget);
		AddAction(ActionAdrenalineSelf);
	}
	
	override void OnApply(PlayerBase player)
	{
		if (!player)
			return;
			
		if( player.GetModifiersManager().IsModifierActive(new_OZM_eModifiers.MDF_ADRENALINE ) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( new_OZM_eModifiers.MDF_ADRENALINE );
		}

		player.GetModifiersManager().ActivateModifier( new_OZM_eModifiers.MDF_ADRENALINE );
	}
};
