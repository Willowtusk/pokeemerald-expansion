SelunaCave_MapScripts::
# 2 "data/maps/SelunaCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SelunaCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SelunaCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SelunaCave/scripts.pory"
	map_script_2 VAR_OLD_MAN_SELUNACAVE, 0, UMBRA_OLD_MAN
	.2byte 0


GYM_RENOVATION_SIGN::
# 11 "data/maps/SelunaCave/scripts.pory"
	lockall
# 12 "data/maps/SelunaCave/scripts.pory"
	msgbox GYM_RENOVATION_SIGN_Text_0
# 13 "data/maps/SelunaCave/scripts.pory"
	closemessage
# 14 "data/maps/SelunaCave/scripts.pory"
	releaseall
	return


UMBRA_OLD_MAN::
# 20 "data/maps/SelunaCave/scripts.pory"
	lockall
# 21 "data/maps/SelunaCave/scripts.pory"
	faceplayer
# 22 "data/maps/SelunaCave/scripts.pory"
	playse SE_PIN
# 23 "data/maps/SelunaCave/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 24 "data/maps/SelunaCave/scripts.pory"
	waitmovement 0
# 25 "data/maps/SelunaCave/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 26 "data/maps/SelunaCave/scripts.pory"
	delay 48
# 27 "data/maps/SelunaCave/scripts.pory"
	msgbox UMBRA_OLD_MAN_Text_0
# 32 "data/maps/SelunaCave/scripts.pory"
	closemessage
# 33 "data/maps/SelunaCave/scripts.pory"
	setvar VAR_OLD_MAN_SELUNACAVE, 1
# 34 "data/maps/SelunaCave/scripts.pory"
	setvar VAR_MYNPC_FIRST_INTERACTION, 1
# 35 "data/maps/SelunaCave/scripts.pory"
	clearflag FLAG_SELUNA_CAVE_HIDE_MYNPC
# 36 "data/maps/SelunaCave/scripts.pory"
	releaseall
	return


SELUNA_OLD_MAN_DIALOGUE_1::
# 40 "data/maps/SelunaCave/scripts.pory"
	lockall
# 41 "data/maps/SelunaCave/scripts.pory"
	faceplayer
# 42 "data/maps/SelunaCave/scripts.pory"
	msgbox SELUNA_OLD_MAN_DIALOGUE_1_Text_0
# 47 "data/maps/SelunaCave/scripts.pory"
	closemessage
# 48 "data/maps/SelunaCave/scripts.pory"
	releaseall
	return


GYM_RENOVATION_SIGN_Text_0:
# 12 "data/maps/SelunaCave/scripts.pory"
	.string "Under Renovations for the Seluna Gym.$"

UMBRA_OLD_MAN_Text_0:
# 28 "data/maps/SelunaCave/scripts.pory"
	.string "Hey youngster, how'd you end up here?\p"
	.string "You must be the new kid who just moved\n"
	.string "in.\p"
	.string "Best get back to your family, a cave is\n"
	.string "no place for children.$"

SELUNA_OLD_MAN_DIALOGUE_1_Text_0:
# 43 "data/maps/SelunaCave/scripts.pory"
	.string "We're in the process of building a new\n"
	.string "gym here!\p"
	.string "It should be ready within a couple of\n"
	.string "weeks, if you can gather all the other\l"
	.string "gym badges first.\p"
	.string "But that'll be a mighty challenge haha!$"
