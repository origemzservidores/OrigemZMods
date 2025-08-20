class ActionDismantleMlockerBlackCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleMlockerBlack: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleMlockerBlack()
	{
		m_CallbackClass	= ActionDismantleMlockerBlackCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Military locker";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_Mlocker_Black Paragon_Mlocker_Black1 = Paragon_Mlocker_Black.Cast(target.GetObject());

		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_Mlocker_Black myItem = Paragon_Mlocker_Black.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_Mlocker_Black1 && !player.IsPlacingLocal())
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
		Paragon_Mlocker_Black targetParagon_Mlocker_Black = Paragon_Mlocker_Black.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_Mlocker_Black", action_data.m_Player.GetPosition(), false);
		targetParagon_Mlocker_Black.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
