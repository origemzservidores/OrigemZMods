class SecurityDoorLocationConfig 
{
    string locationName;
    string className;
    vector location;
    vector dir;
    float autoClose;
    vector crateLocation;
    vector crateDir;
    string craterName;
    float openDelay;
    float closeDelay;
    int CrateMaxLoot;
    int MinWeaponCount;
    int MinAmmoCount;
    int MinClothCount;
    ref array<ref CrateLootItems> crateLoot;
    

    void SecurityDoorLocationConfig( string location_name, string class_name, vector loc, vector direction, float autoclose_time, vector crate_location, vector crate_dir, string crate_name, float open_delay, float close_delay, int crate_maxloot, int crate_weaponcount, int crate_ammocount, int crate_clothcount, array<ref CrateLootItems> crate_loot = NULL) 
    {
        locationName = location_name;
        className = class_name;
        location = loc;
        dir = direction;
        autoClose = autoclose_time;
        crateLocation = crate_location;
        crateDir = crate_dir;
        craterName = crate_name;
        openDelay = open_delay;
        closeDelay = close_delay;
        CrateMaxLoot = crate_maxloot;
        MinWeaponCount = crate_weaponcount;
        MinAmmoCount = crate_ammocount;
        MinClothCount = crate_clothcount;
        crateLoot = crate_loot;
    }

    string GetLocationName() 
    {
        return locationName;
    }

    string GetClassName() 
    {
        return className;
    }

    vector GetPosition() 
    {
        return location;
    }

    vector GetDirection() 
    {
        return dir;
    }

    float GetAutoCloseTime() 
    {
        return autoClose;
    }

    vector GetCratePosition()
    {
        return crateLocation;
    }

    vector GetCrateDirection()
    {
        return crateDir;
    }

    string GetCrateClassName()
    {
        return craterName;
    }

    float GetCloseDelay()
    {
        return closeDelay;
    }

    float GetOpenDelay()
    {
        return openDelay;
    }

    int GetCrateMaxLoot()
    {
        return CrateMaxLoot;
    }

    int GetMinWeaponCount()
    {
        return MinWeaponCount;
    }
    
    int GetMinAmmoCount()
    {
        return MinAmmoCount;
    }

    int GetMinClothCount()
    {
        return MinClothCount;
    }

    array<ref CrateLootItems> GetCrateLoot()
    {
        return crateLoot;
    }
}

class CrateLootItems
{
    string Name;
    float Chance;
    int Min;
    int Max;
    bool RandomizeQuantity;
    bool ChanceOnQuantity;
	ref TStringArray Attachments;
    ref TStringArray Linked;
    
    void CrateLootItems(string itemname, float itemchance, int min, int max, bool randomize, bool chanceonqauntity, TStringArray att = NULL, TStringArray linked = NULL)
	{
        Name = itemname;
		Chance = itemchance;
        Min = min;
        Max = max;
        RandomizeQuantity = randomize;
        ChanceOnQuantity = chanceonqauntity;
		Attachments = att;
        Linked = linked;
    }
}

class KeyCardSystemConfig 
{
    int version;
    ref array< ref SecurityDoorLocationConfig > locations;

    void KeyCardSystemConfig( int Version ) 
    {
        version = Version;
        locations = new array< ref SecurityDoorLocationConfig >;
    }

    void InsertLocation(string locationName, string className, vector pos, vector dir, float autoclose, vector cratePos, vector crateDir, string craterName, float openDelay, float closeDelay, int CrateMaxLoot, int MinWeaponCount, int MinAmmoCount, int MinClothCount, array<ref CrateLootItems> crateLoot = NULL)
    {
        locations.Insert( new SecurityDoorLocationConfig( locationName, className, pos, dir, autoclose, cratePos, crateDir, craterName, openDelay, closeDelay, CrateMaxLoot, MinWeaponCount, MinAmmoCount, MinClothCount, crateLoot ));
    }

    void SetVersion( int Version ) {
        version = Version;
    }

}

class PluginKeyCardSystemServer : PluginBase 
{
    const static int VERSION = 1;

    const static string PROFILE = "$profile:KeyCardSystem";
    const static string CONFIG = PROFILE + "/config.json";

    const static string DATA_DIR = PROFILE + "/data";
    const static string LOCATION_DATA = DATA_DIR + "/cache.dat";
    const static string PERSISTANCE_DATA = DATA_DIR + "/persistance.dat";

