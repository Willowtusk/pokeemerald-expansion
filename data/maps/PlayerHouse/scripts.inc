PlayerHouse_MapScripts::
# 2 "data/maps/PlayerHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Seluna_Town_Respawn_OnTransition
	.byte 0


Seluna_Town_Respawn_OnTransition::
# 7 "data/maps/PlayerHouse/scripts.pory"
	setrespawn HEAL_LOCATION_SELUNA_TOWN
	end


NO_ENTRY_SISTERS_ROOM::
# 13 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 14 "data/maps/PlayerHouse/scripts.pory"
	msgbox NO_ENTRY_SISTERS_ROOM_Text_0
# 18 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 19 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SIMPLE_MOVE_DOWN
# 20 "data/maps/PlayerHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	return


MOM_FIRST_VISIT::
# 28 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_TALK_TO_MOM_1, 0
	goto_if_eq MOM_FIRST_VISIT_1
# 47 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_TALK_TO_MOM_1, 3
	goto_if_ge MOM_FIRST_VISIT_2
# 71 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 72 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 73 "data/maps/PlayerHouse/scripts.pory"
	msgbox MOM_FIRST_VISIT_Text_4
# 77 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 78 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	return

MOM_FIRST_VISIT_1:
# 29 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 30 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 31 "data/maps/PlayerHouse/scripts.pory"
	msgbox MOM_FIRST_VISIT_Text_0
# 41 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 1
# 42 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_AERITH_MARKET_INTERACTION
# 44 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 45 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	return

MOM_FIRST_VISIT_2:
# 48 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 49 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 50 "data/maps/PlayerHouse/scripts.pory"
	msgbox MOM_FIRST_VISIT_Text_1, MSGBOX_YESNO
# 51 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MOM_FIRST_VISIT_7
# 64 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 65 "data/maps/PlayerHouse/scripts.pory"
	msgbox MOM_FIRST_VISIT_Text_3
MOM_FIRST_VISIT_6:
# 67 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 68 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	return

MOM_FIRST_VISIT_7:
# 52 "data/maps/PlayerHouse/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 53 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/PlayerHouse/scripts.pory"
	special HealPlayerParty
# 55 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_HEAL
# 56 "data/maps/PlayerHouse/scripts.pory"
	waitfanfare
# 57 "data/maps/PlayerHouse/scripts.pory"
	closemessage
# 58 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 59 "data/maps/PlayerHouse/scripts.pory"
	msgbox MOM_FIRST_VISIT_Text_2
# 60 "data/maps/PlayerHouse/scripts.pory"
	waitmessage
# 61 "data/maps/PlayerHouse/scripts.pory"
	release
	goto MOM_FIRST_VISIT_6


# 87 "data/maps/PlayerHouse/scripts.pory"
SIMPLE_MOVE_DOWN:
# 88 "data/maps/PlayerHouse/scripts.pory"
	walk_down
	step_end

NO_ENTRY_SISTERS_ROOM_Text_0:
# 15 "data/maps/PlayerHouse/scripts.pory"
	.string "(This goes to Lily's room.)\p"
	.string "(Probably shouldn't go there yet.)$"

MOM_FIRST_VISIT_Text_0:
# 32 "data/maps/PlayerHouse/scripts.pory"
	.string "Hey {PLAYER}!\p"
	.string "Where have you been?\p"
	.string "Your dad.... I mean the professor, would\n"
	.string "like to speak with you.\p"
	.string "I think he has something he wants to\n"
	.string "show you.\p"
	.string "You should go pay him a visit!\p"
	.string "He should be in the lab close by.\p"
	.string "Oh, and don't forget your shoes! They\n"
	.string "should be in your room.$"

MOM_FIRST_VISIT_Text_1:
# 50 "data/maps/PlayerHouse/scripts.pory"
	.string "You look tired hon, want me to heal\n your pokemon?$"

MOM_FIRST_VISIT_Text_2:
# 59 "data/maps/PlayerHouse/scripts.pory"
	.string "Now thats better!$"

MOM_FIRST_VISIT_Text_3:
# 65 "data/maps/PlayerHouse/scripts.pory"
	.string "Okay sweetie be safe!$"

MOM_FIRST_VISIT_Text_4:
# 74 "data/maps/PlayerHouse/scripts.pory"
	.string "Oh don't you worry about your old mom.\p"
	.string "I'll be here until you get back.$"
