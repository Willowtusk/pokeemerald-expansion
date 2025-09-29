SelunaTown_General_MapScripts::
# 3 "data/maps/SelunaTown_General/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SelunaTown_General_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SelunaTown_General_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SelunaTown_General/scripts.pory"
	map_script_2 VAR_MYNPC_FIRST_INTERACTION, 1, SELUNA_LILY_INTERACTION_1
	.2byte 0


SELUNA_LILY_INTERACTION_1::
# 10 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 11 "data/maps/SelunaTown_General/scripts.pory"
	playse SE_PIN
# 12 "data/maps/SelunaTown_General/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 13 "data/maps/SelunaTown_General/scripts.pory"
	waitmovement 0
# 14 "data/maps/SelunaTown_General/scripts.pory"
	delay 48
# 15 "data/maps/SelunaTown_General/scripts.pory"
	applymovement 1, SIMPLE_MOVE_UP
# 16 "data/maps/SelunaTown_General/scripts.pory"
	waitmovement 0
# 17 "data/maps/SelunaTown_General/scripts.pory"
	msgbox SELUNA_LILY_INTERACTION_1_Text_0
# 26 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 27 "data/maps/SelunaTown_General/scripts.pory"
	applymovement 1, MOVING_OFFSCREEN
# 28 "data/maps/SelunaTown_General/scripts.pory"
	waitmovement 0
# 29 "data/maps/SelunaTown_General/scripts.pory"
	removeobject 1
# 30 "data/maps/SelunaTown_General/scripts.pory"
	setflag FLAG_SELUNA_CAVE_HIDE_MYNPC
# 31 "data/maps/SelunaTown_General/scripts.pory"
	setvar VAR_MYNPC_FIRST_INTERACTION, 2
# 32 "data/maps/SelunaTown_General/scripts.pory"
	setflag FLAG_AERITH_HOUSE_INTERACTION
# 33 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


# 37 "data/maps/SelunaTown_General/scripts.pory"
MOVING_OFFSCREEN:
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
# 38 "data/maps/SelunaTown_General/scripts.pory"
	walk_down
	step_end

# 40 "data/maps/SelunaTown_General/scripts.pory"
SIMPLE_MOVE_UP:
# 41 "data/maps/SelunaTown_General/scripts.pory"
	walk_up
# 41 "data/maps/SelunaTown_General/scripts.pory"
	walk_up
	step_end

PLAYERS_HOUSE_SIGN::
# 45 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 46 "data/maps/SelunaTown_General/scripts.pory"
	msgbox PLAYERS_HOUSE_SIGN_Text_0
# 47 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 48 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


SELUNE_LAB_EARLY::
# 52 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 53 "data/maps/SelunaTown_General/scripts.pory"
	msgbox SELUNE_LAB_EARLY_Text_0
# 54 "data/maps/SelunaTown_General/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_DOWN
# 55 "data/maps/SelunaTown_General/scripts.pory"
	waitmovement 0
# 56 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 57 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


Selune_Town_Market_Sign::
# 61 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 62 "data/maps/SelunaTown_General/scripts.pory"
	msgbox Selune_Town_Market_Sign_Text_0
# 66 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 67 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


Selune_Town_Lab_Sign::
# 71 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 72 "data/maps/SelunaTown_General/scripts.pory"
	msgbox Selune_Town_Lab_Sign_Text_0
# 75 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 76 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


Seluna_Town_Aerith_House_Sign::
# 80 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 81 "data/maps/SelunaTown_General/scripts.pory"
	msgbox Seluna_Town_Aerith_House_Sign_Text_0
# 84 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 85 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


Route_701_Access::
# 90 "data/maps/SelunaTown_General/scripts.pory"
	lockall
# 91 "data/maps/SelunaTown_General/scripts.pory"
	msgbox Route_701_Access_Text_0
# 94 "data/maps/SelunaTown_General/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_UP
# 95 "data/maps/SelunaTown_General/scripts.pory"
	waitmovement 0
# 96 "data/maps/SelunaTown_General/scripts.pory"
	closemessage
# 97 "data/maps/SelunaTown_General/scripts.pory"
	releaseall
	return


SELUNA_LILY_INTERACTION_1_Text_0:
# 18 "data/maps/SelunaTown_General/scripts.pory"
	.string "{PLAYER}! where have you been?\p"
	.string "... You don't remember me?\p"
	.string "You must have hit your head pretty bad\n"
	.string "down in that cave...\p"
	.string "It's Lily, your sister!\p"
	.string "Mom has been worried sick about you!\p"
	.string "You better go back home and tell her\n"
	.string "you're okay, before she gets really\l"
	.string "upset.\p"
	.string "I need to go take care of Winnie so I'll\n"
	.string "see you later!$"

PLAYERS_HOUSE_SIGN_Text_0:
# 46 "data/maps/SelunaTown_General/scripts.pory"
	.string "{PLAYER}'s House$"

SELUNE_LAB_EARLY_Text_0:
# 53 "data/maps/SelunaTown_General/scripts.pory"
	.string "Probably should go see Mom first$"

Selune_Town_Market_Sign_Text_0:
# 63 "data/maps/SelunaTown_General/scripts.pory"
	.string "Seluna Town Market\n"
	.string "Freshest in town!$"

Selune_Town_Lab_Sign_Text_0:
# 73 "data/maps/SelunaTown_General/scripts.pory"
	.string "Seluna Town Pokemon Lab$"

Seluna_Town_Aerith_House_Sign_Text_0:
# 82 "data/maps/SelunaTown_General/scripts.pory"
	.string "Aerith's House$"

Route_701_Access_Text_0:
# 92 "data/maps/SelunaTown_General/scripts.pory"
	.string "I should check some other things\n"
	.string "in town out first$"
