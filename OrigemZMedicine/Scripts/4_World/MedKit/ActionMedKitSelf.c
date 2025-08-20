class ActionMedKitSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time = 30;
		m_ActionData.m_ActionComponent = new CAContinuousTime( time );
	}
}

class ActionMedKitSelf: ActionBandageSelf
{
    void ActionMedKitSelf()
    {
        m_CallbackClass 	= ActionMedKitSelfCB;
        // m_CommandUID        = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody 			= true;
		m_StanceMask 		= DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    }

    override void CreateConditionComponents()  
	{		
		m_ConditionItem 	= new CCINonRuined();
		m_ConditionTarget 	= new CCTSelf();
	}

    override string GetText()
    {
        return "#apply";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (player)
        {
            // if (player.GetHealth("", "Health") < player.GetMaxHealth("", "Health"))
            //     return true;

            // if (player.GetHealth("", "Blood") < player.GetMaxHealth("", "Blood"))
            //     return true;
            return true;
        }
       
        return false;
	}

    override void OnFinishProgressServer(ActionData action_data)
	{	
		PlayerBase target = PlayerBase.Cast(action_data.m_Player);
		if (action_data.m_MainItem && target)
				ApplyBandage(action_data.m_MainItem, target);
	}

    void ApplyBandage( ItemBase item, PlayerBase player )
    {
        item.OnApply( player );

        item.Delete();
    }
}