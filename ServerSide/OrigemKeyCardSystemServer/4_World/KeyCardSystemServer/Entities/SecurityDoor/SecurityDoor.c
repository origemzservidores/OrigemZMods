modded class KeyCard_Door_Base {
    
#ifdef EXPANSIONMODNAVIGATION
    ref ExpansionMarkerModule m_MarkerModule;
    ExpansionMarkerData m_doormark;
#endif

    ref SecurityDoorPersistanceData m_persistanceData;
    ref PluginKeyCardSystemServer m_Plugin;

    protected SoundOnVehicle m_ClosingAlarm;
    protected bool m_IsClosing = false;

    void KeyCard_Door_Base() 
    {
        m_Plugin = PluginKeyCardSystemServer.Cast( GetPlugin( PluginKeyCardSystemServer ) );

#ifdef EXPANSIONMODNAVIGATION
        if (!m_MarkerModule)
            m_MarkerModule = ExpansionMarkerModule.Cast( CF_ModuleCoreManager.Get( ExpansionMarkerModule ) );
#endif
    }

    void SetPersistanceData( ref SecurityDoorPersistanceData data ) 
    {
        m_persistanceData = data;

        /* Update door state */
        foreach( int index, bool state : m_persistanceData.m_DoorState ) 
            if (state == true)
                this.OpenDoor( index );
    }

    void UpdatePersistance() 
    {
        m_persistanceData.className = this.GetType();
        m_persistanceData.location = this.GetPosition();
        m_persistanceData.dir = this.GetDirection();

        foreach( int index, bool state : m_persistanceData.m_DoorState )
            m_persistanceData.m_DoorState[index] = IsDoorOpen( index );
    }

    ref SecurityDoorPersistanceData GetPersistanceData() 
    {
        return m_persistanceData;
    }

    void SetTimeTillAutoClose( int index, float time ) 
    {
        m_persistanceData.m_DoorTimers[index] = time;
    }

    float TimeTillAutoClose(int index ) 
    {
        return m_persistanceData.m_DoorTimers[index];
    }

    protected void SpawnRewards()
    {
        // Spawn crate
        if( m_persistanceData.GetCrateType() == "")
            return;
        
        // Detele old crater if found.
        DeleteRewards();

        Object crateObject = m_Plugin.SpawnRewardCrate( m_persistanceData.GetCrateType(), m_persistanceData.GetCratePosition(), m_persistanceData.GetCrateOrientation() );
        EntityAI crate;
        
        if ( Class.CastTo( crate, crateObject) )
            m_Plugin.SpawnLoot( crate, m_persistanceData.PGetCrateLoot(), m_persistanceData.GetCrateMaxLoot(), m_persistanceData.GetMinWeaponCount(), m_persistanceData.GetMinAmmoCount(), m_persistanceData.GetMinClothCount() );
    }

    protected void DeleteRewards()
    {
        vector cratePos = m_persistanceData.GetCratePosition();

        bool success = m_Plugin.DeleteRewardCrate( m_persistanceData.GetCrateType(), m_persistanceData.GetCratePosition());
        if (success)
            Print("KeycardSystem::DeleteRewards - Old crater reward found and deleted.");
    }

    override void Open( int index ) 
    {
        this.OpenDoor( index );
        m_persistanceData.SetIsOpen( index, true);

        SetTimeTillAutoClose( index, m_persistanceData.GetAutoCloseTime() * 1000 );

        /* spawn crate */
        SpawnRewards();
    }

    override void InitiateOpen( int index )
    {
        float delay = m_persistanceData.GetOpenDelay();
        
        GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( Open, delay * 1000, false, index );

        // Play Alarm
        if( m_ClosingAlarm )
        {
            GetGame().ObjectDelete(m_ClosingAlarm);
		    m_ClosingAlarm = NULL;
        }
        
        m_ClosingAlarm = PlaySound("KeyCard_DoorAlarm", 1000, false);

        // Send Message to all clients.
        #ifdef EXPANSIONMODCORE
         if (!this.IsInherited(OZ_Door_Basic_Base))
         {
            string locname =  m_persistanceData.GetLocationName();

            if (locname == string.Empty)
                locname = GetLocation(m_persistanceData.GetPosition());

            ExpansionNotification("str_keycard_activate_tittle", new StringLocaliser("str_keycard_activate_msg", locname, m_persistanceData.GetOpenDelay().ToString()), "Bandit", COLOR_EXPANSION_NOTIFICATION_ORANGE, 10).Create();
         }
        #endif

        #ifdef EXPANSIONMODNAVIGATION
        if (m_MarkerModule && !this.IsInherited(OZ_Door_Basic_Base))
        {
            m_doormark = m_MarkerModule.CreateServerMarker( "#str_keycard_marker_tittle", "Options", m_persistanceData.GetPosition(), COLOR_EXPANSION_NOTIFICATION_ORANGE, false ); // tltimo parametro = Mostrar marca 3D
            GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( DeleteMarker, delay * 1000, false, m_doormark.GetUID() );
        }
        #endif
    }

    void DeleteMarker( string uid )
    {
        #ifdef EXPANSIONMODNAVIGATION
        if (m_MarkerModule)
            m_MarkerModule.RemoveServerMarker( uid );
        #endif
    }

    protected string GetLocation(vector zonePosition)
	{
		string currentName, locationName, localizedName, worldName, finallocationName;

		vector currentPosition, locationPosition;

		float currentDistance;
		float lowestDistance = int.MAX;

		GetGame().GetWorldName(worldName);

		string configEntry = "CfgWorlds " + worldName + " Names";

		for (int i = 0; i < GetGame().ConfigGetChildrenCount(configEntry); i++)
		{
			GetGame().ConfigGetChildName(configEntry, i, currentName);
			string tempName = currentName;
			tempName.ToLower();
			if (!tempName.Contains("settlement") && !tempName.Contains("local") && !tempName.Contains("railroadstation") && !tempName.Contains("ruin") && !tempName.Contains("area") && !tempName.Contains("marine"))
				continue;

			array<float> positionFloatArray = new array<float>();
			GetGame().ConfigGetFloatArray(configEntry + " " + currentName + " position", positionFloatArray);
			currentPosition[0] = positionFloatArray[0];
			currentPosition[2] = positionFloatArray[1];
			currentPosition[1] = GetGame().SurfaceY(currentPosition[0], currentPosition[2]);

			currentDistance = vector.Distance(currentPosition, zonePosition);
			if (currentDistance < lowestDistance)
			{
				//GetGame().ConfigGetText(configEntry + " " + currentName + " name", localizedName);
				//locationName = string.Format("%1 (%2)", localizedName, currentName.SubstringInverted(currentName, 0, currentName.IndexOf("_") + 1));
				locationName = string.Format("%1", currentName.SubstringInverted(currentName, 0, currentName.IndexOf("_") + 1));
				lowestDistance = currentDistance;
				locationPosition = currentPosition;
			}
		}
        
        return locationName;
	}

    override void InitiateClose( int index )
    {
        float delay = m_persistanceData.GetCloseDelay();
        
        GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( Close, delay * 1000, false, index );

        m_ClosingAlarm = PlaySound("KeyCard_DoorAlarm", 200, false);
        m_IsClosing = true;
    }

    override void Close( int index )
    {
        this.CloseDoor( index );
        m_persistanceData.SetIsOpen( index, false);

        /* despawn crate */
        DeleteRewards();

        if( m_ClosingAlarm )
        {
            GetGame().ObjectDelete(m_ClosingAlarm);
		    m_ClosingAlarm = NULL;
        }

        m_IsClosing = false;
    }

    bool IsClosing()
    {
        return m_IsClosing;
    }
};