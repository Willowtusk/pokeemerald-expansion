SelunaMarket_MapScripts::
	.byte 0


Seluna_Pokemart_Employee::
# 6 "data/maps/SelunaMarket/scripts.pory"
	lockall
# 7 "data/maps/SelunaMarket/scripts.pory"
	faceplayer
# 8 "data/maps/SelunaMarket/scripts.pory"
	message Seluna_Pokemart_Employee_Text_0
# 9 "data/maps/SelunaMarket/scripts.pory"
	waitmessage
# 10 "data/maps/SelunaMarket/scripts.pory"
	pokemart Seluna_Mart
# 11 "data/maps/SelunaMarket/scripts.pory"
	msgbox Seluna_Pokemart_Employee_Text_1
# 12 "data/maps/SelunaMarket/scripts.pory"
	closemessage
# 13 "data/maps/SelunaMarket/scripts.pory"
	releaseall
	return


	.align 2
# 16 "data/maps/SelunaMarket/scripts.pory"
Seluna_Mart:
# 17 "data/maps/SelunaMarket/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/SelunaMarket/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/SelunaMarket/scripts.pory"
	.2byte ITEM_REPEL
# 20 "data/maps/SelunaMarket/scripts.pory"
	.2byte ITEM_TM10
	.2byte ITEM_NONE

Leah_Market_Battle::
# 25 "data/maps/SelunaMarket/scripts.pory"
	trainerbattle_single TRAINER_LEAH_1, Leah_Market_Intro, Leah_Market_Outro, Leah_Market_Leave
	return


Leah_Market_Leave::
# 43 "data/maps/SelunaMarket/scripts.pory"
	lockall
# 44 "data/maps/SelunaMarket/scripts.pory"
	msgbox Leah_Market_Leave_Text_0
# 49 "data/maps/SelunaMarket/scripts.pory"
	closemessage
# 50 "data/maps/SelunaMarket/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 51 "data/maps/SelunaMarket/scripts.pory"
	msgbox Leah_Market_Leave_Text_1
# 54 "data/maps/SelunaMarket/scripts.pory"
	waitmessage
# 55 "data/maps/SelunaMarket/scripts.pory"
	closemessage
# 56 "data/maps/SelunaMarket/scripts.pory"
	delay 48
# 57 "data/maps/SelunaMarket/scripts.pory"
	msgbox Leah_Market_Leave_Text_2
# 60 "data/maps/SelunaMarket/scripts.pory"
	giveitem ITEM_POTION, 10
# 61 "data/maps/SelunaMarket/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 62 "data/maps/SelunaMarket/scripts.pory"
	msgbox Leah_Market_Leave_Text_3
# 67 "data/maps/SelunaMarket/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/SelunaMarket/scripts.pory"
	removeobject 2
# 69 "data/maps/SelunaMarket/scripts.pory"
	setflag FLAG_LEAH_MARKET_INTERACTION
# 70 "data/maps/SelunaMarket/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data/maps/SelunaMarket/scripts.pory"
	setvar VAR_TALK_TO_MOM_1, 6
# 72 "data/maps/SelunaMarket/scripts.pory"
	releaseall
	return


Seluna_Pokemart_Employee_Text_0:
# 8 "data/maps/SelunaMarket/scripts.pory"
	.string "What can I do for you today?$"

Seluna_Pokemart_Employee_Text_1:
# 11 "data/maps/SelunaMarket/scripts.pory"
	.string "Come again!$"

Leah_Market_Leave_Text_0:
# 45 "data/maps/SelunaMarket/scripts.pory"
	.string "Wow you're crazy strong!\p"
	.string "You should venture out of town and\n"
	.string "take on the first gym!\p"
	.string "Here let me give you this,\n"
	.string "it might help!$"

Leah_Market_Leave_Text_1:
# 52 "data/maps/SelunaMarket/scripts.pory"
	.string "That EXP SHARE should allow you to\n"
	.string "level up your Pokemon easy!\p"
	.string "$"

Leah_Market_Leave_Text_2:
# 58 "data/maps/SelunaMarket/scripts.pory"
	.string "Oh! You should take these too!$"

Leah_Market_Leave_Text_3:
# 63 "data/maps/SelunaMarket/scripts.pory"
	.string "After that battle I think I need\n"
	.string "some fresh air though..\p"
	.string "I'll see ya around!$"

Leah_Market_Intro::
# 29 "data/maps/SelunaMarket/scripts.pory"
	.string "Hey {PLAYER}!\p"
	.string "This market has so much cool stuff!\p"
	.string "I forgot to mention this, but I\n"
	.string "LOVE Pokemon battling!\p"
	.string "In fact, we should battle right now!$"

Leah_Market_Outro::
# 37 "data/maps/SelunaMarket/scripts.pory"
	.string "Wow you just got your first Pokemon\n"
	.string "and you're already that strong?\p$"
