LambdaCave_3_MapScripts::
	.byte 0


Lambda_Cave_Gentleman_Marko::
# 8 "data/maps/LambdaCave_3/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_MARKO, GENTLEMAN_MARKO_INTRO, GENTLEMAN_MARKO_OUTRO
# 9 "data/maps/LambdaCave_3/scripts.pory"
	goto Rematch_Trainer_GENTLEMAN_MARKO
	return


Rematch_Trainer_GENTLEMAN_MARKO::
# 23 "data/maps/LambdaCave_3/scripts.pory"
	msgbox Rematch_Trainer_GENTLEMAN_MARKO_Text_0, MSGBOX_YESNO
# 25 "data/maps/LambdaCave_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_GENTLEMAN_MARKO_1
# 29 "data/maps/LambdaCave_3/scripts.pory"
	closemessage
	end

Rematch_Trainer_GENTLEMAN_MARKO_1:
# 26 "data/maps/LambdaCave_3/scripts.pory"
	trainerbattle_no_intro TRAINER_GENTLEMAN_MARKO, GENTLEMAN_MARKO_OUTRO
	return


Mawile_Cave_Battle::
# 35 "data/maps/LambdaCave_3/scripts.pory"
	lockall
# 36 "data/maps/LambdaCave_3/scripts.pory"
	faceplayer
# 37 "data/maps/LambdaCave_3/scripts.pory"
	msgbox Mawile_Cave_Battle_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/LambdaCave_3/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_ENCOUNTER
# 39 "data/maps/LambdaCave_3/scripts.pory"
	delay 40
# 40 "data/maps/LambdaCave_3/scripts.pory"
	waitmoncry
# 41 "data/maps/LambdaCave_3/scripts.pory"
	setwildbattle SPECIES_MAWILE, 15, ITEM_LEFTOVERS
# 42 "data/maps/LambdaCave_3/scripts.pory"
	dowildbattle
# 43 "data/maps/LambdaCave_3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/LambdaCave_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Mawile_Cave_Battle_2
# 47 "data/maps/LambdaCave_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Mawile_Cave_Battle_3
# 50 "data/maps/LambdaCave_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Mawile_Cave_Battle_4
# 53 "data/maps/LambdaCave_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Mawile_Cave_Battle_5
Mawile_Cave_Battle_1:
# 56 "data/maps/LambdaCave_3/scripts.pory"
	waitmessage
# 57 "data/maps/LambdaCave_3/scripts.pory"
	releaseall
	return

Mawile_Cave_Battle_2:
# 45 "data/maps/LambdaCave_3/scripts.pory"
	call Caught_Mawile
	goto Mawile_Cave_Battle_1

Mawile_Cave_Battle_3:
# 48 "data/maps/LambdaCave_3/scripts.pory"
	call Won_Mawile
	goto Mawile_Cave_Battle_1

Mawile_Cave_Battle_4:
# 51 "data/maps/LambdaCave_3/scripts.pory"
	call RanAway_Mawile
	goto Mawile_Cave_Battle_1

Mawile_Cave_Battle_5:
# 54 "data/maps/LambdaCave_3/scripts.pory"
	call RanAway_Mawile
	goto Mawile_Cave_Battle_1


Won_Mawile::
# 61 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/LambdaCave_3/scripts.pory"
	removeobject 3
# 63 "data/maps/LambdaCave_3/scripts.pory"
	setflag FLAG_LAMBDA_CAVE_MAWILE
# 64 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/LambdaCave_3/scripts.pory"
	msgbox Won_Mawile_Text_0
	return


Caught_Mawile::
# 70 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/LambdaCave_3/scripts.pory"
	removeobject 3
# 72 "data/maps/LambdaCave_3/scripts.pory"
	setflag FLAG_LAMBDA_CAVE_MAWILE
# 73 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 74 "data/maps/LambdaCave_3/scripts.pory"
	msgbox Caught_Mawile_Text_0
	return


RanAway_Mawile::
# 79 "data/maps/LambdaCave_3/scripts.pory"
	playmoncry SPECIES_MAWILE, CRY_MODE_ENCOUNTER
# 80 "data/maps/LambdaCave_3/scripts.pory"
	msgbox RanAway_Mawile_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/LambdaCave_3/scripts.pory"
	delay 20
# 82 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/LambdaCave_3/scripts.pory"
	removeobject 3
# 84 "data/maps/LambdaCave_3/scripts.pory"
	setflag FLAG_LAMBDA_CAVE_MAWILE
# 85 "data/maps/LambdaCave_3/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


LAMBDA_CAVE_STAR_PIECE_OBTAINED::
# 91 "data/maps/LambdaCave_3/scripts.pory"
	lockall
# 92 "data/maps/LambdaCave_3/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 93 "data/maps/LambdaCave_3/scripts.pory"
	removeobject 1
# 94 "data/maps/LambdaCave_3/scripts.pory"
	setflag FLAG_ITEM_LAMBDACAVE_STAR_PIECE
# 95 "data/maps/LambdaCave_3/scripts.pory"
	releaseall
	return


Rematch_Trainer_GENTLEMAN_MARKO_Text_0:
# 24 "data/maps/LambdaCave_3/scripts.pory"
	.string "Want to rematch this Trainer?$"

Mawile_Cave_Battle_Text_0:
# 37 "data/maps/LambdaCave_3/scripts.pory"
	.string "The wild Mawile looks hungry....$"

Won_Mawile_Text_0:
# 65 "data/maps/LambdaCave_3/scripts.pory"
	.string "You Defeated the Mawile!$"

Caught_Mawile_Text_0:
# 74 "data/maps/LambdaCave_3/scripts.pory"
	.string "You caught Mawile$"

RanAway_Mawile_Text_0:
# 80 "data/maps/LambdaCave_3/scripts.pory"
	.string "The Mawile eyes you hungrily.. but leaves.$"

GENTLEMAN_MARKO_INTRO::
# 12 "data/maps/LambdaCave_3/scripts.pory"
	.string "I seem to have forgotten my keys..\p"
	.string "Good thing this Pokémon can be used\n"
	.string "as a substitute!$"

GENTLEMAN_MARKO_OUTRO::
# 18 "data/maps/LambdaCave_3/scripts.pory"
	.string "I better get home now I suppose...$"
