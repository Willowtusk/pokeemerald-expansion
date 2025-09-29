FelundityHouse1_MapScripts::
	.byte 0


TMScald::
# 6 "data/maps/FelundityHouse1/scripts.pory"
	lockall
# 7 "data/maps/FelundityHouse1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 8 "data/maps/FelundityHouse1/scripts.pory"
	msgbox TMScald_Text_0
# 9 "data/maps/FelundityHouse1/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityHouse1/scripts.pory"
	istypeinparty TYPE_WATER
# 11 "data/maps/FelundityHouse1/scripts.pory"
	goto_if_eq GET_TM_SCALD
# 12 "data/maps/FelundityHouse1/scripts.pory"
	msgbox TMScald_Text_1
# 13 "data/maps/FelundityHouse1/scripts.pory"
	waitmessage
# 14 "data/maps/FelundityHouse1/scripts.pory"
	releaseall
	return


GET_TM_SCALD::
# 18 "data/maps/FelundityHouse1/scripts.pory"
	msgbox GET_TM_SCALD_Text_0, MSGBOX_YESNO
# 19 "data/maps/FelundityHouse1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GET_TM_SCALD_1
	return

GET_TM_SCALD_1:
# 20 "data/maps/FelundityHouse1/scripts.pory"
	playse MUS_SURF
# 21 "data/maps/FelundityHouse1/scripts.pory"
	waitse
# 22 "data/maps/FelundityHouse1/scripts.pory"
	giveitem ITEM_TM20, 1
# 23 "data/maps/FelundityHouse1/scripts.pory"
	setvar VAR_TM_SCALD_OBTAINED, 1
# 24 "data/maps/FelundityHouse1/scripts.pory"
	releaseall
	return


TMScald_Text_0:
# 8 "data/maps/FelundityHouse1/scripts.pory"
	.string "Owch! These dishes are hot! . . .\p"
	.string "You notice something shiny under the\n"
	.string "sink$"

TMScald_Text_1:
# 12 "data/maps/FelundityHouse1/scripts.pory"
	.string "The dishes are too hot to grab it!$"

GET_TM_SCALD_Text_0:
# 18 "data/maps/FelundityHouse1/scripts.pory"
	.string "Would you like to use your water\n Pokémon to douse the dishes?$"
