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
# 31 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Martial_Gauntlet_Man_5
# 36 "data/maps/Route702/scripts.pory"
	compare VAR_MARTIAL_GAUNTLET, 1
	goto_if_ge Martial_Gauntlet_Man_6
Martial_Gauntlet_Man_4:
# 40 "data/maps/Route702/scripts.pory"
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
# 32 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Man_Text_1, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_LEFT_ONE
# 34 "data/maps/Route702/scripts.pory"
	waitmovement 0
	goto Martial_Gauntlet_Man_4

Martial_Gauntlet_Man_6:
# 37 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Man_Text_2
# 38 "data/maps/Route702/scripts.pory"
	closemessage
	goto Martial_Gauntlet_Man_4

Martial_Gauntlet_Man_9:
# 27 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 28 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_JOEY, BLACK_BELT_JOEY_INTRO, BLACK_BELT_JOEY_OUTRO, MARTIAL_GAUNTLET_1st_TRAINER_SUCCESS
	goto Martial_Gauntlet_Man_1


MARTIAL_GAUNTLET_1st_TRAINER_SUCCESS::
# 56 "data/maps/Route702/scripts.pory"
	setvar VAR_MARTIAL_GAUNTLET, 1
	return


Martial_Gauntlet_Alita::
# 60 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_ALITA, ALITA_INTRO, ALITA_OUTRO
# 61 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Alita_Text_0, MSGBOX_AUTOCLOSE
	return


Martial_Gauntlet_Nathan::
# 78 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_NATHAN, NATHAN_INTRO, NATHAN_OUTRO, MARTIAL_GAUNTLET_SUCCESS
# 79 "data/maps/Route702/scripts.pory"
	msgbox Martial_Gauntlet_Nathan_Text_0, MSGBOX_AUTOCLOSE
	return


MARTIAL_GAUNTLET_SUCCESS::
# 93 "data/maps/Route702/scripts.pory"
	msgbox MARTIAL_GAUNTLET_SUCCESS_Text_0
# 97 "data/maps/Route702/scripts.pory"
	closemessage
# 98 "data/maps/Route702/scripts.pory"
	giveitem ITEM_EXPERT_BELT, 1
# 99 "data/maps/Route702/scripts.pory"
	msgbox MARTIAL_GAUNTLET_SUCCESS_Text_1
# 103 "data/maps/Route702/scripts.pory"
	setvar VAR_MARTIAL_GAUNTLET, 3
	return


Talk_To_Gauntlet_Man_1::
# 108 "data/maps/Route702/scripts.pory"
	lockall
# 109 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 110 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Talk_To_Gauntlet_Man_2::
# 115 "data/maps/Route702/scripts.pory"
	lockall
# 116 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE
# 117 "data/maps/Route702/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 119 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Talk_To_Gauntlet_Man_3::
# 123 "data/maps/Route702/scripts.pory"
	lockall
# 124 "data/maps/Route702/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_UP
# 125 "data/maps/Route702/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route702/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 127 "data/maps/Route702/scripts.pory"
	goto Martial_Gauntlet_Man
	return


Route702_Monferno::
# 131 "data/maps/Route702/scripts.pory"
	lockall
# 132 "data/maps/Route702/scripts.pory"
	faceplayer
# 133 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MONFERNO, CRY_MODE_ENCOUNTER
# 134 "data/maps/Route702/scripts.pory"
	waitmoncry
# 135 "data/maps/Route702/scripts.pory"
	msgbox Route702_Monferno_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route702/scripts.pory"
	releaseall
	return


Route702_Mienfoo::
# 140 "data/maps/Route702/scripts.pory"
	lockall
# 141 "data/maps/Route702/scripts.pory"
	faceplayer
# 142 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MIENFOO, CRY_MODE_ENCOUNTER
# 143 "data/maps/Route702/scripts.pory"
	waitmoncry
# 144 "data/maps/Route702/scripts.pory"
	msgbox Route702_Mienfoo_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route702/scripts.pory"
	releaseall
	return


Route702_Machoke::
# 149 "data/maps/Route702/scripts.pory"
	lockall
# 150 "data/maps/Route702/scripts.pory"
	faceplayer
