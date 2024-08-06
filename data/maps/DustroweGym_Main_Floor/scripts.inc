DustroweGym_Main_Floor_MapScripts::
# 2 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	checktrainerflag DUSTROWE_TRAINER_MATT
	goto_if 1, DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	checktrainerflag DUSTROWE_TRAINER_ALYSSA
	goto_if 1, DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_TEMP_GYM_ROCK_1
# 5 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setobjectxyperm 5, 11, 16
	goto DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

DustroweGym_Main_Floor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_TEMP_GYM_ROCK_2
# 9 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setobjectxyperm 6, 2, 10
	return


Dustrowe_Gym_Advice::
# 16 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	lockall
# 17 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	faceplayer
# 18 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Dustrowe_Gym_Advice_1
# 32 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox Dustrowe_Gym_Advice_Text_1
# 38 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	closemessage
# 39 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	releaseall
	return

Dustrowe_Gym_Advice_1:
# 19 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox Dustrowe_Gym_Advice_Text_0
# 28 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	closemessage
# 29 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	releaseall
	return


Gym_Leader_Johnny::
# 44 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	trainerbattle_single TRAINER_LEADER_JOHNNY, Leader_Johnny_Intro, Leader_Johnny_Outro, Leader_Johnny_Defeated
# 45 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox Gym_Leader_Johnny_Text_0
	return


Leader_Johnny_Defeated::
# 71 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	message Dustrowe_City_Soot_Badge_Received
# 72 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmessage
# 73 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 74 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox Soot_Badge_Info
# 75 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_BADGE01_GET
# 76 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 77 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	goto Give_Power_Up_Punch
	end


Give_Power_Up_Punch::
# 93 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	giveitem ITEM_TM05
# 94 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox Give_Power_Up_Punch_Text_0
# 101 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	closemessage
	return


DUSTROWE_GYM_TRAINER_MATT::
# 107 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	trainerbattle_single DUSTROWE_TRAINER_MATT, DUSTROWE_MATT_INTRO, DUSTROWE_MATT_OUTRO
# 108 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	goto_if_unset FLAG_TEMP_GYM_ROCK_1, DUSTROWE_GYM_TRAINER_MATT_1
# 113 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox DUSTROWE_GYM_TRAINER_MATT_Text_0, MSGBOX_AUTOCLOSE
	return

DUSTROWE_GYM_TRAINER_MATT_1:
# 109 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	call DUSTROWE_ROCK_BREAK_1
# 110 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setobjectxyperm 5, 11, 16
	return


DUSTROWE_GYM_TRAINER_ALYSSA::
# 118 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	trainerbattle_single DUSTROWE_TRAINER_ALYSSA, DUSTROWE_ALYSSA_INTRO, DUSTROWE_ALYSSA_OUTRO
# 119 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	goto_if_unset FLAG_TEMP_GYM_ROCK_2, DUSTROWE_GYM_TRAINER_ALYSSA_1
# 124 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox DUSTROWE_GYM_TRAINER_ALYSSA_Text_0, MSGBOX_AUTOCLOSE
	return

DUSTROWE_GYM_TRAINER_ALYSSA_1:
# 120 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	call DUSTROWE_ROCK_BREAK_2
# 121 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setobjectxyperm 6, 2, 10
	return


DUSTROWE_ROCK_BREAK_1::
# 139 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	lockall
# 140 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	turnobject 5, DIR_NORTH
# 141 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	delay 48
# 142 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox DUSTROWE_ROCK_BREAK_1_Text_0
# 143 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmessage
# 144 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	closemessage
# 145 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	playse SE_M_ROCK_THROW
# 146 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitse
# 147 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	applymovement 3, Movement_SmashRock
# 148 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmovement 3
# 149 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	removeobject 3
# 150 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_TEMP_GYM_ROCK_1
# 151 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	applymovement 5, SIMPLE_WALK_RIGHT
# 152 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmovement 5
# 153 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	turnobject 5, DIR_WEST
# 154 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	delay 48
# 155 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	releaseall
	return


