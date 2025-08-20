class OZM_Med_Pills_Salmonella : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(OZM_Action_TargetPills);
		AddAction(OZM_Action_SelfPills);
	}
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if (!consumer.GetModifiersManager().IsModifierActive(new_OZM_eModifiers.MDF_UGOL))
			consumer.GetModifiersManager().ActivateModifier(new_OZM_eModifiers.MDF_UGOL);
		
	}
}