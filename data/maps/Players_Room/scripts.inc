Players_Room_MapScripts::
	.byte 0


POTION_ITEM::
# 6 "data/maps/Players_Room/scripts.pory"
	lockall
# 7 "data/maps/Players_Room/scripts.pory"
	msgbox POTION_ITEM_Text_0
# 11 "data/maps/Players_Room/scripts.pory"
	closemessage
# 12 "data/maps/Players_Room/scripts.pory"
	giveitem ITEM_POTION, 1
# 13 "data/maps/Players_Room/scripts.pory"
	removeobject 1
# 14 "data/maps/Players_Room/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 15 "data/maps/Players_Room/scripts.pory"
	setflag FLAG_RUNNING_SHOES_ITEM
# 16 "data/maps/Players_Room/scripts.pory"
	releaseall
	return


POTION_ITEM_Text_0:
# 8 "data/maps/Players_Room/scripts.pory"
	.string "Received the Running Shoes!\p"
	.string "There was a Potion underneath!$"
