modded class PluginRecipesManager 
{
	override void RegisterRecipies()
    {
        super.RegisterRecipies();
    
        RegisterRecipe(new Pack_FuelPump);

        RegisterRecipe(new Pack_WellPump);
    }
}


