class CfgPatches
{
	class SolarPanel
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts", "DZ_Characters", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Data"};
	};
};

class CfgVehicles
{	
	class PowerGenerator;
	
	class Paragon_SolarPanel_ColorBase: PowerGenerator
	{
		scope=0;
		displayName = "Painel Solar ColorBase";
		descriptionShort = "Painel solar utilizado para converter energia solar em eletricidade, ideal para alimentar equipamentos e bases em ambientes remotos.";
		model="ParagonStorage\SolarPanel\Data\SolarPanel.p3d";
		rotationFlags=2;
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		weight=45000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot[]={"SolarPannel"};
		attachments[]={};
		fuelTankCapacity=7000;
		carveNavmesh=1;
		heavyItem=1;
		physLayer = "item_large";
		hologramMaterial="power_generator";
		hologramMaterialPath="dz\gear\camping\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
				};
			};
		};
		repairableWithKits[]={7,10};
		repairCosts[]={25,30};
		class EnergyManager
		{
			hasIcon = 1;					   // Mostra um ícone de energia no HUD do jogador.
			autoSwitchOff = 1;				   // Desliga automaticamente quando não há energia suficiente ou o dispositivo não está em uso.
			energyStorageMax = 100000;		   // Capacidade máxima de armazenamento de energia (bateria interna, se aplicável).
			energyUsagePerSecond = 0.10;	   // Consumo de energia por segundo enquanto o aparelho está ligado.
			reduceMaxEnergyByDamageCoef = 0.5; // Se o item estiver danificado, a capacidade máxima de energia é reduzida pela metade (50%).
			energyAtSpawn = 10000;			   // Energia inicial quando o item é criado ou spawnado.
			powerSocketsCount = 4;			   // Quantidade de tomadas/saídas de energia disponíveis (pode conectar até 4 aparelhos).
			compatiblePlugTypes[] = {2, 6};	   // Tipos de plugues compatíveis para conexão (números definidos pelo sistema do DayZ).
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_2_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_3_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_4_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class sparkplug
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class fuel_tank
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class sparkplug_installed
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class dial_fuel
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class walk
				{
					soundSet="powergenerator_movement_walk_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="powergenerator_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class Paragon_SolarPanel : Paragon_SolarPanel_ColorBase
	{
		scope = 2;
		displayName = "Solar Panel";
		descriptionShort = "Painel solar utilizado para converter energia solar em eletricidade, ideal para alimentar equipamentos e bases em ambientes remotos.";
	};
};

