FelundityGym3F_MapScripts::
	.byte 0


FelundityGymClerk3::
# 6 "data/maps/FelundityGym3F/scripts.pory"
	lockall
# 7 "data/maps/FelundityGym3F/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityGym3F/scripts.pory"
	msgbox FelundityGymClerk3_Text_0
# 9 "data/maps/FelundityGym3F/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityGym3F/scripts.pory"
	pokemart FelundityGymMart3
# 11 "data/maps/FelundityGym3F/scripts.pory"
	msgbox FelundityGymClerk3_Text_1
# 12 "data/maps/FelundityGym3F/scripts.pory"
	closemessage
# 13 "data/maps/FelundityGym3F/scripts.pory"
	releaseall
	return


	.align 2
# 16 "data/maps/FelundityGym3F/scripts.pory"
FelundityGymMart3:
# 17 "data/maps/FelundityGym3F/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 18 "data/maps/FelundityGym3F/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 19 "data/maps/FelundityGym3F/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 20 "data/maps/FelundityGym3F/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 21 "data/maps/FelundityGym3F/scripts.pory"
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

FelundityGymFisherman::
# 25 "data/maps/FelundityGym3F/scripts.pory"
	trainerbattle_single FELUNDITY_FISHERMAN_MIKE, FishermanMikeIntro, FishermanMikeOutro
# 26 "data/maps/FelundityGym3F/scripts.pory"
	msgbox FelundityGymFisherman_Text_0
	return


FelundityGymCoolTrainer::
# 40 "data/maps/FelundityGym3F/scripts.pory"
	trainerbattle_single TRAINER_ACE_BELINDA, BelindaIntro, BelindaOutro
# 41 "data/maps/FelundityGym3F/scripts.pory"
	msgbox FelundityGymCoolTrainer_Text_0
	return


FelundityGymClerk3_Text_0:
# 8 "data/maps/FelundityGym3F/scripts.pory"
	.string "Aiiiipom$"

FelundityGymClerk3_Text_1:
# 11 "data/maps/FelundityGym3F/scripts.pory"
	.string "Pom Pom!$"

FelundityGymFisherman_Text_0:
# 26 "data/maps/FelundityGym3F/scripts.pory"
	.string "Atleast I got some quality fishing line\n"
	.string "from here!$"

FelundityGymCoolTrainer_Text_0:
# 41 "data/maps/FelundityGym3F/scripts.pory"
	.string "Yea you're the real deal alright.\p"
	.string "Diana's waiting for you in the next room$"

FishermanMikeIntro::
# 29 "data/maps/FelundityGym3F/scripts.pory"
	.string "Say, do you know if they\n"
	.string "carry bait here?$"

FishermanMikeOutro::
# 34 "data/maps/FelundityGym3F/scripts.pory"
	.string "No hook or line, just stinker...$"

BelindaIntro::
# 44 "data/maps/FelundityGym3F/scripts.pory"
	.string "Well well, you've gotten this far Let's\n"
	.string "see what you're made of!$"

BelindaOutro::
# 50 "data/maps/FelundityGym3F/scripts.pory"
	.string "No way!$"
