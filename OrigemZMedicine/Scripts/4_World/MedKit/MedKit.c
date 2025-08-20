class OZM_Med_MedKit extends ItemBase
{
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
        AddAction( ActionMedKitSelf );
        AddAction( ActionMedKitTarget );
    }

    override void OnApply( PlayerBase player )
    {
        // remove all bleeding sources
        if (player.GetBleedingManagerServer() )
        {
            int STOP_N_BLEEDS = player.GetBleedingSourceCount();

            for ( int i = 0; i < STOP_N_BLEEDS; i++ )
            {
                player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx( this );
            }
        }
        
        // Add max health
        player.SetHealth( "", "Health", player.GetMaxHealth( "", "Health" ) );
        // Add 80% of blood
        player.SetHealth( "", "Blood", player.GetMaxHealth( "", "Blood" ) );
    }
}