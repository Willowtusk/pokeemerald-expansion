FelundityGym2F_MapScripts::
	.byte 0


FelundityGymClerk2::
# 6 "data/maps/FelundityGym2F/scripts.pory"
	lockall
# 7 "data/maps/FelundityGym2F/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityGym2F/scripts.pory"
	msgbox FelundityGymClerk2_Text_0
# 9 "data/maps/FelundityGym2F/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityGym2F/scripts.pory"
	pokemart FelundityGymMart2
# 11 "data/maps/FelundityGym2F/scripts.pory"
	msgbox FelundityGymClerk2_Text_1
# 12 "data/maps/FelundityGym2F/scripts.pory"
	closemessage
# 13 "data/maps/FelundityGym2F/scripts.pory"
	releaseall
	return


	.align 2
# 16 "data/maps/FelundityGym2F/scripts.pory"
FelundityGymMart2:
# 17 "data/maps/FelundityGym2F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 18 "data/maps/FelundityGym2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 19 "data/maps/FelundityGym2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data/maps/FelundityGym2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

FelundityGymGuitarist::
# 24 "data/maps/FelundityGym2F/scripts.pory"
	trainerbattle_single TRAINER_GUITARIST_SAM, GuitaristSamIntro, GuitaristSamOutro
# 25 "data/maps/FelundityGym2F/scripts.pory"
	msgbox FelundityGymGuitarist_Text_0
	return


FelundityGymClerk2_Text_0:
# 8 "data/maps/FelundityGym2F/scripts.pory"
	.string "Welcome! So nice to see a new\n"
	.string "challenger!$"

FelundityGymClerk2_Text_1:
# 11 "data/maps/FelundityGym2F/scripts.pory"
	.string "You got this!$"

FelundityGymGuitarist_Text_0:
# 25 "data/maps/FelundityGym2F/scripts.pory"
	.string "I should probably just buy a whole new\n"
	.string "guitar at this point, ugh$"

GuitaristSamIntro::
# 29 "data/maps/FelundityGym2F/scripts.pory"
	.string "Ay, you got any guitar\n"
	.string "supplies on ya?\p"
	.string ". . .\p"
	.string "Not gonna answer me huh? Maybe\n"
	.string "battling will shock my guitar into\l"
	.string "working again!$"

GuitaristSamOutro::
# 37 "data/maps/FelundityGym2F/scripts.pory"
	.string "Well now I need new strings...$"
