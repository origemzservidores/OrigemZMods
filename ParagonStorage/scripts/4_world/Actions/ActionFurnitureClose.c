class ActionFurnitureClose: ActionInteractBase
{
	void ActionFurnitureClose()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#close";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, DMP_UAConstants.DMP_DISTANCE_DEFAULT)) return false;

		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		ItemBase building = ItemBase.Cast(target.GetObject());
		if(!building) {
			return false;
		}
		
		#ifdef RA_BaseBuilding_Scripts
		if (building.IsCodeLocked(player.GetIdentity())) {
			return false;
		}
		#endif
			
		return building.IsOpen();
	}

	override void OnStartServer( ActionData action_data )
	{
		ItemBase building = ItemBase.Cast(action_data.m_Target.GetObject());
		if(building)		
		{	
			building.Close();
			return;
		}
	}
};