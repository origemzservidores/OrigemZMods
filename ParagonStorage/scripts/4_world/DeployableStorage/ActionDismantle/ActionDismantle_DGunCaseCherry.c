class ActionDismantleDGunCaseCherryCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleDGunCaseCherry: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleDGunCaseCherry()
	{
		m_CallbackClass	= ActionDismantleDGunCaseCherryCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Double Gun Case";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_DGunCase_Cherry Paragon_DGunCase_Cherry1 = Paragon_DGunCase_Cherry.Cast(target.GetObject());
		
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_DGunCase_Cherry myItem = Paragon_DGunCase_Cherry.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_DGunCase_Cherry1 && !player.IsPlacingLocal())
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
		Paragon_DGunCase_Cherry targetParagon_DGunCase_Cherry = Paragon_DGunCase_Cherry.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_DGunCase_Cherry", action_data.m_Player.GetPosition(), false);
		targetParagon_DGunCase_Cherry.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
