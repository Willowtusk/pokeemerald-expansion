LeahsHouse_MapScripts::
# 2 "data/maps/LeahsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LeahsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LeahsHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LeahsHouse/scripts.pory"
	map_script_2 VAR_TALK_TO_MOM_1, 3, Leah_First_Interaction
	.2byte 0


Leah_First_Interaction::
# 9 "data/maps/LeahsHouse/scripts.pory"
	lockall
# 10 "data/maps/LeahsHouse/scripts.pory"
	playse SE_PIN
# 11 "data/maps/LeahsHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 12 "data/maps/LeahsHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/LeahsHouse/scripts.pory"
	delay 48
# 14 "data/maps/LeahsHouse/scripts.pory"
	applymovement 1, WALK_DOWN_THREE
# 15 "data/maps/LeahsHouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/LeahsHouse/scripts.pory"
	msgbox Leah_First_Interaction_Text_0
# 24 "data/maps/LeahsHouse/scripts.pory"
	closemessage
# 25 "data/maps/LeahsHouse/scripts.pory"
	applymovement 1, RIGHT_ONE_DOWN_ONE
# 26 "data/maps/LeahsHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/LeahsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/LeahsHouse/scripts.pory"
	removeobject 1
# 29 "data/maps/LeahsHouse/scripts.pory"
	setflag FLAG_LEAH_HOUSE_INTERACTION
# 30 "data/maps/LeahsHouse/scripts.pory"
	playse SE_DOOR
# 31 "data/maps/LeahsHouse/scripts.pory"
	delay 48
# 32 "data/maps/LeahsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 33 "data/maps/LeahsHouse/scripts.pory"
	clearflag FLAG_LEAH_MARKET_INTERACTION
# 34 "data/maps/LeahsHouse/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 4
# 35 "data/maps/LeahsHouse/scripts.pory"
	releaseall
	return


# 38 "data/maps/LeahsHouse/scripts.pory"
RIGHT_ONE_DOWN_ONE:
# 39 "data/maps/LeahsHouse/scripts.pory"
	walk_right
# 40 "data/maps/LeahsHouse/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/LeahsHouse/scripts.pory"
WALK_DOWN_THREE:
# 44 "data/maps/LeahsHouse/scripts.pory"
	walk_down
# 44 "data/maps/LeahsHouse/scripts.pory"
	walk_down
# 44 "data/maps/LeahsHouse/scripts.pory"
	walk_down
	step_end

Leah_First_Interaction_Text_0:
# 17 "data/maps/LeahsHouse/scripts.pory"
	.string "Oh! I wasen't expecting anyone today,\n"
	.string "who are you?\p"
	.string "... ... ...\p"
	.string "So you're my new neighbor!\p"
	.string "I'm Leah, nice to meet you!\p"
	.string "I was just about to head to the market\n"
	.string "in town for groceries. You should join\l"
	.string "me, it'll be fun!$"
