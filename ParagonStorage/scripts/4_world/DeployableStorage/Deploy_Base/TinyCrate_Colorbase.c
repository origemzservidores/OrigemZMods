class TinyCrate_ColorBase : OZ_Container_Base
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

	void TinyCrate_ColorBase()
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
            SetAnimationPhase("lid",0.85);
        }
        else
        {
            SetAnimationPhase("lid",0);
        }
    }

	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_CrateOpen_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_CrateClose_Soundset", GetPosition() );
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


	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionOpenCloseSC);
	}
};

class Paragon_TinyCrate_Black:	TinyCrate_ColorBase {};
class Paragon_TinyCrate_Grey:	TinyCrate_ColorBase {};
class Paragon_TinyCrate_Tan:	TinyCrate_ColorBase {};
class Paragon_TinyCrate_Green:	TinyCrate_ColorBase {};
class Paragon_TinyCrate_Blue:	TinyCrate_ColorBase {};