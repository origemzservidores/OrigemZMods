modded class PlayerBase
{
    protected ref array<ContaminatedTrigger> m_ActiveContaminatedTriggers = new array<ContaminatedTrigger>();

    ref array<ContaminatedTrigger> GetActiveContaminatedTriggers()
    {
        return m_ActiveContaminatedTriggers;
    }

    void AddContaminatedTrigger(ContaminatedTrigger trig)
    {
        if (!m_ActiveContaminatedTriggers)
            m_ActiveContaminatedTriggers = new array<ContaminatedTrigger>();
        if (m_ActiveContaminatedTriggers.Find(trig) == -1)
            m_ActiveContaminatedTriggers.Insert(trig);
    }

    void RemoveContaminatedTrigger(ContaminatedTrigger trig)
    {
        if (!m_ActiveContaminatedTriggers)
            return;
        m_ActiveContaminatedTriggers.RemoveItem(trig);
    }

    bool IsInStaticContaminatedTrigger()
    {
        if (!m_ActiveContaminatedTriggers)
            return false;
        foreach (ContaminatedTrigger trig : m_ActiveContaminatedTriggers)
        {
            if (trig && trig.IsInherited(ContaminatedTrigger) && !trig.IsInherited(ContaminatedTrigger_Dynamic) && !trig.IsInherited(ContaminatedTrigger_Local))
                return true;
        }
        return false;
    }
}