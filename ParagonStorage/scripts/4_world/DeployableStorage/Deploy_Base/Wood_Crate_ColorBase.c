class Wood_Crate_ColorBase: DeployableContainer_Base
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
	
	void Wood_Crate_ColorBase()
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

	
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
	
	override void SetActions()
	{
		super.SetActions();
	}
};

class Paragon_Wood_Crate:	Wood_Crate_ColorBase {};