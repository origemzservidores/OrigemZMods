class ActionDeleteContainerInstant: ActionInteractBase
{
	string m_ActionText = "Delete This Crap";
	
	void ActionDeleteContainerInstant()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
	}

	override string GetText()
	{
		return m_ActionText;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
		DeployableContainer_Base casted_target;
		
		Object action_target = target.GetObject();

		if (action_target)
		{
			if(Class.CastTo(casted_target, action_target))
			{
				if ( !casted_target.IsContainerEmpty() )
				{
					return true;            
				}
			}
			else
			{
				Dumpster_ColorBase dumpster_target = Dumpster_ColorBase.Cast(action_target);
				GraffitiCan_ColorBase graffiti_target = GraffitiCan_ColorBase.Cast(action_target);
				if(dumpster_target || graffiti_target)
				{
					if(dumpster_target.IsOpen() && !dumpster_target.IsInvEmpty() || graffiti_target.IsOpen() && !graffiti_target.IsInvEmpty())
					{
						return true;
					}
					return false;
				}
				return false;
			}
			return false;
		}
		return false;
    }
	
	override void OnExecuteServer(ActionData action_data)
	{
		DeployableContainer_Base is_item;
		Dumpster_ColorBase dumpster_target;
		GraffitiCan_ColorBase graffiti_target;
		
		Object targetObject = action_data.m_Target.GetObject();
		
		if (Class.CastTo(is_item, targetObject))
		{
			is_item.DeleteAllItemsInContainer();
			return;
		}

		if (Class.CastTo(dumpster_target, targetObject))
		{
			dumpster_target.DeleteAllItemsInContainer();
			return;
		}
		
		if (Class.CastTo(graffiti_target, targetObject))
		{
			graffiti_target.DeleteAllItemsInContainer();
			return;
		}
	}
};