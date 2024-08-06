LambdaCave_MapScripts::
	.byte 0


CHARCOAL_ITEM_RECEIVED::
# 7 "data/maps/LambdaCave/scripts.pory"
	lockall
# 8 "data/maps/LambdaCave/scripts.pory"
	giveitem ITEM_CHARCOAL, 1
# 9 "data/maps/LambdaCave/scripts.pory"
	removeobject 1
# 10 "data/maps/LambdaCave/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 11 "data/maps/LambdaCave/scripts.pory"
	releaseall
	return


NINJA_BOY_LAMBDA_CAVE_1::
# 15 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_single TRAINER_NINJA_OWEN, NINJA_LAMBA_1_INTRO, NINJA_LAMBA_1_OUTRO
# 16 "data/maps/LambdaCave/scripts.pory"
	goto Rematch_Trainer_NINJA_BOY_OWEN
	return


NINJA_BOY_LAMBDA_CAVE_2::
# 28 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_single TRAINER_NINJA_ALEC, NINJA_LAMBA_2_INTRO, NINJA_LAMBA_2_OUTRO
# 29 "data/maps/LambdaCave/scripts.pory"
	goto Rematch_Trainer_NINJA_BOY_ALEC
	return


NINJA_BOY_LAMBDA_CAVE_3::
# 41 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_single TRAINER_NINJA_GABE, NINJA_LAMBA_3_INTRO, NINJA_LAMBA_3_OUTRO
# 42 "data/maps/LambdaCave/scripts.pory"
	goto Rematch_Trainer_NINJA_BOY_GABE
	return


SMOKE_BALL_OBTAINED::
# 56 "data/maps/LambdaCave/scripts.pory"
	lockall
# 57 "data/maps/LambdaCave/scripts.pory"
	giveitem ITEM_SMOKE_BALL, 1
# 58 "data/maps/LambdaCave/scripts.pory"
	removeobject 5
# 59 "data/maps/LambdaCave/scripts.pory"
	setflag FLAG_SMOKE_BALL_OBTAINED
# 60 "data/maps/LambdaCave/scripts.pory"
	releaseall
	return


Rematch_Trainer_NINJA_BOY_GABE::
# 64 "data/maps/LambdaCave/scripts.pory"
	msgbox Rematch_Trainer_NINJA_BOY_GABE_Text_0, MSGBOX_YESNO
# 66 "data/maps/LambdaCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_NINJA_BOY_GABE_1
# 70 "data/maps/LambdaCave/scripts.pory"
	closemessage
	end

Rematch_Trainer_NINJA_BOY_GABE_1:
# 67 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_no_intro TRAINER_NINJA_GABE, NINJA_LAMBA_3_OUTRO
	return


Rematch_Trainer_NINJA_BOY_OWEN::
# 76 "data/maps/LambdaCave/scripts.pory"
	msgbox Rematch_Trainer_NINJA_BOY_GABE_Text_0, MSGBOX_YESNO
# 78 "data/maps/LambdaCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_NINJA_BOY_OWEN_1
# 82 "data/maps/LambdaCave/scripts.pory"
	closemessage
	end

Rematch_Trainer_NINJA_BOY_OWEN_1:
# 79 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_no_intro TRAINER_NINJA_OWEN, NINJA_LAMBA_1_OUTRO
	return


Rematch_Trainer_NINJA_BOY_ALEC::
# 87 "data/maps/LambdaCave/scripts.pory"
	msgbox Rematch_Trainer_NINJA_BOY_GABE_Text_0, MSGBOX_YESNO
# 89 "data/maps/LambdaCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_NINJA_BOY_ALEC_1
# 93 "data/maps/LambdaCave/scripts.pory"
	closemessage
	end

Rematch_Trainer_NINJA_BOY_ALEC_1:
# 90 "data/maps/LambdaCave/scripts.pory"
	trainerbattle_no_intro TRAINER_NINJA_ALEC, NINJA_LAMBA_2_OUTRO
	return


Rematch_Trainer_NINJA_BOY_GABE_Text_0:
# 65 "data/maps/LambdaCave/scripts.pory"
	.string "Want to rematch this Trainer?$"

NINJA_LAMBA_1_INTRO::
# 19 "data/maps/LambdaCave/scripts.pory"
	.string "My mom tells me not to play in caves!$"

NINJA_LAMBA_1_OUTRO::
# 23 "data/maps/LambdaCave/scripts.pory"
	.string "Aww now I'll be caught.$"

NINJA_LAMBA_2_INTRO::
# 32 "data/maps/LambdaCave/scripts.pory"
	.string "Aha I gotcha, let's fight!$"

NINJA_LAMBA_2_OUTRO::
# 36 "data/maps/LambdaCave/scripts.pory"
	.string "Where'd my smoke bomb go!?$"

NINJA_LAMBA_3_INTRO::
# 45 "data/maps/LambdaCave/scripts.pory"
	.string "I'm the leader of the ninja gang!\p"
	.string "My friends helped me evolve\nmy Pokémon!\p"
	.string "Be prepared to lose kid!$"

NINJA_LAMBA_3_OUTRO::
# 51 "data/maps/LambdaCave/scripts.pory"
	.string "I guess you're the leader now...$"
