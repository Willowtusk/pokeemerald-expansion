Dustrowe_Building_2_MapScripts::
	.byte 0


Dustrowe_Building_2_Hiker::
# 7 "data/maps/Dustrowe_Building_2/scripts.pory"
	lockall
# 8 "data/maps/Dustrowe_Building_2/scripts.pory"
	faceplayer
# 9 "data/maps/Dustrowe_Building_2/scripts.pory"
	msgbox Dustrowe_Building_2_Hiker_Text_0
# 13 "data/maps/Dustrowe_Building_2/scripts.pory"
	closemessage
# 14 "data/maps/Dustrowe_Building_2/scripts.pory"
	releaseall
	return


Dustrowe_Building_2_Camper::
# 18 "data/maps/Dustrowe_Building_2/scripts.pory"
	lockall
# 19 "data/maps/Dustrowe_Building_2/scripts.pory"
	faceplayer
# 20 "data/maps/Dustrowe_Building_2/scripts.pory"
	msgbox Dustrowe_Building_2_Camper_Text_0
# 23 "data/maps/Dustrowe_Building_2/scripts.pory"
	closemessage
# 24 "data/maps/Dustrowe_Building_2/scripts.pory"
	releaseall
	return


Dustrowe_Building_2_Fossil::
# 28 "data/maps/Dustrowe_Building_2/scripts.pory"
	lockall
# 29 "data/maps/Dustrowe_Building_2/scripts.pory"
	msgbox Dustrowe_Building_2_Fossil_Text_0
# 33 "data/maps/Dustrowe_Building_2/scripts.pory"
	closemessage
# 34 "data/maps/Dustrowe_Building_2/scripts.pory"
	releaseall
	return


Dustrowe_Building_2_Hiker_Text_0:
# 10 "data/maps/Dustrowe_Building_2/scripts.pory"
	.string "This is a real beaut right here!\p"
	.string "This will fetch a pretty penny!$"

Dustrowe_Building_2_Camper_Text_0:
# 21 "data/maps/Dustrowe_Building_2/scripts.pory"
	.string "Look what me and my pa\n"
	.string "dug up!$"

Dustrowe_Building_2_Fossil_Text_0:
# 30 "data/maps/Dustrowe_Building_2/scripts.pory"
	.string "... Quite an ugly fossil.\p"
	.string "No collector would want this.$"
