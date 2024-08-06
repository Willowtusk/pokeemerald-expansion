Route701_MapScripts::
	.byte 0


FOUND_HARD_STONE::
# 6 "data/maps/Route701/scripts.pory"
	lockall
# 7 "data/maps/Route701/scripts.pory"
	giveitem ITEM_HARD_STONE, 1
# 8 "data/maps/Route701/scripts.pory"
	removeobject 1
# 9 "data/maps/Route701/scripts.pory"
	setflag FLAG_HARD_STONE
# 10 "data/maps/Route701/scripts.pory"
	releaseall
	return


LEDGE_SIGN::
# 14 "data/maps/Route701/scripts.pory"
	lockall
# 15 "data/maps/Route701/scripts.pory"
	msgbox LEDGE_SIGN_Text_0
# 16 "data/maps/Route701/scripts.pory"
	closemessage
# 17 "data/maps/Route701/scripts.pory"
	releaseall
	return


FOUND_SOFT_SAND::
# 21 "data/maps/Route701/scripts.pory"
	lockall
# 22 "data/maps/Route701/scripts.pory"
	giveitem ITEM_SOFT_SAND, 1
# 23 "data/maps/Route701/scripts.pory"
	removeobject 2
# 24 "data/maps/Route701/scripts.pory"
	setflag FLAG_SOFT_SAND
# 25 "data/maps/Route701/scripts.pory"
	releaseall
	return


Route_701_Hiker_Battle::
# 29 "data/maps/Route701/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MIKE_701, Route_701_HIKER_INTRO, Route_701_HIKER_OUTRO
# 30 "data/maps/Route701/scripts.pory"
	goto Rematch_Trainer_HIKER_MIKE
	return


ROUTE_701_ARTIST::
# 42 "data/maps/Route701/scripts.pory"
	faceplayer
# 43 "data/maps/Route701/scripts.pory"
	lockall
# 44 "data/maps/Route701/scripts.pory"
	msgbox ROUTE_701_ARTIST_Text_0
# 48 "data/maps/Route701/scripts.pory"
	closemessage
# 49 "data/maps/Route701/scripts.pory"
	releaseall
	return


Route_701_Bugcatcher_Battle::
# 53 "data/maps/Route701/scripts.pory"
	trainerbattle_single TRAINER_BILL_701, Route_701_CATCHER_INTRO, Route_701_CATCHER_OUTRO
# 54 "data/maps/Route701/scripts.pory"
	goto Rematch_Trainer_BUG_CATCHER_BILL
	return


Rematch_Trainer_HIKER_MIKE::
# 67 "data/maps/Route701/scripts.pory"
	msgbox Rematch_Trainer_HIKER_MIKE_Text_0, MSGBOX_YESNO
# 69 "data/maps/Route701/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_HIKER_MIKE_1
# 73 "data/maps/Route701/scripts.pory"
	closemessage
	end

Rematch_Trainer_HIKER_MIKE_1:
# 70 "data/maps/Route701/scripts.pory"
	trainerbattle_no_intro TRAINER_HIKER_MIKE_701, Route_701_HIKER_OUTRO
	return


Rematch_Trainer_BUG_CATCHER_BILL::
# 79 "data/maps/Route701/scripts.pory"
	msgbox Rematch_Trainer_HIKER_MIKE_Text_0, MSGBOX_YESNO
# 81 "data/maps/Route701/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rematch_Trainer_BUG_CATCHER_BILL_1
# 85 "data/maps/Route701/scripts.pory"
	closemessage
	end

Rematch_Trainer_BUG_CATCHER_BILL_1:
# 82 "data/maps/Route701/scripts.pory"
	trainerbattle_no_intro TRAINER_BILL_701, Route_701_CATCHER_OUTRO
	return


LEDGE_SIGN_Text_0:
# 15 "data/maps/Route701/scripts.pory"
	.string "Some ledges are impassable from one side.$"

ROUTE_701_ARTIST_Text_0:
# 45 "data/maps/Route701/scripts.pory"
	.string "What is an artist doing out here\n"
	.string "you might ask?\p"
	.string "Well art is to be captured in nature, no?$"

Rematch_Trainer_HIKER_MIKE_Text_0:
# 68 "data/maps/Route701/scripts.pory"
	.string "Want to rematch this Trainer?$"

Route_701_HIKER_INTRO::
# 33 "data/maps/Route701/scripts.pory"
	.string "Oi kid, do you know where the nearest\ntown is?$"

Route_701_HIKER_OUTRO::
# 37 "data/maps/Route701/scripts.pory"
	.string "You got me good....\nI'm in mighty need of a load off.$"

Route_701_CATCHER_INTRO::
# 57 "data/maps/Route701/scripts.pory"
	.string "I just love finding new types of bugs!\p"
	.string "Wanna see some I just caught?$"

Route_701_CATCHER_OUTRO::
# 62 "data/maps/Route701/scripts.pory"
	.string "Aw, my bugs couldn't win.$"
