modded class ContaminatedTrigger
{
    override void OnEnterServerEvent(TriggerInsider insider)
    {
        super.OnEnterServerEvent(insider);
        if (insider)
        {
            PlayerBase pb = PlayerBase.Cast(insider.GetObject());
            if (pb)
            {
                pb.AddContaminatedTrigger(this);
            }
        }
    }

    override void OnLeaveServerEvent(TriggerInsider insider)
    {
        super.OnLeaveServerEvent(insider);
        if (insider)
        {
            PlayerBase pb = PlayerBase.Cast(insider.GetObject());
            if (pb)
            {
                pb.RemoveContaminatedTrigger(this);
            }
        }
    }
}