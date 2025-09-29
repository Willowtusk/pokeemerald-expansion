GapPass_MapScripts::
# 2 "data/maps/GapPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GapPass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GapPass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GapPass/scripts.pory"
	compare VAR_GAP_PASS_PUZZLE, 1
	goto_if_eq GapPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GapPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/GapPass/scripts.pory"
	setobjectxyperm 4, 11, 9
	return


Scientist_Magnemite::
# 12 "data/maps/GapPass/scripts.pory"
	lockall
# 13 "data/maps/GapPass/scripts.pory"
	faceplayer
# 14 "data/maps/GapPass/scripts.pory"
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_ENCOUNTER
# 15 "data/maps/GapPass/scripts.pory"
	waitmoncry
# 16 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_Magnemite_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/GapPass/scripts.pory"
	releaseall
	return


Scientist_A_GapPass::
# 21 "data/maps/GapPass/scripts.pory"
	trainerbattle_single TRAINER_GAP_PASS_SCIENTIST_A, SCIENTIST_A_GAP_PASS_INTRO, SCIENTIST_A_GAP_PASS_OUTRO
# 22 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_A_GapPass_Text_0, MSGBOX_AUTOCLOSE
	return


Scientist_B_GapPass::
# 36 "data/maps/GapPass/scripts.pory"
	trainerbattle_single TRAINER_GAP_PASS_SCIENTIST_B, SCIENTIST_B_GAP_PASS_INTRO, SCIENTIST_B_GAP_PASS_OUTRO
# 37 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_B_GapPass_Text_0, MSGBOX_AUTOCLOSE
	return


Scientist_C_GapPass::
# 56 "data/maps/GapPass/scripts.pory"
	trainerbattle_single TRAINER_GAP_PASS_SCIENTIST_C, SCIENTIST_C_GAP_PASS_INTRO, SCIENTIST_C_GAP_PASS_OUTRO
# 57 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_C_GapPass_Text_0, MSGBOX_AUTOCLOSE
	return


Scientist_D_GapPass::
# 76 "data/maps/GapPass/scripts.pory"
	lockall
# 77 "data/maps/GapPass/scripts.pory"
	faceplayer
# 78 "data/maps/GapPass/scripts.pory"
	compare VAR_GAP_PASS_PUZZLE, 0
	goto_if_eq Scientist_D_GapPass_1
# 103 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_D_GapPass_Text_2, MSGBOX_AUTOCLOSE
# 104 "data/maps/GapPass/scripts.pory"
	releaseall
	return

Scientist_D_GapPass_1:
# 79 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_D_GapPass_Text_0, MSGBOX_YESNO
# 91 "data/maps/GapPass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Scientist_D_GapPass_5
Scientist_D_GapPass_4:
# 95 "data/maps/GapPass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Scientist_D_GapPass_7
	return

Scientist_D_GapPass_5:
# 92 "data/maps/GapPass/scripts.pory"
	goto Puzzle_Question_1
	goto Scientist_D_GapPass_4

Scientist_D_GapPass_7:
# 96 "data/maps/GapPass/scripts.pory"
	msgbox Scientist_D_GapPass_Text_1
# 98 "data/maps/GapPass/scripts.pory"
	closemessage
# 99 "data/maps/GapPass/scripts.pory"
	releaseall
	return


Dr_Wallen_GapPass::
# 109 "data/maps/GapPass/scripts.pory"
	lockall
# 110 "data/maps/GapPass/scripts.pory"
	faceplayer
# 111 "data/maps/GapPass/scripts.pory"
	msgbox Dr_Wallen_GapPass_Text_0
# 126 "data/maps/GapPass/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/GapPass/scripts.pory"
	playse SE_DOOR
# 128 "data/maps/GapPass/scripts.pory"
	removeobject 3
# 129 "data/maps/GapPass/scripts.pory"
	removeobject 2
