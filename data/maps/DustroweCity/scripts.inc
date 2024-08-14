DustroweCity_MapScripts::
# 2 "data/maps/DustroweCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DustroweCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DustroweCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DustroweCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, DustroweCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DustroweCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/DustroweCity/scripts.pory"
	setobjectxyperm 3, 27, 25
	return


Dustrowe_Gym_Sign::
# 11 "data/maps/DustroweCity/scripts.pory"
	lockall
# 12 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Gym_Sign_Text_0
# 13 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 14 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


DEFEAT_RIVAL_1::
# 18 "data/maps/DustroweCity/scripts.pory"
	lockall
# 19 "data/maps/DustroweCity/scripts.pory"
	msgbox DEFEAT_RIVAL_1_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/DustroweCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_DOWN
# 21 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Generator_Man::
# 25 "data/maps/DustroweCity/scripts.pory"
	lockall
# 26 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 27 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Generator_Man_Text_0
# 34 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 35 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Little_Girl::
# 39 "data/maps/DustroweCity/scripts.pory"
	lockall
# 40 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 41 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Little_Girl_Text_0
# 48 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 49 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Leaving_Dustrowe_NPC::
# 53 "data/maps/DustroweCity/scripts.pory"
	lockall
# 54 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 55 "data/maps/DustroweCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Leaving_Dustrowe_NPC_2
# 63 "data/maps/DustroweCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Leaving_Dustrowe_NPC_3
Leaving_Dustrowe_NPC_1:
# 71 "data/maps/DustroweCity/scripts.pory"
	releaseall
	end

Leaving_Dustrowe_NPC_2:
# 56 "data/maps/DustroweCity/scripts.pory"
	msgbox Leaving_Dustrowe_NPC_Text_0, MSGBOX_AUTOCLOSE
	goto Leaving_Dustrowe_NPC_1

Leaving_Dustrowe_NPC_3:
# 64 "data/maps/DustroweCity/scripts.pory"
	msgbox Leaving_Dustrowe_NPC_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/DustroweCity/scripts.pory"
	setobjectxyperm 3, 27, 25
	goto Leaving_Dustrowe_NPC_1


Dustrowe_Gym_Sign_Text_0:
# 12 "data/maps/DustroweCity/scripts.pory"
	.string "Dustrowe Gym$"

DEFEAT_RIVAL_1_Text_0:
# 19 "data/maps/DustroweCity/scripts.pory"
	.string "Let's see what Lily is doing$"

Dustrowe_Generator_Man_Text_0:
# 28 "data/maps/DustroweCity/scripts.pory"
	.string "Did you know that this town is\n"
	.string "powered by the tears of defeated\l"
	.string "gym challengers?\p"
	.string ". . .\p"
	.string "Haha just kidding!$"

Dustrowe_Little_Girl_Text_0:
# 42 "data/maps/DustroweCity/scripts.pory"
	.string "Gym leader Johnny is able to\n"
	.string "power this whole city with just\l"
	.string "his gym!\p"
	.string "There's a rumor that a coal mine\n"
	.string "runs just under it.$"

Leaving_Dustrowe_NPC_Text_0:
# 57 "data/maps/DustroweCity/scripts.pory"
	.string "Sorry, but this area is reserved for\n"
	.string "trained martial artists only.\p"
	.string "Come back when you are worthy.$"

Leaving_Dustrowe_NPC_Text_1:
# 65 "data/maps/DustroweCity/scripts.pory"
	.string "So you have the SOOT Badge!\p"
	.string "You may proceed.$"
