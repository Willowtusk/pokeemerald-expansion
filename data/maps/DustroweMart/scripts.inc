DustroweMart_MapScripts::
	.byte 0


Dustrowe_Mart_Clerk::
# 6 "data/maps/DustroweMart/scripts.pory"
	lockall
# 7 "data/maps/DustroweMart/scripts.pory"
	faceplayer
# 8 "data/maps/DustroweMart/scripts.pory"
	message Dustrowe_Mart_Clerk_Text_0
# 12 "data/maps/DustroweMart/scripts.pory"
	waitmessage
# 13 "data/maps/DustroweMart/scripts.pory"
	pokemart Dustrowe_Mart
# 14 "data/maps/DustroweMart/scripts.pory"
	msgbox Dustrowe_Mart_Clerk_Text_1
# 15 "data/maps/DustroweMart/scripts.pory"
	closemessage
# 16 "data/maps/DustroweMart/scripts.pory"
	releaseall
	return


	.align 2
# 19 "data/maps/DustroweMart/scripts.pory"
Dustrowe_Mart:
# 20 "data/maps/DustroweMart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/DustroweMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/DustroweMart/scripts.pory"
	.2byte ITEM_REPEL
# 23 "data/maps/DustroweMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/DustroweMart/scripts.pory"
	.2byte ITEM_TM39
	.2byte ITEM_NONE

Dustrowe_Mart_Clerk_Text_0:
# 9 "data/maps/DustroweMart/scripts.pory"
	.string "Welcome to Dustrowe!\p"
	.string "How can I assist you?$"

Dustrowe_Mart_Clerk_Text_1:
# 14 "data/maps/DustroweMart/scripts.pory"
	.string "Thanks for shopping!$"
