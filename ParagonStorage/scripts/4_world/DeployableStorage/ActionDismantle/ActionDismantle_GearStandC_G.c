class ActionDismantleGearStandC_CCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleGearStandC_C: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleGearStandC_C()
	{
		m_CallbackClass	= ActionDismantleGearStandC_CCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Gear Stand Case";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_GearStandC_C Paragon_GearStandC_C1 = Paragon_GearStandC_C.Cast(target.GetObject());
		
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_GearStandC_C myItem = Paragon_GearStandC_C.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_GearStandC_C1 && !player.IsPlacingLocal())
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
		Paragon_GearStandC_C targetParagon_GearStandC_C = Paragon_GearStandC_C.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_GearStandC_C", action_data.m_Player.GetPosition(), false);
		targetParagon_GearStandC_C.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
