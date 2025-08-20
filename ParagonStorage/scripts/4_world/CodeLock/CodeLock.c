#ifdef CodeLock
modded class CodeLock
{
	override void NewUnlockServer(EntityAI player, EntityAI parent)
    {
        if (!GetGame().IsServer() || !GetGame().IsMultiplayer())
            return;
        ItemBase itemBase = ItemBase.Cast(parent);
        if (itemBase && itemBase.IsKindOf("Paragon_Lockable_Base"))
        {
            itemBase.Open();
            
            player.ServerDropEntity( this );
            SetPosition(player.GetPosition());
        }

        super.NewUnlockServer(player, parent);
    }
	
    override void SetActions() 
	{
        super.SetActions();
       	AddAction(DMP_AttachCodeLock);
    }
}
#endif