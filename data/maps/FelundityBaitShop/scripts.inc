FelundityBaitShop_MapScripts::
	.byte 0


FelundityBaitShopMan::
# 6 "data/maps/FelundityBaitShop/scripts.pory"
	lockall
# 7 "data/maps/FelundityBaitShop/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityBaitShop/scripts.pory"
	msgbox FelundityBaitShopMan_Text_0
# 9 "data/maps/FelundityBaitShop/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityBaitShop/scripts.pory"
	pokemart Felundity_Bait_Shop
# 11 "data/maps/FelundityBaitShop/scripts.pory"
	msgbox FelundityBaitShopMan_Text_1
# 12 "data/maps/FelundityBaitShop/scripts.pory"
	closemessage
# 13 "data/maps/FelundityBaitShop/scripts.pory"
	releaseall
	return


	.align 2
# 16 "data/maps/FelundityBaitShop/scripts.pory"
Felundity_Bait_Shop:
# 17 "data/maps/FelundityBaitShop/scripts.pory"
	.2byte ITEM_WATER_GEM
# 18 "data/maps/FelundityBaitShop/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 19 "data/maps/FelundityBaitShop/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/FelundityBaitShop/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 21 "data/maps/FelundityBaitShop/scripts.pory"
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_NONE

FelundityBaitShopMan_Text_0:
# 8 "data/maps/FelundityBaitShop/scripts.pory"
	.string "Ohoho, a new customer! Come for the\n"
	.string "treasure O the sea have ya?$"

FelundityBaitShopMan_Text_1:
# 11 "data/maps/FelundityBaitShop/scripts.pory"
	.string "Have a good one!$"
