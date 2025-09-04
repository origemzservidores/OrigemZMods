class Fridge_ColorBase : OZ_Container_Base
{
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;

	protected bool m_IsPower;

	static const string START_SOUND = "frigeTurnOn_SoundSet";
	static const string LOOP_SOUND = "frigeLoop_SoundSet";
	static const string STOP_SOUND = "frigeTurnOff_SoundSet";

	protected EffectSound m_EngineLoop;
	protected EffectSound m_EngineStart;
	protected EffectSound m_EngineStop;
	ref Timer m_SoundLoopStartTimer;

	bool IsInvEmpty()
	{
		if (GetNumberOfItems() < 1 && GetInventory().AttachmentCount() < 1)
		{
			return true;
		}
		return false;
	}

	void Fridge_ColorBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsPower");
	}

	override void EEInit() // Inicializa a geladeira assim que o servidor liga
	{
		super.EEInit();

		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			if (m_IsPower && !GetCompEM().IsWorking() && GetCompEM().CanWork())
			{
				GetCompEM().SwitchOn();
			}
		}
	}

	override bool IsOpen()
	{
		return m_IsOpened;
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if (m_IsOpened != m_IsOpenedLocal)
		{
			if (IsOpen() && !IsBeingPlaced())
			{
				SoundOpenPlay();
			}

			if (!IsOpen() && !IsBeingPlaced())
			{
				SoundClosePlay();
			}
			m_IsOpenedLocal = m_IsOpened;
		}

		// --- CORREÇÃO PARA O SOM ---
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (m_IsPower && GetCompEM().IsWorking())
			{
				// Se o som de loop não está tocando, inicie ele
				if (!m_EngineLoop || !m_EngineLoop.IsSoundPlaying())
				{
					PlaySoundSetLoop(m_EngineLoop, LOOP_SOUND, 0, 0);
				}
			}
			else
			{
				// Se não está ligada, garanta que o som pare
				if (m_EngineLoop && m_EngineLoop.IsSoundPlaying())
				{
					StopSoundSet(m_EngineLoop);
				}
			}
		}

		UpdateVisualState();
	}

	override void OnStoreSave(ParamsWriteContext ctx) // Salva se a geladeira estava aberta ou fechada e ligada ou desligada
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_IsOpened);
		ctx.Write(m_IsPower);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version) // Restaura o estado da geladeira
	{
		if (!super.OnStoreLoad(ctx, version))
			return false;

		if (!ctx.Read(m_IsOpened))
			return false;

		if (!ctx.Read(m_IsPower))
			return false;

		return true;
	}

	override void UpdateVisualState()
	{
		if (IsOpen())
		{
			SetAnimationPhase("door", 1.15);
		}
		else
		{
			SetAnimationPhase("door", 0);
		}
	}

	void SoundOpenPlay()
	{
		EffectSound sound = SEffectManager.PlaySound("Paragon_FridgeOpen_Soundset", GetPosition());
		sound.SetSoundAutodestroy(true);
	}

	void SoundClosePlay()
	{
		EffectSound sound = SEffectManager.PlaySound("Paragon_FridgeClose_Soundset", GetPosition());
		sound.SetSoundAutodestroy(true);
	}

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;

		return item.IsKindOf("Edible_Base");
	}

	override bool CanLoadItemIntoCargo(EntityAI item)
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;

		return item.IsKindOf("Edible_Base");
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
			return false;

		if (!IsOpen())
			return false;

		return new_entity.IsKindOf("Edible_Base");
	}

	override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return false;
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen();
	}

	bool IsWorkingNow() // Verifica se está ligada
	{
		return m_IsPower;
	}

	override bool IsElectricAppliance()
	{
		return true;
	}

	override void OnWorkStart()
	{
		m_IsPower = true;
		SetSynchDirty();

		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (IsInitialized())
			{
				PlaySoundSet(m_EngineStart, START_SOUND, 0, 0);
			}

			if (!m_SoundLoopStartTimer)
			{
				m_SoundLoopStartTimer = new Timer(CALL_CATEGORY_SYSTEM);
			}

			if (!m_SoundLoopStartTimer.IsRunning())
			{
				m_SoundLoopStartTimer.Run(1.5, this, "StartLoopSound", NULL, false);
			}
		}
	}

	void StartLoopSound()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (GetCompEM().IsWorking())
			{
				PlaySoundSetLoop(m_EngineLoop, LOOP_SOUND, 0, 0);
			}
		}
	}

	override void OnWorkStop()
	{
		m_IsPower = false;

		SetSynchDirty();

		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			PlaySoundSet(m_EngineStop, STOP_SOUND, 0, 0);
			StopSoundSet(m_EngineLoop);
		}
	}

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
	}

	override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		m_IsPower = false;
		SetSynchDirty();
	}

	string GetKit()
	{
		return ConfigGetString("kittype");
	}

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionOpenCloseSC);
		AddAction(ActionPlugIn);
		AddAction(ActionUnplugThisByCord);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
	}
};

class Paragon_Fridge_Black : Fridge_ColorBase{};
class Paragon_Fridge_White : Fridge_ColorBase{};