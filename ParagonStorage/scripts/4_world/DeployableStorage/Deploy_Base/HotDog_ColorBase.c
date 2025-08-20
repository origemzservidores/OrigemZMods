class HotDog_ColorBase: DeployableContainer_Base
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
	
	//////////food only
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

        return new_entity.IsKindOf("Edible_Base");
    }
};

class Paragon_HotDog_Cart:	HotDog_ColorBase {};