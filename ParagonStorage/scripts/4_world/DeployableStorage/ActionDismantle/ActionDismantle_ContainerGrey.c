class ActionDismantleContainerGreyCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleContainerGrey: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleContainerGrey()
	{
		m_CallbackClass	= ActionDismantleContainerGreyCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Cargo Container";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_Container_Grey Paragon_Container_Grey1 = Paragon_Container_Grey.Cast(target.GetObject());

		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_Container_Grey myItem = Paragon_Container_Grey.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_Container_Grey1 && !player.IsPlacingLocal())
			return true;
		else
			return false;
	}

	void SetupAnimation( ItemBase item )
	{
		if ( item )
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		}
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		Paragon_Container_Grey targetParagon_Container_Grey = Paragon_Container_Grey.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_Container_Grey", action_data.m_Player.GetPosition(), false);
		targetParagon_Container_Grey.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
