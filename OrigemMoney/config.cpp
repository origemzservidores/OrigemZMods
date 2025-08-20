class CfgPatches
{
	class OrigemMoney
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"KCS_Money",
			"OrigemTextures"
		};
	};
};
class CfgVehicles
{
	class Coin_Base;
	class Money_Base;
	class Wad_Base;
	
	class OZ_Money_1: Money_Base
	{
		scope=2;
		displayName="1 Oz";
		descriptionShort="5 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\01_oz.paa"
		};
	};
	class OZ_Money_5: Money_Base
	{
		scope=2;
		displayName="5 Oz's";
		descriptionShort="5 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\05_oz.paa"
		};
	};
	class OZ_Money_10: Money_Base
	{
		scope=2;
		displayName="10 Oz's";
		descriptionShort="10 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\10_oz.paa"
		};
	};
	class OZ_Money_20: Money_Base
	{
		scope=2;
		displayName="20 Oz's";
		descriptionShort="20 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\20_oz.paa"
		};
	};
	class OZ_Money_50: Money_Base
	{
		scope=2;
		displayName="50 Oz's";
		descriptionShort="50 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\50_oz.paa"
		};
	};
	class OZ_Money_100: Money_Base
	{
		scope=2;
		displayName="100 Oz's";
		descriptionShort="100 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\100_oz.paa"
		};
	};
	class OZ_Money_200: Money_Base
	{
		scope=2;
		displayName="200 Oz's";
		descriptionShort="200 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\200_oz.paa"
		};
	};
	class OZ_Money_500: Money_Base
	{
		scope=2;
		displayName="500 Oz's";
		descriptionShort="500 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\500_oz.paa"
		};
	};
	class OZ_Money_1000: Money_Base
	{
		scope=2;
		displayName="1000 Oz's";
		descriptionShort="1000 Oz's";
		hiddenSelectionsTextures[]=
		{
			"OrigemTextures\Images\OzCoin\1000_oz.paa"
		};
	};
};