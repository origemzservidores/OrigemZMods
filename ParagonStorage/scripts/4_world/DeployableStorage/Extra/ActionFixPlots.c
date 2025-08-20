modded class ActionDigGardenPlot : ActionDeployObject
{
    override void OnFinishProgressServer(ActionData action_data)
    {    
        PlaceObjectActionData poActionData;
        poActionData = PlaceObjectActionData.Cast(action_data);
        EntityAI entity_for_placing = action_data.m_MainItem;
        vector position = action_data.m_Player.GetLocalProjectionPosition();
        vector orientation = action_data.m_Player.GetLocalProjectionOrientation();
        
        GardenPlot garden_plot;

        if (GetGame().IsMultiplayer())
        {
            garden_plot = GardenPlot.Cast(GetGame().CreateObject("GardenPlot", position));
            if (garden_plot)
            {
                garden_plot.SetPosition(position);
                garden_plot.SetOrientation(orientation);
                garden_plot.OnPlacementComplete(action_data.m_Player);
            }
            action_data.m_Player.PlacingCompleteServer();
        }
        else
        {
            garden_plot = GardenPlot.Cast(GetGame().CreateObject("GardenPlot", position));
            if (garden_plot)
            {
                garden_plot.SetPosition(position);
                garden_plot.SetOrientation(orientation);
                garden_plot.OnPlacementComplete(action_data.m_Player);
            }
            action_data.m_Player.PlacingCompleteServer();
            action_data.m_Player.PlacingCompleteLocal();
        }

        GetGame().ClearJuncture(action_data.m_Player, entity_for_placing);
        action_data.m_MainItem.SetIsBeingPlaced(false);
        poActionData.m_AlreadyPlaced = true;
        action_data.m_MainItem.SoundSynchRemoteReset();
        MiscGameplayFunctions.DealEvinronmentAdjustedDmg(action_data.m_MainItem, action_data.m_Player, 10);
    }
}
