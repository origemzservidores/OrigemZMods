class Paragon_FuelPump_ColorBase extends ItemBase
{
    override bool IsBuilding()
	{
		return false;
	}
	
	override bool IsFuelStation()
	{
		return true;
	}
	
	override float GetLiquidThroughputCoef()
	{
		return LIQUID_THROUGHPUT_FUELSTATION;
	}
	
	override int GetLiquidSourceType()
	{
		return LIQUID_GASOLINE;
	}
	
	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}
}

class Paragon_FuelPump: Paragon_FuelPump_ColorBase {};