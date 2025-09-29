FelundityGym_MapScripts::
	.byte 0


FelundityGymSupporter::
# 6 "data/maps/FelundityGym/scripts.pory"
	lockall
# 7 "data/maps/FelundityGym/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityGym/scripts.pory"
	msgbox FelundityGymSupporter_Text_0
# 10 "data/maps/FelundityGym/scripts.pory"
	waitmessage
# 11 "data/maps/FelundityGym/scripts.pory"
	releaseall
	return


FelundityGymClerk1::
# 15 "data/maps/FelundityGym/scripts.pory"
	lockall
# 16 "data/maps/FelundityGym/scripts.pory"
	faceplayer
# 17 "data/maps/FelundityGym/scripts.pory"
	msgbox FelundityGymClerk1_Text_0
# 18 "data/maps/FelundityGym/scripts.pory"
	waitmessage
# 19 "data/maps/FelundityGym/scripts.pory"
	pokemart FelundityGymMart1
# 20 "data/maps/FelundityGym/scripts.pory"
	msgbox FelundityGymClerk1_Text_1
# 21 "data/maps/FelundityGym/scripts.pory"
	closemessage
# 22 "data/maps/FelundityGym/scripts.pory"
	releaseall
	return


	.align 2
# 25 "data/maps/FelundityGym/scripts.pory"
FelundityGymMart1:
# 26 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_REPEL
# 29 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 30 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 31 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 32 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/FelundityGym/scripts.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

FelundityGymSupporter_Text_0:
# 8 "data/maps/FelundityGym/scripts.pory"
	.string "Howdy friend! You like this place? The\n"
	.string "leader Diana made her gym a multi-story\l"
	.string "department store! I've also heard she\l"
	.string "likes cats. . .\p"
	.string "Feel free to shop around in here, you'll\n"
	.string "need it!\p"
	.string "P.S... The trainers here also like to make\n"
	.string "use of various items they've bought\l"
	.string "here in battle, keep your guard up!$"

FelundityGymClerk1_Text_0:
# 17 "data/maps/FelundityGym/scripts.pory"
	.string "Welcome to the Felundity Town Gym!\p"
	.string "Came to stock up on supplies before the\n"
	.string "gym eh?$"

FelundityGymClerk1_Text_1:
# 20 "data/maps/FelundityGym/scripts.pory"
	.string "Good luck!$"
