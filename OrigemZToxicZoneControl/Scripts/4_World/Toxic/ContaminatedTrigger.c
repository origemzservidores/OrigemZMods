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
                Print("[DEBUG][Trigger] Player " + pb + " entrou em " + this.GetType());
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
                Print("[DEBUG][Trigger] Player " + pb + " saiu de " + this.GetType());
            }
        }
    }
}