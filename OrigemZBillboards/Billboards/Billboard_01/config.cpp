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
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_Redragon_co.paa"};
	};
	
	// Exemplo (Substituir Apenas hiddenSelectionsTextures)
	class OZ_Billboard_Echo: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_Echo_co.paa"};
	};

	class OZ_Billboard_Ecxon: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_Ecxon_co.paa"};
	};
};
