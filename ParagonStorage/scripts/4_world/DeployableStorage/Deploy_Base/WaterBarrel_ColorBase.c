class WaterBarrel_ColorBase extends Container_Base
{
	override void SetActions()
	{
		AddAction(ActionAttachOnSelection);
		super.SetActions();
		AddAction(ActionFillBottleBase);
		AddAction(ActionDrainLiquid);
	}
};

class Paragon_WaterBarrel_Blue:		WaterBarrel_ColorBase {};
class Paragon_WaterBarrel_Black:	WaterBarrel_ColorBase {};
class Paragon_WaterBarrel_Green:	WaterBarrel_ColorBase {};
class Paragon_WaterBarrel_Yellow:	WaterBarrel_ColorBase {};
class Paragon_WaterBarrel_Red:		WaterBarrel_ColorBase {};