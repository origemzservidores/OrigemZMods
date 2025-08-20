// modded class AnimatedActionBase
// {
// 	override bool ActionConditionContinue( ActionData action_data ) //condition for action
// 	{
//         // Se o codigo padrão do DayZ não permitir cancelar a ação, retorna falso
//         if ( !super.ActionConditionContinue(action_data))
//             return false;
        
//         // Se a ação tiver um alvo e o alvo for um container
//         if (action_data.m_Target)
//         {
//             Object targetObject = action_data.m_Target.GetObject();
//             if (targetObject)
//             {
//                 if (targetObject.IsInherited(Container_Base))
//                 {
//                     // Se não for habilitado na configuração, não permite desmontar o container
//                     if (action_data.m_Player.GetIsInRaid() && !GetDayZGame().SIG_GetRaidConfig().DismantleContainersInRaid)
//                         return false;

//                     // Verifica se o jogador pode desmontar o container nas condições do mod de raid.
//                     if (!action_data.m_Player.RaidCanDestroyLock())
//                         return false;
//                 }
//             }
//         }

//         return true;

//         // Paragon_
//     }
// }