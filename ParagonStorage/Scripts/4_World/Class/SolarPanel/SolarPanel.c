class Paragon_SolarPanel_ColorBase extends PowerGeneratorBase
{  
	override bool CanDisplayAttachmentSlot(int slot_id)
	{
		string slot_name = InventorySlots.GetSlotName(slot_id);

		if (slot_name == "SparkPlug")
		{
			return false;
		}
		return true;
	}
	//======================
	override float GetLiquidThroughputCoef()
	{
		return CurrentEnergy();
	}
	//-----------------------------
	
	//-----------------------------
	int CurrentTime()
	{
		int year, month, day, hour, minute;
		GetGame().GetWorld().GetDate(year, month, day, hour, minute);
		return hour;
	}
	//-----------------------------
	int CurrentEnergy()
	{
		return 999999;
	}
	//-----------------------------

	//-----------------------------
	void Paragon_SolarPanel_ColorBase()
	{
		SetEventMask(EntityEvent.INIT); // Enable EOnInit event

		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsPlaceSound");
	}
	//-----------------------------
	void ~Paragon_SolarPanel_ColorBase()
	{
		SEffectManager.DestroyEffect(m_Smoke);
	}
	//------------------------------
	// Sempre liga, ignora teto e horário
	void CheckDaylight()
	{
		if (GetGame().IsServer())
		{
			GetCompEM().SwitchOn();
		}
	}

	//-----------------------------
	void SetDaylightTimer()
	{
		float delay = 1;
		delay *= 1000; //! to milli/S

		GetGame().GetUpdateQueue(CALL_CATEGORY_GAMEPLAY).Insert(CheckDaylight, delay);
	}

	//-----------------------------
	override void EOnInit(IEntity other, int extra)
	{
		if (GetGame().IsServer())
		{
			SetSynchDirty();
		}
	}
	//-----------------------------
	// Play the loop sound
	override void StartLoopSound()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (GetCompEM().IsWorking())
			{
				PlaySoundSetLoop(m_EngineLoop, LOOP_SOUND, 0, 0);

				// Particle
				vector local_pos = "0.3 0.21 0.4";
				vector local_ori = "270 0 0";
				m_Smoke = null;
				SEffectManager.PlayOnObject(null, this, local_pos, local_ori);
			}
		}
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	// Init
	override void OnInitEnergy()
	{

	}

	// Generator is working
	override void OnWorkStart()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (IsInitialized())
			{
				//PlaySoundSet(m_EngineStart, START_SOUND, 0, 0);
			}

			if (!m_SoundLoopStartTimer)
			{
				//m_SoundLoopStartTimer = new Timer(CALL_CATEGORY_SYSTEM);
			}

			if (!m_SoundLoopStartTimer.IsRunning()) // Makes sure the timer is NOT running already
			{
				//m_SoundLoopStartTimer.Run(1.5, this, "", NULL, false);
			}
		}

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.SetDefferedActive(true, 20.0);
		}
	}

	// Do work
	override void OnWork(float consumed_energy)
	{
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.Update(m_UTSSettings, m_UTSLEngine);
		}

		if (GetGame().IsServer())
		{
			SetSynchDirty();
		}
	}

	// Turn off when this runs out of fuel
	override void OnWorkStop()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			
		}

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.SetDefferedActive(false, 20.0);
		}
	}

	// Called when this generator is picked up
	override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
	{
		super.OnItemLocationChanged(old_owner, new_owner);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);

		ItemBase item_IB = ItemBase.Cast(item);

		if (item_IB.IsKindOf("Sparkplug") && IsInitialized())
		{
			ShowSelection("sparkplug_installed");

            #ifndef SERVER
			EffectSound sound = SEffectManager.PlaySound(SPARKPLUG_ATTACH_SOUND, GetPosition());
			sound.SetAutodestroy(true);
            #endif
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);

		ItemBase item_IB = ItemBase.Cast(item);

		if (item_IB.IsKindOf("Sparkplug"))
		{
			HideSelection("sparkplug_installed");
			GetCompEM().SwitchOff();

            #ifndef SERVER
			EffectSound sound = SEffectManager.PlaySound(SPARKPLUG_DETACH_SOUND, GetPosition());
			sound.SetAutodestroy(true);
            #endif
		}
	}
	//-----------------------------
	override void EEInit()
	{
		super.EEInit();

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSSettings = new UniversalTemperatureSourceSettings();
			m_UTSSettings.m_ManualUpdate = true;
			m_UTSSettings.m_TemperatureMin = 0;
			m_UTSSettings.m_TemperatureMax = 100;
			m_UTSSettings.m_RangeFull = 1;
			m_UTSSettings.m_RangeMax = 2.5;
			m_UTSSettings.m_TemperatureCap = 8;
			// CORRIGIDO: Use o tipo correto para o Lambda
			m_UTSLEngine = new UniversalTemperatureSourceLambdaConstant();
			m_UTSource = new UniversalTemperatureSource(this, m_UTSSettings, m_UTSLEngine);
			GetCompEM().SwitchOn();

			SetDaylightTimer();
		}
	}
	
	override float AddFuel(float available_fuel)
	{
		if (available_fuel == 0)
		{
			return 0;
		}

		float needed_fuel = GetMaxFuel() - GetFuel();

		if (needed_fuel > available_fuel)
		{
			SetFuel(GetFuel() + available_fuel);
			return available_fuel; // Return used fuel amount
		}
		else
		{
			SetFuel(GetMaxFuel());
			return needed_fuel;
		}
	}

	// Check the bottle if it can be used to fill the tank
	override bool CanAddFuel(ItemBase container)
	{
		return false;
	}

	// Returns fuel amount
	override float GetFuel()
	{
		return CurrentEnergy();
	}

	// Returns max fuel amount
	override float GetMaxFuel()
	{
		return CurrentEnergy();
	}

	// Checks sparkplug
	override bool HasSparkplug()
	{
		int slot = InventorySlots.GetSlotIdFromString("SparkPlug");
		EntityAI ent = GetInventory().FindAttachment(slot);

		return ent && !ent.IsRuined();
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		UpdateFuelMeter();

		if (IsPlaceSound())
		{
			PlayPlaceSound();
		}
	}

	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPullOutPlug);
	}

	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if (Class.CastTo(entity, this))
		{
			entity.GetInventory().CreateInInventory("SparkPlug");
		}

		SetFuel(GetMaxFuel());
	}
}
class Paragon_SolarPanel extends Paragon_SolarPanel_ColorBase {};