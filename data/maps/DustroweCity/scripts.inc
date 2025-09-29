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
	waitmovement 0
# 22 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Generator_Man::
# 26 "data/maps/DustroweCity/scripts.pory"
	lockall
# 27 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 28 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Generator_Man_Text_0
# 35 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 36 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Dustrowe_Little_Girl::
# 40 "data/maps/DustroweCity/scripts.pory"
	lockall
# 41 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 42 "data/maps/DustroweCity/scripts.pory"
	msgbox Dustrowe_Little_Girl_Text_0
# 49 "data/maps/DustroweCity/scripts.pory"
	closemessage
# 50 "data/maps/DustroweCity/scripts.pory"
	releaseall
	return


Leaving_Dustrowe_NPC::
# 54 "data/maps/DustroweCity/scripts.pory"
	lockall
# 55 "data/maps/DustroweCity/scripts.pory"
	faceplayer
# 56 "data/maps/DustroweCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Leaving_Dustrowe_NPC_2
# 64 "data/maps/DustroweCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Leaving_Dustrowe_NPC_3
Leaving_Dustrowe_NPC_1:
# 72 "data/maps/DustroweCity/scripts.pory"
	releaseall
	end

Leaving_Dustrowe_NPC_2:
# 57 "data/maps/DustroweCity/scripts.pory"
	msgbox Leaving_Dustrowe_NPC_Text_0, MSGBOX_AUTOCLOSE
	goto Leaving_Dustrowe_NPC_1

Leaving_Dustrowe_NPC_3:
# 65 "data/maps/DustroweCity/scripts.pory"
	msgbox Leaving_Dustrowe_NPC_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/DustroweCity/scripts.pory"
	setobjectxyperm 3, 27, 25
	goto Leaving_Dustrowe_NPC_1


Dustrowe_Gym_Sign_Text_0:
# 12 "data/maps/DustroweCity/scripts.pory"
	.string "Dustrowe Gym$"

DEFEAT_RIVAL_1_Text_0:
# 19 "data/maps/DustroweCity/scripts.pory"
	.string "I should see what Lily is up to$"

Dustrowe_Generator_Man_Text_0:
# 29 "data/maps/DustroweCity/scripts.pory"
	.string "Did you know that this town is\n"
	.string "powered by the tears of defeated\l"
	.string "gym challengers?\p"
	.string ". . .\p"
	.string "Haha just kidding!$"

Dustrowe_Little_Girl_Text_0:
# 43 "data/maps/DustroweCity/scripts.pory"
	.string "Gym leader Johnny is able to\n"
	.string "power this whole city with just\l"
	.string "his gym!\p"
	.string "There's a rumor that a coal mine\n"
	.string "runs just under it.$"

Leaving_Dustrowe_NPC_Text_0:
# 58 "data/maps/DustroweCity/scripts.pory"
	.string "Sorry, but this area is reserved for\n"
	.string "trained martial artists only.\p"
	.string "Come back when you are worthy.$"

Leaving_Dustrowe_NPC_Text_1:
# 66 "data/maps/DustroweCity/scripts.pory"
	.string "So you have the SOOT Badge!\p"
	.string "You may proceed.$"
