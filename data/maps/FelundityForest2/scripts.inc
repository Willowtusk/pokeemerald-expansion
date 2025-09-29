FelundityForest2_MapScripts::
	.byte 0


Felundity_Forest_Boy1::
# 7 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 8 "data/maps/FelundityForest2/scripts.pory"
	faceplayer
# 9 "data/maps/FelundityForest2/scripts.pory"
	msgbox Felundity_Forest_Boy1_Text_0
# 12 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 13 "data/maps/FelundityForest2/scripts.pory"
	releaseall
	return


Felundity_Forest_Girl1::
# 18 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 19 "data/maps/FelundityForest2/scripts.pory"
	faceplayer
# 20 "data/maps/FelundityForest2/scripts.pory"
	msgbox Felundity_Forest_Girl1_Text_0
# 21 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 22 "data/maps/FelundityForest2/scripts.pory"
	releaseall
	return


Felundity_Forest_Girl2::
# 27 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 28 "data/maps/FelundityForest2/scripts.pory"
	faceplayer
# 29 "data/maps/FelundityForest2/scripts.pory"
	goto_if_unset FLAG_CAT_LADY_NEST_BALL, Felundity_Forest_Girl2_2
# 37 "data/maps/FelundityForest2/scripts.pory"
	msgbox Felundity_Forest_Girl2_Text_1
Felundity_Forest_Girl2_1:
# 40 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 41 "data/maps/FelundityForest2/scripts.pory"
	releaseall
	return

Felundity_Forest_Girl2_2:
# 30 "data/maps/FelundityForest2/scripts.pory"
	msgbox Felundity_Forest_Girl2_Text_0
# 33 "data/maps/FelundityForest2/scripts.pory"
	giveitem ITEM_NEST_BALL, 10
# 34 "data/maps/FelundityForest2/scripts.pory"
	setflag FLAG_CAT_LADY_NEST_BALL
	goto Felundity_Forest_Girl2_1


FelundityForestL::
# 46 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 47 "data/maps/FelundityForest2/scripts.pory"
	playse SE_PIN
# 48 "data/maps/FelundityForest2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 49 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 50 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 51 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 52 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopUpInPlace
# 53 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 54 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 55 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_0
# 56 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 57 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 58 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopUpInPlace
# 59 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 60 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 61 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_1
# 62 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 63 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 64 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, HopDownInPlace
# 65 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 66 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 67 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_2
# 68 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 69 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_3
# 70 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 71 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 72 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, FaceDown
# 73 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 74 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 75 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 76 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopDownInPlace
# 77 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 78 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 79 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_4
# 80 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 81 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 82 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, MediumMoveDown
# 83 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 84 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 85 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_5
# 86 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 87 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, Up2_Left1
# 88 "data/maps/FelundityForest2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Up3
# 89 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 8
# 90 "data/maps/FelundityForest2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 91 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, FaceRight
# 92 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 93 "data/maps/FelundityForest2/scripts.pory"
	delay 24
# 94 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_6
# 95 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 96 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 97 "data/maps/FelundityForest2/scripts.pory"
	delay 24
# 98 "data/maps/FelundityForest2/scripts.pory"
	applymovement 9, Escape
# 99 "data/maps/FelundityForest2/scripts.pory"
	applymovement 7, Escape
# 100 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 9
# 101 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 7
# 102 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/FelundityForest2/scripts.pory"
	removeobject 9
# 104 "data/maps/FelundityForest2/scripts.pory"
	removeobject 7
# 105 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 106 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, FaceDown
# 108 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 109 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, WalkInPlaceDown
# 110 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 111 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_7
# 112 "data/maps/FelundityForest2/scripts.pory"
	trainerbattle_no_intro TRAINER_HELIX_GRUNT_MAX, TEAM_HELIX_GRUNT_MAX_OUTRO
# 113 "data/maps/FelundityForest2/scripts.pory"
	goto HELIX_LEAVES_FELUNDITY_FOREST
	return


FelundityForestR::
# 119 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 120 "data/maps/FelundityForest2/scripts.pory"
	playse SE_PIN
# 121 "data/maps/FelundityForest2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 122 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 123 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 124 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopUpInPlace
# 126 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 127 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 128 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_0
# 129 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 130 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 131 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopUpInPlace
# 132 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 133 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 134 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_1
# 135 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 136 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 137 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, HopDownInPlace
# 138 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 139 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 140 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_2
# 141 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 142 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_3
# 143 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 144 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 145 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, FaceDown
# 146 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 147 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 148 "data/maps/FelundityForest2/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, HopDownInPlace
# 150 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 151 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 152 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_4
# 153 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 154 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 155 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, Right1Down2
# 156 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 157 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 158 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_5
# 159 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 160 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, Up2Left2
# 161 "data/maps/FelundityForest2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Up3Left1FaceUp
# 162 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 8
# 163 "data/maps/FelundityForest2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 164 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, FaceRight
# 165 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 166 "data/maps/FelundityForest2/scripts.pory"
	delay 24
