class ActionDismantleGunCaseBrownCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleGunCaseBrown: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleGunCaseBrown()
	{
		m_CallbackClass	= ActionDismantleGunCaseBrownCB;
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

		Paragon_GunCase_Brown Paragon_GunCase_Brown1 = Paragon_GunCase_Brown.Cast(target.GetObject());
		
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_GunCase_Brown myItem = Paragon_GunCase_Brown.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_GunCase_Brown1 && !player.IsPlacingLocal())
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
		Paragon_GunCase_Brown targetParagon_GunCase_Brown = Paragon_GunCase_Brown.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_GunCase_Brown", action_data.m_Player.GetPosition(), false);
		targetParagon_GunCase_Brown.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
