modded class ActionConstructor
{
    override void RegisterActions( TTypenameArray actions )
    {
        super.RegisterActions( actions );

        actions.Insert( ActionAI2Self );
        actions.Insert( ActionAI2ArmySelf );
        actions.Insert( ActionAI2NaukSelf );
        actions.Insert( ActionAI2Target );
        actions.Insert( ActionAI2ArmyTarget );
        actions.Insert( ActionAI2NaukTarget );
        actions.Insert( ActionMedKitSelf );
        actions.Insert( ActionMedKitTarget );
        actions.Insert( ActionAdrenalineTarget );
        actions.Insert( ActionAdrenalineSelf );
        actions.Insert( OZM_Action_TargetPills );
        actions.Insert( OZM_Action_SelfPills );
    }
}