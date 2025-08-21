class Pack_WellPump extends RecipeBase
{   
    override void Init()
    {
        m_Name = "Desmontar WellPump";
        m_IsInstaRecipe = false; 
        m_AnimationLength = 0.6; 
        m_Specialty = -0.03; 
        
        // CONDIÇÕES
        m_MinDamageIngredient[0] = -1; 
        m_MaxDamageIngredient[0] = -1; 
        
        m_MinQuantityIngredient[0] = 1; 
        m_MaxQuantityIngredient[0] = -1; 
        
        m_MinDamageIngredient[1] = -1; 
        m_MaxDamageIngredient[1] = -1; 
        
        m_MinQuantityIngredient[1] = 1; 
        m_MaxQuantityIngredient[1] = -1; 
        //----------------------------------------------------------------------------------------------------------------------
        
        // ITEM A SER DESMONTADO
        InsertIngredient(0, "Paragon_WellPump");
        m_IngredientAddHealth[0] = 0; 
        m_IngredientSetHealth[0] = -1; 
        m_IngredientAddQuantity[0] = 0; 
        m_IngredientDestroy[0] = true;
        m_IngredientUseSoftSkills[0] = false; 

        // FERRAMENTA 1
        InsertIngredient(1,"Screwdriver");
        m_IngredientAddHealth[1] = 10; 
        m_IngredientSetHealth[1] = -50; 
        m_IngredientAddQuantity[1] = -5; 
        m_IngredientDestroy[1] = false; 
        m_IngredientUseSoftSkills[1] = true; 
        //----------------------------------------------------------------------------------------------------------------------
        
        // KIT DO ITEM A SER DESMONTADO
        AddResult("StorageBox_WellPump");

        m_ResultSetFullQuantity[0] = true; 
        m_ResultSetQuantity[0] = 1; 
        m_ResultSetHealth[0] = -1; 
        m_ResultInheritsHealth[0] = -1; 
        m_ResultInheritsColor[0] = -1; 
        m_ResultToInventory[0] >= -2; 
        m_ResultUseSoftSkills[0] = false; 
        m_ResultReplacesIngredient[0] = -1; 
        //----------------------------------------------------------------------------------------------------------------------
    }

    override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return ingredients[0].IsEmpty();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Recipe Do method called","recipes");
	}
};