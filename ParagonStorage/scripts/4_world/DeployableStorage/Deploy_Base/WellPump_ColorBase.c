class Paragon_WellPump_ColorBase extends ItemBase
{
	override bool IsBuilding()
	{
		return false;
	}
	
	override bool IsWell()
	{
		return GetWaterSourceObjectType() == EWaterSourceObjectType.WELL;
	}
	
	override EWaterSourceObjectType GetWaterSourceObjectType()
	{
		return EWaterSourceObjectType.WELL;
	}
	
	override float GetLiquidThroughputCoef()
	{
		return LIQUID_THROUGHPUT_WELL;
	}
	
	override int GetLiquidSourceType()
	{
		return LIQUID_CLEANWATER;
	}

     override bool CanPutIntoHands( EntityAI parent )
	{
		return false;
	}
	
    override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWashHandsWell);
		AddAction(ActionDrinkWellContinuous);
	}
};

class Paragon_WellPump: Paragon_WellPump_ColorBase {};