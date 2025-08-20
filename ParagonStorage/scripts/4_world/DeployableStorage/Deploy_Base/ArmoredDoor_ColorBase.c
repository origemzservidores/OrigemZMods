class ArmoredDoor_ColorBase : OZ_Container_Base
{
	
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

	void ArmoredDoor_ColorBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		
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

		return true;
	}


	override void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("door",1.5);
        }
        else
        {
            SetAnimationPhase("door",0);
        }
    }

	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_SafeOpen_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_SafeClose_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return false;
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
	
	bool CanDisplayAttachmentSlot( int slot_id )
    {
        return IsOpen();
    }

	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionFurnitureOpen);
        AddAction(ActionFurnitureClose);
		#ifdef CodeLock
        AddAction(DMP_ActionInteractLock);
        AddAction(DMP_ManageLock);
        AddAction(DMP_ActionLockAdmin);
        AddAction(DMP_AttachCodeLock);
        AddAction(DMP_ActionDestroyCodeLock);
		#endif
	}
};


class Paragon_Adoor_Black:		ArmoredDoor_ColorBase {};
class Paragon_Adoor_Green:		ArmoredDoor_ColorBase {};
class Paragon_Adoor_Gold:		ArmoredDoor_ColorBase {};
class Paragon_Adoor_Blue:		ArmoredDoor_ColorBase {};
class Paragon_Adoor_Rainbow:	ArmoredDoor_ColorBase {};