# 151 "data/maps/Route702/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
# 152 "data/maps/Route702/scripts.pory"
	waitmoncry
# 153 "data/maps/Route702/scripts.pory"
	msgbox Route702_Machoke_Text_0, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route702/scripts.pory"
	releaseall
	return


Monferno_Onlooker::
# 158 "data/maps/Route702/scripts.pory"
	lockall
# 159 "data/maps/Route702/scripts.pory"
	msgbox Monferno_Onlooker_Text_0
# 160 "data/maps/Route702/scripts.pory"
	applymovement 7, MOVE_RIGHT_ONE
# 161 "data/maps/Route702/scripts.pory"
	waitmovement 7
# 162 "data/maps/Route702/scripts.pory"
	playse SE_EFFECTIVE
# 163 "data/maps/Route702/scripts.pory"
	delay 48
# 164 "data/maps/Route702/scripts.pory"
	applymovement 7, MOVE_LEFT_ONE
# 165 "data/maps/Route702/scripts.pory"
	waitmovement 7
# 166 "data/maps/Route702/scripts.pory"
	turnobject 7, DIR_EAST
# 167 "data/maps/Route702/scripts.pory"
	closemessage
# 168 "data/maps/Route702/scripts.pory"
	releaseall
	return


Mienfoo_Onlooker::
# 172 "data/maps/Route702/scripts.pory"
	lockall
# 173 "data/maps/Route702/scripts.pory"
	msgbox Mienfoo_Onlooker_Text_0
# 174 "data/maps/Route702/scripts.pory"
	applymovement 6, MOVE_LEFT_ONE
# 175 "data/maps/Route702/scripts.pory"
	waitmovement 6
# 176 "data/maps/Route702/scripts.pory"
	playse SE_EFFECTIVE
# 177 "data/maps/Route702/scripts.pory"
	delay 48
# 178 "data/maps/Route702/scripts.pory"
	applymovement 6, MOVE_RIGHT_ONE
# 179 "data/maps/Route702/scripts.pory"
	waitmovement 6
# 180 "data/maps/Route702/scripts.pory"
	turnobject 6, DIR_WEST
# 181 "data/maps/Route702/scripts.pory"
	closemessage
# 182 "data/maps/Route702/scripts.pory"
	releaseall
	return


COOLTRAINER_ALLY::
# 187 "data/maps/Route702/scripts.pory"
	lockall
# 188 "data/maps/Route702/scripts.pory"
	faceplayer
# 189 "data/maps/Route702/scripts.pory"
	checktrainerflag TRAINER_ELITE_ALLY
	goto_if 0, COOLTRAINER_ALLY_2
# 201 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq COOLTRAINER_ALLY_3
# 205 "data/maps/Route702/scripts.pory"
	checktrainerflag TRAINER_ELITE_ALLY
	goto_if 1, COOLTRAINER_ALLY_4
COOLTRAINER_ALLY_1:
# 208 "data/maps/Route702/scripts.pory"
	releaseall
	end

COOLTRAINER_ALLY_2:
# 190 "data/maps/Route702/scripts.pory"
	msgbox COOLTRAINER_ALLY_Text_0, MSGBOX_YESNO
# 197 "data/maps/Route702/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq COOLTRAINER_ALLY_8
	goto COOLTRAINER_ALLY_1

COOLTRAINER_ALLY_3:
# 202 "data/maps/Route702/scripts.pory"
	msgbox COOLTRAINER_ALLY_Text_1
# 203 "data/maps/Route702/scripts.pory"
	closemessage
	goto COOLTRAINER_ALLY_1

COOLTRAINER_ALLY_4:
# 206 "data/maps/Route702/scripts.pory"
	msgbox COOLTRAINER_ALLY_Text_2
	goto COOLTRAINER_ALLY_1

COOLTRAINER_ALLY_8:
# 198 "data/maps/Route702/scripts.pory"
	trainerbattle_single TRAINER_ELITE_ALLY, ALLY_INTRO, ALLY_OUTRO, ALLY_GIVE_LEFTOVERS
	goto COOLTRAINER_ALLY_1


