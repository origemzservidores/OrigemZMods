class ActionDismantleRdoorBlackCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleRdoorBlack: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleRdoorBlack()
	{
		m_CallbackClass	= ActionDismantleRdoorBlackCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Reinforced Door";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_Rdoor_Black Paragon_Rdoor_Black1 = Paragon_Rdoor_Black.Cast(target.GetObject());

		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_Rdoor_Black myItem = Paragon_Rdoor_Black.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_Rdoor_Black1 && !player.IsPlacingLocal())
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
		Paragon_Rdoor_Black targetParagon_Rdoor_Black = Paragon_Rdoor_Black.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_Rdoor_Black", action_data.m_Player.GetPosition(), false);
		targetParagon_Rdoor_Black.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
