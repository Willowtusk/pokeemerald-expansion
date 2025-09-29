Route702_MapScripts::
	.byte 0


BULK_UP_OBTAINED::
# 6 "data/maps/Route702/scripts.pory"
	lockall
# 7 "data/maps/Route702/scripts.pory"
	giveitem ITEM_TM08, 1
# 8 "data/maps/Route702/scripts.pory"
	removeobject 1
# 9 "data/maps/Route702/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 10 "data/maps/Route702/scripts.pory"
	releaseall
	return


Martial_Gauntlet_Man::
# 14 "data/maps/Route702/scripts.pory"
	lockall
# 15 "data/maps/Route702/scripts.pory"
	faceplayer
# 16 "data/maps/Route702/scripts.pory"
	compare VAR_MARTIAL_GAUNTLET, 0
	goto_if_eq Martial_Gauntlet_Man_2
Martial_Gauntlet_Man_1:
# 32 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Martial_Gauntlet_Man_5
# 37 "data/maps/Route702/scripts.pory"
	compare VAR_MARTIAL_GAUNTLET, 1
	goto_if_ge Martial_Gauntlet_Man_6
Martial_Gauntlet_Man_4:
# 41 "data/maps/Route702/scripts.pory"
	releaseall
	end

Martial_Gauntlet_Man_2:
# 17 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Man_Text_0, MSGBOX_YESNO
# 26 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Martial_Gauntlet_Man_9
	goto Martial_Gauntlet_Man_1

Martial_Gauntlet_Man_5:
# 33 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Man_Text_1, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_LEFT_ONE
# 35 "data/maps/Route702/scripts.pory"
	waitmovement 0
	goto Martial_Gauntlet_Man_4

Martial_Gauntlet_Man_6:
# 38 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Man_Text_2
# 39 "data/maps/Route702/scripts.pory"
	closemessage
	goto Martial_Gauntlet_Man_4

Martial_Gauntlet_Man_9:
# 27 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 28 "data/maps/Route702/scripts.pory"
	trainerbattle_no_intro TRAINER_BLACK_BELT_JOEY, BLACK_BELT_JOEY_OUTRO
# 29 "data/maps/Route702/scripts.pory"
	goto MARTIAL_GAUNTLET_1st_TRAINER_SUCCESS
	goto Martial_Gauntlet_Man_1


MARTIAL_GAUNTLET_1st_TRAINER_SUCCESS::
# 52 "data/maps/Route702/scripts.pory"
	setvar VAR_MARTIAL_GAUNTLET, 1
	return


Martial_Gauntlet_Alita::
# 56 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_ALITA, ALITA_INTRO, ALITA_OUTRO
# 57 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Alita_Text_0, MSGBOX_AUTOCLOSE
	return


Martial_Gauntlet_Nathan::
# 74 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_NATHAN, NATHAN_INTRO, NATHAN_OUTRO, MARTIAL_GAUNTLET_SUCCESS
# 75 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Nathan_Text_0, MSGBOX_AUTOCLOSE
	return


MARTIAL_GAUNTLET_SUCCESS::
# 89 "data/maps/Route702/scripts.pory"
	msgbox MARTIAL_GAUNTLET_SUCCESS_Text_0
# 93 "data/maps/Route702/scripts.pory"
	closemessage
# 94 "data/maps/Route702/scripts.pory"
	giveitem ITEM_EXPERT_BELT, 1
# 95 "data/maps/Route702/scripts.pory"
	msgbox MARTIAL_GAUNTLET_SUCCESS_Text_1
# 99 "data/maps/Route702/scripts.pory"
	setvar VAR_MARTIAL_GAUNTLET, 3
	return


Talk_To_Gauntlet_Man_1::
# 104 "data/maps/Route702/scripts.pory"
	lockall
# 105 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 106 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Talk_To_Gauntlet_Man_2::
# 111 "data/maps/Route702/scripts.pory"
	lockall
# 112 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE
# 113 "data/maps/Route702/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 115 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Talk_To_Gauntlet_Man_3::
# 119 "data/maps/Route702/scripts.pory"
	lockall
# 120 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_UP
# 121 "data/maps/Route702/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 123 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Route702_Monferno::
# 127 "data/maps/Route702/scripts.pory"
	lockall
# 128 "data/maps/Route702/scripts.pory"
	faceplayer
# 129 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MONFERNO, CRY_MODE_ENCOUNTER
# 130 "data/maps/Route702/scripts.pory"
	waitmoncry
# 131 "data/maps/Route702/scripts.pory"
	msgbox Route702_Monferno_Text_0, MSGBOX_AUTOCLOSE
