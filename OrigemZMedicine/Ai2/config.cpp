class CfgPatches
{
	class OZM_Ai2_Base
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class OZM_Ai2_Base: Inventory_Base
	{
		scope=0;
		displayName="#ozm_AI2_name";
		descriptionShort="#ozm_AI2_desc";
		itemSize[]={2,2};
		weight=200;
		HiddenSelections[]=
		{
			"zbytek"
		};
		class AnimationSources
		{
			class lid
			{
				source="user";
				animPeriod=0.5;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Medkit_loop
				{
					soundSet="Medkit_loop_Soundset";
					id=201;
				};
				class Medkit_loop1
				{
					soundSet="Medkit_loop1_Soundset";
					id=202;
				};
				class Medkit_loop2
				{
					soundSet="Medkit_loop2_Soundset";
					id=203;
				};
				class compass_open
				{
					soundSet="compass_open_SoundSet";
					id=204;
				};
				class compass_close
				{
					soundSet="compass_close_SoundSet";
					id=205;
				};
			};
		};
	};
	class OZM_Ai2: OZM_Ai2_Base
	{
		scope=2;
		displayName="#ozm_AI2_name";
		descriptionShort="#ozm_AI2_desc";
		model="\OrigemZMedicine\Ai2\Ai2.p3d";
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Ai2\Ai2_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class OZM_Ai2_Army: OZM_Ai2_Base
	{
		scope=2;
		displayName="#ozm_AI2Army_name";
		descriptionShort="#ozm_AI2Army_desc";
		model="\OrigemZMedicine\Ai2\Ai2Army.p3d";
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Ai2\Data\AI2_Army_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class OZM_Ai2_Nauk: OZM_Ai2_Base
	{
		scope=2;
		displayName="#ozm_AI2Nauk_name";
		descriptionShort="#ozm_AI2Nauk_desc";
		model="\OrigemZMedicine\Ai2\Ai2Nauk.p3d";
		hiddenSelectionsTextures[]=
		{
			"OrigemZMedicine\Ai2\Data\AI2_Nauk_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"OrigemZMedicine\Ai2\Data\Ai2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
