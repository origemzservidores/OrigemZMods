class OZM_Ai2_Army extends ItemBase
{
    static const int STOP_N_BLEEDS = 2;
    
    protected ref OpenableBehaviour m_Openable;

    void OZM_Ai2_Army()
    {
        m_Openable = new OpenableBehaviour(false);

        RegisterNetSyncVariableBool("m_Openable.m_IsOpened");

        UpdateVisualState();
    }
	
    override void Open()
    {
        m_Openable.Open();
        SetSynchDirty();

        UpdateVisualState();
    }

    override void Close()
    {
        m_Openable.Close();
        SetSynchDirty();

        UpdateVisualState();
    }

    override bool IsOpen()
    {
        return m_Openable.IsOpened();
    }

    protected void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase( "lid", 0.0 );
        }
        else
        {
            SetAnimationPhase( "lid", 1.0 );
        }
    }
    
    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();

        UpdateVisualState();
    }

    override float GetBandagingEffectivity()
    {
        return 1.0;
    }

    override float GetInfectionChance( int system = 0, Param param = null )
    {
        return 0.0;
    }

    override void SetActions()
    {
        super.SetActions();

        AddAction( ActionOpen );
        AddAction( ActionClose );
        AddAction( ActionAI2ArmySelf );
        AddAction( ActionAI2ArmyTarget );
    }

    override void OnApply( PlayerBase player )
    {
        if (!player)
			return;

        if (player.GetBleedingManagerServer() )
        {
            for ( int i = 0; i < STOP_N_BLEEDS; i++ )
            {
                player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx( this );
            }
        }

		// heal 50% of max health
		float curren_heath = player.GetHealth("GlobalHealth", "Health");
		float max_health = player.GetMaxHealth("GlobalHealth", "Health");

		if (curren_heath < max_health)
			player.AddHealth("GlobalHealth", "Health", max_health * 0.5);
    }
}