LambdaCave_2_MapScripts::
	.byte 0


Lambda_Cave_Camper_Cole::
# 8 "data/maps/LambdaCave_2/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_COLE, CAMPER_COLE_INTRO, CAMPER_COLE_OUTRO
# 9 "data/maps/LambdaCave_2/scripts.pory"
	goto Rematch_Trainer_CAMPER_COLE
	return


Rematch_Trainer_CAMPER_COLE::
# 23 "data/maps/LambdaCave_2/scripts.pory"
	msgbox Rematch_Trainer_CAMPER_COLE_Text_0, MSGBOX_YESNO
# 25 "data/maps/LambdaCave_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_CAMPER_COLE_1
# 29 "data/maps/LambdaCave_2/scripts.pory"
	closemessage
	end

Rematch_Trainer_CAMPER_COLE_1:
# 26 "data/maps/LambdaCave_2/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMPER_COLE, CAMPER_COLE_OUTRO
	return


Lambda_Cave_Hiker_Joel::
# 37 "data/maps/LambdaCave_2/scripts.pory"
	trainerbattle_single TRAINER_HIKER_JOEL, HIKER_JOEL_INTRO, HIKER_JOEL_OUTRO
# 38 "data/maps/LambdaCave_2/scripts.pory"
	goto Rematch_Trainer_HIKER_JOEL
	return


Rematch_Trainer_HIKER_JOEL::
# 53 "data/maps/LambdaCave_2/scripts.pory"
	msgbox Rematch_Trainer_CAMPER_COLE_Text_0, MSGBOX_YESNO
# 55 "data/maps/LambdaCave_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_HIKER_JOEL_1
# 59 "data/maps/LambdaCave_2/scripts.pory"
	closemessage
	end

Rematch_Trainer_HIKER_JOEL_1:
# 56 "data/maps/LambdaCave_2/scripts.pory"
	trainerbattle_no_intro TRAINER_HIKER_JOEL, HIKER_JOEL_OUTRO
	return


LAMBDA_CAVE_NUGGET_OBTAINED::
# 65 "data/maps/LambdaCave_2/scripts.pory"
	lockall
# 66 "data/maps/LambdaCave_2/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 67 "data/maps/LambdaCave_2/scripts.pory"
	removeobject 2
# 68 "data/maps/LambdaCave_2/scripts.pory"
	setflag FLAG_ITEM_LAMBDACAVE_NUGGET
# 69 "data/maps/LambdaCave_2/scripts.pory"
	releaseall
	return


Rematch_Trainer_CAMPER_COLE_Text_0:
# 24 "data/maps/LambdaCave_2/scripts.pory"
	.string "Want to rematch this Trainer?$"

CAMPER_COLE_INTRO::
# 12 "data/maps/LambdaCave_2/scripts.pory"
	.string "I love these new shoes!\p"
	.string "They give me so much energy!$"

CAMPER_COLE_OUTRO::
# 17 "data/maps/LambdaCave_2/scripts.pory"
	.string "Even though you beat me\n"
	.string "I can still walk for miles!$"

HIKER_JOEL_INTRO::
# 41 "data/maps/LambdaCave_2/scripts.pory"
	.string "My legs are killing me!\p"
	.string "How about a battle to take\nthe edge off?$"

HIKER_JOEL_OUTRO::
# 46 "data/maps/LambdaCave_2/scripts.pory"
	.string "On the bright side my legs\ndon't hurt anymore!$"
