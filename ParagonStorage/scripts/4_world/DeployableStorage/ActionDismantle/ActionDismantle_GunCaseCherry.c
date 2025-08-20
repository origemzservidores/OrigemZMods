class ActionDismantleGunCaseCherryCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleGunCaseCherry: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleGunCaseCherry()
	{
		m_CallbackClass	= ActionDismantleGunCaseCherryCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Gun Case";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_GunCase_Cherry Paragon_GunCase_Cherry1 = Paragon_GunCase_Cherry.Cast(target.GetObject());
		
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_GunCase_Cherry myItem = Paragon_GunCase_Cherry.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_GunCase_Cherry1 && !player.IsPlacingLocal())
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
		Paragon_GunCase_Cherry targetParagon_GunCase_Cherry = Paragon_GunCase_Cherry.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_GunCase_Cherry", action_data.m_Player.GetPosition(), false);
		targetParagon_GunCase_Cherry.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
