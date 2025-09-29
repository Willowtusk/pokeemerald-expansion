SelunaPokemonLab_MapScripts::
	.byte 0


ChoosingAStarter_Piplup::
# 6 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 7 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Piplup_4
ChoosingAStarter_Piplup_3:
# 46 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Piplup_1:
# 49 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 50 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end

ChoosingAStarter_Piplup_2:
# 8 "data/maps/SelunaPokemonLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 9 "data/maps/SelunaPokemonLab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_ENCOUNTER
# 10 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmoncry
# 11 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_0, MSGBOX_YESNO
# 12 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChoosingAStarter_Piplup_9
# 40 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 41 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_NotChosen
	goto ChoosingAStarter_Piplup_1

ChoosingAStarter_Piplup_4:
# 7 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_STARTER, ChoosingAStarter_Piplup_6
	goto ChoosingAStarter_Piplup_3

ChoosingAStarter_Piplup_6:
# 7 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_PIPLUP_STARTER, ChoosingAStarter_Piplup_2
	goto ChoosingAStarter_Piplup_3

ChoosingAStarter_Piplup_9:
# 13 "data/maps/SelunaPokemonLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 14 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ChoosingAStarter_Piplup_12
# 25 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Piplup_13
# 35 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 36 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Piplup_1

ChoosingAStarter_Piplup_12:
# 15 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_AERITH_HOUSE_INTERACTION
# 16 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 17 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_1
# 19 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 4
# 20 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_PIPLUP_STARTER
# 21 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 22 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
# 23 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Piplup_1

ChoosingAStarter_Piplup_13:
# 26 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_1
# 28 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 4
# 29 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 30 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_PIPLUP_STARTER
# 31 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
# 32 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Piplup_1


NicknamePartyMon::
# 55 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 56 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 57 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 58 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 59 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 65 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 66 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 67 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 70 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
# 68 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


ChoosingAStarter_Chikorita::
# 83 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 84 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Chikorita_4
ChoosingAStarter_Chikorita_3:
# 123 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Chikorita_1:
# 126 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 127 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end

ChoosingAStarter_Chikorita_2:
# 85 "data/maps/SelunaPokemonLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 86 "data/maps/SelunaPokemonLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 87 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmoncry
# 88 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_0, MSGBOX_YESNO
# 89 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChoosingAStarter_Chikorita_9
# 117 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 118 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_NotChosen
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_4:
# 84 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_STARTER, ChoosingAStarter_Chikorita_6
	goto ChoosingAStarter_Chikorita_3

ChoosingAStarter_Chikorita_6:
# 84 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_PIPLUP_STARTER, ChoosingAStarter_Chikorita_2
	goto ChoosingAStarter_Chikorita_3

ChoosingAStarter_Chikorita_9:
# 90 "data/maps/SelunaPokemonLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 91 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ChoosingAStarter_Chikorita_12
# 102 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Chikorita_13
# 112 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 113 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_12:
# 92 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_AERITH_HOUSE_INTERACTION
# 93 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 94 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_1
# 96 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 3
# 97 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_CHIKORITA_STARTER
# 98 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 99 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
# 100 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_13:
# 103 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_1
# 105 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 3
# 106 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 107 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_CHIKORITA_STARTER
# 108 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
# 109 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Chikorita_1


ChoosingAStarter_Fennekin::
# 136 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 137 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Fennekin_4
ChoosingAStarter_Fennekin_3:
# 175 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Fennekin_1:
# 177 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 178 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end

ChoosingAStarter_Fennekin_2:
# 138 "data/maps/SelunaPokemonLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 139 "data/maps/SelunaPokemonLab/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_ENCOUNTER
# 140 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmoncry
# 141 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_0, MSGBOX_YESNO
# 142 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChoosingAStarter_Fennekin_9
# 170 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 171 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_NotChosen
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_4:
# 137 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_STARTER, ChoosingAStarter_Fennekin_6
	goto ChoosingAStarter_Fennekin_3

ChoosingAStarter_Fennekin_6:
# 137 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_PIPLUP_STARTER, ChoosingAStarter_Fennekin_2
	goto ChoosingAStarter_Fennekin_3

ChoosingAStarter_Fennekin_9:
# 143 "data/maps/SelunaPokemonLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 144 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ChoosingAStarter_Fennekin_12
# 155 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Fennekin_13
# 165 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 166 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_12:
# 145 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_AERITH_HOUSE_INTERACTION
# 146 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 147 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_1
# 149 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 2
# 150 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_FENNEKIN_STARTER
# 151 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 152 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
# 153 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_13:
# 156 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_1
# 158 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 2
# 159 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 160 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_FENNEKIN_STARTER
# 161 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
# 162 "data/maps/SelunaPokemonLab/scripts.pory"
	goto Starter_Obtained_Pokedex_Get
	goto ChoosingAStarter_Fennekin_1


Professor_ChooseYourStarter_MOVE_ONE::
# 183 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 184 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_0
# 185 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 186 "data/maps/SelunaPokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE
# 187 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmovement 0
# 188 "data/maps/SelunaPokemonLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 189 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 190 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_1
# 200 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 201 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 2
# 202 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end


