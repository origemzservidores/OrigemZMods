modded class ItemBase
{
    EntityAI KeycardCreateInInventory(string className, bool attachOnly = false, int slotId = InventorySlots.INVALID)
	{
		if (!GetInventory())
			return NULL;

		//* NOTE: Both actual magazines and ammo inherit from Magazine_Base
		if (IsInherited(Weapon_Base) && GetGame().IsKindOf(className, "Magazine_Base") && !GetGame().IsKindOf(className, "Ammunition_Base"))
		{
			//* It's an actual magazine
			Weapon_Base weapon = Weapon_Base.Cast(this);

			InventoryLocation il = new InventoryLocation;
			if (slotId == InventorySlots.INVALID)
				slotId = InventorySlots.MAGAZINE;
			il.SetAttachment(weapon, NULL, slotId);
			
			EntityAI magazine = SpawnEntity(className, il, ECE_IN_INVENTORY, RF_DEFAULT);
			if (!magazine)
				return NULL;

			//* Important: Needs to be called BEFORE pushing bullet to chamber, otherwise save will occur in FSM transition
			int stateId = weapon.KeycardGetMagAttachedtateID();

			int muzzleIndex = weapon.GetCurrentMuzzle();
			if (!weapon.IsChamberFull(muzzleIndex) || weapon.IsChamberFiredOut(muzzleIndex))
			{
				Print("KeycardSystem - chamber weapon " + weapon);
				pushToChamberFromAttachedMagazine(weapon, muzzleIndex);
			}

			if (stateId > -1)
			{
				ScriptReadWriteContext ctx = new ScriptReadWriteContext;
				ctx.GetWriteContext().Write(stateId);
				weapon.LoadCurrentFSMState(ctx.GetReadContext(), GetGame().SaveVersion());
			}

		#ifdef SERVER
			weapon.Synchronize();
		#else
			weapon.ShowMagazine();
		#endif

			//* We are done
			return magazine;
		}

		//* Any other item
		if (attachOnly)
		{
			if (slotId == InventorySlots.INVALID)
				return GetInventory().CreateAttachment(className);
			else
				return GetInventory().CreateAttachmentEx(className, slotId);
		}

		return GetInventory().CreateInInventory(className);
	}
}