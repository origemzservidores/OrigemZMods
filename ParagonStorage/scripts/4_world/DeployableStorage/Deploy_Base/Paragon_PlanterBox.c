class Paragon_PlanterBox: GardenBase
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
	
	override int GetGardenSlotsCount()
	{
		return 3;
	}
	
	void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
	}

    override void OnPlacementStarted( Man player )
	{
		RefreshSlots();
	}
	
	override void OnHologramBeingPlaced( Man player )
	{
		RefreshSlots();
	}
};