    const static float REFRESH_RATE = 10.0;     /* 10 second(s) default */

    ref KeyCardSystemConfig m_config;
    ref array<ref SecurityDoorPersistanceData> m_persistanceData;
    ref array<KeyCard_Door_Base> m_Doors;

    protected bool m_HasConfigChanged = false;

    void PluginKeyCardSystemServer() 
    {
        Init();
    }

    void Init() 
    {
        Print("LOADING: PluginKeyCardSystemServer");

        m_config = new KeyCardSystemConfig(VERSION);
        m_persistanceData = new array< ref SecurityDoorPersistanceData>;
        m_Doors = new array<KeyCard_Door_Base>;

        if (!FileExist( PROFILE ))
            MakeDirectory( PROFILE );

        if ( !FileExist( CONFIG )) 
        {
            array<ref CrateLootItems> loot = new array<ref CrateLootItems>;
            TStringArray atts = {"M4_CQBBttstck", "M4_MPHndgrd", "Mag_STANAG_30Rnd", "ACOGOptic_6x"};
            // string itemname, float itemchance, int min, int max, bool randomize, TStringArray att = NULL
            CrateLootItems item = new CrateLootItems("M4A1", 100.0, 1, 1, 1, 1, atts);
            loot.Insert(item);
            item = new CrateLootItems("M4A1", 100.0, 1, 1, 1, 1, atts);
            loot.Insert(item);
            //                          DoorName                DoorPos              DoorDir    AutoClose      CratePos          CrateDir       CrateName               openDelay CloseDelay  CrateMaxLoot MinWeaponCount MinAmmoCount MinClothCount CarteLoot
            m_config.InsertLocation( "My Location T1", "OZ_Door_ReforcedT1", "2469.4 193.87 5129.3", "80.557 0 0", 30.0, "2471.0 193.75 5129.8", "80.0 0 0", "OZ_Crate_LightBlue",  10,        10,       10,            1,             2,           1,         loot);
            m_config.InsertLocation( "My Location T2", "OZ_Door_ReforcedT2", "2476.1 193.77 5136.7", "-9.99 0 0", 30.0, "2474.8 193.75 5138.9", "89.10 0 0", "OZ_Crate_LightBlue",   10,        10,       10,            1,             2,           1,         loot);
            JsonFileLoader<ref KeyCardSystemConfig>.JsonSaveFile( CONFIG, m_config);
        }

        JsonFileLoader<ref KeyCardSystemConfig>.JsonLoadFile( CONFIG, m_config);

        if( m_config.version != VERSION) 
        {
            DeletePersistanceFiles();
            m_config.SetVersion( VERSION );
            JsonFileLoader<ref KeyCardSystemConfig>.JsonSaveFile( CONFIG, m_config);
        }

        m_HasConfigChanged = HasConfigChanged();
    }

