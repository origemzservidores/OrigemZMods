class AdrenalineMdfr: ModifierBase
{
	const int LIFETIME = 90;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= new_OZM_eModifiers.MDF_ADRENALINE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 10;
		DisableActivateCheck();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
		if ( player.GetNotifiersManager() ) player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
		// m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.MORPHINE;
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		if ( player.GetNotifiersManager() ) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
		// m_Player.m_InjuryHandler.m_ForceInjuryAnimMask = m_Player.m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.MORPHINE;
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		if( attached_time >= LIFETIME)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		if (!player)
			return;

		// heal 10% of max health every 5 seconds
		float curren_heath = player.GetHealth("GlobalHealth", "Health");
		float max_health = player.GetMaxHealth("GlobalHealth", "Health");

		if (curren_heath <= max_health * 0.8)
		{
			player.AddHealth("GlobalHealth", "Health", max_health * 0.1);
		}
	}

};