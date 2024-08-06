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


SCIENTIST_LAMBDA_1_Text_0:
# 9 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "This is the Lambda base for Team Helix!\p"
	.string "I mean uh....\n"
	.string "scientists who wanna help save the\l"
	.string "world!$"

SCIENTIST_LAMBDA_2_Text_0:
# 20 "data/maps/Research_Lab_Lambda/scripts.pory"
	.string "We're currently using this cave to\n"
	.string "obtain specimens\p"
	.string "Please come back later.$"
