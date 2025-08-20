class OZM_Med_Pills_Curu : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(OZM_Action_TargetPills);
		AddAction(OZM_Action_SelfPills);
	}
}