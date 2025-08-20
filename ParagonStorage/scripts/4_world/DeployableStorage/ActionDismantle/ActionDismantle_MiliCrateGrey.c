class ActionDismantleMiliCrateGreyCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat( UATimeSpent.DEFAULT_DESTROY/ActionDestroyPart.Cast(m_ActionData.m_Action).CYCLES );
	}
};

class ActionDismantleMiliCrateGrey: ActionContinuousBase
{
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;//new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	void ActionDismantleMiliCrateGrey()
	{
		m_CallbackClass	= ActionDismantleMiliCrateGreyCB;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
	}

	override string GetText()
	{
		return "Dismantle Miliary Crate";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		Paragon_MiliCrate_Grey Paragon_MiliCrate_Grey1 = Paragon_MiliCrate_Grey.Cast(target.GetObject());

		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			Paragon_MiliCrate_Grey myItem = Paragon_MiliCrate_Grey.Cast( targetObject );
			if(myItem)
			{
				if(!myItem.IsInvEmpty()) return false;
					return true;
			}
		}

		if (myItem && Paragon_MiliCrate_Grey1 && !player.IsPlacingLocal())
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
		Paragon_MiliCrate_Grey targetParagon_MiliCrate_Grey = Paragon_MiliCrate_Grey.Cast(action_data.m_Target.GetObject());
		GetGame().CreateObject("StorageBox_MiliCrate_Grey", action_data.m_Player.GetPosition(), false);
		targetParagon_MiliCrate_Grey.Delete();


		if (GetGame().IsServer())
			MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 10);
	}
};
