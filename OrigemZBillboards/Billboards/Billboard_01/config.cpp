class CfgPatches
{
	class OriginZBillboards
	{
		units[] = {"OZ_Billboard_Base","OZ_Billboard_01","OZ_Billboard_Echo_Ecxon"};
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
	};
	class OZ_Billboard_01: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_Redragon_co.paa"};
	};
	class OZ_Billboard_Echo_Ecxon: OZ_Billboard_Base
	{
		scope = 1;
		hiddenSelections[]= {"camo_03"};
		hiddenSelectionsTextures[]= {"OrigemZBillboards\Billboards\Billboard_01\Data\camo_Echo_Excon_co.paa"};
	};
};