ALLY_GIVE_LEFTOVERS::
# 221 "data/maps/Route702/scripts.pory"
	msgbox ALLY_GIVE_LEFTOVERS_Text_0
# 222 "data/maps/Route702/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
	return


# 226 "data/maps/Route702/scripts.pory"
MOVE_LEFT_ONE:
# 227 "data/maps/Route702/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/Route702/scripts.pory"
MOVE_RIGHT_ONE:
# 231 "data/maps/Route702/scripts.pory"
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
# 32 "data/maps/Route702/scripts.pory"
	.string "Come back when you have a better answer!$"

Martial_Gauntlet_Man_Text_2:
# 37 "data/maps/Route702/scripts.pory"
	.string "The rest are stronger than me, good luck!$"

Martial_Gauntlet_Alita_Text_0:
# 61 "data/maps/Route702/scripts.pory"
	.string "I think I need to work on my bicep curls\nmore..$"

Martial_Gauntlet_Nathan_Text_0:
# 79 "data/maps/Route702/scripts.pory"
	.string "You sure gave us a thrashing trainer!$"

MARTIAL_GAUNTLET_SUCCESS_Text_0:
# 94 "data/maps/Route702/scripts.pory"
	.string "You really beat Johnny then didn't you!\p"
	.string "As reward for beating all of us, take this.$"

MARTIAL_GAUNTLET_SUCCESS_Text_1:
# 100 "data/maps/Route702/scripts.pory"
	.string "That's an Expert Belt!\p"
	.string "It slightly boosts the power of\nadvantageous moves!$"

Route702_Monferno_Text_0:
# 135 "data/maps/Route702/scripts.pory"
	.string "FERRRNO$"

Route702_Mienfoo_Text_0:
# 144 "data/maps/Route702/scripts.pory"
	.string "FOOOO$"

Route702_Machoke_Text_0:
# 153 "data/maps/Route702/scripts.pory"
	.string "MAAAA$"

Monferno_Onlooker_Text_0:
# 159 "data/maps/Route702/scripts.pory"
	.string "Monferno! Attack with Fire Punch!$"

Mienfoo_Onlooker_Text_0:
# 173 "data/maps/Route702/scripts.pory"
	.string "Mienfoo! Hit em with Retaliate!$"

COOLTRAINER_ALLY_Text_0:
# 191 "data/maps/Route702/scripts.pory"
	.string "Why hello there trainer.\p"
	.string "I'm a member of a group known as The\n"
	.string "Chosen.\p"
	.string "We are tasked with finding suitable\n"
	.string "trainers to join us.\p"
	.string "Are you one of them?$"

COOLTRAINER_ALLY_Text_1:
# 202 "data/maps/Route702/scripts.pory"
	.string "Ah I see, how unfortunate.$"

COOLTRAINER_ALLY_Text_2:
# 206 "data/maps/Route702/scripts.pory"
	.string "We will be watching you.$"

ALLY_GIVE_LEFTOVERS_Text_0:
# 221 "data/maps/Route702/scripts.pory"
	.string "Here take this for besting me.$"

BLACK_BELT_JOEY_INTRO::
# 45 "data/maps/Route702/scripts.pory"
	.string "Good answer!\p"
	.string "Your first opponent shall be me!$"

BLACK_BELT_JOEY_OUTRO::
# 51 "data/maps/Route702/scripts.pory"
	.string "Aha! Good workout!$"

ALITA_INTRO::
# 64 "data/maps/Route702/scripts.pory"
	.string "I'm next in line!\p"
	.string "People call me the Battle Angel!$"

ALITA_OUTRO::
# 69 "data/maps/Route702/scripts.pory"
	.string "Guess I need more training...$"

NATHAN_INTRO::
# 82 "data/maps/Route702/scripts.pory"
	.string "I'm the last Martial Gauntlet member.\p"
	.string "Just try to withstand my assault!$"

NATHAN_OUTRO::
# 87 "data/maps/Route702/scripts.pory"
	.string "You're like a piece of iron...$"

ALLY_INTRO::
# 212 "data/maps/Route702/scripts.pory"
	.string "Then let us find out shall we?$"

ALLY_OUTRO::
# 216 "data/maps/Route702/scripts.pory"
	.string "You are certainly promising.$"
