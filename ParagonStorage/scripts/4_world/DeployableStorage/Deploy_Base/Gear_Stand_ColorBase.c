class GearStand_ColorBase: DeployableContainer_Base
{
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
	
	void WoodenCrate()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
	
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	
	override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return false;
	}
	
	override void SetActions()
	{
		AddAction(ActionAttachOnSelection);
		super.SetActions();
	}
	
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
	override bool CanDisplayAttachmentSlot( string slot_name )
	{
		return true;
	}
};

class Paragon_GearStand:	GearStand_ColorBase {};