FelundityTownMain_MapScripts::
	.byte 0


FelundityFlowerShopSign::
# 7 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 8 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityFlowerShopSign_Text_0
# 9 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityFishingShopSign::
# 13 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 14 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityFishingShopSign_Text_0
# 15 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityBankShopSign::
# 19 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 20 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityBankShopSign_Text_0
# 21 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityGymSign::
# 25 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 26 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityGymSign_Text_0
# 27 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityMeowth::
# 31 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 32 "data/maps/FelundityTownMain/scripts.pory"
	faceplayer
# 33 "data/maps/FelundityTownMain/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_ENCOUNTER
# 34 "data/maps/FelundityTownMain/scripts.pory"
	waitmoncry
# 35 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityMeowth_Text_0
# 36 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 37 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


KidChasingMeowth::
# 41 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 42 "data/maps/FelundityTownMain/scripts.pory"
	faceplayer
# 43 "data/maps/FelundityTownMain/scripts.pory"
	msgbox KidChasingMeowth_Text_0
# 44 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 45 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


TwirlingTimburrFelundity::
# 49 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 50 "data/maps/FelundityTownMain/scripts.pory"
	playmoncry SPECIES_TIMBURR, CRY_MODE_ENCOUNTER
# 51 "data/maps/FelundityTownMain/scripts.pory"
	waitmoncry
# 52 "data/maps/FelundityTownMain/scripts.pory"
	msgbox TwirlingTimburrFelundity_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 54 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


BoyWithTimburrFelundity::
# 58 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 59 "data/maps/FelundityTownMain/scripts.pory"
	faceplayer
# 60 "data/maps/FelundityTownMain/scripts.pory"
	msgbox BoyWithTimburrFelundity_Text_0
# 61 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 62 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


MenBlockingGymFelundity::
# 66 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 67 "data/maps/FelundityTownMain/scripts.pory"
	faceplayer
# 68 "data/maps/FelundityTownMain/scripts.pory"
	msgbox MenBlockingGymFelundity_Text_0
# 69 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 70 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityOldMan::
# 74 "data/maps/FelundityTownMain/scripts.pory"
	lockall
# 75 "data/maps/FelundityTownMain/scripts.pory"
	faceplayer
# 76 "data/maps/FelundityTownMain/scripts.pory"
	msgbox FelundityOldMan_Text_0
# 77 "data/maps/FelundityTownMain/scripts.pory"
	waitmessage
# 78 "data/maps/FelundityTownMain/scripts.pory"
	releaseall
	return


FelundityFlowerShopSign_Text_0:
# 8 "data/maps/FelundityTownMain/scripts.pory"
	.string "Aromella's Flower Shop$"

FelundityFishingShopSign_Text_0:
# 14 "data/maps/FelundityTownMain/scripts.pory"
	.string "Daingler's Bait Shop$"

FelundityBankShopSign_Text_0:
# 20 "data/maps/FelundityTownMain/scripts.pory"
	.string "Felundity Bank$"

FelundityGymSign_Text_0:
# 26 "data/maps/FelundityTownMain/scripts.pory"
	.string "Felundity Gym/Department Store$"

FelundityMeowth_Text_0:
# 35 "data/maps/FelundityTownMain/scripts.pory"
	.string "Meoo$"

KidChasingMeowth_Text_0:
# 43 "data/maps/FelundityTownMain/scripts.pory"
	.string "Hey! Get back here Meowth, you stole my\n"
	.string "allowance for the week!$"

TwirlingTimburrFelundity_Text_0:
# 52 "data/maps/FelundityTownMain/scripts.pory"
	.string "Urrrr...$"

BoyWithTimburrFelundity_Text_0:
# 60 "data/maps/FelundityTownMain/scripts.pory"
	.string "Timburr here ran into the fence while we\n"
	.string "were playing... I hope he's gonna be okay$"

MenBlockingGymFelundity_Text_0:
# 68 "data/maps/FelundityTownMain/scripts.pory"
	.string "Sorry future champ, our gym leader\n"
	.string "Diana is currently going after the\l"
	.string "thugs that abducted her poor Pokémon.\l"
	.string "You could try to go after her I suppose,\l"
	.string "although it is dangerous. There's a lab\l"
	.string "to the west of town that is a bit shady,\l"
	.string "maybe start there?$"

FelundityOldMan_Text_0:
# 76 "data/maps/FelundityTownMain/scripts.pory"
	.string "I've lived here all my life and never\n"
	.string "once seen the water this color. Has our\l"
	.string "water supply been tainted?$"