# 167 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_6
# 168 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 169 "data/maps/FelundityForest2/scripts.pory"
	delay 24
# 170 "data/maps/FelundityForest2/scripts.pory"
	applymovement 9, Escape
# 171 "data/maps/FelundityForest2/scripts.pory"
	applymovement 7, Escape
# 172 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 9
# 173 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 7
# 174 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 175 "data/maps/FelundityForest2/scripts.pory"
	removeobject 9
# 176 "data/maps/FelundityForest2/scripts.pory"
	removeobject 7
# 177 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 178 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 179 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, FaceDown
# 180 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 181 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, WalkInPlaceDown
# 182 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 183 "data/maps/FelundityForest2/scripts.pory"
	msgbox FelundityForestL_Text_7
# 184 "data/maps/FelundityForest2/scripts.pory"
	trainerbattle_no_intro TRAINER_HELIX_GRUNT_MAX, TEAM_HELIX_GRUNT_MAX_OUTRO
# 185 "data/maps/FelundityForest2/scripts.pory"
	goto HELIX_LEAVES_FELUNDITY_FOREST
	return


# 189 "data/maps/FelundityForest2/scripts.pory"
Hop_twice:
# 190 "data/maps/FelundityForest2/scripts.pory"
	jump_in_place_up
# 190 "data/maps/FelundityForest2/scripts.pory"
	jump_in_place_up
	step_end

# 193 "data/maps/FelundityForest2/scripts.pory"
DoubleExclamation:
# 194 "data/maps/FelundityForest2/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 197 "data/maps/FelundityForest2/scripts.pory"
Up2_Left1:
# 199 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 199 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 200 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 201 "data/maps/FelundityForest2/scripts.pory"
	face_player
	step_end

# 204 "data/maps/FelundityForest2/scripts.pory"
Up3:
# 205 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 205 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 205 "data/maps/FelundityForest2/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/FelundityForest2/scripts.pory"
Escape:
# 209 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 209 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 209 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 209 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 209 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 210 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 210 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 210 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 211 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 211 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 211 "data/maps/FelundityForest2/scripts.pory"
	walk_up
	step_end

HELIX_LEAVES_FELUNDITY_FOREST::
# 220 "data/maps/FelundityForest2/scripts.pory"
	lockall
# 221 "data/maps/FelundityForest2/scripts.pory"
	msgbox HELIX_LEAVES_FELUNDITY_FOREST_Text_0
# 222 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 223 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 224 "data/maps/FelundityForest2/scripts.pory"
	applymovement 6, Escape
# 225 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 6
# 226 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 227 "data/maps/FelundityForest2/scripts.pory"
	removeobject 6
# 228 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 229 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 230 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, SIMPLE_MOVE_UP
# 231 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 0
# 232 "data/maps/FelundityForest2/scripts.pory"
	msgbox HELIX_LEAVES_FELUNDITY_FOREST_Text_1
# 233 "data/maps/FelundityForest2/scripts.pory"
	waitmessage
# 234 "data/maps/FelundityForest2/scripts.pory"
	closemessage
# 235 "data/maps/FelundityForest2/scripts.pory"
	applymovement 8, Escape
# 236 "data/maps/FelundityForest2/scripts.pory"
	waitmovement 8
# 237 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 238 "data/maps/FelundityForest2/scripts.pory"
	removeobject 8
# 239 "data/maps/FelundityForest2/scripts.pory"
	delay 48
# 240 "data/maps/FelundityForest2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 241 "data/maps/FelundityForest2/scripts.pory"
	setvar VAR_FELUNDITY_FOREST, 1
# 242 "data/maps/FelundityForest2/scripts.pory"
	setflag FLAG_FELUNDITY_SCENARIO
# 243 "data/maps/FelundityForest2/scripts.pory"
	releaseall
	return


# 247 "data/maps/FelundityForest2/scripts.pory"
FaceDown:
# 248 "data/maps/FelundityForest2/scripts.pory"
	face_down
	step_end

# 251 "data/maps/FelundityForest2/scripts.pory"
FaceRight:
# 252 "data/maps/FelundityForest2/scripts.pory"
	face_right
	step_end

