SelunaPokemonLab_MapScripts::
	.byte 0


ChoosingAStarter_Piplup::
# 6 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 7 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Piplup_4
ChoosingAStarter_Piplup_3:
# 43 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Piplup_1:
# 46 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 47 "data/maps/SelunaPokemonLab/scripts.pory"
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
# 37 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 38 "data/maps/SelunaPokemonLab/scripts.pory"
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
# 24 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Piplup_13
# 32 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 33 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Piplup_1

ChoosingAStarter_Piplup_12:
# 15 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_LEAH_HOUSE_INTERACTION
# 16 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 17 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_1
# 19 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 2
# 20 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_PIPLUP_STARTER
# 21 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 22 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
	goto ChoosingAStarter_Piplup_1

ChoosingAStarter_Piplup_13:
# 25 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_1
# 27 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 2
# 28 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_PIPLUP_STARTER
# 29 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
	goto ChoosingAStarter_Piplup_1


NicknamePartyMon::
# 52 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 53 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 54 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 55 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 56 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 62 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 63 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 64 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 67 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
# 65 "data/maps/SelunaPokemonLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


ChoosingAStarter_Chikorita::
# 80 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 81 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Chikorita_4
ChoosingAStarter_Chikorita_3:
# 117 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Chikorita_1:
# 120 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 121 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end

ChoosingAStarter_Chikorita_2:
# 82 "data/maps/SelunaPokemonLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 83 "data/maps/SelunaPokemonLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 84 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmoncry
# 85 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_0, MSGBOX_YESNO
# 86 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChoosingAStarter_Chikorita_9
# 111 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 112 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_NotChosen
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_4:
# 81 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_STARTER, ChoosingAStarter_Chikorita_6
	goto ChoosingAStarter_Chikorita_3

ChoosingAStarter_Chikorita_6:
# 81 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_PIPLUP_STARTER, ChoosingAStarter_Chikorita_2
	goto ChoosingAStarter_Chikorita_3

ChoosingAStarter_Chikorita_9:
# 87 "data/maps/SelunaPokemonLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 88 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ChoosingAStarter_Chikorita_12
# 98 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Chikorita_13
# 106 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 107 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_12:
# 89 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_LEAH_HOUSE_INTERACTION
# 90 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 91 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_1
# 93 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 3
# 94 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_CHIKORITA_STARTER
# 95 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
	goto ChoosingAStarter_Chikorita_1

ChoosingAStarter_Chikorita_13:
# 99 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Chikorita_Text_1
# 101 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 3
# 102 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_CHIKORITA_STARTER
# 103 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
	goto ChoosingAStarter_Chikorita_1


ChoosingAStarter_Fennekin::
# 130 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 131 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_STARTER, ChoosingAStarter_Fennekin_4
ChoosingAStarter_Fennekin_3:
# 167 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_3
ChoosingAStarter_Fennekin_1:
# 169 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 170 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end

ChoosingAStarter_Fennekin_2:
# 132 "data/maps/SelunaPokemonLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 133 "data/maps/SelunaPokemonLab/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_ENCOUNTER
# 134 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmoncry
# 135 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_0, MSGBOX_YESNO
# 136 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChoosingAStarter_Fennekin_9
# 161 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 162 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Starter_NotChosen
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_4:
# 131 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_STARTER, ChoosingAStarter_Fennekin_6
	goto ChoosingAStarter_Fennekin_3

ChoosingAStarter_Fennekin_6:
# 131 "data/maps/SelunaPokemonLab/scripts.pory"
	goto_if_unset FLAG_PIPLUP_STARTER, ChoosingAStarter_Fennekin_2
	goto ChoosingAStarter_Fennekin_3

ChoosingAStarter_Fennekin_9:
# 137 "data/maps/SelunaPokemonLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 138 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ChoosingAStarter_Fennekin_12
# 148 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ChoosingAStarter_Fennekin_13
# 156 "data/maps/SelunaPokemonLab/scripts.pory"
	hidemonpic
# 157 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Piplup_Text_2
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_12:
# 139 "data/maps/SelunaPokemonLab/scripts.pory"
	clearflag FLAG_LEAH_HOUSE_INTERACTION
# 140 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 3
# 141 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_1
# 143 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 4
# 144 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_FENNEKIN_STARTER
# 145 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 146 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknamePartyMon
	goto ChoosingAStarter_Fennekin_1

ChoosingAStarter_Fennekin_13:
# 149 "data/maps/SelunaPokemonLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox ChoosingAStarter_Fennekin_Text_1
# 151 "data/maps/SelunaPokemonLab/scripts.pory"
	removeobject 4
# 152 "data/maps/SelunaPokemonLab/scripts.pory"
	setflag FLAG_FENNEKIN_STARTER
# 153 "data/maps/SelunaPokemonLab/scripts.pory"
	call NicknameBoxMon
	goto ChoosingAStarter_Fennekin_1


