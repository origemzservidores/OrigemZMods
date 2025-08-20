class OZ_Container_Base: Container_Base
{
    protected bool m_IsOpened;
    protected bool m_OldLockState;
    // protected bool m_NeedClose;    

    void OZ_Container_Base()
    {
        RegisterNetSyncVariableBool("m_IsOpened");
        // // Rackfix: Precisa pois o mod de restaurar de arquivos cria o item e o lixo do expansion tranca o inventário antes de adiconar os itens e precisa ser Open() por conta do super.open
        // if (!IsOpen())
        // {
        //     Open();
        //     m_NeedClose = true;  
        // }
    }

    override void EEInit()
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CallEEInit, 1000, false, this);
    }

    void CallEEInit()
    {
        super.EEInit();

        // if (m_IsOpened)
        //     Open();
        // else
        //     Close();
    }

    // void UpdateContainerLockState()
    // {
    //     if (m_NeedClose)
    //     {
    //         Close();
    //         m_NeedClose = false;
    //     }

    // }

    override void Open()
    {
        super.Open();
        m_IsOpened = true;
	    UpdateVisualState();
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
        SetSynchDirty();
    }

    override void Close()
    {
        super.Close();
        m_IsOpened = false;
		UpdateVisualState();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
        SetSynchDirty();
    }

    void UpdateVisualState()
    {
       
    }

// // #ifdef EXPANSIONMODBASEBUILDING
//     override bool IsNonExpansionOpenable()
// 	{
// 		return true;
// 	}

//     override bool ExpansionHasCodeLock(string selection)
//     {
//         if (!super.ExpansionHasCodeLock(selection))
//             return false;
//         return true; 
//     }
// // #endif

};

