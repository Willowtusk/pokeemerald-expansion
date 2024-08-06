DustrowePokeCenter_MapScripts::
# 2 "data/maps/DustrowePokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dustrowe_City_Respawn_OnTransition
	.byte 0


Dustrowe_City_Respawn_OnTransition::
# 6 "data/maps/DustrowePokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DUSTROWE_CITY
	end


Dustrowe_Nurse_Script::
# 11 "data/maps/DustrowePokeCenter/scripts.pory"
	lock
# 12 "data/maps/DustrowePokeCenter/scripts.pory"
	faceplayer
# 13 "data/maps/DustrowePokeCenter/scripts.pory"
	msgbox Dustrowe_Nurse_Script_Text_0, MSGBOX_YESNO
# 14 "data/maps/DustrowePokeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Dustrowe_Nurse_Script_1
# 29 "data/maps/DustrowePokeCenter/scripts.pory"
	msgbox Dustrowe_Nurse_Script_Text_2, MSGBOX_NPC
	return

Dustrowe_Nurse_Script_1:
# 15 "data/maps/DustrowePokeCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 16 "data/maps/DustrowePokeCenter/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 17 "data/maps/DustrowePokeCenter/scripts.pory"
	waitmovement 0
# 18 "data/maps/DustrowePokeCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 19 "data/maps/DustrowePokeCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 20 "data/maps/DustrowePokeCenter/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 21 "data/maps/DustrowePokeCenter/scripts.pory"
	waitmovement 0
# 22 "data/maps/DustrowePokeCenter/scripts.pory"
	special HealPlayerParty
# 23 "data/maps/DustrowePokeCenter/scripts.pory"
	msgbox Dustrowe_Nurse_Script_Text_1
# 24 "data/maps/DustrowePokeCenter/scripts.pory"
	waitmessage
# 25 "data/maps/DustrowePokeCenter/scripts.pory"
	release
	end


Dustrowe_Pokecenter_Old_Man::
# 34 "data/maps/DustrowePokeCenter/scripts.pory"
	lockall
# 35 "data/maps/DustrowePokeCenter/scripts.pory"
	faceplayer
# 36 "data/maps/DustrowePokeCenter/scripts.pory"
	msgbox Dustrowe_Pokecenter_Old_Man_Text_0
# 40 "data/maps/DustrowePokeCenter/scripts.pory"
	closemessage
# 41 "data/maps/DustrowePokeCenter/scripts.pory"
	releaseall
	return


Dustrowe_Pokecenter_Old_Woman::
# 45 "data/maps/DustrowePokeCenter/scripts.pory"
	lockall
# 46 "data/maps/DustrowePokeCenter/scripts.pory"
	faceplayer
# 47 "data/maps/DustrowePokeCenter/scripts.pory"
	msgbox Dustrowe_Pokecenter_Old_Woman_Text_0
# 53 "data/maps/DustrowePokeCenter/scripts.pory"
	closemessage
# 54 "data/maps/DustrowePokeCenter/scripts.pory"
	releaseall
	return


Dustrowe_Nurse_Script_Text_0:
# 13 "data/maps/DustrowePokeCenter/scripts.pory"
	.string "Hi there!\nwould you like me to heal your party?$"

Dustrowe_Nurse_Script_Text_1:
# 23 "data/maps/DustrowePokeCenter/scripts.pory"
	.string "Come again soon!$"

Dustrowe_Nurse_Script_Text_2:
# 29 "data/maps/DustrowePokeCenter/scripts.pory"
	.string "Have a nice day$"

Dustrowe_Pokecenter_Old_Man_Text_0:
# 37 "data/maps/DustrowePokeCenter/scripts.pory"
	.string "Why hello youngster!\p"
	.string "What are you doing way out here?$"

Dustrowe_Pokecenter_Old_Woman_Text_0:
# 48 "data/maps/DustrowePokeCenter/scripts.pory"
	.string "I love this town...\p"
	.string "Lived here ever since I was young.\p"
	.string "I don't think I could ever leave\n"
	.string "with how homesick I'd get.$"