# 130 "data/maps/GapPass/scripts.pory"
	removeobject 1
# 131 "data/maps/GapPass/scripts.pory"
	removeobject 4
# 132 "data/maps/GapPass/scripts.pory"
	removeobject 5
# 133 "data/maps/GapPass/scripts.pory"
	removeobject 6
# 134 "data/maps/GapPass/scripts.pory"
	setflag FLAG_GAP_PASS_PUZZLE
# 135 "data/maps/GapPass/scripts.pory"
	setvar VAR_GAP_PASS_PUZZLE, 2
# 136 "data/maps/GapPass/scripts.pory"
	delay 48
# 137 "data/maps/GapPass/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 138 "data/maps/GapPass/scripts.pory"
	releaseall
	return


Wallen_Introduction::
# 142 "data/maps/GapPass/scripts.pory"
	lockall
# 143 "data/maps/GapPass/scripts.pory"
	playse SE_PIN
# 144 "data/maps/GapPass/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 145 "data/maps/GapPass/scripts.pory"
	waitmovement 0
# 146 "data/maps/GapPass/scripts.pory"
	applymovement 6, WALK_RIGHT_THREE
# 147 "data/maps/GapPass/scripts.pory"
	waitmovement 0
# 148 "data/maps/GapPass/scripts.pory"
	applymovement 6, WALK_DOWN_FIVE
# 149 "data/maps/GapPass/scripts.pory"
	waitmovement 0
# 150 "data/maps/GapPass/scripts.pory"
	goto Dr_Wallen_GapPass
	return


# 153 "data/maps/GapPass/scripts.pory"
WALK_RIGHT_THREE:
# 154 "data/maps/GapPass/scripts.pory"
	walk_right
# 154 "data/maps/GapPass/scripts.pory"
	walk_right
# 154 "data/maps/GapPass/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/GapPass/scripts.pory"
WALK_DOWN_FIVE:
# 158 "data/maps/GapPass/scripts.pory"
	walk_down
# 158 "data/maps/GapPass/scripts.pory"
	walk_down
# 158 "data/maps/GapPass/scripts.pory"
	walk_down
# 158 "data/maps/GapPass/scripts.pory"
	walk_down
# 158 "data/maps/GapPass/scripts.pory"
	walk_down
	step_end

Puzzle_Question_1::
# 162 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_1_Text_0
# 167 "data/maps/GapPass/scripts.pory"
	dynmultichoice 25, 5, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Puzzle_Question_1_Text_1, Puzzle_Question_1_Text_2, Puzzle_Question_1_Text_3
# 168 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_1_Text_1, 0
# 169 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_1_Text_2, 1
# 170 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_1_Text_3, 2
# 171 "data/maps/GapPass/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Puzzle_Question_1_1
# 175 "data/maps/GapPass/scripts.pory"
	goto GP_Puzzle_Fail
	return

Puzzle_Question_1_1:
# 172 "data/maps/GapPass/scripts.pory"
	goto Puzzle_Question_2
	return


Puzzle_Question_2::
# 181 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_2_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_2_Text_1
# 190 "data/maps/GapPass/scripts.pory"
	dynmultichoice 25, 5, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Puzzle_Question_2_Text_2, Puzzle_Question_2_Text_3, Puzzle_Question_2_Text_4
# 191 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_2_Text_2, 0
# 192 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_2_Text_3, 1
# 193 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_2_Text_4, 2
# 194 "data/maps/GapPass/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Puzzle_Question_2_1
# 199 "data/maps/GapPass/scripts.pory"
	goto GP_Puzzle_Fail
	return

Puzzle_Question_2_1:
# 195 "data/maps/GapPass/scripts.pory"
	goto Puzzle_Question_3
	return


