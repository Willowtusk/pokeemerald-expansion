Route701_2_MapScripts::
	.byte 0


Fisherman_Route701::
# 6 "data/maps/Route701_2/scripts.pory"
	lockall
# 7 "data/maps/Route701_2/scripts.pory"
	faceplayer
# 8 "data/maps/Route701_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Fisherman_Route701_2
# 22 "data/maps/Route701_2/scripts.pory"
	msgbox Fisherman_Route701_Text_2
# 23 "data/maps/Route701_2/scripts.pory"
	closemessage
Fisherman_Route701_1:
# 25 "data/maps/Route701_2/scripts.pory"
	releaseall
	return

Fisherman_Route701_2:
# 9 "data/maps/Route701_2/scripts.pory"
	msgbox Fisherman_Route701_Text_0
# 13 "data/maps/Route701_2/scripts.pory"
	closemessage
# 14 "data/maps/Route701_2/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 15 "data/maps/Route701_2/scripts.pory"
	msgbox Fisherman_Route701_Text_1
# 18 "data/maps/Route701_2/scripts.pory"
	waitmessage
# 19 "data/maps/Route701_2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto Fisherman_Route701_1


Azurill_Route701::
# 29 "data/maps/Route701_2/scripts.pory"
	lockall
# 30 "data/maps/Route701_2/scripts.pory"
	faceplayer
# 31 "data/maps/Route701_2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 32 "data/maps/Route701_2/scripts.pory"
	waitmoncry
# 33 "data/maps/Route701_2/scripts.pory"
	msgbox Azurill_Route701_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route701_2/scripts.pory"
	releaseall
	return


ITEM_BRIGHTPOWDER_OBTAINED::
# 38 "data/maps/Route701_2/scripts.pory"
	lockall
# 39 "data/maps/Route701_2/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER, 1
# 40 "data/maps/Route701_2/scripts.pory"
	removeobject 3
# 41 "data/maps/Route701_2/scripts.pory"
	setflag FLAG_ITEM_ROUTE_701_BRIGHT_POWDER
# 42 "data/maps/Route701_2/scripts.pory"
	releaseall
	return


BOY_ROUTE701::
# 46 "data/maps/Route701_2/scripts.pory"
	lockall
# 47 "data/maps/Route701_2/scripts.pory"
	faceplayer
# 48 "data/maps/Route701_2/scripts.pory"
	msgbox BOY_ROUTE701_Text_0
# 49 "data/maps/Route701_2/scripts.pory"
	closemessage
# 50 "data/maps/Route701_2/scripts.pory"
	releaseall
	return


CAMPER_LARRY_Route701::
# 54 "data/maps/Route701_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE701_LARRY, LARRY_701_INTRO, LARRY_701_OUTRO
# 55 "data/maps/Route701_2/scripts.pory"
	goto Rematch_Trainer_CAMPER_LARRY_701
	return


Rematch_Trainer_CAMPER_LARRY_701::
# 69 "data/maps/Route701_2/scripts.pory"
	msgbox Rematch_Trainer_CAMPER_LARRY_701_Text_0, MSGBOX_YESNO
# 71 "data/maps/Route701_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_CAMPER_LARRY_701_1
# 75 "data/maps/Route701_2/scripts.pory"
	closemessage
	end

Rematch_Trainer_CAMPER_LARRY_701_1:
# 72 "data/maps/Route701_2/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE701_LARRY, LARRY_701_OUTRO
	return


Route_701_Lass_Battle::
# 81 "data/maps/Route701_2/scripts.pory"
	trainerbattle_single TRAINER_LASS_EMILY_701, Route_701_Lass_Intro, Route_701_Lass_Outro
# 82 "data/maps/Route701_2/scripts.pory"
	goto Rematch_Trainer_LASS_EMILY
	return


Rematch_Trainer_LASS_EMILY::
# 86 "data/maps/Route701_2/scripts.pory"
	msgbox Rematch_Trainer_CAMPER_LARRY_701_Text_0, MSGBOX_YESNO
# 88 "data/maps/Route701_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_LASS_EMILY_1
# 92 "data/maps/Route701_2/scripts.pory"
	closemessage
	end

Rematch_Trainer_LASS_EMILY_1:
# 89 "data/maps/Route701_2/scripts.pory"
	trainerbattle_no_intro TRAINER_LASS_EMILY_701, Route_701_Lass_Outro
	return


SEA_INCENSE_OBTAINED::
# 106 "data/maps/Route701_2/scripts.pory"
	lockall
# 107 "data/maps/Route701_2/scripts.pory"
	giveitem ITEM_SEA_INCENSE, 1
# 108 "data/maps/Route701_2/scripts.pory"
	removeobject 7
# 109 "data/maps/Route701_2/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE
# 110 "data/maps/Route701_2/scripts.pory"
	releaseall
	return


Fisherman_Route701_Text_0:
# 10 "data/maps/Route701_2/scripts.pory"
	.string "Grr the fish aren't biting today...\p"
	.string "Maybe you can do better than me.$"

Fisherman_Route701_Text_1:
# 16 "data/maps/Route701_2/scripts.pory"
	.string "That oughta get you started!$"

Fisherman_Route701_Text_2:
# 22 "data/maps/Route701_2/scripts.pory"
	.string "Caught any big ones yet?$"

Azurill_Route701_Text_0:
# 33 "data/maps/Route701_2/scripts.pory"
	.string "ZUUU!$"

BOY_ROUTE701_Text_0:
# 48 "data/maps/Route701_2/scripts.pory"
	.string "I'm a long way from home...$"

Rematch_Trainer_CAMPER_LARRY_701_Text_0:
# 70 "data/maps/Route701_2/scripts.pory"
	.string "Want to rematch this Trainer?$"

LARRY_701_INTRO::
# 58 "data/maps/Route701_2/scripts.pory"
	.string "Hope you brought your camping supplies!\l"
	.string "I know I did!$"

LARRY_701_OUTRO::
# 63 "data/maps/Route701_2/scripts.pory"
	.string "Guess I should have brought more\n"
	.string "firewood!$"

Route_701_Lass_Intro::
# 97 "data/maps/Route701_2/scripts.pory"
	.string "I just love cute Pokémon!$"

Route_701_Lass_Outro::
# 101 "data/maps/Route701_2/scripts.pory"
	.string "Aww my cuties didn't win.$"
