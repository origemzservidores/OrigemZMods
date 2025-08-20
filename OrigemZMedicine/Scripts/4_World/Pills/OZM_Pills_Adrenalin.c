// New modifier for the pills
class OZM_Med_Pills_Adrenalin : Edible_Base
{	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(OZM_Action_TargetPills);
		AddAction(OZM_Action_SelfPills);
	}
	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer.GetModifiersManager().IsModifierActive(new_OZM_eModifiers.MDF_ADRENALINE_PILLS))
		{ 
			HealPillsMdfr mdf = consumer.GetModifiersManager().GetModifier(new_OZM_eModifiers.MDF_ADRENALINE_PILLS);
			if (mdf)
			{
				mdf.SetAttachedTime(0);
				mdf.AddCumulativeHeals();
			}
		}
		else
		{
			consumer.GetModifiersManager().ActivateModifier(new_OZM_eModifiers.MDF_ADRENALINE_PILLS);
		}
	}
};

class AdrenalinePillsMdfr: ModifierBase
{
	const int LIFETIME = 10;
	int ACUMULATIVE_HEALS = 1;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= new_OZM_eModifiers.MDF_ADRENALINE_PILLS;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= 1;
		DisableActivateCheck();

	}

	
	void AddCumulativeHeals()
	{
		if (ACUMULATIVE_HEALS < 5) // Limit the number of heals to 5
			ACUMULATIVE_HEALS = ACUMULATIVE_HEALS + 1;
	}

	void RemoveCumulativeHels()
	{
		ACUMULATIVE_HEALS = ACUMULATIVE_HEALS - 1;
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
		ACUMULATIVE_HEALS = 1;
		if ( player.GetNotifiersManager() ) player.GetNotifiersManager().ActivateByType(eNotifiers.NTF_PILLS);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		ACUMULATIVE_HEALS = 1;
		if ( player.GetNotifiersManager() ) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		if( attached_time >= LIFETIME)
			return true;
		else
			return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		if (!player)
			return;

		// heal 10% of max health every 5 seconds
		float curren_heath = player.GetHealth("GlobalHealth", "Blood");
		float max_health = player.GetMaxHealth("GlobalHealth", "Blood");

		if (curren_heath < max_health)
			player.AddHealth("GlobalHealth", "Blood", (max_health * 0.002) * ACUMULATIVE_HEALS); // Healls 5% of max Blood in 10 seconds

	}
};