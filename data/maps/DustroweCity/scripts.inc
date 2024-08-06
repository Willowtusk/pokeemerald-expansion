DustroweCity_MapScripts::
	.byte 0


Dustrowe_Gym_Sign::
# 6 "data/maps/DustroweCity/scripts.pory"
	lockall
# 7 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Gym_Sign_Text_0
# 8 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 9 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


DEFEAT_RIVAL_1::
# 13 "data/maps/DustroweCity/scripts.pory"
	lockall
# 14 "data/maps/DustroweCity/scripts.pory"
	msgbox DEFEAT_RIVAL_1_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/DustroweCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_DOWN
# 16 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Generator_Man::
# 20 "data/maps/DustroweCity/scripts.pory"
	lockall
# 21 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 22 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Generator_Man_Text_0
# 29 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 30 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Little_Girl::
# 34 "data/maps/DustroweCity/scripts.pory"
	lockall
# 35 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 36 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Little_Girl_Text_0
# 43 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 44 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Gym_Sign_Text_0:
# 7 "data/maps/DustroweCity/scripts.pory"
	.string "Dustrowe Gym$"

DEFEAT_RIVAL_1_Text_0:
# 14 "data/maps/DustroweCity/scripts.pory"
	.string "Let's see what Lily is doing$"

Dustrowe_Generator_Man_Text_0:
# 23 "data/maps/DustroweCity/scripts.pory"
	.string "Did you know that this town is\n"
	.string "powered by the tears of defeated\l"
	.string "gym challengers?\p"
	.string ". . .\p"
	.string "Haha just kidding!$"

Dustrowe_Little_Girl_Text_0:
# 37 "data/maps/DustroweCity/scripts.pory"
	.string "Gym leader Johnny is able to\n"
	.string "power this whole city with just\l"
	.string "his gym!\p"
	.string "There's a rumor that a coal mine\n"
	.string "runs just under it.$"
