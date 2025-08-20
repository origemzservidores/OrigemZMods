class ActionAI2CB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time = 15;
		if (m_ActionData.m_MainItem.IsKindOf("OZM_Ai2"))
            time = 5;
        
        if (m_ActionData.m_MainItem.IsKindOf("OZM_Ai2_Army"))
            time = 10;
			
		m_ActionData.m_ActionComponent = new CAContinuousTime( time );
	}
}

class ActionAI2ArmySelf: ActionBandageSelf
{
    void ActionAI2ArmySelf()
    {
        m_CallbackClass 	= ActionAI2CB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item.IsInherited( OZM_Ai2_Army ) && item.IsOpen();
    }

    override string GetText()
    {
        return "#apply";
    }

    override void ApplyBandage( ItemBase item, PlayerBase player )
    {
        item.OnApply( player );

        item.Delete();
    }
}