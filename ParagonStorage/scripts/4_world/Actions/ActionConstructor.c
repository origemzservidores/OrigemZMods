modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
		//open close
		actions.Insert (ActionOpenCloseSC);
		actions.Insert (ActionOpenCloseGreenHouse);
		actions.Insert(ActionFurnitureClose);
		actions.Insert(ActionFurnitureOpen);
		
		actions.Insert(ActionDeleteContainerInstant);
		
		//CodeLock
		#ifdef CodeLock
		actions.Insert(DMP_ActionInteractLock);
        actions.Insert(DMP_ManageLock);
		actions.Insert(DMP_AttachCodeLock);
		actions.Insert(DMP_ActionDestroyCodeLock);
        actions.Insert(DMP_ActionLockAdmin);
		actions.Insert(DMP_ActionDestroyCodeLockCB);
		#endif		
    }
};