Puzzle_Question_3::
# 204 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_2_Text_0, MSGBOX_AUTOCLOSE
# 205 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_3_Text_0
# 210 "data/maps/GapPass/scripts.pory"
	dynmultichoice 25, 5, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Puzzle_Question_3_Text_1, Puzzle_Question_3_Text_2, Puzzle_Question_3_Text_3
# 211 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_3_Text_1, 0
# 212 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_3_Text_2, 1
# 213 "data/maps/GapPass/scripts.pory"
	dynmultipush Puzzle_Question_3_Text_3, 2
# 214 "data/maps/GapPass/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Puzzle_Question_3_1
# 218 "data/maps/GapPass/scripts.pory"
	goto GP_Puzzle_Fail
	return

Puzzle_Question_3_1:
# 215 "data/maps/GapPass/scripts.pory"
	goto Gap_Pass_Puzzle_Victory
	return


Gap_Pass_Puzzle_Victory::
# 223 "data/maps/GapPass/scripts.pory"
	msgbox Puzzle_Question_2_Text_0, MSGBOX_AUTOCLOSE
# 224 "data/maps/GapPass/scripts.pory"
	msgbox Gap_Pass_Puzzle_Victory_Text_0
# 230 "data/maps/GapPass/scripts.pory"
	lockall
# 231 "data/maps/GapPass/scripts.pory"
	waitmessage
# 232 "data/maps/GapPass/scripts.pory"
	closemessage
# 233 "data/maps/GapPass/scripts.pory"
	applymovement 4, SIMPLE_MOVE_UP_ONE
# 234 "data/maps/GapPass/scripts.pory"
	waitmovement 0
# 235 "data/maps/GapPass/scripts.pory"
	applymovement 4, MOVE_LEFT_ONE
# 236 "data/maps/GapPass/scripts.pory"
	waitmovement 0
# 237 "data/maps/GapPass/scripts.pory"
	turnobject 4, DIR_EAST
# 238 "data/maps/GapPass/scripts.pory"
	addvar VAR_GAP_PASS_PUZZLE, 1
# 239 "data/maps/GapPass/scripts.pory"
	setobjectxyperm 4, 11, 9
# 240 "data/maps/GapPass/scripts.pory"
	delay 48
# 241 "data/maps/GapPass/scripts.pory"
	releaseall
	return


GP_Puzzle_Fail::
# 245 "data/maps/GapPass/scripts.pory"
	msgbox GP_Puzzle_Fail_Text_0
# 246 "data/maps/GapPass/scripts.pory"
	closemessage
# 247 "data/maps/GapPass/scripts.pory"
	releaseall
	return


Scientist_Magnemite_Text_0:
# 16 "data/maps/GapPass/scripts.pory"
	.string "It seems to be searching for something.$"

Scientist_A_GapPass_Text_0:
# 22 "data/maps/GapPass/scripts.pory"
	.string "I wish I could go fly a balloon...$"

Scientist_B_GapPass_Text_0:
# 39 "data/maps/GapPass/scripts.pory"
	.string "My favorite rock comes from volcanoes!$"

Scientist_C_GapPass_Text_0:
# 58 "data/maps/GapPass/scripts.pory"
	.string "G for guanine, C for cytosine..\n"
	.string "Hey what are you doing still\l"
	.string "listening!$"

Scientist_D_GapPass_Text_0:
# 81 "data/maps/GapPass/scripts.pory"
	.string "Before I can let you pass kid\n"
	.string "I have to see if you have the\l"
	.string "intellect necessary to converse\l"
	.string "with our boss.\p"
	.string "If you answer correctly I'll move.\p"
	.string "If you don't answer correctly\n"
	.string "however, you'll have to start\l"
	.string "from scratch.\p"
	.string "Are you ready?$"

Scientist_D_GapPass_Text_1:
# 96 "data/maps/GapPass/scripts.pory"
	.string "Well I guess I can't let\n"
	.string "you pass then!$"

Scientist_D_GapPass_Text_2:
# 103 "data/maps/GapPass/scripts.pory"
	.string "You certainly know your science.$"

