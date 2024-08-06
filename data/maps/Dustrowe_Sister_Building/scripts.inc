Dustrowe_Sister_Building_MapScripts::
	.byte 0


Dustrowe_Sister_Building_Girl::
# 6 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	lockall
# 7 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	faceplayer
# 8 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	compare VAR_DUSTROWE_SIBLINGS, 1
	goto_if_eq Dustrowe_Sister_Building_Girl_1
# 27 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	compare VAR_DUSTROWE_SIBLINGS, 2
	goto_if_eq Dustrowe_Sister_Building_Girl_2
# 35 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	msgbox Dustrowe_Sister_Building_Girl_Text_3
# 39 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	closemessage
# 40 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	releaseall
	return

Dustrowe_Sister_Building_Girl_1:
# 9 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	msgbox Dustrowe_Sister_Building_Girl_Text_0
# 14 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	waitfanfare
# 16 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	msgbox Dustrowe_Sister_Building_Girl_Text_1
# 22 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	closemessage
# 23 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	giveitem ITEM_TM32
# 24 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	setvar VAR_DUSTROWE_SIBLINGS, 2
# 25 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	releaseall
	return

Dustrowe_Sister_Building_Girl_2:
# 28 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	msgbox Dustrowe_Sister_Building_Girl_Text_2
# 31 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	closemessage
# 32 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	releaseall
	return


Dustrowe_Sister_Building_Girl_Text_0:
# 10 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	.string ". . .\p"
	.string "So he gave you my makeup to return?\p"
	.string "You gave the Makeup back!$"

Dustrowe_Sister_Building_Girl_Text_1:
# 17 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	.string "I guess you talked some sense into him.\p"
	.string "Thanks for returning it to me\n"
	.string "I want you to have this.\p"
	.string "Me and my brother used to teach\n"
	.string "our Pokémon this\p"
	.string "We never lost a battle during those\n"
	.string "days...$"

Dustrowe_Sister_Building_Girl_Text_2:
# 29 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	.string "Thanks again for your help!$"

Dustrowe_Sister_Building_Girl_Text_3:
# 36 "data/maps/Dustrowe_Sister_Building/scripts.pory"
	.string "Ugh my brother stole my makeup again..\p"
	.string "I'd go get it back but he\n"
	.string "never listens to me.$"
