class OZM_Med_Pills_Disearse : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(OZM_Action_TargetPills);
		AddAction(OZM_Action_SelfPills);
	}
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(new_OZM_eModifiers.MDF_OZM_Antibiotick)) //effectively resets the timer
			consumer.GetModifiersManager().DeactivateModifier(new_OZM_eModifiers.MDF_OZM_Antibiotick);

		consumer.GetModifiersManager().ActivateModifier(new_OZM_eModifiers.MDF_OZM_Antibiotick);
	}
}