Dr_Wallen_GapPass_Text_0:
# 113 "data/maps/GapPass/scripts.pory"
	.string "So, you must be the one meddling in our\n"
	.string "affairs. Do you see the writings on\l"
	.string "these walls? They must be thousands of\l"
	.string "years old. Some even say the first\l"
	.string "fossils were found in this very cave.\l"
	.string "However, my research here is complete. I\l"
	.string "have pressing matters to attend to, so\l"
	.string "if you're so eager to meddle in my\l"
	.string "affairs, come by my lab near Felundity\l"
	.string "Town.$"

Puzzle_Question_1_Text_0:
# 164 "data/maps/GapPass/scripts.pory"
	.string "What element has an atomic number\n"
	.string "of 2?$"

Puzzle_Question_1_Text_1:
# 167 "data/maps/GapPass/scripts.pory"
	.string "Hydrogen$"

Puzzle_Question_1_Text_2:
# 167 "data/maps/GapPass/scripts.pory"
	.string "Carbon$"

Puzzle_Question_1_Text_3:
# 167 "data/maps/GapPass/scripts.pory"
	.string "Helium$"

Puzzle_Question_2_Text_0:
# 183 "data/maps/GapPass/scripts.pory"
	.string "Correct!$"

Puzzle_Question_2_Text_1:
# 187 "data/maps/GapPass/scripts.pory"
	.string "What rock is known as\n"
	.string "volcanic glass?$"

Puzzle_Question_2_Text_2:
# 190 "data/maps/GapPass/scripts.pory"
	.string "Obsidian$"

Puzzle_Question_2_Text_3:
# 190 "data/maps/GapPass/scripts.pory"
	.string "Granite$"

Puzzle_Question_2_Text_4:
# 190 "data/maps/GapPass/scripts.pory"
	.string "Limestone$"

Puzzle_Question_3_Text_0:
# 207 "data/maps/GapPass/scripts.pory"
	.string "What one letter code stands for\n"
	.string "Valine?$"

Puzzle_Question_3_Text_1:
# 210 "data/maps/GapPass/scripts.pory"
	.string "C$"

Puzzle_Question_3_Text_2:
# 210 "data/maps/GapPass/scripts.pory"
	.string "V$"

Puzzle_Question_3_Text_3:
# 210 "data/maps/GapPass/scripts.pory"
	.string "Y$"

Gap_Pass_Puzzle_Victory_Text_0:
# 226 "data/maps/GapPass/scripts.pory"
	.string "Well you did it kid, congrats.\p"
	.string "You've earned the honor of talking to\n"
	.string "the boss, Dr. Wallen.$"

GP_Puzzle_Fail_Text_0:
# 245 "data/maps/GapPass/scripts.pory"
	.string "Incorrect, try again.$"

SCIENTIST_A_GAP_PASS_INTRO::
# 27 "data/maps/GapPass/scripts.pory"
	.string "Hey, who said you could be here?$"

SCIENTIST_A_GAP_PASS_OUTRO::
# 31 "data/maps/GapPass/scripts.pory"
	.string "We're doing important work here!$"

SCIENTIST_B_GAP_PASS_INTRO::
# 44 "data/maps/GapPass/scripts.pory"
	.string "Oooh I wonder what kind of\n"
	.string "biological DNA is left in these\l"
	.string "old rocks!$"

SCIENTIST_B_GAP_PASS_OUTRO::
# 50 "data/maps/GapPass/scripts.pory"
	.string "I just wanted to be a geologist..$"

SCIENTIST_C_GAP_PASS_INTRO::
# 66 "data/maps/GapPass/scripts.pory"
	.string "We don't take kindly to\n"
	.string "intruders.$"

SCIENTIST_C_GAP_PASS_OUTRO::
# 71 "data/maps/GapPass/scripts.pory"
	.string "You have spirit.$"
