class IceCeramFreezer_ColorBase : OZ_Container_Base
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

	void IceCeramFreezer_ColorBase()
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

		if (m_IsOpened != m_IsOpenedLocal)
		{
			if (IsOpen() /*&& IsSoundSynchRemote()*/ && !IsBeingPlaced())
			{
				SoundOpenPlay();
			}

			if (!IsOpen() /*&& IsSoundSynchRemote()*/ && !IsBeingPlaced())
			{
				SoundClosePlay();
			}
			m_IsOpenedLocal = m_IsOpened;
		}

		UpdateVisualState();
	}

	override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		ctx.Write(m_IsOpened);
	}

	override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if (!super.OnStoreLoad(ctx, version))
			return false;

		if (!ctx.Read(m_IsOpened))
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
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_FridgeOpen_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "Paragon_FridgeClose_Soundset", GetPosition() );
		sound.SetSoundAutodestroy( true );
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

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionOpenCloseSC);
	}
};

class Paragon_IC_Freezer:	IceCeramFreezer_ColorBase {};