# 132 "data/maps/Route702/scripts.pory"
	releaseall
	return


Route702_Mienfoo::
# 136 "data/maps/Route702/scripts.pory"
	lockall
# 137 "data/maps/Route702/scripts.pory"
	faceplayer
# 138 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MIENFOO, CRY_MODE_ENCOUNTER
# 139 "data/maps/Route702/scripts.pory"
	waitmoncry
# 140 "data/maps/Route702/scripts.pory"
	msgbox Route702_Mienfoo_Text_0, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route702/scripts.pory"
	releaseall
	return


Route702_Machoke::
# 145 "data/maps/Route702/scripts.pory"
	lockall
# 146 "data/maps/Route702/scripts.pory"
	faceplayer
# 147 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
# 148 "data/maps/Route702/scripts.pory"
	waitmoncry
# 149 "data/maps/Route702/scripts.pory"
	msgbox Route702_Machoke_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route702/scripts.pory"
	releaseall
	return


Monferno_Onlooker::
# 154 "data/maps/Route702/scripts.pory"
	lockall
# 155 "data/maps/Route702/scripts.pory"
	msgbox Monferno_Onlooker_Text_0
# 156 "data/maps/Route702/scripts.pory"
	applymovement 7, MOVE_RIGHT_ONE
# 157 "data/maps/Route702/scripts.pory"
	waitmovement 7
# 158 "data/maps/Route702/scripts.pory"
	playse SE_EFFECTIVE
# 159 "data/maps/Route702/scripts.pory"
	delay 48
# 160 "data/maps/Route702/scripts.pory"
	applymovement 7, MOVE_LEFT_ONE
# 161 "data/maps/Route702/scripts.pory"
	waitmovement 7
# 162 "data/maps/Route702/scripts.pory"
	turnobject 7, DIR_EAST
# 163 "data/maps/Route702/scripts.pory"
	closemessage
# 164 "data/maps/Route702/scripts.pory"
	releaseall
	return


Mienfoo_Onlooker::
# 168 "data/maps/Route702/scripts.pory"
	lockall
# 169 "data/maps/Route702/scripts.pory"
	msgbox Mienfoo_Onlooker_Text_0
# 170 "data/maps/Route702/scripts.pory"
	applymovement 6, MOVE_LEFT_ONE
# 171 "data/maps/Route702/scripts.pory"
	waitmovement 6
# 172 "data/maps/Route702/scripts.pory"
	playse SE_EFFECTIVE
# 173 "data/maps/Route702/scripts.pory"
	delay 48
# 174 "data/maps/Route702/scripts.pory"
	applymovement 6, MOVE_RIGHT_ONE
# 175 "data/maps/Route702/scripts.pory"
	waitmovement 6
# 176 "data/maps/Route702/scripts.pory"
	turnobject 6, DIR_WEST
# 177 "data/maps/Route702/scripts.pory"
	closemessage
# 178 "data/maps/Route702/scripts.pory"
	releaseall
	return


CHOSEN_ALLY::
# 183 "data/maps/Route702/scripts.pory"
	lockall
# 184 "data/maps/Route702/scripts.pory"
	faceplayer
# 185 "data/maps/Route702/scripts.pory"
	checktrainerflag TRAINER_ELITE_ALLY
	goto_if 0, CHOSEN_ALLY_2
# 201 "data/maps/Route702/scripts.pory"
	checktrainerflag TRAINER_ELITE_ALLY
	goto_if 1, CHOSEN_ALLY_3
CHOSEN_ALLY_1:
# 204 "data/maps/Route702/scripts.pory"
	releaseall
	end

CHOSEN_ALLY_2:
# 186 "data/maps/Route702/scripts.pory"
	msgbox CHOSEN_ALLY_Text_0, MSGBOX_YESNO
# 193 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CHOSEN_ALLY_6
# 196 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CHOSEN_ALLY_7
	goto CHOSEN_ALLY_1

CHOSEN_ALLY_3:
# 202 "data/maps/Route702/scripts.pory"
	msgbox CHOSEN_ALLY_Text_2
	goto CHOSEN_ALLY_1

CHOSEN_ALLY_6:
# 194 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_ELITE_ALLY, ALLY_INTRO, ALLY_OUTRO, ALLY_GIVE_CHOICE_SCARF
	goto CHOSEN_ALLY_1

CHOSEN_ALLY_7:
# 197 "data/maps/Route702/scripts.pory"
	msgbox CHOSEN_ALLY_Text_1
# 198 "data/maps/Route702/scripts.pory"
	closemessage
	goto CHOSEN_ALLY_1


