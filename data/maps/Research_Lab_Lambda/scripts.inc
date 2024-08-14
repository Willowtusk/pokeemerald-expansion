Research_Lab_Lambda_MapScripts::
	.byte 0


SCIENTIST_LAMBDA_1::
# 6 "data/maps/Research_Lab_Lambda/scripts.pory"
	lockall
# 7 "data/maps/Research_Lab_Lambda/scripts.pory"
	faceplayer
# 8 "data/maps/Research_Lab_Lambda/scripts.pory"
	msgbox SCIENTIST_LAMBDA_1_Text_0
# 12 "data/maps/Research_Lab_Lambda/scripts.pory"
	closemessage
# 13 "data/maps/Research_Lab_Lambda/scripts.pory"
	releaseall
	return


SCIENTIST_LAMBDA_2::
# 17 "data/maps/Research_Lab_Lambda/scripts.pory"
	lockall
# 18 "data/maps/Research_Lab_Lambda/scripts.pory"
	faceplayer
# 19 "data/maps/Research_Lab_Lambda/scripts.pory"
	msgbox SCIENTIST_LAMBDA_2_Text_0
# 23 "data/maps/Research_Lab_Lambda/scripts.pory"
	closemessage
# 24 "data/maps/Research_Lab_Lambda/scripts.pory"
	releaseall
	return


REMOVE_SCIENTIST_BLOCKING_CAVE::
# 28 "data/maps/Research_Lab_Lambda/scripts.pory"
	removeobject 2
# 29 "data/maps/Research_Lab_Lambda/scripts.pory"
	setvar VAR_JENNINGS_DEFEATED_LAMBDA, 2
	return


Lambda_Chansey::
# 33 "data/maps/Research_Lab_Lambda/scripts.pory"
	lockall
# 34 "data/maps/Research_Lab_Lambda/scripts.pory"
	faceplayer
# 35 "data/maps/Research_Lab_Lambda/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_ENCOUNTER
# 36 "data/maps/Research_Lab_Lambda/scripts.pory"
	waitmoncry
# 37 "data/maps/Research_Lab_Lambda/scripts.pory"
	msgbox Lambda_Chansey_Text_0
# 38 "data/maps/Research_Lab_Lambda/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/Research_Lab_Lambda/scripts.pory"
	special HealPlayerParty
# 40 "data/maps/Research_Lab_Lambda/scripts.pory"
	playfanfare MUS_HEAL
# 41 "data/maps/Research_Lab_Lambda/scripts.pory"
	waitfanfare
# 42 "data/maps/Research_Lab_Lambda/scripts.pory"
	closemessage
# 43 "data/maps/Research_Lab_Lambda/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data/maps/Research_Lab_Lambda/scripts.pory"
	release
	return


EV_Trainer_HP::
# 48 "data/maps/Research_Lab_Lambda/scripts.pory"
	lockall
# 49 "data/maps/Research_Lab_Lambda/scripts.pory"
	faceplayer
# 50 "data/maps/Research_Lab_Lambda/scripts.pory"
	msgbox EV_Trainer_HP_Text_0, MSGBOX_YESNO
# 54 "data/maps/Research_Lab_Lambda/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EV_Trainer_HP_2
# 58 "data/maps/Research_Lab_Lambda/scripts.pory"
	msgbox EV_Trainer_HP_Text_1
# 59 "data/maps/Research_Lab_Lambda/scripts.pory"
	closemessage
# 60 "data/maps/Research_Lab_Lambda/scripts.pory"
	releaseall
EV_Trainer_HP_1:
# 62 "data/maps/Research_Lab_Lambda/scripts.pory"
	closemessage
# 63 "data/maps/Research_Lab_Lambda/scripts.pory"
	releaseall
	end

EV_Trainer_HP_2:
# 55 "data/maps/Research_Lab_Lambda/scripts.pory"
	trainerbattle_no_intro TRAINER_SCIENTIST_LARDO, LARDO_LOSE
	goto EV_Trainer_HP_1


SCIENTIST_LAMBDA_1_Text_0:
# 9 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "This is the Lambda base for Team Helix!\p"
	.string "I mean uh....\n"
	.string "scientists who wanna help save the\l"
	.string "world!$"

SCIENTIST_LAMBDA_2_Text_0:
# 20 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "We're currently using this cave to\n"
	.string "obtain specimens.\p"
	.string "Please come back later.$"

Lambda_Chansey_Text_0:
# 37 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "SEYYY!$"

EV_Trainer_HP_Text_0:
# 51 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "Would you like to help us with our\n"
	.string "research?\p"
	.string "I can battle you to increase the\n"
	.string "health of your Pokémon.$"

EV_Trainer_HP_Text_1:
# 58 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "Maybe you'll come around...$"

LARDO_LOSE::
# 67 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "Thanks for your cooperation.$"
