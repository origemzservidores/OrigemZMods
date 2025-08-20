class ActionAI2Target: ActionBandageTarget
{
    void ActionAI2Target()
    {
        m_CallbackClass 	= ActionAI2CB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item.IsInherited( OZM_Ai2 ) && item.IsOpen();
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