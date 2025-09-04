modded class Edible_Base extends ItemBase
{
    override void ProcessDecay(float delta, bool hasRootAsPlayer)
    {
        EntityAI parent = GetHierarchyParent();

        Fridge_ColorBase fridge;
        if (CastTo(fridge, parent) && fridge.IsWorkingNow())
        {
            return;
        }

        IceBox_ColorBase icebox;
        if (CastTo(icebox, parent) && icebox.IsWorkingNow())
        {
            return;
        }

        IceCeramFreezer_ColorBase iceceram;
        if (CastTo(iceceram, parent) && iceceram.IsWorkingNow())
        {
            return;
        }

        super.ProcessDecay(delta, hasRootAsPlayer);
    }
}

//---------- NÃO APODRECE MESMO DESLIGADO ----------//

// modded class Edible_Base extends ItemBase
// {
//     override void ProcessDecay(float delta, bool hasRootAsPlayer)
//     {
//         EntityAI parent = GetHierarchyParent();

//         Fridge_ColorBase fridge;
//         if (CastTo(fridge, parent))
//         {
//             return;
//         }

//         IceBox_ColorBase icebox;
//         if (CastTo(icebox, parent))
//         {
//             return;
//         }

//         IceCeramFreezer_ColorBase iceceram;
//         if (CastTo(iceceram, parent))
//         {
//             return;
//         }

//         super.ProcessDecay(delta, hasRootAsPlayer);
//     }
// }