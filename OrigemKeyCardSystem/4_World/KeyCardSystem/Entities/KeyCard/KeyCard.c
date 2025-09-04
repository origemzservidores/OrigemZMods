class KeyCard_ParentBase : ItemBase {
    bool CanAuthorizeDoor( string type ) {
        return false;
    }

    override bool NameOverride(out string output)
	{
		string name = this.GetType();
        if (name.Contains("OZ_Keycard_BasicT")) {
            output = string.Format("#str_keycard_basicdoor_tittle %1", ConfigGetInt("CardTier"));
            return true;
        }

        if (name.Contains("OZ_Keycard_ReforcedT")) {
            output = string.Format("#str_keycard_reforceddoor_tittle %1", ConfigGetInt("CardTier"));
            return true;
        }

        if (name.Contains("OZ_Keycard_DoorBigT")) {
            output = string.Format("#str_keycard_areadoor_tittle %1", ConfigGetInt("CardTier"));
            return true;
        }

        //---------- TRADUÇÃO PARA NOVOS CARTÕES ----------//

        if (name.Contains("OZ_Keycard_Reforced_Hot")) {
            output = string.Format("#str_keycard_hot_tittle %1");
            return true;
        }

        if (name.Contains("OZ_Keycard_Reforced_Cold")) {
            output = string.Format("#str_keycard_cold_tittle %1");
            return true;
        }

        return false;
	}
	
	override bool DescriptionOverride(out string output)
	{
		string name = this.GetType();
        if (name.Contains("OZ_Keycard_BasicT")) {
            output = string.Format("#str_keycard_basicdoor_desc %1", ConfigGetInt("CardTier"));
            return true;
        }

        if (name.Contains("OZ_Keycard_ReforcedT")) {
            output = string.Format("#str_keycard_reforceddoor_desc %1", ConfigGetInt("CardTier"));
            return true;
        }

        if (name.Contains("OZ_Keycard_DoorBigT")) {
            output = string.Format("#str_keycard_areadoor_desc %1", ConfigGetInt("CardTier"));
            return true;
        }

        //---------- TRADUÇÃO PARA NOVOS CARTÕES ----------//

        if (name.Contains("OZ_Keycard_Reforced_Hot")) {
            output = string.Format("#str_keycard_hot_desc %1");
            return true;
        }

        if (name.Contains("OZ_Keycard_Reforced_Cold")) {
            output = string.Format("#str_keycard_cold_desc %1");
            return true;
        }

        return false;
	}

}

// Basic Keycards
class OZ_Keycard_BasicT1 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BasicT1";
    }
}
class OZ_Keycard_BasicT2 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BasicT2";
    }
}
class OZ_Keycard_BasicT3 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BasicT3";
    }
}
class OZ_Keycard_BasicT4 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BasicT4";}
}
class OZ_Keycard_BasicT5 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BasicT5";}
}

// Reinforced Keycards
class OZ_Keycard_ReforcedT1 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_ReforcedT1";
    }
}
class OZ_Keycard_ReforcedT2 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_ReforcedT2";
    }
}
class OZ_Keycard_ReforcedT3 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_ReforcedT3";
    }
}
class OZ_Keycard_ReforcedT4 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_ReforcedT4";
    }
}
class OZ_Keycard_ReforcedT5 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_ReforcedT5";
    }
}

//KEYCARDS HOT E COLD

class OZ_Keycard_Reforced_Hot : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_Reforced_Hot";
    }
}

class OZ_Keycard_Reforced_Cold : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_Reforced_Cold";
    }
}

// Big Keycards
class OZ_Keycard_DoorBigT1 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BigT1";
    }
}
class OZ_Keycard_DoorBigT2 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BigT2";
    }
}
class OZ_Keycard_DoorBigT3 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "OZ_Door_BigT3";
    }
}

// Rendemption Keycards
class RedemptionKeyCard_ASW1 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T1Door";
    }
}
class RedemptionKeyCard_ASW2 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T2Door";
    }
}
class RedemptionKeyCard_ASW3 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T3Door";
    }
}
class RedemptionKeyCard_ASW4 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T4Door";
    }
}
class RedemptionKeyCard_ASW5 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T5Door";
    }
}
class RedemptionKeyCard_ASW6 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T6Door";
    }
}
class RedemptionKeyCard_ASW7 : KeyCard_ParentBase {
    override bool CanAuthorizeDoor( string type ) {
        return type == "Land_KlimaX_T7Door";
    }
}