Professor_ChooseYourStarter_MOVE_ONE::
# 175 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 176 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_0
# 177 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 178 "data/maps/SelunaPokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE
# 179 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmovement 0
# 180 "data/maps/SelunaPokemonLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 181 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 182 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_1
# 192 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 193 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 2
# 194 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end


Professor_ChooseYourStarter_MOVE_TWO::
# 200 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 201 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_ONE_Text_0
# 202 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 203 "data/maps/SelunaPokemonLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_AND_LEFT
# 204 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmovement 0
# 205 "data/maps/SelunaPokemonLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 206 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 207 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox Professor_ChooseYourStarter_MOVE_TWO_Text_0
# 217 "data/maps/SelunaPokemonLab/scripts.pory"
	waitmessage
# 218 "data/maps/SelunaPokemonLab/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 2
# 219 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	end


# 226 "data/maps/SelunaPokemonLab/scripts.pory"
MOVE_UP_ONE:
# 227 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_up
	step_end

# 230 "data/maps/SelunaPokemonLab/scripts.pory"
MOVE_UP_AND_LEFT:
# 231 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_up
# 232 "data/maps/SelunaPokemonLab/scripts.pory"
	walk_left
	step_end

DAD_LAB_CONVO_1::
# 236 "data/maps/SelunaPokemonLab/scripts.pory"
	lockall
# 237 "data/maps/SelunaPokemonLab/scripts.pory"
	faceplayer
# 238 "data/maps/SelunaPokemonLab/scripts.pory"
	compare VAR_TALK_TO_MOM_1, 5
	goto_if_le DAD_LAB_CONVO_1_1
# 247 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox DAD_LAB_CONVO_1_Text_1
# 251 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
# 252 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	return

DAD_LAB_CONVO_1_1:
# 239 "data/maps/SelunaPokemonLab/scripts.pory"
	msgbox DAD_LAB_CONVO_1_Text_0
# 243 "data/maps/SelunaPokemonLab/scripts.pory"
	closemessage
# 244 "data/maps/SelunaPokemonLab/scripts.pory"
	releaseall
	return


ChoosingAStarter_Piplup_Text_0:
# 11 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Water Type Piplup?$"

ChoosingAStarter_Piplup_Text_1:
# 18 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Piplup!$"

ChoosingAStarter_Piplup_Text_2:
# 33 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "No More Room$"

ChoosingAStarter_Piplup_Text_3:
# 43 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "(I shouldn't take another)$"

NicknamePartyMon_Text_0:
# 52 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to give it a nickname?$"

NicknameBoxMon_Text_0:
# 62 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to give it a nickname$"

NicknameBoxMon_Text_1:
# 67 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Transferred to PC$"

ChoosingAStarter_Chikorita_Text_0:
# 85 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Grass Type Chikorita?$"

ChoosingAStarter_Chikorita_Text_1:
# 92 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Chikorita!$"

ChoosingAStarter_Fennekin_Text_0:
# 135 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Would you like to choose\nthe Fire Type Fennekin?$"

ChoosingAStarter_Fennekin_Text_1:
# 142 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Received Fennekin!$"

Professor_ChooseYourStarter_MOVE_ONE_Text_0:
# 176 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "{PLAYER}!$"

Professor_ChooseYourStarter_MOVE_ONE_Text_1:
# 183 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "There you are!\n"
	.string "I've been trying to get ahold of you all\l"
	.string "day.\p"
	.string "Have you ever thought about traveling\n"
	.string "the region? Me and mom think it would be\l"
	.string "good for you to go out and see the\l"
	.string "world.\p"
	.string "But, you can't travel the world without\n"
	.string "a companion can you?\p"
	.string "I think it's finally time for you to get\n"
	.string "a Pokemon {PLAYER}.\p"
	.string "My field research has allowed me to\n"
	.string "spare some Pokemon for your journey!\p"
	.string "Why don't you pick one?$"

Professor_ChooseYourStarter_MOVE_TWO_Text_0:
# 208 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "There you are!\n"
	.string "I've been trying to get ahold of you all\l"
	.string "day.\p"
	.string "Have you ever thought about traveling\n"
	.string "the region?\p"
	.string "Me and mom think it would be good for\n"
	.string "you to go out and see the world.\p"
	.string "But, you can't travel the world without\n"
	.string "a companion can you?\p"
	.string "I think it's finally time for you to get\n"
	.string "a Pokemon {PLAYER}.\p"
	.string "My field research has allowed me to\n"
	.string "spare some Pokemon for your journey!\p"
	.string "Why don't you pick one?$"

DAD_LAB_CONVO_1_Text_0:
# 240 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "You should go see our new neighbor that\n"
	.string "just moved in last week.\p"
	.string "She seems nice, I think her name is\n"
	.string "Leah.$"

DAD_LAB_CONVO_1_Text_1:
# 248 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "Why don't you head out to\n"
	.string "Dustrowe Town?\p"
	.string "It's just down the road here.$"

Starter_NotChosen::
# 71 "data/maps/SelunaPokemonLab/scripts.pory"
	.string "You did not choose a Pokemon$"
