Dustrowe_Path_MapScripts::
	.byte 0


DUSTROWE_PATH_WINNIE::
# 6 "data/maps/Dustrowe_Path/scripts.pory"
	lockall
# 7 "data/maps/Dustrowe_Path/scripts.pory"
	faceplayer
# 8 "data/maps/Dustrowe_Path/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 9 "data/maps/Dustrowe_Path/scripts.pory"
	waitmoncry
# 10 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox DUSTROWE_PATH_WINNIE_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/Dustrowe_Path/scripts.pory"
	releaseall
	return


DUSTROWE_PATH_LILY_BATTLE::
# 15 "data/maps/Dustrowe_Path/scripts.pory"
	lockall
# 16 "data/maps/Dustrowe_Path/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Dustrowe_Path/scripts.pory"
	faceplayer
# 18 "data/maps/Dustrowe_Path/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 19 "data/maps/Dustrowe_Path/scripts.pory"
	waitmovement 0
# 20 "data/maps/Dustrowe_Path/scripts.pory"
	delay 48
# 21 "data/maps/Dustrowe_Path/scripts.pory"
	trainerbattle_single TRAINER_LILY_1, LILY_DUSTROWE_INTRO, LILY_DUSTROWE_OUTRO, LILY_AND_WINNIE_LEAVE_DUSTROWE
	return


LILY_AND_WINNIE_LEAVE_DUSTROWE::
# 27 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/Dustrowe_Path/scripts.pory"
	turnobject 2, DIR_NORTH
# 31 "data/maps/Dustrowe_Path/scripts.pory"
	delay 48
# 32 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/Dustrowe_Path/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 36 "data/maps/Dustrowe_Path/scripts.pory"
	waitmoncry
# 37 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/Dustrowe_Path/scripts.pory"
	applymovement 1, SIMPLE_MOVE_DOWN
# 41 "data/maps/Dustrowe_Path/scripts.pory"
	waitmovement 1
# 42 "data/maps/Dustrowe_Path/scripts.pory"
	faceplayer
# 43 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_3, MSGBOX_AUTOCLOSE
# 47 "data/maps/Dustrowe_Path/scripts.pory"
	applymovement 2, LILY_LEAVES_DUSTROWE_PATH
# 48 "data/maps/Dustrowe_Path/scripts.pory"
	waitmovement 2
# 49 "data/maps/Dustrowe_Path/scripts.pory"
	applymovement 1, WINNIE_LEAVES_DUSTROWE_PATH
# 50 "data/maps/Dustrowe_Path/scripts.pory"
	waitmovement 1
# 51 "data/maps/Dustrowe_Path/scripts.pory"
	removeobject 2
# 52 "data/maps/Dustrowe_Path/scripts.pory"
	removeobject 1
# 53 "data/maps/Dustrowe_Path/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 7
# 54 "data/maps/Dustrowe_Path/scripts.pory"
	setflag FLAG_LILY_DEFEATED_1
# 55 "data/maps/Dustrowe_Path/scripts.pory"
	releaseall
	return


# 70 "data/maps/Dustrowe_Path/scripts.pory"
LILY_LEAVES_DUSTROWE_PATH:
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 71 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
	step_end

# 74 "data/maps/Dustrowe_Path/scripts.pory"
WINNIE_LEAVES_DUSTROWE_PATH:
# 75 "data/maps/Dustrowe_Path/scripts.pory"
	walk_down
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
# 76 "data/maps/Dustrowe_Path/scripts.pory"
	walk_right
	step_end

HIKER_DUSTROWE_PATH::
# 80 "data/maps/Dustrowe_Path/scripts.pory"
	lockall
# 81 "data/maps/Dustrowe_Path/scripts.pory"
	faceplayer
# 82 "data/maps/Dustrowe_Path/scripts.pory"
	msgbox HIKER_DUSTROWE_PATH_Text_0
# 86 "data/maps/Dustrowe_Path/scripts.pory"
	waitmessage
# 87 "data/maps/Dustrowe_Path/scripts.pory"
	releaseall
	return


QUICK_CLAW_OBTAINED::
# 91 "data/maps/Dustrowe_Path/scripts.pory"
	lockall
# 92 "data/maps/Dustrowe_Path/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
# 93 "data/maps/Dustrowe_Path/scripts.pory"
	removeobject 5
# 94 "data/maps/Dustrowe_Path/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 95 "data/maps/Dustrowe_Path/scripts.pory"
	releaseall
	return


SHARP_BEAK_OBTAINED::
# 99 "data/maps/Dustrowe_Path/scripts.pory"
	lockall
# 100 "data/maps/Dustrowe_Path/scripts.pory"
	giveitem ITEM_SHARP_BEAK, 1
# 101 "data/maps/Dustrowe_Path/scripts.pory"
	removeobject 4
# 102 "data/maps/Dustrowe_Path/scripts.pory"
	setflag FLAG_RECEIVED_SHARP_BEAK
# 103 "data/maps/Dustrowe_Path/scripts.pory"
	releaseall
	return


DUSTROWE_PATH_WINNIE_Text_0:
# 10 "data/maps/Dustrowe_Path/scripts.pory"
	.string "WOOF!$"

LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_0:
# 28 "data/maps/Dustrowe_Path/scripts.pory"
	.string "Thanks for battling with me!$"

LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_1:
# 33 "data/maps/Dustrowe_Path/scripts.pory"
	.string "WINNIE!\p$"

LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_2:
# 38 "data/maps/Dustrowe_Path/scripts.pory"
	.string "You ready to go back home girl?$"

LILY_AND_WINNIE_LEAVE_DUSTROWE_Text_3:
# 44 "data/maps/Dustrowe_Path/scripts.pory"
	.string "Well I guess I better go now.\p"
	.string "I'll see you later {PLAYER}!$"

HIKER_DUSTROWE_PATH_Text_0:
# 83 "data/maps/Dustrowe_Path/scripts.pory"
	.string "Howdy there partner!\p"
	.string "Up ahead you'll hit Dustrowe City.\n"
	.string "A miner's paradise!$"

LILY_DUSTROWE_INTRO::
# 58 "data/maps/Dustrowe_Path/scripts.pory"
	.string "Oh Hey {PLAYER}!\p"
	.string "I was wondering when I would\nsee you again!\p"
	.string "I'm just taking WINNIE out\nfor a little stroll.\p"
	.string "Have I told you I became a\nPokémon trainer recently?\p"
	.string "Here, let me show you all the\ncool friends i've caught!$"

LILY_DUSTROWE_OUTRO::
# 66 "data/maps/Dustrowe_Path/scripts.pory"
	.string "Hehe that was fun!$"
