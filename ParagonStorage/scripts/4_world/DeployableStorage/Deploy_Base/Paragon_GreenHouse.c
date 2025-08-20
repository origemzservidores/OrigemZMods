class Paragon_GreenHouse: GardenBase
{
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;
	
	//↓↓↓ code to check if items are in the inventory or attached
	bool IsInvEmpty()
	{		//↓↓ Item check 						  //Attachment Check
		if (GetNumberOfItems() < 1 &&  GetInventory().AttachmentCount() < 1)
		{
			return true;
		}
		return false;
	}
	//↑↑↑ code to check if items are in the inventory or attached
	
	void Paragon_GreenHouse()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		
	}

	override void EEInit()
	{
		super.EEInit();
        if(IsOpen())
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Open()
	{
		m_IsOpened = true;
		//SoundSynchRemote();
		SetSynchDirty();
		UpdateVisualState();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Close()
	{
		m_IsOpened = false;
		//SoundSynchRemote();
		SetSynchDirty();
		UpdateVisualState();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override bool IsOpen()
	{
		return m_IsOpened;
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if ( m_IsOpened != m_IsOpenedLocal )
		{
			if ( IsOpen() /*&& IsSoundSynchRemote()*/ && !IsBeingPlaced() )
			{
				SoundOpenPlay();
			}

			if ( !IsOpen() /*&& IsSoundSynchRemote()*/ && !IsBeingPlaced() )
			{
				SoundClosePlay();
			}
			m_IsOpenedLocal = m_IsOpened;
		}

		UpdateVisualState();
	}

	override void OnStoreSave( ParamsWriteContext ctx )
	{
		super.OnStoreSave( ctx );
		ctx.Write( m_IsOpened );
	}

	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;

		if (!ctx.Read( m_IsOpened ) )
			return false;

		if ( m_IsOpened )
			Open();
		else
			Close();

		return true;
	}


	void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Door1",1);
        }
        else
        {
            SetAnimationPhase("Door1",0);
        }
    }

	void SoundOpenPlay()
	{
	}
	
	void SoundClosePlay()
	{
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		return IsOpen();
	}

	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen();
	}
	
	override int GetGardenSlotsCount()
	{
		return 9;
	}
	
	void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
		HideSelection("SeedBase_4");
		HideSelection("SeedBase_5");
		HideSelection("SeedBase_6");
		HideSelection("SeedBase_7");
		HideSelection("SeedBase_8");
		HideSelection("SeedBase_9");
	}

    override void OnPlacementStarted( Man player )
	{
		RefreshSlots();
	}
	
	override void OnHologramBeingPlaced( Man player )
	{
		RefreshSlots();
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpenCloseGreenHouse);
	}
};