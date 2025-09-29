Research_Lab_Delta_MapScripts::
	.byte 0


Rocket_Archer_Battle::
# 6 "data/maps/Research_Lab_Delta/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_ARCHER, ROCKET_ARCHER_1_INTRO, ROCKET_ARCHER_1_OUTRO, ARCHER_LEAVE_1
# 7 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox Rocket_Archer_Battle_Text_0
# 8 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
	return


ARCHER_LEAVE_1::
# 20 "data/maps/Research_Lab_Delta/scripts.pory"
	lockall
# 21 "data/maps/Research_Lab_Delta/scripts.pory"
	faceplayer
# 22 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox ARCHER_LEAVE_1_Text_0
# 25 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmessage
# 26 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
# 27 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Research_Lab_Delta/scripts.pory"
	playse SE_EXIT
# 29 "data/maps/Research_Lab_Delta/scripts.pory"
	removeobject 2
# 30 "data/maps/Research_Lab_Delta/scripts.pory"
	setflag FLAG_ARCHER_DEFEAT_1
# 31 "data/maps/Research_Lab_Delta/scripts.pory"
	delay 48
# 32 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 33 "data/maps/Research_Lab_Delta/scripts.pory"
	releaseall
	return


Rocket_Arny_Battle::
# 37 "data/maps/Research_Lab_Delta/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_ARNY, ROCKET_ARNY_INTRO, ROCKET_ARNY_OUTRO
# 38 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox Rocket_Arny_Battle_Text_0
# 39 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmessage
# 40 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
	return


Rocket_Amy::
# 52 "data/maps/Research_Lab_Delta/scripts.pory"
	lockall
# 53 "data/maps/Research_Lab_Delta/scripts.pory"
	faceplayer
# 54 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox Rocket_Amy_Text_0
# 56 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmessage
# 57 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
# 58 "data/maps/Research_Lab_Delta/scripts.pory"
	releaseall
	return


DELTA_LAB_ETHER_OBTAINED::
# 63 "data/maps/Research_Lab_Delta/scripts.pory"
	lockall
# 64 "data/maps/Research_Lab_Delta/scripts.pory"
	giveitem ITEM_ETHER, 3
# 65 "data/maps/Research_Lab_Delta/scripts.pory"
	removeobject 5
# 66 "data/maps/Research_Lab_Delta/scripts.pory"
	setflag FLAG_DELTA_LAB_ETHER
# 67 "data/maps/Research_Lab_Delta/scripts.pory"
	releaseall
	return


DELTA_LAB_DIANA::
# 71 "data/maps/Research_Lab_Delta/scripts.pory"
	lockall
# 72 "data/maps/Research_Lab_Delta/scripts.pory"
	faceplayer
# 73 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox DELTA_LAB_DIANA_Text_0
# 76 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmessage
# 77 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
# 78 "data/maps/Research_Lab_Delta/scripts.pory"
	applymovement 6, walk_down_seven
# 79 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmovement 6
# 80 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/Research_Lab_Delta/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/Research_Lab_Delta/scripts.pory"
	removeobject 6
# 83 "data/maps/Research_Lab_Delta/scripts.pory"
	setflag FLAG_DIANA_DELTA_LAB
# 84 "data/maps/Research_Lab_Delta/scripts.pory"
	delay 48
# 85 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/Research_Lab_Delta/scripts.pory"
	releaseall
	return


# 89 "data/maps/Research_Lab_Delta/scripts.pory"
walk_down_seven:
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
# 90 "data/maps/Research_Lab_Delta/scripts.pory"
	walk_down
	step_end

Purrloin_Saved::
# 94 "data/maps/Research_Lab_Delta/scripts.pory"
	lockall
# 95 "data/maps/Research_Lab_Delta/scripts.pory"
	faceplayer
# 96 "data/maps/Research_Lab_Delta/scripts.pory"
	playmoncry SPECIES_PURRLOIN, CRY_MODE_ENCOUNTER
# 97 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmoncry
# 98 "data/maps/Research_Lab_Delta/scripts.pory"
	msgbox Purrloin_Saved_Text_0
# 99 "data/maps/Research_Lab_Delta/scripts.pory"
	waitmessage
# 100 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Research_Lab_Delta/scripts.pory"
	removeobject 7
# 102 "data/maps/Research_Lab_Delta/scripts.pory"
	setflag FLAG_PURRLOIN_SAVED
# 103 "data/maps/Research_Lab_Delta/scripts.pory"
	delay 48
# 104 "data/maps/Research_Lab_Delta/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/Research_Lab_Delta/scripts.pory"
	closemessage
# 106 "data/maps/Research_Lab_Delta/scripts.pory"
	releaseall
	return


Rocket_Archer_Battle_Text_0:
# 7 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "How did you beat me??$"

ARCHER_LEAVE_1_Text_0:
# 23 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Team Rocket isn't defeated that\n"
	.string "easily... see you around kid.$"

Rocket_Arny_Battle_Text_0:
# 38 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Ugh I'll be demoted for this...$"

Rocket_Amy_Text_0:
# 55 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Oh! I wasen't expecting to see an\n"
	.string "outsider here! . . . What am I doing here?\l"
	.string "Well, I don't actually like being in Team\l"
	.string "Rocket and just joined for the\l"
	.string "paycheck. I come here to try and relax\l"
	.string "sometimes$"

DELTA_LAB_DIANA_Text_0:
# 74 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Oh hi strong trainer! It appears Team\n"
	.string "Rocket and Team Helix have joined\l"
	.string "forces and snatched my Pokémon from\l"
	.string "me! I'll go ahead and see if I can find\l"
	.string "who's behind all of this, good luck!$"

Purrloin_Saved_Text_0:
# 98 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Purrr...\p"
	.string "The Purrloin seems to take a liking to\n"
	.string "you and tags along!$"

ROCKET_ARCHER_1_INTRO::
# 11 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "What might you be doing? This is a\n"
	.string "restricted area and I, Archer will not\l"
	.string "permit you to pass!$"

ROCKET_ARCHER_1_OUTRO::
# 15 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "This won't be the last you hear of Team\n"
	.string "Rocket....$"

ROCKET_ARNY_INTRO::
# 43 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "Who are you? Team Rocket doesn't allow\n"
	.string "visitors!$"

ROCKET_ARNY_OUTRO::
# 47 "data/maps/Research_Lab_Delta/scripts.pory"
	.string "No way....$"
