class OZ_Crate_Base: Container_Base
{   
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
      
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;	
  } 

  override bool IsDeployable() 
  {
      return true;
  }    
};