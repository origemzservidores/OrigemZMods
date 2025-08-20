modded class ModifiersManager
{
	override void Init()
	{
		super.Init();
		AddModifier(new OZM_AnalginMod);
		AddModifier(new AdrenalineMdfr);
		AddModifier(new OZM_Med_Pills_UgolMdfr);
		AddModifier(new OZM_Med_Pills_AntibiotickMdfr);
		AddModifier(new AdrenalinePillsMdfr);
		AddModifier(new PainKillersPillsMdfr);
		AddModifier(new HealPillsMdfr);
	}
};