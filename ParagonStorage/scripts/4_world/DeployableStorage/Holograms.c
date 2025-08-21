modded class Hologram
{
	override string ProjectionBasedOnParent()
	{
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );


		if ( item_in_hands.IsInherited( StorageBox_Tcrate_Black ))
		{
			return "Paragon_TinyCrate_Black";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Tcrate_Grey ))
		{
			return "Paragon_TinyCrate_Grey";
		}

		if ( item_in_hands.IsInherited( StorageBox_Tcrate_Tan ))
		{
			return "Paragon_TinyCrate_Tan";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Tcrate_Green ))
		{
			return "Paragon_TinyCrate_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Tcrate_Blue ))
		{
			return "Paragon_TinyCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Scrate_Black ))
		{
			return "Paragon_SmallCrate_Black";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Scrate_Grey ))
		{
			return "Paragon_SmallCrate_Grey";
		}

		if ( item_in_hands.IsInherited( StorageBox_Scrate_Tan ))
		{
			return "Paragon_SmallCrate_Tan";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Scrate_Green ))
		{
			return "Paragon_SmallCrate_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Scrate_Blue ))
		{
			return "Paragon_SmallCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mcrate_Black ))
		{
			return "Paragon_MediumCrate_Black";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Mcrate_Grey ))
		{
			return "Paragon_MediumCrate_Grey";
		}

		if ( item_in_hands.IsInherited( StorageBox_Mcrate_Tan ))
		{
			return "Paragon_MediumCrate_Tan";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_Mcrate_Green ))
		{
			return "Paragon_MediumCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mcrate_Blue ))
		{
			return "Paragon_MediumCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunRack_Black ))
		{
			return "Paragon_GunRack_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunRack_Tan ))
		{
			return "Paragon_GunRack_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunRack_Green ))
		{
			return "Paragon_GunRack_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunRack_Black ))
		{
			return "Paragon_DGunRack_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunRack_Tan ))
		{
			return "Paragon_DGunRack_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunRack_Green ))
		{
			return "Paragon_DGunRack_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunCase_Brown ))
		{
			return "Paragon_GunCase_Brown";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunCase_Grey ))
		{
			return "Paragon_GunCase_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunCase_Cherry ))
		{
			return "Paragon_GunCase_Cherry";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunCase_Brown ))
		{
			return "Paragon_DGunCase_Brown";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunCase_Grey ))
		{
			return "Paragon_DGunCase_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_DGunCase_Cherry ))
		{
			return "Paragon_DGunCase_Cherry";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunWall_Black ))
		{
			return "Paragon_GunWall_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunWall_Tan ))
		{
			return "Paragon_GunWall_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_GunWall_Green ))
		{
			return "Paragon_GunWall_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_IceBox ))
		{
			return "Paragon_IceBox";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Black ))
		{
			return "Paragon_Locker_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Blue ))
		{
			return "Paragon_Locker_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Green ))
		{
			return "Paragon_Locker_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Purple ))
		{
			return "Paragon_Locker_Purple";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Red ))
		{
			return "Paragon_Locker_Red";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_White ))
		{
			return "Paragon_Locker_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_Locker_Yellow ))
		{
			return "Paragon_Locker_Yellow";
		}
		if ( item_in_hands.IsInherited( StorageBox_MetalRack_Black ))
		{
			return "Paragon_MetalRack_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_MetalRack_Tan ))
		{
			return "Paragon_MetalRack_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_MetalRack_Green ))
		{
			return "Paragon_MetalRack_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_HotDog_Cart ))
		{
			return "Paragon_HotDog_Cart";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Black ))
		{
			return "Paragon_Mcabinet_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Tan ))
		{
			return "Paragon_Mcabinet_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Green ))
		{
			return "Paragon_Mcabinet_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mlocker_Black ))
		{
			return "Paragon_Mlocker_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mlocker_Grey ))
		{
			return "Paragon_Mlocker_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mlocker_Tan ))
		{
			return "Paragon_Mlocker_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mlocker_Green ))
		{
			return "Paragon_Mlocker_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Mlocker_Blue ))
		{
			return "Paragon_Mlocker_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Black ))
		{
			return "Paragon_Safe_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Blue ))
		{
			return "Paragon_Safe_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Green ))
		{
			return "Paragon_Safe_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Gold ))
		{
			return "Paragon_Safe_Gold";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Grey ))
		{
			return "Paragon_Safe_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_White ))
		{
			return "Paragon_Safe_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_Safe_Rainbow ))
		{
			return "Paragon_Safe_Rainbow";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Black ))
		{
			return "Paragon_SmallSafe_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Blue ))
		{
			return "Paragon_SmallSafe_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Green ))
		{
			return "Paragon_SmallSafe_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Gold ))
		{
			return "Paragon_SmallSafe_Gold";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Grey ))
		{
			return "Paragon_SmallSafe_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_White ))
		{
			return "Paragon_SmallSafe_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Rainbow ))
		{
			return "Paragon_SmallSafe_Rainbow";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigSafe_Black ))
		{
			return "Paragon_BigSafe_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigSafe_Grey ))
		{
			return "Paragon_BigSafe_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigSafe_Rainbow ))
		{
			return "Paragon_BigSafe_Rainbow";
		}
		if ( item_in_hands.IsInherited( StorageBox_ToolB_Black ))
		{
			return "Paragon_ToolB_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_ToolB_Blue ))
		{
			return "Paragon_ToolB_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_ToolB_Red ))
		{
			return "Paragon_ToolB_Red";
		}
		if ( item_in_hands.IsInherited( StorageBox_ToolB_Yellow ))
		{
			return "Paragon_ToolB_Yellow";
		}
		if ( item_in_hands.IsInherited( StorageBox_ToolB_White ))
		{
			return "Paragon_ToolB_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wood_Crate ))
		{
			return "Paragon_Wood_Crate";
		}
		if ( item_in_hands.IsInherited( StorageBox_Pallet_Black ))
		{
			return "Paragon_Pallet_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Pallet_Tan ))
		{
			return "Paragon_Pallet_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Pallet_Green ))
		{
			return "Paragon_Pallet_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_HeliPad ))
		{
			return "Paragon_HeliPad";
		}
		if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Black ))
		{
			return "Paragon_MiliCrate_Black";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Grey ))
		{
			return "Paragon_MiliCrate_Grey";
		}

		if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Tan ))
		{
			return "Paragon_MiliCrate_Tan";
		}
		
		if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Green ))
		{
			return "Paragon_MiliCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Blue ))
		{
			return "Paragon_MiliCrate_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Fridge_Black ))
		{
			return "Paragon_Fridge_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Fridge_White ))
		{
			return "Paragon_Fridge_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Black ))
		{
			return "Paragon_Container_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Grey ))
		{
			return "Paragon_Container_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Tan ))
		{
			return "Paragon_Container_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Green ))
		{
			return "Paragon_Container_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Blue ))
		{
			return "Paragon_Container_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Container_Red ))
		{
			return "Paragon_Container_Red";
		}
		if ( item_in_hands.IsInherited( StorageBox_IC_Freezer ))
		{
			return "Paragon_IC_Freezer";
		}
		if ( item_in_hands.IsInherited( StorageBox_GearStand ))
		{
			return "Paragon_GearStand";
		}
		if ( item_in_hands.IsInherited( StorageBox_PlanterBox ))
		{
			return "Paragon_PlanterBox";
		}
		if ( item_in_hands.IsInherited( StorageBox_P_GreenHouse ))
		{
			return "Paragon_GreenHouse";
		}
		if ( item_in_hands.IsInherited( StorageBox_LargeGreenHouse ))
		{
			return "Paragon_LargeGreenHouse";
		}
		if ( item_in_hands.IsInherited( StorageBox_Rdoor_Black ))
		{
			return "Paragon_Rdoor_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Rdoor_Green ))
		{
			return "Paragon_Rdoor_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Adoor_Black ))
		{
			return "Paragon_Adoor_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Adoor_Blue ))
		{
			return "Paragon_Adoor_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_Adoor_Green ))
		{
			return "Paragon_Adoor_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Adoor_Gold ))
		{
			return "Paragon_Adoor_Gold";
		}
		if ( item_in_hands.IsInherited( StorageBox_Adoor_Rainbow ))
		{
			return "Paragon_Adoor_Rainbow";
		}
		if ( item_in_hands.IsInherited( StorageBox_Bdoor ))
		{
			return "Paragon_Bdoor";
		}
		if ( item_in_hands.IsInherited( StorageBox_GearStandC_B ))
		{
			return "Paragon_GearStandC_B";
		}
		if ( item_in_hands.IsInherited( StorageBox_GearStandC_G ))
		{
			return "Paragon_GearStandC_G";
		}
		if ( item_in_hands.IsInherited( StorageBox_GearStandC_C ))
		{
			return "Paragon_GearStandC_C";
		}
		if ( item_in_hands.IsInherited( StorageBox_Compound_Gate ))
		{
			return "Paragon_Compound_Gate";
		}
		if ( item_in_hands.IsInherited( StorageBox_Compound_Wall ))
		{
			return "Paragon_Compound_Wall";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wlocker_Black ))
		{
			return "Paragon_Wlocker_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wlocker_Grey ))
		{
			return "Paragon_Wlocker_Grey";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wlocker_Tan ))
		{
			return "Paragon_Wlocker_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wlocker_Green ))
		{
			return "Paragon_Wlocker_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Wlocker_Blue ))
		{
			return "Paragon_Wlocker_Blue";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigTent_Black ))
		{
			return "Paragon_BigTent_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigTent_Green ))
		{
			return "Paragon_BigTent_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_BigTent_White ))
		{
			return "Paragon_BigTent_White";
		}
		if ( item_in_hands.IsInherited( StorageBox_Dumpster ))
		{
			return "Paragon_Dumpster";
		}
		if ( item_in_hands.IsInherited( StorageBox_TrashCan ))
		{
			return "Paragon_TrashCan";
		}
		if ( item_in_hands.IsInherited( StorageBox_GraffitiCan ))
		{
			return "Paragon_GraffitiCan";
		}
		if ( item_in_hands.IsInherited( StorageBox_WallRack_Black ))
		{
			return "Paragon_WallRack_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_WallRack_Tan ))
		{
			return "Paragon_WallRack_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_WallRack_Green ))
		{
			return "Paragon_WallRack_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Black ))
		{
			return "Paragon_Weapons_Rack_Black";
		}
		if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Tan ))
		{
			return "Paragon_Weapons_Rack_Tan";
		}
		if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Green ))
		{
			return "Paragon_Weapons_Rack_Green";
		}
		if ( item_in_hands.IsInherited( StorageBox_WellPump ))
		{
			return "Paragon_WellPump";
		}
		if ( item_in_hands.IsInherited( StorageBox_FuelPump ))
		{
			return "Paragon_FuelPump";
		}
		if ( item_in_hands.IsInherited( StorageBox_Grill ))
		{
			return "Paragon_Grill";
		}
		if ( item_in_hands.IsInherited( StorageBox_SolarPanel ))
		{
			return "Paragon_SolarPanel";
		}

		return super.ProjectionBasedOnParent();
	}

	override EntityAI PlaceEntity( EntityAI entity_for_placing )
	{
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );

		if ( item_in_hands && item_in_hands.CanMakeGardenplot() )
		{
			Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition() ));
		}

		if( entity_for_placing.CanAffectPathgraph() )
		{
			entity_for_placing.SetAffectPathgraph( true, false );

			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
		}

		return entity_for_placing;
	}

	override void EvaluateCollision(ItemBase action_item = null)
	{
		ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );

		if(item_in_hands)
		{
			if ( item_in_hands.IsInherited( StorageBox_Tcrate_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Tcrate_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Tcrate_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Tcrate_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Tcrate_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Scrate_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcrate_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcrate_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcrate_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcrate_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcrate_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunRack_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunRack_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunRack_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunRack_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunRack_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunRack_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunCase_Brown ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunCase_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunCase_Cherry ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunCase_Brown ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunCase_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_DGunCase_Cherry ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunWall_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunWall_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GunWall_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_IceBox ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Purple ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Red ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Locker_Yellow ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_MetalRack_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MetalRack_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MetalRack_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_HotDog_Cart ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mcabinet_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			
			if ( item_in_hands.IsInherited( StorageBox_Mlocker_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mlocker_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mlocker_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mlocker_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Mlocker_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Gold ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Safe_Rainbow ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Gold ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_SmallSafe_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigSafe_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigSafe_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigSafe_Rainbow ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_ToolB_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_ToolB_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_ToolB_Red ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_ToolB_Yellow ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_ToolB_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Wood_Crate ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Pallet_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Pallet_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Pallet_Green ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_HeliPad ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_MiliCrate_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Fridge_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Fridge_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Container_Red ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_IC_Freezer ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_GearStand ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_PlanterBox ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_P_GreenHouse ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_LargeGreenHouse ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Rdoor_Black ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Rdoor_Green ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Adoor_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Adoor_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Adoor_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Adoor_Gold ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Adoor_Rainbow ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Bdoor ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GearStandC_B ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GearStandC_G ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GearStandC_C ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Compound_Gate ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Compound_Wall ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Wlocker_Black ))
			{
				SetIsColliding(false);
				return;
			}
			if ( item_in_hands.IsInherited( StorageBox_Wlocker_Grey ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Wlocker_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Wlocker_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Wlocker_Blue ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigTent_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigTent_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_BigTent_White ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Dumpster ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_TrashCan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_GraffitiCan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_WallRack_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_WallRack_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_WallRack_Green ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Black ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Tan ))
			{
				SetIsColliding(false);
				return;
			}
			
			if ( item_in_hands.IsInherited( StorageBox_Weapons_Rack_Green ))
			{
				SetIsColliding(false);
				return;
			}

			if ( item_in_hands.IsInherited( StorageBox_WellPump ))
			{
				SetIsColliding(false);
				return;
			}

			if ( item_in_hands.IsInherited( StorageBox_FuelPump ))
			{
				SetIsColliding(false);
				return;
			}

			if ( item_in_hands.IsInherited( StorageBox_Grill ))
			{
				SetIsColliding(false);
				return;
			}

			if ( item_in_hands.IsInherited( StorageBox_SolarPanel ))
			{
				SetIsColliding(false);
				return;
			}
			
		}
		super.EvaluateCollision();
	}
};
