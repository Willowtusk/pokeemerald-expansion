FelundityGym4F_MapScripts::
	.byte 0


FelunditySarahTrainer::
# 6 "data/maps/FelundityGym4F/scripts.pory"
	trainerbattle_single TRAINER_FELUNDITY_SARAH, FelunditySarahIntro, FelunditySarahOutro
# 7 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelunditySarahTrainer_Text_0
	return


FelundityAubreyTrainer::
# 21 "data/maps/FelundityGym4F/scripts.pory"
	trainerbattle_single TRAINER_FELUNDITY_AUBREY, FelundityAubreyIntro, FelundityAubreyOutro
# 22 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelundityAubreyTrainer_Text_0
	return


FelundityLitten::
# 36 "data/maps/FelundityGym4F/scripts.pory"
	lockall
# 37 "data/maps/FelundityGym4F/scripts.pory"
	faceplayer
# 38 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelundityLitten_Text_0
# 39 "data/maps/FelundityGym4F/scripts.pory"
	waitmessage
# 40 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelundityLitten_Text_1
# 41 "data/maps/FelundityGym4F/scripts.pory"
	waitmessage
# 42 "data/maps/FelundityGym4F/scripts.pory"
	releaseall
	return


FelundityShinx::
# 46 "data/maps/FelundityGym4F/scripts.pory"
	lockall
# 47 "data/maps/FelundityGym4F/scripts.pory"
	faceplayer
# 48 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelundityShinx_Text_0
# 49 "data/maps/FelundityGym4F/scripts.pory"
	waitmessage
# 50 "data/maps/FelundityGym4F/scripts.pory"
	releaseall
	return


FelundityDelcatty::
# 54 "data/maps/FelundityGym4F/scripts.pory"
	lockall
# 55 "data/maps/FelundityGym4F/scripts.pory"
	faceplayer
# 56 "data/maps/FelundityGym4F/scripts.pory"
	msgbox FelundityDelcatty_Text_0
# 57 "data/maps/FelundityGym4F/scripts.pory"
	waitmessage
# 58 "data/maps/FelundityGym4F/scripts.pory"
	releaseall
	return


LeaderDiana::
# 62 "data/maps/FelundityGym4F/scripts.pory"
	trainerbattle_single TRAINER_LEADER_DIANA, LeaderDianaIntro, LeaderDianaOutro, Leader_Diana_Defeated
# 63 "data/maps/FelundityGym4F/scripts.pory"
	msgbox LeaderDiana_Text_0
	return


Leader_Diana_Defeated::
# 80 "data/maps/FelundityGym4F/scripts.pory"
	message Felundity_Town_Tabby_Badge_Received
# 81 "data/maps/FelundityGym4F/scripts.pory"
	waitmessage
# 82 "data/maps/FelundityGym4F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 83 "data/maps/FelundityGym4F/scripts.pory"
	msgbox Leader_Diana_Defeated_Text_0
# 84 "data/maps/FelundityGym4F/scripts.pory"
	setflag FLAG_BADGE02_GET
# 85 "data/maps/FelundityGym4F/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 86 "data/maps/FelundityGym4F/scripts.pory"
	goto Give_Return
	end


Give_Return::
# 97 "data/maps/FelundityGym4F/scripts.pory"
	giveitem ITEM_TM27
# 98 "data/maps/FelundityGym4F/scripts.pory"
	msgbox Give_Return_Text_0
# 102 "data/maps/FelundityGym4F/scripts.pory"
	closemessage
	return


FelunditySarahTrainer_Text_0:
# 7 "data/maps/FelundityGym4F/scripts.pory"
	.string "Now I have to fix my hair...$"

FelundityAubreyTrainer_Text_0:
# 22 "data/maps/FelundityGym4F/scripts.pory"
	.string "Time to have a candy bar and recharge!$"

FelundityLitten_Text_0:
# 38 "data/maps/FelundityGym4F/scripts.pory"
	.string "Liiii!$"

FelundityLitten_Text_1:
# 40 "data/maps/FelundityGym4F/scripts.pory"
	.string "Litten looks happy to see you!$"

FelundityShinx_Text_0:
# 48 "data/maps/FelundityGym4F/scripts.pory"
	.string "Ouch! The Shinx sparked you!$"

FelundityDelcatty_Text_0:
# 56 "data/maps/FelundityGym4F/scripts.pory"
	.string "Meooow$"

LeaderDiana_Text_0:
# 63 "data/maps/FelundityGym4F/scripts.pory"
	.string "I heard of some uproar with this Team\n"
	.string "Helix over in Cinderbrook City as well.\l"
	.string "Could you check on my friend Julia while\l"
	.string "you're there?$"

Leader_Diana_Defeated_Text_0:
# 83 "data/maps/FelundityGym4F/scripts.pory"
	.string "With the TABBY BADGE, you'll be able to\n"
	.string "make use of the HM move Rock Smash. You\l"
	.string "should take this too$"

Give_Return_Text_0:
# 99 "data/maps/FelundityGym4F/scripts.pory"
	.string "This contains the move RETURN, which\n"
	.string "gets stronger the friendlier you are\l"
	.string "with your Pokémon pals!$"

FelunditySarahIntro::
# 10 "data/maps/FelundityGym4F/scripts.pory"
	.string "Aww you're cute\n"
	.string "but are you strong?$"

FelunditySarahOutro::
# 15 "data/maps/FelundityGym4F/scripts.pory"
	.string "You're even stronger than you are cute!$"

FelundityAubreyIntro::
# 25 "data/maps/FelundityGym4F/scripts.pory"
	.string "Diana gives me all the sweets!\p"
	.string "I'm so hyper and ready to\n"
	.string "take you down!$"

FelundityAubreyOutro::
# 31 "data/maps/FelundityGym4F/scripts.pory"
	.string "Now I'm all tuckered out$"

LeaderDianaIntro::
# 66 "data/maps/FelundityGym4F/scripts.pory"
	.string "Oh, look who we have here! The trainer\n"
	.string "who helped save my precious Skitty!\p"
	.string "Well trainer, are you\n"
	.string "prepared?\p"
	.string "My felines are ready to\n"
	.string "get their claws dirty!$"

LeaderDianaOutro::
# 75 "data/maps/FelundityGym4F/scripts.pory"
	.string "Pawsitively Magnificent!$"

Felundity_Town_Tabby_Badge_Received::
# 90 "data/maps/FelundityGym4F/scripts.pory"
	.string "{PLAYER} received the TABBY BADGE\n"
	.string "from DIANA.$"