# 158 "data/maps/DustroweGym_Main_Floor/scripts.pory"
SIMPLE_WALK_RIGHT:
# 159 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	walk_right
	step_end

DUSTROWE_ROCK_BREAK_2::
# 173 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	lockall
# 174 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	turnobject 6, DIR_NORTH
# 175 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	delay 48
# 176 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	msgbox DUSTROWE_ROCK_BREAK_1_Text_0
# 177 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmessage
# 178 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	closemessage
# 179 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	playse SE_M_ROCK_THROW
# 180 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitse
# 181 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	applymovement 4, Movement_SmashRock
# 182 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmovement 4
# 183 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	removeobject 4
# 184 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	setflag FLAG_TEMP_GYM_ROCK_2
# 185 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	applymovement 6, SIMPLE_WALK_RIGHT
# 186 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	waitmovement 6
# 187 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	turnobject 6, DIR_WEST
# 188 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	delay 48
# 189 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	releaseall
	return


Dustrowe_Gym_Advice_Text_0:
# 20 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Hey there!\p"
	.string "You here to attempt the Dustrowe Gym?\p"
	.string "Well let me warn you,\n"
	.string "this is a dual type gym!\p"
	.string "Leader Johnny uses both Fighting\n"
	.string "AND Ground types.\p"
	.string "You'll have to put on your\n"
	.string "thinking cap for this one!\p"
	.string "Oh, and the gym air has been rerouted\n"
	.string "to resemble a sandstorm.\p"
	.string "Keeps the leader and his trainers\n"
	.string "in their element I hear..$"

Dustrowe_Gym_Advice_Text_1:
# 33 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Wow that was like really impressive!\p"
	.string "Congrats on your first badge!\p"
	.string "What's your name?\p"
	.string "I'd like to engrave your accomplishment\n"
	.string "on this statue here!$"

Gym_Leader_Johnny_Text_0:
# 46 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "You sure gave me a run\n"
	.string "for my money kid\p"
	.string "Go show all the other gyms\n"
	.string "how strong ya are!$"

Give_Power_Up_Punch_Text_0:
# 95 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "This contains the move\n"
	.string "POWER UP PUNCH\p"
	.string "This sucker right here will\n"
	.string "not only do damage, but make the\l"
	.string "user stronger at the same time!$"

DUSTROWE_GYM_TRAINER_MATT_Text_0:
# 113 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Go on kid, straight to JOHNNY!$"

DUSTROWE_GYM_TRAINER_ALYSSA_Text_0:
# 124 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Gasp.... I need a minute$"

DUSTROWE_ROCK_BREAK_1_Text_0:
# 142 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "HIIIIYA$"

Leader_Johnny_Intro::
# 52 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Woah now, never seen your\nface around these parts!\p"
	.string "The name's Johnny, and I'm\nthe gym leader here.\p"
	.string "You come prepared?\n"
	.string "I don't just use one type yaknow?\p"
	.string "Think you got what it takes\nto take me down?\p"
	.string "Let's see what you're made of then!$"

Leader_Johnny_Outro::
# 63 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Well i'll be!\p"
	.string "You got me good!\p"
	.string "Here, take this SOOT BADGE.\n"
	.string "You've earned it.$"

Dustrowe_City_Soot_Badge_Received::
# 81 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "{PLAYER} received the SOOT BADGE\n"
	.string "from Johnny.$"

Soot_Badge_Info::
# 86 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "With this BADGE, you'll be able to\n"
	.string "make use of the HM move CUT.\p"
	.string "You've also earned this.$"

DUSTROWE_MATT_INTRO::
# 128 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Ah! A new gym challenger!\p"
	.string "If you can beat my fighting types,\n"
	.string "I'll break this rock behind me!$"

DUSTROWE_MATT_OUTRO::
# 134 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Guess we need more training...$"

DUSTROWE_ALYSSA_INTRO::
# 162 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "I've been training my ground types to\n"
	.string "withstand any hit!\p"
	.string "Get ready to be pummeled challenger!$"

DUSTROWE_ALYSSA_OUTRO::
# 168 "data/maps/DustroweGym_Main_Floor/scripts.pory"
	.string "Whew, made me work up a sweat.$"
