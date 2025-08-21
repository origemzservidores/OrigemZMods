////////////////////////////////////////////////////////////////////
//DeRap: Tower\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Fri May 19 20:15:46 2023 : 'file' last modified on Wed Dec 31 21:00:00 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class OriginZBillboards
	{
		units[] = {"OZ_Billboard_Base","OZ_Billboard_01","OZ_Billboard_02"};
		requiredAddons[] = {"DZ_Data"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class OZ_Billboard_Base: HouseNoDestruct
	{
		scope = 0;
		model = "OrigemZBillboards\Billboards\Billboard_01\Billboard_01.p3d";
		hiddenSelections[]= {"camo_01","camo_02","camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_01_co.paa","OrigemZBillboards\Billboards\Billboard_01\Data\camo_02_co.paa","OrigemZBillboards\Billboards\Billboard_01\Data\camo_03_co.paa"};
	};
	
	class OZ_Billboard_01: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_03_co.paa"};
	};
	
	// Exemplo (Substituir Apenas hiddenSelectionsTextures)
	class OZ_Billboard_02: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_04"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_04_co.paa"};
	};
};
