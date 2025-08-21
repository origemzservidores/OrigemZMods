class CfgPatches
{
	class Trophy
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;

	class OZ_Trophy_Premium: Inventory_Base
	{
		scope = 2;
		displayName = "Troféu Premium OrigemZ";
		descriptionShort = "Conquista lendária forjada pelo suor de inúmeros eventos. Prova de superação, dedicação e glória. Somente os verdadeiros sobreviventes o carregam.";
		model = "OrigemZ_Trophy\Data\Trophy\Trofeu_Premium_OZ.p3d";
		debug_ItemCategory = 2;
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = {1,1};
		hiddenSelections[] = {"OZ"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
				};
			};
		};
	};
};
