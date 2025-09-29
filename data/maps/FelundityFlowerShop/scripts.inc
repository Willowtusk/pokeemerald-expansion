FelundityFlowerShop_MapScripts::
	.byte 0


FlowershopClerk::
# 6 "data/maps/FelundityFlowerShop/scripts.pory"
	lockall
# 7 "data/maps/FelundityFlowerShop/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityFlowerShop/scripts.pory"
	msgbox FlowershopClerk_Text_0
# 9 "data/maps/FelundityFlowerShop/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityFlowerShop/scripts.pory"
	pokemart Felundity_Flower_Mart
# 11 "data/maps/FelundityFlowerShop/scripts.pory"
	msgbox FlowershopClerk_Text_1
# 12 "data/maps/FelundityFlowerShop/scripts.pory"
	closemessage
# 13 "data/maps/FelundityFlowerShop/scripts.pory"
	releaseall
	return


	.align 2
# 16 "data/maps/FelundityFlowerShop/scripts.pory"
Felundity_Flower_Mart:
# 17 "data/maps/FelundityFlowerShop/scripts.pory"
	.2byte ITEM_LEEK
# 18 "data/maps/FelundityFlowerShop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 19 "data/maps/FelundityFlowerShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 20 "data/maps/FelundityFlowerShop/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 21 "data/maps/FelundityFlowerShop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

FlowershopCustomer::
# 25 "data/maps/FelundityFlowerShop/scripts.pory"
	lockall
# 26 "data/maps/FelundityFlowerShop/scripts.pory"
	faceplayer
# 27 "data/maps/FelundityFlowerShop/scripts.pory"
	msgbox FlowershopCustomer_Text_0
# 28 "data/maps/FelundityFlowerShop/scripts.pory"
	waitmessage
# 29 "data/maps/FelundityFlowerShop/scripts.pory"
	releaseall
	return


FlowershopClerk_Text_0:
# 8 "data/maps/FelundityFlowerShop/scripts.pory"
	.string "Welcome to Felundity's Flower Shop! How\n"
	.string "can I help you on this fine day?$"

FlowershopClerk_Text_1:
# 11 "data/maps/FelundityFlowerShop/scripts.pory"
	.string "Hope to see you again soon!$"

FlowershopCustomer_Text_0:
# 27 "data/maps/FelundityFlowerShop/scripts.pory"
	.string "Oh how lovely to see a fellow flower\n"
	.string "enthusiast! Do you have a favorite\l"
	.string "flower dear?$"
