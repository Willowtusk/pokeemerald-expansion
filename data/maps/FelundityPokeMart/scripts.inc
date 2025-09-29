FelundityPokeMart_MapScripts::
	.byte 0


FelundityMartMachop::
# 6 "data/maps/FelundityPokeMart/scripts.pory"
	lockall
# 7 "data/maps/FelundityPokeMart/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityPokeMart/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_ENCOUNTER
# 9 "data/maps/FelundityPokeMart/scripts.pory"
	waitmoncry
# 10 "data/maps/FelundityPokeMart/scripts.pory"
	msgbox FelundityMartMachop_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/FelundityPokeMart/scripts.pory"
	waitmessage
# 12 "data/maps/FelundityPokeMart/scripts.pory"
	releaseall
	return


Felundity_Mart_Clerk::
# 16 "data/maps/FelundityPokeMart/scripts.pory"
	lockall
# 17 "data/maps/FelundityPokeMart/scripts.pory"
	faceplayer
# 18 "data/maps/FelundityPokeMart/scripts.pory"
	message Felundity_Mart_Clerk_Text_0
# 22 "data/maps/FelundityPokeMart/scripts.pory"
	waitmessage
# 23 "data/maps/FelundityPokeMart/scripts.pory"
	pokemart Felundity_Mart
# 24 "data/maps/FelundityPokeMart/scripts.pory"
	msgbox Felundity_Mart_Clerk_Text_1
# 25 "data/maps/FelundityPokeMart/scripts.pory"
	closemessage
# 26 "data/maps/FelundityPokeMart/scripts.pory"
	releaseall
	return


	.align 2
# 29 "data/maps/FelundityPokeMart/scripts.pory"
Felundity_Mart:
# 30 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_POTION
# 31 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 32 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 34 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_TM11
# 35 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 36 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/maps/FelundityPokeMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

FelundityMartMachop_Text_0:
# 10 "data/maps/FelundityPokeMart/scripts.pory"
	.string "Maaaa!$"

Felundity_Mart_Clerk_Text_0:
# 19 "data/maps/FelundityPokeMart/scripts.pory"
	.string "Welcome to Felundity!\p"
	.string "What are you looking for?$"

Felundity_Mart_Clerk_Text_1:
# 24 "data/maps/FelundityPokeMart/scripts.pory"
	.string "Thanks for shopping!$"
