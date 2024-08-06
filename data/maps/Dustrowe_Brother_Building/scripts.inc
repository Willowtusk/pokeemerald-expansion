Dustrowe_Brother_Building_MapScripts::
	.byte 0


Dustrowe_Brother_Building_Brother::
# 6 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	lockall
# 7 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	faceplayer
# 8 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	compare VAR_DUSTROWE_SIBLINGS, 0
	goto_if_eq Dustrowe_Brother_Building_Brother_1
# 31 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	msgbox Dustrowe_Brother_Building_Brother_Text_3
# 34 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	closemessage
# 35 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	releaseall
	return

Dustrowe_Brother_Building_Brother_1:
# 9 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	msgbox Dustrowe_Brother_Building_Brother_Text_0
# 15 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	closemessage
# 16 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	msgbox Dustrowe_Brother_Building_Brother_Text_1
# 20 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	waitfanfare
# 22 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	waitmessage
# 23 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	msgbox Dustrowe_Brother_Building_Brother_Text_2
# 26 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	closemessage
# 27 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	setvar VAR_DUSTROWE_SIBLINGS, 1
# 28 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	releaseall
	return


Dustrowe_Brother_Building_Brother_Text_0:
# 10 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	.string "I think I made my sister\n"
	.string "mad again...\p"
	.string "I keep mistaking her makeup\n"
	.string "for my body lotion..\p"
	.string "Maybe I need some glasses or something.\p"
	.string "Would you mind returning these to her\n"
	.string "for me?\p"
	.string "$"

Dustrowe_Brother_Building_Brother_Text_1:
# 17 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	.string "Received the Makeup!\p"
	.string "$"

Dustrowe_Brother_Building_Brother_Text_2:
# 24 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	.string "Better go give this to the sister.$"

Dustrowe_Brother_Building_Brother_Text_3:
# 32 "data/maps/Dustrowe_Brother_Building/scripts.pory"
	.string "I hope she doesn't stay mad\n"
	.string "at me...$"
