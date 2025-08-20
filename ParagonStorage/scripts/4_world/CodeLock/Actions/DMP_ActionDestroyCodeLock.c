#ifdef CodeLock
class DMP_ActionDestroyCodeLockCB : ActionContinuousBaseCB
{
    override void CreateActionComponent() 
	{
        if (GetDayZGame().GetCodeLockConfig()) {
            m_ActionData.m_ActionComponent = new CAContinuousRepeat((GetDayZGame().GetCodeLockConfig().GetTentRaidTime() * 60) / GetDayZGame().GetCodeLockConfig().GetIncrementAmount()); // config value to minutes
        } else {
            super.CreateActionComponent();
        }
    }
};

class DMP_ActionDestroyCodeLock : ActionContinuousBase
{
    protected float _Health;
    protected float _maxHealth;

    void DMP_ActionDestroyCodeLock()
    {
        m_CallbackClass = DMP_ActionDestroyCodeLockCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
        m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
        m_FullBody = true;
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }

    override string GetText() {
        int healthPercentage = (_Health / _maxHealth) * 100;
        return "Destroy Codelock | HP: " + healthPercentage + "%";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        ItemBase itemBase = ItemBase.Cast(target.GetObject());
        CodeLock codelock;
        _Health = 0;
        _maxHealth = 0;

        if (itemBase && (itemBase.IsKindOf("Paragon_Lockable_Base")))
        {
            Class.CastTo(codelock, itemBase.GetCodeLock());

            if (codelock && GetDayZGame().GetCodeLockConfig().CanRaidTents()) {
                _Health = codelock.GetSynchronizedHealth();
                _maxHealth = codelock.GetMaxHealth("", "Health");
                return true;
            }
        }
        return false;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        if (!GetDayZGame().GetCodeLockConfig().CanRaidTents())
            return;

        ItemBase itemBase = ItemBase.Cast(action_data.m_Target.GetObject());
        float raidIncrementAmount = _maxHealth / GetDayZGame().GetCodeLockConfig().GetIncrementAmount();
        int toolDamage = GetDayZGame().GetCodeLockConfig().GetToolDamageonRaid();

        if (itemBase)
        {
            CodeLock codelock = itemBase.GetCodeLock();

            if (codelock) 
			{
                codelock.AddHealth("", "Health", -raidIncrementAmount);

                float _Health = codelock.GetHealth();

                codelock.SetSynchronizedHealth(_Health);

                if (_Health > 0) 
				{
                    GetCodeLockLogger().WriteLog("RAID", action_data.m_Player.GetIdentity(), codelock.GetPosition(), "", false, false, raidIncrementAmount, _Health);
                } 
				else 
                {
                    codelock.UnlockServer(action_data.m_Player, itemBase);

                    if (GetDayZGame().GetCodeLockConfig().DeleteLockonRaid())
                        codelock.Delete();                        
                    if (toolDamage > 0)
                        action_data.m_MainItem.DecreaseHealth(toolDamage, false);
                    GetCodeLockLogger().WriteLog("RAID", action_data.m_Player.GetIdentity(), codelock.GetPosition(), "", false, true);
                }
            }
        }
    }

    override string GetAdminLogMessage(ActionData action_data)
    {
        return " destroyed CodeLock on " + action_data.m_Target.GetObject().GetDisplayName() + " at " + action_data.m_Player.GetPosition();
    }
};
#endif