Professor_ChooseYourStarter_MOVE_TWO::
# 208 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 209 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_0
# 210 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 211 "data/maps/SelunaPokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_AND_LEFT
# 212 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmovement 0
# 213 "data/maps/SelunaPokemonLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 214 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 215 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_TWO_Text_0
# 225 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 226 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 2
# 227 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end


# 234 "data/maps/SelunaPokemonLab/scripts.pory"
MOVE_UP_ONE:
# 235 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/SelunaPokemonLab/scripts.pory"
MOVE_UP_AND_LEFT:
# 239 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_up
# 240 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_left
	step_end

DAD_LAB_CONVO_1::
# 244 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 245 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 246 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_TALK_TO_MOM_1, 5
	goto_if_le DAD_LAB_CONVO_1_1
# 255 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox DAD_LAB_CONVO_1_Text_1
# 259 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
# 260 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	return

DAD_LAB_CONVO_1_1:
# 247 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox DAD_LAB_CONVO_1_Text_0
# 251 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
# 252 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	return


Choose_Starter::
# 265 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 266 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Choose_Starter_Text_0
# 267 "data/maps/SelunaPokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_UP_ONE
# 268 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmovement 0
# 269 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
# 270 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	return


Starter_Obtained_Pokedex_Get::
# 274 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 275 "data/maps/SelunaPokemonLab/scripts.pory"
	turnobject 1, DIR_NORTH
# 276 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_Obtained_Pokedex_Get_Text_0
# 281 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 283 "data/maps/SelunaPokemonLab/scripts.pory"
	waitfanfare
# 284 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 285 "data/maps/SelunaPokemonLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 286 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
	return


# 290 "data/maps/SelunaPokemonLab/scripts.pory"
SIMPLE_MOVE_UP_ONE:
# 291 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_up
	step_end

ChoosingAStarter_Piplup_Text_0:
# 11 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Water Type Piplup?$"

ChoosingAStarter_Piplup_Text_1:
# 18 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Piplup!$"

ChoosingAStarter_Piplup_Text_2:
# 36 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "No More Room$"

ChoosingAStarter_Piplup_Text_3:
# 46 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "(I shouldn't take another)$"

NicknamePartyMon_Text_0:
# 55 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

NicknameBoxMon_Text_0:
# 65 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to give it a nickname$"

NicknameBoxMon_Text_1:
# 70 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Transferred to PC$"

ChoosingAStarter_Chikorita_Text_0:
# 88 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Grass Type Chikorita?$"

ChoosingAStarter_Chikorita_Text_1:
# 95 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Chikorita!$"

ChoosingAStarter_Fennekin_Text_0:
# 141 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Fire Type Fennekin?$"

ChoosingAStarter_Fennekin_Text_1:
# 148 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Fennekin!$"

Professor_ChooseYourStarter_MOVE_ONE_Text_0:
# 184 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "{PLAYER}!$"

Professor_ChooseYourStarter_MOVE_ONE_Text_1:
# 191 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "There you are!\n"
	.string "I've been trying to get ahold of you all\l"
	.string "day.\p"
	.string "Have you ever thought about traveling\n"
	.string "the region?\p"
	.string "Me and mom think it would be good for\n"
	.string "you\n"
	.string "to see the world.\p"
	.string "But, you can't travel the world without\n"
	.string "a companion can you?\p"
	.string "I think it's finally time for you to get\n"
	.string "a Pokemon {PLAYER}.\p"
	.string "My field research has allowed me to\n"
	.string "spare some Pokemon for your journey!\p"
	.string "Why don't you pick one?$"

Professor_ChooseYourStarter_MOVE_TWO_Text_0:
# 216 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "There you are!\n"
	.string "I've been trying to get ahold of you all\l"
	.string "day.\p"
	.string "Have you ever thought about traveling\n"
	.string "the region?\p"
	.string "Me and mom think it would be good for\n"
	.string "you.\p"
	.string "But, you can't travel the world without\n"
	.string "a companion can you?\p"
	.string "I think it's finally time for you to get\n"
	.string "a Pokemon {PLAYER}.\p"
	.string "My field research has allowed me to\n"
	.string "spare some Pokemon for your journey!\p"
	.string "Why don't you pick one?$"

DAD_LAB_CONVO_1_Text_0:
# 248 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "You should go see our new neighbor that\n"
	.string "just moved in last week.\p"
	.string "Now what was her name again?$"

DAD_LAB_CONVO_1_Text_1:
# 256 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Why don't you head out to\n"
	.string "Dustrowe Town?\p"
	.string "It's just down the road here.$"

Choose_Starter_Text_0:
# 266 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "I should choose a Pokemon first.$"

Starter_Obtained_Pokedex_Get_Text_0:
# 277 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "So you chose that one?\p"
	.string "In that case, you'll be needing this!\p"
	.string "{PLAYER} Received the POKéDEX!$"

Starter_NotChosen::
# 74 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "You did not choose a Pokemon$"
