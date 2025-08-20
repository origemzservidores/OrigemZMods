class GearStand_Case_ColorBase: OZ_Container_Base
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
	
	void GearStand_Case_ColorBase()
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
            SetAnimationPhase("door1",1.2);
        }
        else
        {
            SetAnimationPhase("door1",0);
        }
    }

	void SoundOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_CaseOpen_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_CaseClose_Soundset", GetPosition() );
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
	
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        ItemBase itemb = ItemBase.Cast( item );
        int idx = itemb.GetHiddenSelectionIndex("personality");
        if (idx > -1)
        {
            itemb.SetObjectTexture(idx, "");
            itemb.SetObjectMaterial(idx, "");
        }
        UpdateShoulderProxyVisibility(item, slot_name);     
    }
    void UpdateShoulderProxyVisibility(EntityAI item, string slot_name)
	{
		const int 						SIMPLE_SELECTION_MELEE_RIFLE = 0;
		const int 						SIMPLE_SELECTION_MELEE_MELEE = 1;
		const int 						SIMPLE_SELECTION_SHOULDER_RIFLE = 2;
		const int 						SIMPLE_SELECTION_SHOULDER_MELEE = 3;
		string slot = slot_name;
		bool boo;
		boo = item.IsWeapon();
		
		if ( slot == "Melee" )
		{
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_MELEE_RIFLE,boo);
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_MELEE_MELEE,!boo);
		}
		else if ( slot == "Shoulder" )
		{
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_SHOULDER_RIFLE,boo);
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_SHOULDER_MELEE,!boo);
		}
    }
};

class Paragon_GearStandC_B:	GearStand_Case_ColorBase {};
class Paragon_GearStandC_G:	GearStand_Case_ColorBase {};
class Paragon_GearStandC_C:	GearStand_Case_ColorBase {};