    /* 
    *   Compares current config with previous persitance data.
    *   True - OK
    *   False - corrupted/changed
    */
    protected bool HasConfigChanged() 
    {
        // if ( !FileExist( DATA_DIR ) )
        //     MakeDirectory( DATA_DIR );
        
        // if ( !FileExist( LOCATION_DATA ) || !FileExist( PERSISTANCE_DATA ))   
        //     return true;     /* data doesn't exist, return */

        // ref array< ref SecurityDoorLocationConfig > prev_locations = new array< ref SecurityDoorLocationConfig >;
        // FileSerializer fileHandle = new FileSerializer();

        // if ( fileHandle.Open( LOCATION_DATA, FileMode.READ) ) {
        //     fileHandle.Read(prev_locations);
        //     fileHandle.Close();
        // } else
        //     return true; /* Corrupted files probably, reset persistance data */

        // if ( m_config.locations.Count() != prev_locations.Count() )
        //     return true;

        // for ( int i=0; i<m_config.locations.Count(); i++ ) 
        // {
        //     ref SecurityDoorLocationConfig currentConfig = m_config.locations[i];
        //     ref SecurityDoorLocationConfig persistanceConfig = prev_locations[i];

        //     if( !persistanceConfig )
        //         return true;

        //     if ( currentConfig.GetLocationName() != persistanceConfig.GetLocationName() )
        //         return true;

        //     /* Check if classnames are equal */
        //     if ( currentConfig.GetClassName() != persistanceConfig.GetClassName() )
        //         return true;

        //     /* Check for changes in position */
        //     if ( currentConfig.GetPosition() != persistanceConfig.GetPosition() )
        //         return true;

        //     /* Check for changes in direction */
        //     if ( currentConfig.GetDirection() != persistanceConfig.GetDirection() )
        //         return true;

        //     if ( currentConfig.GetAutoCloseTime() != persistanceConfig.GetAutoCloseTime() )
        //         return true;

        //     if ( currentConfig.GetCrateDirection() != persistanceConfig.GetCrateDirection() )
        //         return true;
            
        //     if ( currentConfig.GetCratePosition() != persistanceConfig.GetCratePosition() )
        //         return true;

        //     if ( currentConfig.GetCrateClassName() != persistanceConfig.GetCrateClassName() )
        //         return true;

        //     // if ( currentConfig.GetCrateLoot() != persistanceConfig.GetCrateLoot() )
        //     //     return true;

        //     if ( currentConfig.GetOpenDelay() != persistanceConfig.GetOpenDelay() )
        //         return true;

        //     if ( currentConfig.GetCloseDelay() != persistanceConfig.GetCloseDelay() )
        //         return true;           
            
        //     if ( currentConfig.GetCrateMaxLoot() != persistanceConfig.GetCrateMaxLoot() )
        //         return true;            
        //     if ( currentConfig.GetMinWeaponCount() != persistanceConfig.GetMinWeaponCount() )
        //         return true;            
        //     if ( currentConfig.GetMinAmmoCount() != persistanceConfig.GetMinAmmoCount() )
        //         return true;            
        //     if ( currentConfig.GetMinClothCount() != persistanceConfig.GetMinClothCount() )
        //         return true;            
        // }

        // return false;

        if ( !FileExist( DATA_DIR ) )
             MakeDirectory( DATA_DIR );

        if ( !FileExist( LOCATION_DATA ) || !FileExist( PERSISTANCE_DATA ))   
            return true;     /* data doesn't exist, create */

        return false;
    }

    protected void DeletePersistanceFiles() 
    {
        DeleteFile( LOCATION_DATA );
        DeleteFile( PERSISTANCE_DATA );
    }

    /* spawns static buildings*/
    void StaticItemsSpawn()
    {
        Print("KEYCARDSYSTEM: SPAWNING STATIC ITEMS");
        return;
    }

    void SpawnItems() 
    {
        /* Has to be called from OnMissionStart() */
        
        StaticItemsSpawn();

        if ( m_HasConfigChanged ) {

            Print("KEYCARDSYSTEM: CREATING NEW PERSISTANCE DATA");
            
            /* config has changed, delete old persistance files and create new. */
            DeletePersistanceFiles();

            foreach( ref SecurityDoorLocationConfig config : m_config.locations ) 
            {
                auto obj = GetGame().CreateObjectEx( config.GetClassName(), config.GetPosition(), ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);

                KeyCard_Door_Base door;
                Class.CastTo( door, obj );

                door.SetPosition( config.GetPosition() );
                door.SetOrientation( config.GetDirection() );
                door.SetOrientation( door.GetOrientation() );
                door.Update();
                
                SecurityDoorPersistanceData persistanceData = new SecurityDoorPersistanceData;
                persistanceData.SetLocationName( config.GetLocationName() );
                persistanceData.SetType( door.GetType() );
                persistanceData.SetPosition( door.GetPosition() );
                persistanceData.SetOrientation( door.GetOrientation() );
                persistanceData.SetAutoCloseTime( config.GetAutoCloseTime() );
                persistanceData.SetCrateOrientation( config.GetCrateDirection() );
                persistanceData.SetCratePosition( config.GetCratePosition() );
                persistanceData.SetCrateType( config.GetCrateClassName() );
                persistanceData.SetOpenDelay( config.GetOpenDelay() );
                persistanceData.SetCloseDelay( config.GetCloseDelay() );
                persistanceData.SetCrateMaxLoot( config.GetCrateMaxLoot() );
                persistanceData.SetMinWeaponCount( config.GetMinWeaponCount() );
                persistanceData.SetMinAmmoCount( config.GetMinAmmoCount() );
                persistanceData.SetMinClothCount( config.GetMinClothCount() );
                persistanceData.PSetCrateLoot( config.GetCrateLoot() );

                door.SetPersistanceData( persistanceData );

                m_persistanceData.Insert( persistanceData );
                m_Doors.Insert( door );
            }

            CreatePersistanceFiles();

        } else {

            Print("KEYCARDSYSTEM: LOADING OLD PERSISTANCE DATA");

            /* Load old persistance data */
            LoadOldPersistance();
        }

        /* TODO: Start timer for monitor */
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater( Monitor, GetRefreshRate() * 1000,  true );
    }

