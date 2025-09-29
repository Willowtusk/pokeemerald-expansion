FelundityHouse2_MapScripts::
	.byte 0


FelundityHomeschoolBoy::
# 6 "data/maps/FelundityHouse2/scripts.pory"
	lockall
# 7 "data/maps/FelundityHouse2/scripts.pory"
	faceplayer
# 8 "data/maps/FelundityHouse2/scripts.pory"
	msgbox FelundityHomeschoolBoy_Text_0
# 9 "data/maps/FelundityHouse2/scripts.pory"
	waitmessage
# 10 "data/maps/FelundityHouse2/scripts.pory"
	releaseall
	return


FelundityHomeschoolGirl::
# 14 "data/maps/FelundityHouse2/scripts.pory"
	lockall
# 15 "data/maps/FelundityHouse2/scripts.pory"
	faceplayer
# 16 "data/maps/FelundityHouse2/scripts.pory"
	msgbox FelundityHomeschoolGirl_Text_0
# 17 "data/maps/FelundityHouse2/scripts.pory"
	waitmessage
# 18 "data/maps/FelundityHouse2/scripts.pory"
	releaseall
	return


FelundityHomeschoolDad::
# 22 "data/maps/FelundityHouse2/scripts.pory"
	lockall
# 23 "data/maps/FelundityHouse2/scripts.pory"
	faceplayer
# 24 "data/maps/FelundityHouse2/scripts.pory"
	msgbox FelundityHomeschoolDad_Text_0
# 25 "data/maps/FelundityHouse2/scripts.pory"
	waitmessage
# 26 "data/maps/FelundityHouse2/scripts.pory"
	releaseall
	return


FelundityHomeschoolBoy_Text_0:
# 8 "data/maps/FelundityHouse2/scripts.pory"
	.string "Woahhh, Mega Evolution sounds so cool!$"

FelundityHomeschoolGirl_Text_0:
# 16 "data/maps/FelundityHouse2/scripts.pory"
	.string "My favorite water Pokémon is Milotic!$"

FelundityHomeschoolDad_Text_0:
# 24 "data/maps/FelundityHouse2/scripts.pory"
	.string "I've had to homeschool my kids ever\n"
	.string "since they shut the public school down\l"
	.string "due to the water supply issue, sigh$"
