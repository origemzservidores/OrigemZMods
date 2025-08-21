class IceCeramFreezer_ColorBase : OZ_Container_Base
{
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;

    // Elétrico
    protected bool m_HavePower;
    PointLightBase m_Light;

    static const string START_SOUND = "frigeTurnOn_SoundSet";
    static const string LOOP_SOUND  = "frigeLoop_SoundSet";
    static const string STOP_SOUND  = "frigeTurnOff_SoundSet";

    protected EffectSound m_EngineLoop;
    protected EffectSound m_EngineStart;
    protected EffectSound m_EngineStop;
    ref Timer m_SoundLoopStartTimer;

	//↓↓↓ code to check if items are in the inventory or attached
	bool IsInvEmpty()
	{
		if (GetNumberOfItems() < 1 && GetInventory().AttachmentCount() < 1)
		{
			return true;
		}
		return false;
	}
	//↑↑↑ code to check if items are in the inventory or attached

	void IceCeramFreezer_ColorBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
        RegisterNetSyncVariableBool("m_HavePower");
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

		UpdateVisualState();

        // --- Parte elétrica / luz ---
        if (!m_HavePower)
        {
            if (m_Light)
                m_Light.FadeOut();
            m_Light = NULL;
        }
        if (m_HavePower)
        {
            if (!m_Light)
            {
                MakeLight();
            }
        }
	}

	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_IsOpened);
        ctx.Write(m_HavePower);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if (!super.OnStoreLoad(ctx, version))
			return false;

		if (!ctx.Read(m_IsOpened))
			return false;
        if (!ctx.Read(m_HavePower))
            return false;

		return true;
	}

	override void UpdateVisualState()
	{
		if (IsOpen())
		{
			SetAnimationPhase("door",1.15);
		}
		else
		{
			SetAnimationPhase("door",0);
		}
	}

	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound("Paragon_FridgeOpen_Soundset", GetPosition());
		sound.SetSoundAutodestroy(true);
	}

	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound("Paragon_FridgeClose_Soundset", GetPosition());
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

	// ---- PARTE ELÉTRICA ----

    bool IsWorkingNow()
    {
        return m_HavePower;
    }

    override bool IsElectricAppliance()
    {
        return true;
    }

    override void OnWorkStart()
    {
        m_HavePower = true;
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
        m_HavePower = false;
        SetSynchDirty();
        if (GetGame().IsClient() || !GetGame().IsMultiplayer())
        {
            PlaySoundSet(m_EngineStop, STOP_SOUND, 0, 0);
            StopSoundSet(m_EngineLoop);
        }
    }

    void MakeLight()
    {
        m_Light = PointLightBase.Cast(ScriptedLightBase.CreateLight(PointLightBase, "0 0 0"));
        m_Light.AttachOnMemoryPoint(this, "light");
        m_Light.SetAmbientColor(0.9, 0.9, 1.0);
        m_Light.SetDiffuseColor(0.9, 0.9, 1.0);
        m_Light.SetRadiusTo(7.5);
        m_Light.SetBrightnessTo(3.5);
    }

    override void EEDelete(EntityAI parent)
    {
        super.EEDelete(parent);
        if (!GetGame().IsMultiplayer() || GetGame().IsClient())
        {
            if (m_Light)
                m_Light.FadeOut();
            m_Light = NULL;
        }
    }

    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        m_HavePower = false;
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

class Paragon_IC_Freezer:	IceCeramFreezer_ColorBase {};