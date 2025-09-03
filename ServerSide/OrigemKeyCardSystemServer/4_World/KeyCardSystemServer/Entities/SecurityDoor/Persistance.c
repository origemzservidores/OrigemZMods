class SecurityDoorPersistanceData {
    string locationName;
    string className;
    vector location;
    vector dir;
    vector crateLocation;
    vector crateDir;
    string craterClassName;
    ref array<ref CrateLootItems> crateLoot;
    float autoClose;
    float closeDelay;
    int CrateMaxLoot;
    int MinWeaponCount;
    int MinAmmoCount;
    int MinClothCount;
    float openDelay;

    ref map<int, bool> m_DoorState;
	ref map<int, float> m_DoorTimers;

    

    void SecurityDoorPersistanceData() 
    {
        m_DoorState = new map<int, bool>;
		m_DoorTimers = new map<int, float>;
    }

    string GetLocationName()
    {
        return locationName;
    }

    string GetType() 
    {
        return className;
    }

    string GetCrateType()
    {
        return craterClassName;
    }

    array<ref CrateLootItems> PGetCrateLoot()
    {
        return crateLoot;
    }

    vector GetPosition() 
    {
        return location;
    }

    vector GetOrientation() 
    {
        return dir;
    }

    vector GetCratePosition() 
    {
        return crateLocation;
    }

    vector GetCrateOrientation()
    {
        return crateDir;
    }

    float GetAutoCloseTime() 
    {
        return autoClose;
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

    bool IsOpen( int index ) 
    {
        return m_DoorState[ index ];
    }

    void SetLocationName( string LocationName ) 
    {
        locationName = LocationName;
    }

    void SetType( string ClassName ) 
    {
        className = ClassName;
    }

    void SetPosition( vector Location ) 
    {
        location = Location;
    }

    void SetOrientation( vector Orientation) 
    {
        dir = Orientation;
    }

    void SetIsOpen( int index, bool state ) 
    {
        m_DoorState[ index ] = state;
    }

    void SetAutoCloseTime( float AutoCloseTime ) 
    {
        autoClose = AutoCloseTime;
    }

    void SetCratePosition( vector Location) 
    {
        crateLocation = Location;
    }

    void SetCrateOrientation( vector Direction ) {
        crateDir = Direction;
    }

    void SetCrateType(string valor)
    {
        craterClassName = valor;
    }

    void PSetCrateLoot(array<ref CrateLootItems> loot)
    {
        crateLoot = loot;
    }

    void SetCloseDelay( float amount )
    {
        closeDelay = amount;
    }

    void SetOpenDelay( float amount )
    {
        openDelay = amount;
    }

    void SetCrateMaxLoot(int valor)
    {
        CrateMaxLoot = valor;
    }
    void SetMinWeaponCount(int valor)
    {
        MinWeaponCount = valor;
    }
    void SetMinAmmoCount(int valor)
    {
        MinAmmoCount = valor;
    }
    void SetMinClothCount(int valor)
    {
        MinClothCount = valor;
    }
}