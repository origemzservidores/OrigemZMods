class ActionMedKitTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time = 30;
		m_ActionData.m_ActionComponent = new CAContinuousTime( time );
	}
}

class ActionMedKitTarget: ActionBandageTarget
{
    void ActionMedKitTarget()
    {
        m_CallbackClass 	= ActionMedKitTargetCB;
        // m_CommandUID        = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody 			= true;
		m_StanceMask 		= DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    }

    override void CreateConditionComponents()  
	{	
		m_ConditionItem 	= new CCINonRuined();
		m_ConditionTarget 	= new CCTMan(UAMaxDistances.DEFAULT);
	}

    override string GetText()
    {
        return "#apply";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		PlayerBase otherPlayer = PlayerBase.Cast(target.GetObject());
		if (otherPlayer)
        {
			// if (otherPlayer.GetHealth("", "Health") < otherPlayer.GetMaxHealth("", "Health") || otherPlayer.GetHealth("", "Blood") < otherPlayer.GetMaxHealth("", "Blood"))
                return true;
        }
		
		return false;
	}

    override void OnFinishProgressServer(ActionData action_data)
	{	
		PlayerBase target = PlayerBase.Cast(action_data.m_Target.GetObject());
		
		if (action_data.m_MainItem && target)
		{
			if (CanReceiveAction(action_data.m_Target))
				ApplyBandage(action_data.m_MainItem, target);
		}
	}

    void ApplyBandage( ItemBase item, PlayerBase player )
    {
        item.OnApply( player );

        item.Delete();
    }
}