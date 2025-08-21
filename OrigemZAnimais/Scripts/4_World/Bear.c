class OZ_Animal_UrsusArctos_ColorBase extends Animal_UrsusArctos
{			
	override bool IsZombieMilitary() //HABILITAR SE É OU NÃO UM ZOMBIE MILITAR
	{
		return false;
	}
	
	override bool ResistContaminatedEffect() //HABILITA RESISTENCIA A GÁZ TÓXICO
	{
		return true;
	}
	
	override bool CanBeSkinned() //HABILITA SER ESFOLADO PARA RETIRAR PELE E CARNE
	{
		return true;
	}
	
	override bool CanBeBackstabbed() //HABILITA A CRIATURA SER MORTO MODO STELLF
	{
		return false; 
	}

	//---------- ESCALA DA CRIATURA ----------//
	void OZ_Animal_UrsusArctos_ColorBase()
    {
        SetEventMask(EntityEvent.POSTFRAME);
    }
        
    override void EOnPostFrame(IEntity other, int extra)
    {
        float scale = 1.5;
        vector transform[4];
        GetTransform(transform);

        transform[0] = transform[0] * scale;
        transform[1] = transform[1] * scale;
        transform[2] = transform[2] * scale;

        SetTransform(transform);
        Update();
    }

    override void EOnFrame(IEntity other, float timeSlice)
    {
        vector rotation = GetYawPitchRoll();
        SetYawPitchRoll(Vector(rotation[0], 0, 0));
    }
};
