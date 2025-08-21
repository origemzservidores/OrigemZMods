class ActionDisassembleGrillCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 20 );
	}
};

class ActionDisassembleGrill: ActionContinuousBase
{	
	void ActionDisassembleGrill()
	{
		m_CallbackClass = ActionDisassembleGrillCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;;
		m_ConditionTarget = new CCTDummy( );	
	}
		
	override string GetText()
	{
		return "Desmontar";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Paragon_Grill_ColorBase target_object = Paragon_Grill_ColorBase.Cast(target.GetObject());
		if ( target_object )
		{
			int attCount = target_object.GetInventory().AttachmentCount();
			if (target_object.HasAnyCargo() || (attCount!=0))
			{
				return false;
			}
			return true;
		}
		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		Object target_object = action_data.m_Target.GetObject();
		vector pos = action_data.m_Player.GetPosition();

		GetGame().CreateObject("StorageBox_Grill", pos, false);
		GetGame().ObjectDelete(target_object);
	}
} 