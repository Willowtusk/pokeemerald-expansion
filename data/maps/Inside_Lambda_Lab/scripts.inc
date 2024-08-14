Inside_Lambda_Lab_MapScripts::
	.byte 0


LAMBDA_HELIXGRUNT_1_BATTLE::
# 6 "data/maps/Inside_Lambda_Lab/scripts.pory"
	trainerbattle_single TRAINER_HELIX_GRUNT_LAMBDA_1, TEAM_HELIX_GRUNT_1_INTRO, TEAM_HELIX_GRUNT_1_OUTRO
# 7 "data/maps/Inside_Lambda_Lab/scripts.pory"
	msgbox LAMBDA_HELIXGRUNT_1_BATTLE_Text_0
# 8 "data/maps/Inside_Lambda_Lab/scripts.pory"
	closemessage
	return


LAMBDA_HELIXGRUNT_2_BATTLE::
# 12 "data/maps/Inside_Lambda_Lab/scripts.pory"
	trainerbattle_single TRAINER_HELIX_GRUNT_LAMBDA_2, TEAM_HELIX_GRUNT_2_INTRO, TEAM_HELIX_GRUNT_2_OUTRO
# 13 "data/maps/Inside_Lambda_Lab/scripts.pory"
	msgbox LAMBDA_HELIXGRUNT_2_BATTLE_Text_0
# 14 "data/maps/Inside_Lambda_Lab/scripts.pory"
	closemessage
	return


JENNINGS_BATTLE_1::
# 18 "data/maps/Inside_Lambda_Lab/scripts.pory"
	trainerbattle_single TRAINER_HELIX_ADMIN_JENNINGS_1, JENNINGS_1_INTRO, JENNINGS_1_OUTRO, JENNINGS_LEAVE_LAMBDA
	return


JENNINGS_LEAVE_LAMBDA::
# 57 "data/maps/Inside_Lambda_Lab/scripts.pory"
	lockall
# 58 "data/maps/Inside_Lambda_Lab/scripts.pory"
	faceplayer
# 59 "data/maps/Inside_Lambda_Lab/scripts.pory"
	msgbox JENNINGS_LEAVE_LAMBDA_Text_0
# 63 "data/maps/Inside_Lambda_Lab/scripts.pory"
	waitmessage
# 64 "data/maps/Inside_Lambda_Lab/scripts.pory"
	closemessage
# 65 "data/maps/Inside_Lambda_Lab/scripts.pory"
	giveitem ITEM_TM17
# 66 "data/maps/Inside_Lambda_Lab/scripts.pory"
	msgbox JENNINGS_LEAVE_LAMBDA_Text_1
# 72 "data/maps/Inside_Lambda_Lab/scripts.pory"
	waitmessage
# 73 "data/maps/Inside_Lambda_Lab/scripts.pory"
	closemessage
# 74 "data/maps/Inside_Lambda_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/Inside_Lambda_Lab/scripts.pory"
	playse SE_DOOR
# 76 "data/maps/Inside_Lambda_Lab/scripts.pory"
	removeobject 3
# 77 "data/maps/Inside_Lambda_Lab/scripts.pory"
	removeobject 2
# 78 "data/maps/Inside_Lambda_Lab/scripts.pory"
	removeobject 1
# 79 "data/maps/Inside_Lambda_Lab/scripts.pory"
	setflag FLAG_JENNINGS_DEFEATED
# 80 "data/maps/Inside_Lambda_Lab/scripts.pory"
	setvar VAR_JENNINGS_DEFEATED_LAMBDA, 1
# 81 "data/maps/Inside_Lambda_Lab/scripts.pory"
	delay 48
# 82 "data/maps/Inside_Lambda_Lab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/Inside_Lambda_Lab/scripts.pory"
	releaseall
	return


LAMBDA_HELIXGRUNT_1_BATTLE_Text_0:
# 7 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "How did you beat me??$"

LAMBDA_HELIXGRUNT_2_BATTLE_Text_0:
# 13 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "Good luck against the boss kiddo.$"

JENNINGS_LEAVE_LAMBDA_Text_0:
# 60 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "I suppose I should reward you\n"
	.string "for your efforts.\p"
	.string "Here take this TM.$"

JENNINGS_LEAVE_LAMBDA_Text_1:
# 67 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "That contains the move Protect.\p"
	.string "It will shield you from an\n"
	.string "opponents move for one turn.\p"
	.string "You may have thwarted our research\n"
	.string "here...\p"
	.string "but this won't be the last\n"
	.string "you see of Team Helix!$"

TEAM_HELIX_GRUNT_1_INTRO::
# 21 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "Listen kid, I don't know who you are.\p"
	.string "But we're in the middle of some REAL\nimportant business here!$"

TEAM_HELIX_GRUNT_1_OUTRO::
# 26 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "Wait what?!$"

TEAM_HELIX_GRUNT_2_INTRO::
# 30 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "A lab is no place for a kid like you!\p"
	.string "I'll kick you to the curb so our\nboss doesn't have to deal with you.$"

TEAM_HELIX_GRUNT_2_OUTRO::
# 35 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "You've earned the ire of our boss now!$"

JENNINGS_1_INTRO::
# 39 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "Well hello there.\p"
	.string "What am I doing here?\p"
	.string "I should be asking you the same thing!\p"
	.string "I work for the mighty Team Helix!\p"
	.string "Our goal is to uncover the secrets of\n"
	.string "the Pokemon genome.\p"
	.string "You will not stand in our way!$"

JENNINGS_1_OUTRO::
# 50 "data/maps/Inside_Lambda_Lab/scripts.pory"
	.string "You have some fight in you after all.\p"
	.string "But you cannot deny us for long!$"
