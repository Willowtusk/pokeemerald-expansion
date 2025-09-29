FelundityBank_MapScripts::
	.byte 0


BankMan1::
# 6 "data/maps/FelundityBank/scripts.pory"
	lockall
# 7 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityBank/scripts.pory"
	msgbox BankMan1_Text_0
# 9 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankMan2::
# 14 "data/maps/FelundityBank/scripts.pory"
	lockall
# 15 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 16 "data/maps/FelundityBank/scripts.pory"
	msgbox BankMan2_Text_0
# 17 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 18 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankMan3::
# 22 "data/maps/FelundityBank/scripts.pory"
	lockall
# 23 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 24 "data/maps/FelundityBank/scripts.pory"
	msgbox BankMan3_Text_0
# 25 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 26 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankWoman1::
# 30 "data/maps/FelundityBank/scripts.pory"
	lockall
# 31 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 32 "data/maps/FelundityBank/scripts.pory"
	msgbox BankWoman1_Text_0
# 33 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 34 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankWoman2::
# 38 "data/maps/FelundityBank/scripts.pory"
	lockall
# 39 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 40 "data/maps/FelundityBank/scripts.pory"
	msgbox BankWoman2_Text_0
# 41 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 42 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankWoman3::
# 46 "data/maps/FelundityBank/scripts.pory"
	lockall
# 47 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 48 "data/maps/FelundityBank/scripts.pory"
	msgbox BankWoman3_Text_0
# 49 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 50 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankEmployee::
# 54 "data/maps/FelundityBank/scripts.pory"
	lockall
# 55 "data/maps/FelundityBank/scripts.pory"
	faceplayer
# 56 "data/maps/FelundityBank/scripts.pory"
	msgbox BankEmployee_Text_0
# 57 "data/maps/FelundityBank/scripts.pory"
	waitmessage
# 58 "data/maps/FelundityBank/scripts.pory"
	releaseall
	return


BankMan1_Text_0:
# 8 "data/maps/FelundityBank/scripts.pory"
	.string "What do you want??$"

BankMan2_Text_0:
# 16 "data/maps/FelundityBank/scripts.pory"
	.string "Can't you see I'm busy here?$"

BankMan3_Text_0:
# 24 "data/maps/FelundityBank/scripts.pory"
	.string "If I don't take out a loan right now, I'm\n"
	.string "done for....$"

BankWoman1_Text_0:
# 32 "data/maps/FelundityBank/scripts.pory"
	.string "Time to cash in my paycheck!$"

BankWoman2_Text_0:
# 40 "data/maps/FelundityBank/scripts.pory"
	.string "Geez, this place takes forever$"

BankWoman3_Text_0:
# 48 "data/maps/FelundityBank/scripts.pory"
	.string "I've been waiting here for 8 hours, ugh$"

BankEmployee_Text_0:
# 56 "data/maps/FelundityBank/scripts.pory"
	.string "I'm sorry, but we're still undergoing\n"
	.string "renovations. Please do come back soon$"
