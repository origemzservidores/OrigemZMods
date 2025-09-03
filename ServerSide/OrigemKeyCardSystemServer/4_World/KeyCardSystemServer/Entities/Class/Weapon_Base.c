modded class Weapon_Base
{
    //* Return -1 on unknown state
	int KeycardGetMagAttachedtateID()
	{
		//* https://feedback.bistudio.com/T149240

		//* BU0 = no bullet
		//* BU1 = bullet in chamber
		//* BUF = fired out bullet cartridge in chamber
		//* MA0 = no magazine present
		//* MA1 = magazine present

		int stateId = -1;

		int mi = GetCurrentMuzzle();

		if ( IsInherited( SKS_Base ) )
		{
		} 
        else if ( IsInherited( BoltActionRifle_InnerMagazine_Base ) )
		{
			//* E.g. Mosin, Winchester 70
		} else if ( IsInherited( DoubleBarrel_Base ) )
		{
		} else if ( IsInherited( Magnum_Base ) )
		{
			//stateId = MagnumStableStateID.DEFAULT;
		} else if ( IsInherited( Pistol_Base ) )
		{
			if ( IsChamberEmpty( mi ) )
				stateId = PistolStableStateID.CLO_DIS_BU0_MA1;
			else if ( IsChamberJammed( mi ) )
				stateId = PistolStableStateID.CLO_JAM_BU1_MA1;
			else
				stateId = PistolStableStateID.CLO_CHG_BU1_MA1;
		//* DayZ 1.16 or above
		} else if ( IsInherited( BoltActionRifle_ExternalMagazine_Base ) )
		{
			//* E.g. CZ527, Scout
			if ( IsChamberEmpty( mi ) )
				stateId = BAREMStableStateID.BAREM_CLO_BU0_MA1;
			else if ( IsChamberJammed( mi ) )
				stateId = BAREMStableStateID.BAREM_JAM_BU1_MA1;
			else if ( IsChamberFiredOut( mi ) )
				stateId = BAREMStableStateID.BAREM_CLO_BUF_MA1;
			else
				stateId = BAREMStableStateID.BAREM_CLO_BU1_MA1;
		} else if ( IsInherited( Repeater_Base ) )
		{
		} else if ( IsInherited( RifleBoltFree_Base ) )
		{
			//* E.g. AKM, Sporter 22, Saiga, MP5, VSS
			if ( IsChamberEmpty( mi ) )
				stateId = RBFStableStateID.RBF_CLO_BU0_MA1;
			else if ( IsChamberJammed( mi ) )
				stateId = RBFStableStateID.RBF_JAM_BU1_MA1;
			else
				stateId = RBFStableStateID.RBF_CLO_BU1_MA1;
		} else if ( IsInherited( RifleBoltLock_Base ) )
		{
			//* E.g. FAL, M4A1, SVD, CZ61, UMP-45
			if ( IsChamberEmpty( mi ) )
				stateId = RBLStableStateID.RBL_CLO_BU0_MA1;
			else if ( IsChamberJammed( mi ) )
				stateId = RBLStableStateID.RBL_JAM_BU1_MA1;
			else
				stateId = RBLStableStateID.RBL_CLO_BU1_MA1;
		} else if ( IsInherited( RifleSingleShot_Base ) )
		{
			//* e.g. Izh-18
		} else if ( IsInherited( Mp133Shotgun_Base ) )
		{
		}

		return stateId;
	}
}