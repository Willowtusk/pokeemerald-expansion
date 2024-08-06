Dustrowe_Building_1_MapScripts::
	.byte 0


ITEM_KINGS_ROCK_OBTAINED::
# 6 "data/maps/Dustrowe_Building_1/scripts.pory"
	lockall
# 7 "data/maps/Dustrowe_Building_1/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 8 "data/maps/Dustrowe_Building_1/scripts.pory"
	removeobject 1
# 9 "data/maps/Dustrowe_Building_1/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 10 "data/maps/Dustrowe_Building_1/scripts.pory"
	releaseall
	return


Dustrowe_Building_1_Youngster::
# 14 "data/maps/Dustrowe_Building_1/scripts.pory"
	lockall
# 15 "data/maps/Dustrowe_Building_1/scripts.pory"
	faceplayer
# 16 "data/maps/Dustrowe_Building_1/scripts.pory"
	msgbox Dustrowe_Building_1_Youngster_Text_0
# 22 "data/maps/Dustrowe_Building_1/scripts.pory"
	closemessage
# 23 "data/maps/Dustrowe_Building_1/scripts.pory"
	releaseall
	return


Dustrowe_Building_1_Youngster_Text_0:
# 17 "data/maps/Dustrowe_Building_1/scripts.pory"
	.string "Oh hiya there!\p"
	.string "My parents found this weird rock\n"
	.string "while working down in the mine.\p"
	.string "It's yours if you want it.$"