    protected void LoadOldPersistance() 
    {
		 FileSerializer fileHandle = new FileSerializer();
		
        if ( fileHandle.Open( PERSISTANCE_DATA, FileMode.READ) )
            fileHandle.Read( m_persistanceData ); 

        foreach( ref SecurityDoorPersistanceData persistantitem : m_persistanceData )
        {
            auto obj = GetGame().CreateObjectEx( persistantitem.GetType(), persistantitem.GetPosition(), ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
            
			KeyCard_Door_Base door;
            Class.CastTo( door, obj );
			
			door.SetPosition( persistantitem.GetPosition() );
            door.SetOrientation( persistantitem.GetOrientation() );
            door.SetOrientation( door.GetOrientation() );
            door.Update();
			
			door.SetPersistanceData( persistantitem );

            m_Doors.Insert( door );			
        }
    }

    protected void CreatePersistanceFiles() 
    {
        FileSerializer fileHandle = new FileSerializer();

        /* Create locations data for config change comparison */
        if ( fileHandle.Open( LOCATION_DATA, FileMode.WRITE) )
            fileHandle.Write( m_config.locations );

        /* Create persistance for objects */
        if ( fileHandle.Open( PERSISTANCE_DATA, FileMode.WRITE) )
            fileHandle.Write( m_persistanceData ); 
    }

    protected void SavePersistance()
    {
        // Print("Saving Persistance...");

        // foreach( ref SecurityDoorPersistanceData data : m_persistanceData){

        //     foreach( int index, bool state: data.m_DoorState) {

        //         Print( "index: " + index + " state: " + state + " timetillclose: " + data.m_DoorTimers[index]);

        //     }           

        // }

        FileSerializer fileHandle = new FileSerializer();

        if ( fileHandle.Open( PERSISTANCE_DATA, FileMode.WRITE) )
            fileHandle.Write( m_persistanceData ); 
    }

    protected void UpdateDoorTimers() 
    {

        float timeDelta = REFRESH_RATE * 1000;

        foreach ( KeyCard_Door_Base door : m_Doors) {

            foreach( int doorIndex, bool state: door.GetPersistanceData().m_DoorState) {

                if ( state == true) /* open */
                {
                    if (door.GetPersistanceData().m_DoorTimers.Contains( doorIndex)) {
                        float remainingTime = door.TimeTillAutoClose( doorIndex );
                        door.SetTimeTillAutoClose( doorIndex, remainingTime - timeDelta );

                        //Print(" doorIndex: " + doorIndex + " remainingTime: " + remainingTime);
                        
                        if ( door.TimeTillAutoClose( doorIndex ) <= 0 && !door.IsClosing())
                            door.InitiateClose( doorIndex  );
                    }
                }
            }
        }
    }

    protected void Monitor() {

        UpdateDoorTimers();

        SavePersistance();
    }


    float GetRefreshRate() {
        return REFRESH_RATE;
    }

    /* ===================== Rewards ========================= */
    Object SpawnRewardCrate( string className, vector position, vector orientation ) 
    {
        Object crate = GetGame().CreateObject( className, position);
        
        if (!crate)
            return NULL;

        crate.SetPosition( crate.GetPosition() );
        crate.SetOrientation( orientation );
        crate.SetOrientation( crate.GetOrientation() );
        
        return crate;
    }

    bool DeleteRewardCrate( string className, vector position )
    {
        const float radius = 5;

        bool flag = false;

        ref array<Object> objectsAtPosition = new array<Object>;

        GetGame().GetObjectsAtPosition( position, radius, objectsAtPosition, NULL );

        foreach( Object item : objectsAtPosition )
        {
            if ( item.GetType() == className)
            {
                GetGame().ObjectDelete( item );
                flag = true;
            }
        }

        return flag;
    }

    void SpawnLoot(EntityAI container, array< ref CrateLootItems > loot, int MaxLootPerCrate, int MinCrateWeapon, int MinCrateAmmo, int MinCrateCloth)
	{
        // Spawned items map<item, quantity>
        map<string, int> spawndeditems = new map<string, int>;

        // array<ref CrateLootItems> lootlist = new array<ref CrateLootItems>;  // Temp lootlist 
        array<ref CrateLootItems> weaponslist = new array<ref CrateLootItems>;  // Weapons list
        array<ref CrateLootItems> ammolist = new array<ref CrateLootItems>;     // Ammolist
        array<ref CrateLootItems> clothlist = new array<ref CrateLootItems>;    // Clothing
        array<ref CrateLootItems> generallist = new array<ref CrateLootItems>;  // General items list
        array<ref CrateLootItems> LootToSpawn = new array<ref CrateLootItems>;  // Array of loots to be spawned;

        int maxlootcalc = 0;

        // Populate arrays
        foreach (CrateLootItems crateitem: loot)
        {
           // Add to temp array becouse referenced array alter tree.
           // lootlist.Insert(crateitem);

           if (crateitem.RandomizeQuantity)
                maxlootcalc +=  crateitem.Min;
           else
                maxlootcalc +=  crateitem.Max;

           if (GetGame().IsKindOf(crateitem.Name, "Weapon_Base") && !GetGame().IsKindOf(crateitem.Name, "Magazine_Base") && !GetGame().IsKindOf(crateitem.Name, "Ammunition_Base") )
           {
                // Print("WEAPONLIST ADD: "+crateitem.Name);
                weaponslist.Insert(crateitem);
           }
           else if (GetGame().IsKindOf(crateitem.Name, "Magazine_Base") || GetGame().IsKindOf(crateitem.Name, "Ammunition_Base"))
           {
                // Print("AMMOLIST ADD: "+crateitem.Name);
                ammolist.Insert(crateitem);
           }
           else if (GetGame().IsKindOf(crateitem.Name, "Clothing_Base"))
           {
                // Print("CLOTHLIST ADD: "+crateitem.Name);
                clothlist.Insert(crateitem);
           }
           else
           {
                // Print("GENRALLIST ADD: "+crateitem.Name);
                generallist.Insert(crateitem);
           }
        }

        // Prevents infinite while loop
        // if (weaponslist.Count() < MinCrateWeapon)
        // {
        //     Print("KeycardSystem::Spawn ERROR! - Weapons added in list do not supply MinWeaponCount in config");
        //     return;
        // }
        // if (ammolist.Count() < MinCrateAmmo)
        // {
        //     Print("KeycardSystem::Spawn ERROR! - Ammo added in list do not supply MinAmmoCount in config");
        //     return;
        // }
        // if (clothlist.Count() < MinCrateCloth)
        // {
        //     Print("KeycardSystem::Spawn ERROR! - Cloths added in list do not supply MinClothCount in config");
        //     return;
        // }

        int weaponcount = 0;
        int ammocount = 0;
        int clothcount = 0;
        int spawnedCount = 0;
        string tipo = "";
        CrateLootItems item;
        int counter = 0;

        // Calculate max loot based on min valor of item added in list to previne infinite loop;
        if (MaxLootPerCrate > maxlootcalc)
        {
            MaxLootPerCrate = maxlootcalc;
            Print("MAXCRATELOOT: "+  MaxLootPerCrate);
        }

        while (spawnedCount < MaxLootPerCrate)
        {
            // Prevents Infinite loop
            counter++;
            if (counter > 3000)
                break;

            // Sets the item tipo
            if (weaponcount < MinCrateWeapon && weaponslist.Count() > 0)
            {
                item = weaponslist.GetRandomElement();  
                tipo = "Weapon";  
            }
            else if ( ammocount < MinCrateAmmo && ammolist.Count() > 0)
            {
                item = ammolist.GetRandomElement();
                tipo = "Ammo";
            }
            else if ( clothcount < MinCrateCloth && clothlist.Count() > 0)
            {
                item = clothlist.GetRandomElement();
                tipo = "Cloth";
            }
            else if ( generallist.Count() > 0 )
            {
                item = generallist.GetRandomElement();
                tipo = "General";
            }
            else
            {
                item = loot.GetRandomElement();
                tipo = "Loot";
            }

            // if quantity min <= 0 do not spawn item
            if (item.Chance <= 0)
                continue;

            // Generate quantity based on min and max
            int randomQuantity;
            if (item.RandomizeQuantity)
                randomQuantity = Math.RandomIntInclusive(item.Min, item.Max);
            else
                randomQuantity = item.Max;

            if(randomQuantity <= 0)
                continue;

            // Generate chance
            int rndChance = Math.RandomIntInclusive(0 , 100);
            for (int i = 0; i < randomQuantity; i++)
            {
                if (item.Chance < rndChance)
                    continue;

                bool spawn = false;
                if (item.ChanceOnQuantity)
                {
                    rndChance = Math.RandomIntInclusive(0 , 100);
                    if (item.Chance >= rndChance)
                        spawn = true;
                }
                else
                {
                    spawn = true;
                }

                // Check if spawned item reach to limit
                if (spawndeditems)
                {
                    int current;
                    if (spawndeditems.Find(item.Name, current))
                    {
                        spawndeditems.Set(item.Name, current + 1);
                        if (current >= item.Max)
                        {
                            // spawn = false;
                            if (tipo == "Weapon")
                                weaponslist.RemoveItem(item);
                            else if (tipo == "Ammo")
                                ammolist.RemoveItem(item);
                            else if (tipo == "Cloth")
                                clothlist.RemoveItem(item);
                            else if (tipo == "General")
                                generallist.RemoveItem(item);
                            // else if (tipo == "Loot")
                            //     lootlist.RemoveItem(item);

                            // Print("KeycardSystem::SpawnLoot Item: " + item.Name + " Limit: "  + current);
                        }
                    }
                    else
                        spawndeditems.Insert(item.Name, 1);
                }

                if (spawn)
                {
                    if (tipo == "Weapon")
                        weaponcount++;
                    else if (tipo == "Ammo")
                        ammocount++;
                    else if (tipo == "Cloth")
                        clothcount++;

                    spawnedCount++;
                    LootToSpawn.Insert(item);
                    // Print("KeycardSystem::SpawnLoot rndChance: " + rndChance + " Item: " + item.Name + " RandomQuantity: " + randomQuantity + " RandomyzeQuantity: " + item.RandomizeQuantity);
                }

                if (spawnedCount >= MaxLootPerCrate)
                    break;
            }
            
        }

        foreach(CrateLootItems itemtospawn : LootToSpawn)
        {
            Spawn( itemtospawn.Name, container, itemtospawn.Attachments, itemtospawn.Linked );
            Print("SPAWNED: " + itemtospawn.Name);
        }

    }

    void Spawn( string className, EntityAI container, TStringArray attachments = null, TStringArray linkeds = null)
	{
		ItemBase itemParent;
		ItemBase item;

        if ( Class.CastTo( itemParent, container ) )
        {
            // Safe checks for attachments push bullet to chamber if the case.
            item = ItemBase.Cast( itemParent.KeycardCreateInInventory( className ) );
        }
        else
        {
            item = ItemBase.Cast( container.GetInventory().CreateInInventory( className ) );
        }
       
		
    	if ( item )
		{
			if ( attachments )
			{
				//! Need to copy the attachments array because passing in NULL in the recursive call below
				//! nulls our original attachments array in caller :-(
				//! https://feedback.bistudio.com/T173458
				TStringArray attTmp();
				attTmp.Copy(attachments);

				foreach ( string attachment: attTmp )
				{
					// TODO: attachment chance and quantity
					Spawn( attachment, item);
				}
			}

            if (linkeds)
            {
                TStringArray linkedTmp();
				linkedTmp.Copy(linkeds);

                foreach ( string linkeditem: linkedTmp )
				{
					// TODO: Linked items not use chance, aways spawn
					Spawn( linkeditem, container);
				}
            }
			
            // TODO: Item damage percent
			// if (damagePercentMin > 0 || damagePercentMax > 0)
			// {
			// 	float maxHealth = item.GetMaxHealth("", "");
			// 	float healthModifier = Math.RandomFloatInclusive(damagePercentMin, damagePercentMax);
			// 	item.SetHealth("", "", maxHealth * healthModifier);
			// }
		}
		else
		{
			Print("KeycardSystem::Spawn - ERROR: Couldn't spawn " + className + " - item with that classname does not exist!");
		}
	}
}