ALLY_GIVE_CHOICE_SCARF::
# 217 "data/maps/Route702/scripts.pory"
	msgbox ALLY_GIVE_CHOICE_SCARF_Text_0, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route702/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
# 219 "data/maps/Route702/scripts.pory"
	releaseall
	return


# 222 "data/maps/Route702/scripts.pory"
MOVE_LEFT_ONE:
# 223 "data/maps/Route702/scripts.pory"
	walk_left
	step_end

# 226 "data/maps/Route702/scripts.pory"
MOVE_RIGHT_ONE:
# 227 "data/maps/Route702/scripts.pory"
	walk_right
	step_end

Martial_Gauntlet_Man_Text_0:
# 18 "data/maps/Route702/scripts.pory"
	.string "Stranger!\p"
	.string "In order to pass through this area,\n"
	.string "you must defeat the Martial Gauntlet!\p"
	.string "A series of expert-trained martial\n"
	.string "artists who show no mercy!\p"
	.string "If you manage to defeat all of us, you\n"
	.string "shall be rewarded!\p"
	.string "Are you up to the challenge?$"

Martial_Gauntlet_Man_Text_1:
# 33 "data/maps/Route702/scripts.pory"
	.string "Come back when you have a better answer!$"

Martial_Gauntlet_Man_Text_2:
# 38 "data/maps/Route702/scripts.pory"
	.string "The rest are stronger than me, good luck!$"

Martial_Gauntlet_Alita_Text_0:
# 57 "data/maps/Route702/scripts.pory"
	.string "I think I need to work on my bicep curls\nmore..$"

Martial_Gauntlet_Nathan_Text_0:
# 75 "data/maps/Route702/scripts.pory"
	.string "You sure gave us a thrashing trainer!$"

MARTIAL_GAUNTLET_SUCCESS_Text_0:
# 90 "data/maps/Route702/scripts.pory"
	.string "You really beat Johnny then didn't you!\p"
	.string "As reward for beating all of us, take this.$"

MARTIAL_GAUNTLET_SUCCESS_Text_1:
# 96 "data/maps/Route702/scripts.pory"
	.string "That's an Expert Belt!\p"
	.string "It slightly boosts the power of\nadvantageous moves!$"

Route702_Monferno_Text_0:
# 131 "data/maps/Route702/scripts.pory"
	.string "FERRRNO$"

Route702_Mienfoo_Text_0:
# 140 "data/maps/Route702/scripts.pory"
	.string "FOOOO$"

Route702_Machoke_Text_0:
# 149 "data/maps/Route702/scripts.pory"
	.string "MAAAA$"

Monferno_Onlooker_Text_0:
# 155 "data/maps/Route702/scripts.pory"
	.string "Monferno! Attack with Fire Punch!$"

Mienfoo_Onlooker_Text_0:
# 169 "data/maps/Route702/scripts.pory"
	.string "Mienfoo! Hit em with Retaliate!$"

CHOSEN_ALLY_Text_0:
# 187 "data/maps/Route702/scripts.pory"
	.string "Why hello there trainer.\p"
	.string "I'm a member of a group known as The\n"
	.string "Chosen.\p"
	.string "We are tasked with finding suitable\n"
	.string "trainers to join us.\p"
	.string "Are you one of them?$"

CHOSEN_ALLY_Text_1:
# 197 "data/maps/Route702/scripts.pory"
	.string "Ah I see, how unfortunate.$"

CHOSEN_ALLY_Text_2:
# 202 "data/maps/Route702/scripts.pory"
	.string "We will be watching you.$"

ALLY_GIVE_CHOICE_SCARF_Text_0:
# 217 "data/maps/Route702/scripts.pory"
	.string "Here, take this for besting me.$"

BLACK_BELT_JOEY_OUTRO::
# 47 "data/maps/Route702/scripts.pory"
	.string "Aha! Good workout!$"

ALITA_INTRO::
# 60 "data/maps/Route702/scripts.pory"
	.string "I'm next in line!\p"
	.string "People call me the Battle Angel!$"

ALITA_OUTRO::
# 65 "data/maps/Route702/scripts.pory"
	.string "Guess I need more training...$"

NATHAN_INTRO::
# 78 "data/maps/Route702/scripts.pory"
	.string "I'm the last Martial Gauntlet member.\p"
	.string "Just try to withstand my assault!$"

NATHAN_OUTRO::
# 83 "data/maps/Route702/scripts.pory"
	.string "You're like a piece of iron...$"

ALLY_INTRO::
# 208 "data/maps/Route702/scripts.pory"
	.string "Then let us find out shall we?$"

ALLY_OUTRO::
# 212 "data/maps/Route702/scripts.pory"
	.string "You are certainly promising.$"
