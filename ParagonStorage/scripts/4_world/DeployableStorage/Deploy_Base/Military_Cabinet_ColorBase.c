class Military_Cabinet_ColorBase: DeployableContainer_Base
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
};

class Paragon_Mcabinet_Black:	Military_Cabinet_ColorBase {};
class Paragon_Mcabinet_Green:	Military_Cabinet_ColorBase {};
class Paragon_Mcabinet_Tan:		Military_Cabinet_ColorBase {};