# 255 "data/maps/FelundityForest2/scripts.pory"
WalkInPlaceDown:
# 256 "data/maps/FelundityForest2/scripts.pory"
	walk_in_place_down
	step_end

# 259 "data/maps/FelundityForest2/scripts.pory"
MediumMoveDown:
# 260 "data/maps/FelundityForest2/scripts.pory"
	walk_down
# 260 "data/maps/FelundityForest2/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/FelundityForest2/scripts.pory"
Right1Down2:
# 264 "data/maps/FelundityForest2/scripts.pory"
	walk_right
# 265 "data/maps/FelundityForest2/scripts.pory"
	walk_down
# 265 "data/maps/FelundityForest2/scripts.pory"
	walk_down
	step_end

# 268 "data/maps/FelundityForest2/scripts.pory"
Up2Left2:
# 269 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 269 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 270 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 270 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 271 "data/maps/FelundityForest2/scripts.pory"
	face_player
	step_end

# 274 "data/maps/FelundityForest2/scripts.pory"
Up3Left1FaceUp:
# 275 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 275 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 275 "data/maps/FelundityForest2/scripts.pory"
	walk_up
# 276 "data/maps/FelundityForest2/scripts.pory"
	walk_left
# 277 "data/maps/FelundityForest2/scripts.pory"
	face_up
	step_end

# 280 "data/maps/FelundityForest2/scripts.pory"
HopDownInPlace:
# 281 "data/maps/FelundityForest2/scripts.pory"
	jump_in_place_down
	step_end

# 284 "data/maps/FelundityForest2/scripts.pory"
HopUpInPlace:
# 285 "data/maps/FelundityForest2/scripts.pory"
	jump_in_place_up
	step_end

Felundity_Forest_Boy1_Text_0:
# 9 "data/maps/FelundityForest2/scripts.pory"
	.string "You notice how much this looks\n"
	.string "like a cat's paw?\p$"

Felundity_Forest_Girl1_Text_0:
# 20 "data/maps/FelundityForest2/scripts.pory"
	.string "I love cats!$"

Felundity_Forest_Girl2_Text_0:
# 30 "data/maps/FelundityForest2/scripts.pory"
	.string "Do you like Pokémon that look\n"
	.string "like cats?\p"
	.string "Here take these!$"

Felundity_Forest_Girl2_Text_1:
# 37 "data/maps/FelundityForest2/scripts.pory"
	.string "Now go catch some felines!$"

FelundityForestL_Text_0:
# 55 "data/maps/FelundityForest2/scripts.pory"
	.string "Hey!$"

FelundityForestL_Text_1:
# 61 "data/maps/FelundityForest2/scripts.pory"
	.string "Don't you dare mess with my sweet\n"
	.string "skitty! Just who even are you?$"

FelundityForestL_Text_2:
# 67 "data/maps/FelundityForest2/scripts.pory"
	.string "Miss, we need your Pokémon to conduct\n"
	.string "some quick tests. It will only take a\l"
	.string "minute and then you'll have your\l"
	.string "precious skitty back I promise.$"

FelundityForestL_Text_3:
# 69 "data/maps/FelundityForest2/scripts.pory"
	.string "Why you.....$"

FelundityForestL_Text_4:
# 79 "data/maps/FelundityForest2/scripts.pory"
	.string "Oh! A trainer!$"

FelundityForestL_Text_5:
# 85 "data/maps/FelundityForest2/scripts.pory"
	.string "Please, help me save my skitty! I would\n"
	.string "fight back but I've become so weak as\l"
	.string "of late and haven't had time to rest.\l"
	.string "Won't you help?$"

FelundityForestL_Text_6:
# 94 "data/maps/FelundityForest2/scripts.pory"
	.string "Take this thing back to the lab Sally,\n"
	.string "and quick!$"

FelundityForestL_Text_7:
# 111 "data/maps/FelundityForest2/scripts.pory"
	.string "Alright kid, you think you can take me\n"
	.string "and save your friend's pet huh? No one\l"
	.string "gets in the way of Team Helix!$"

HELIX_LEAVES_FELUNDITY_FOREST_Text_0:
# 221 "data/maps/FelundityForest2/scripts.pory"
	.string "Hehe, you got me kid. Time to report\n"
	.string "back to base!$"

HELIX_LEAVES_FELUNDITY_FOREST_Text_1:
# 232 "data/maps/FelundityForest2/scripts.pory"
	.string "Get back here!!$"

TEAM_HELIX_GRUNT_MAX_OUTRO::
# 215 "data/maps/FelundityForest2/scripts.pory"
	.string "Oooo, you've got some moves!$"
