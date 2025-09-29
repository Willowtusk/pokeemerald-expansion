FelundityPokemonCenter_MapScripts::
# 2 "data/maps/FelundityPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Felundity_Town_Respawn_OnTransition
	.byte 0


Felundity_Town_Respawn_OnTransition::
# 7 "data/maps/FelundityPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FELUNDITY_TOWN_MAIN
	end


Felundity_Nurse_Script::
# 12 "data/maps/FelundityPokemonCenter/scripts.pory"
	lock
# 13 "data/maps/FelundityPokemonCenter/scripts.pory"
	faceplayer
# 14 "data/maps/FelundityPokemonCenter/scripts.pory"
	msgbox Felundity_Nurse_Script_Text_0, MSGBOX_YESNO
# 15 "data/maps/FelundityPokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Felundity_Nurse_Script_1
# 30 "data/maps/FelundityPokemonCenter/scripts.pory"
	msgbox Felundity_Nurse_Script_Text_2, MSGBOX_NPC
	return

Felundity_Nurse_Script_1:
# 16 "data/maps/FelundityPokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 17 "data/maps/FelundityPokemonCenter/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/FelundityPokemonCenter/scripts.pory"
	waitmovement 0
# 19 "data/maps/FelundityPokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 20 "data/maps/FelundityPokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 21 "data/maps/FelundityPokemonCenter/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 22 "data/maps/FelundityPokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/FelundityPokemonCenter/scripts.pory"
	special HealPlayerParty
# 24 "data/maps/FelundityPokemonCenter/scripts.pory"
	msgbox Felundity_Nurse_Script_Text_1
# 25 "data/maps/FelundityPokemonCenter/scripts.pory"
	waitmessage
# 26 "data/maps/FelundityPokemonCenter/scripts.pory"
	release
	end


GameboyKid_Felundity::
# 36 "data/maps/FelundityPokemonCenter/scripts.pory"
	lockall
# 37 "data/maps/FelundityPokemonCenter/scripts.pory"
	faceplayer
# 38 "data/maps/FelundityPokemonCenter/scripts.pory"
	msgbox GameboyKid_Felundity_Text_0
# 39 "data/maps/FelundityPokemonCenter/scripts.pory"
	waitmessage
# 40 "data/maps/FelundityPokemonCenter/scripts.pory"
	releaseall
	return


Felundity_Nurse_Script_Text_0:
# 14 "data/maps/FelundityPokemonCenter/scripts.pory"
	.string "Hi there!\nwould you like me to heal your party?$"

Felundity_Nurse_Script_Text_1:
# 24 "data/maps/FelundityPokemonCenter/scripts.pory"
	.string "Come again soon!$"

Felundity_Nurse_Script_Text_2:
# 30 "data/maps/FelundityPokemonCenter/scripts.pory"
	.string "Have a nice day$"

GameboyKid_Felundity_Text_0:
# 38 "data/maps/FelundityPokemonCenter/scripts.pory"
	.string "Oh boy, do I LOVE my new Nintendo\n"
	.string "Switch 2!$"
