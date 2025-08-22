//NÃO DEIXA COMIDA ESTRAGAR
modded class PigSteakMeat extends Edible_Base
{
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
		return super.CanDecay();
	}
}

modded class Lard extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		return super.CanDecay();
	}
	
}

modded class Carp extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class CarpFilletMeat extends Edible_Base
{
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		return super.CanDecay();
	}
}

modded class MackerelFilletMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class Sardines extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class Mackerel extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class ChickenBreastMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class GoatSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class SheepSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class BoarSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class WolfSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class DeerSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class CowSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class BearSteakMeat extends Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class Tomato : Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class Potato : Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		return super.CanDecay();
	}
	
	
}

modded class Zucchini : Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class Pumpkin : Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
	
	
}

modded class MushroomBase : Edible_Base
{
	
	override bool CanDecay()
	{
		ItemBase parent = ItemBase.Cast( GetHierarchyParent());
		Fridge_ColorBase Fridge;
		if (CastTo(Fridge, parent))
		{
			if(Fridge && Fridge.IsWorkingNow())
			{
			return false;	
			}			
		}
	
		
		return super.CanDecay();
	}
}
