class KeyCard_Door_Base : Building 
{
    void InitiateOpen( int index );
    void Open( int index );
    void InitiateClose( int index );
    void Close( int index );
};

class Land_KlimaX_T1Door : KeyCard_Door_Base {};
class Land_KlimaX_T2Door : KeyCard_Door_Base {};
class Land_KlimaX_T3Door : KeyCard_Door_Base {};
class Land_KlimaX_T4Door : KeyCard_Door_Base {};
class Land_KlimaX_T5Door : KeyCard_Door_Base {};
class Land_KlimaX_T6Door : KeyCard_Door_Base {};
class Land_KlimaX_T7Door : KeyCard_Door_Base {};

class OZ_Door_Basic_Base : KeyCard_Door_Base {};
class OZ_Door_BasicT1 : OZ_Door_Basic_Base {};
class OZ_Door_BasicT2 : OZ_Door_Basic_Base {};
class OZ_Door_BasicT3 : OZ_Door_Basic_Base {};
class OZ_Door_BasicT4 : OZ_Door_Basic_Base {};
class OZ_Door_BasicT5 : OZ_Door_Basic_Base {};

class OZ_Door_ReforcedT1 : KeyCard_Door_Base {};
class OZ_Door_ReforcedT2 : KeyCard_Door_Base {};
class OZ_Door_ReforcedT3 : KeyCard_Door_Base {};
class OZ_Door_ReforcedT4 : KeyCard_Door_Base {};
class OZ_Door_ReforcedT5 : KeyCard_Door_Base {};
class OZ_Door_Reforced_Hot : KeyCard_Door_Base {};
class OZ_Door_Reforced_Cold : KeyCard_Door_Base {};

class OZ_Door_BigT1 : KeyCard_Door_Base {};
class OZ_Door_BigT2 : KeyCard_Door_Base {};
class OZ_Door_BigT3 : KeyCard_Door_Base {};