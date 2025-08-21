class ActionDeleteFireplaceByHandsCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 5 );
	}
};

class ActionDeleteFireplaceByHands: ActionContinuousBase
{	
	void ActionDeleteFireplaceByHands()
	{
		m_CallbackClass = ActionDeleteFireplaceByHandsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINone;		
	}
		
	override string GetText()
	{
		return "Desmontar Grill";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( GetGame().IsMultiplayer() && GetGame().IsServer() )
			return true;
			
		FireplaceBase target_object = FireplaceBase.Cast(target.GetObject());
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
}