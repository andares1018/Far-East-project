 ######################################## 
 # Country definition for ITA by Cardus # 
 ######################################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {   tag          = ITA 
	manpower        = 13
	ai           = "ITA_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# Resource Reserves 
	energy                 = 3180
	metal                  = 1590
	rare_materials         = 795 
	oil          = 500 
	supplies        = 2000 
	money         = 50 
	belligerence      = 0 # to avoid MP problems 
	capital        = 419 
	dissent = 3  
	transports       = 400 
	escorts        = 100 
  # Illyrian Coast 
  diplomacy = 
  {   relation = {   tag = AFG value = 50   } 
   relation = 
   {   tag    = ALB 
    value   = 10 
	access   = yes 	
    guaranteed = {  day = 1 month = june year = 1914  }
    } 
   relation = {   tag = ARG value = 30   } 
   relation = {   tag = AST value = 1   } 
   relation = 
   {   tag    = U09 
    value   = -30 
    } 
   relation = {   tag = BEL value = -5   } 
   relation = {   tag = BHU value = 1   } 
   relation = {   tag = BUL value = 100   } 
   relation = {   tag = CAN value = 1   } 
   relation = {   tag = CHL value = 30   } 
   relation = {   tag = ENG value = -15   } 
   relation = {   tag = ETH value = -200   } 
   relation = {   tag = FRA value = -15   } 
   relation = {   tag = U08 value = 50   } 
   relation = 
   {   tag    = GRE 
    value   = -35 
    guaranteed = {  day = 1 month = june year = 1914  } 
     } 
   relation = {   tag = HOL value = 10   } 
   relation = {   tag = NEP value = 1   } 
   relation = {   tag = NZL value = 1   } 
   relation = {   tag = OMN value = 50   } 
   relation = {   tag = POR value = 65   } 
   relation = 
   {   tag    = ROM 
    value   = 50 
    guaranteed = {  day = 1 month = june year = 1914  } 
     } 
   relation = {   tag = SAF value = 1   } 
   relation = {   tag = SAU value = -25   } 
   relation = 
   {   tag    = SCH 
    value   = 1 
    guaranteed = {  day = 1 month = june year = 1914  } 
     } 
   relation = {   tag = SPR value = -50   } 
   relation = 
   {   tag    = OTT 
    value   = 1 
    guaranteed = {  day = 1 month = june year = 1914  } 
     } 
   relation = {   tag = YEM value = 50   } 
   relation = {   tag = SER value = 75   } 
 relation = {   tag = USA value = 90   }  
 relation = {   tag = RUS value = 15   }  
    } 
  SpyInfo        = {   country = "ITA" NumberOfSpies = 9   } 

   nationalprovinces = { 87 91 94 343 350 371 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 } 
   
  ownedprovinces     = {   378 379 393 394 395 396 398 399 400 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 776 815 816 817 834 835 836 837
                 }  
  # Somaliland 
  controlledprovinces  = {   378 379 393 394 395 396 398 399 400 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 815 816 817 834 835 836 837
                 } 
				 
    claimedprovinces = { 
                        832 833 # French and British Somaliland
						740 741 742 744 745 746 747 748 749 #Tunisia
						750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya
						815 816 817 #Eritrea
						836 837 #Somalia
						822 823 820 825 829 830 819 821 818 828 831 826 827 824 834 835 #Abyssinia
						378 379 #Kalymnos Rodos
					  } 
 
 # ITA1914 techs
     #######################
	techapps               = {
	#1914 Infantry Division
	1010  1020 1030 1040
	#1930 Cavalry Division
	13060 13070 13080
	#1914 Mountain Division
	1160 1170 1180 1190
	#Naval Infantry
	#Engineers
	1830
	#Supply
	1910
	
	#Armoured Car
	2860
	#Early Tank
	#Great War Heavy Field Artillery
	2290
	#Static Anti-Air Artillery
	#Anti-Air Artillery Brigade
	#Anti-Tank Artillery

	#Improved Destroyer
	3010 3020 3030
	#Basic Light Cruiser
	3110 3120 3130
	#Improved Heavy Cruiser
	3210 3220 3230
	#Early Battleship
	3410 3420 3430 3440
	#Early Battlecruiser
	3310
	#Great War Air Carrier
	#Improved Light carrier
	#Short Range Submarine
	3610
	#ASW 18
	#Troopships
	3810
	#TORPEDOES
	3720
	
	#Interceptors  
	4500
	#Exp.  Bomber 
	4600 4610
	#Multirole fighter
	#ww1 strategic bomber
	#ww1 navalbomber
	#CAG 34
	#SEAPLANES
	4740
	
	#Census Tabulating Machine 
	#Medicine
	5600
	#Agriculture 
	5700
	#Construction Engineering 
	5800 5080
	#MANUFACTURING 
	5810
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 

	#Great War Hospital System

	#Landdoctrine ww1 - exp entente eng fra ita USA bel HOL jap
	6500 6510 6530 # 6580
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510
	8550 8900 8910
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
    } 

	policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 7 
   political_left  = 3 
   freedom      = 3 
   free_market    = 7 
   professional_army = 4
   defense_lobby   = 7 
   interventionism  = 8 
    } 
   headofstate            = {  type = 9 id = 25202  } # Victor Emmanuel III
   headofgovernment       = {  type = 9 id = 25192 } # Antonio Salandra
   foreignminister        = {  type = 9 id = 25177  } # Sidney Sonnino
   armamentminister       = {  type = 9 id = 25217  } # Eduardo Daneo
   ministerofsecurity 	  = { type = 9 id = 25234 } # Antonio Salandra
   ministerofintelligence = { type = 9 id = 25200 } # Rosolino Poggi
   chiefofstaff           = {  type = 9 id = 25154  } # Luigi Cadorna
   chiefofarmy            = {  type = 9 id = 25242  } # Carlo Porro
   chiefofnavy            = {  type = 9 id = 25149  } # Paolo Thaon di Revel
   chiefofair             = {  type = 9 id = 25243  } # Maurizio Moris

landunit = { 
        id = { type = 23500 id = 1 } 
        name = "Esercito Italiano" 
	leader = 25319 #Luigi Cadorna
        location = 419
        division = { 
            	id = { type = 23500 id = 2 } 
            	name = "Stato Maggiore dell'Esercito Italiano" 
            	strength = 50
            	type = hq
		model = 0
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23500 id = 4 } 
        name = "Comando Truppe Alpini" 
        location = 398 
        division = { 
            	id = { type = 23500 id = 5 } 
            	name = "Gruppo Alpino A" 
            	strength = 50 
            	type = bergsjaeger
		model = 3
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 6 } 
            	name = "Gruppo Alpino B" 
            	strength = 50 
            	type = bergsjaeger
		model = 3
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23500 id = 9 } 
        name = "Comando Truppe di Cavalleria" 
        location = 393
        division = { 
            	id = { type = 23500 id = 10 } 
            	name = "1a Divisione di Cavalleria" 
           	strength = 50 
            	type = cavalry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 11 } 
            	name = "2a Divisione di Cavalleria" 
           	strength = 50 
            	type = cavalry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 12 } 
            	name = "3a Divisione di Cavalleria" 
           	strength = 50 
            	type = cavalry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 13 } 
            	name = "4a Divisione di Cavalleria" 
           	strength = 50 
            	type = cavalry
		model = 2
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 23500 id = 14 } 
        name = "I Corpo d'Armata" 
        location = 398 
        division = { 
            	id = { type = 23500 id = 15 } 
            	name = "1a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 16 } 
            	name = "2a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 61 } 
            	name = "26a Divisione di Fanteria" 
            	strength = 25
            	type = infantry
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 17 } 
        name = "II Corpo d'Armata" 
        location = 399 
        division = { 
            	id = { type = 23500 id = 18 } 
            	name = "3a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 19 } 
            	name = "4a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 62 } 
            	name = "27a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 21 } 
        name = "III Corpo d'Armata" 
        location = 407 
        division = { 
            	id = { type = 23500 id = 22 } 
            	name = "1a Armata" 
            	strength = 45
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 23 } 
            	name = "5a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 24 } 
            	name = "6a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 66 } 
            	name = "28a Divisione di Fanteria" 
            	strength = 25
            	type = infantry
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 26 } 
        name = "IV Corpo d'Armata" 
        location = 396
        division = { 
            	id = { type = 23500 id = 27 } 
            	name = "2a Armata" 
            	strength = 45
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 28 } 
            	name = "7a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 29 } 
            	name = "8a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 67 } 
            	name = "29a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 31 } 
        name = "V Corpo d'Armata" 
        location = 400
        division = { 
            	id = { type = 23500 id = 32 } 
            	name = "3a Armata" 
            	strength = 45
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 33 } 
            	name = "9a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 34 } 
            	name = "10a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 63 } 
            	name = "30a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 36 } 
        name = "VI Corpo d'Armata" 
        location = 411 
        division = { 
            	id = { type = 23500 id = 37 } 
            	name = "4a Armata" 
            	strength = 45
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 38 } 
            	name = "11a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 39 } 
            	name = "12a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 3 } 
            	name = "(31a) Divisione di Bersaglieri" 
            	strength = 50 
            	type = infantry
		model = 2
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 40 } 
        name = "VII Corpo d'Armata" 
        location = 412
        division = { 
            	id = { type = 23500 id = 41 } 
            	name = "13a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 42 } 
            	name = "14a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 20 } 
            	name = "32a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 43 } 
        name = "VIII Corpo d'Armata" 
        location = 410
        division = { 
            	id = { type = 23500 id = 44 } 
            	name = "15a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 45 } 
            	name = "16a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 30 } 
            	name = "33a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 46 } 
        name = "IX Corpo d'Armata" 
        location = 419
        division = { 
            	id = { type = 23500 id = 47 } 
            	name = "17a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 48 } 
            	name = "18a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 35 } 
            	name = "34a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 49 } 
        name = "X Corpo d'Armata" 
        location = 421
        division = { 
            	id = { type = 23500 id = 50 } 
            	name = "19a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 51 } 
            	name = "20a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 25 } 
            	name = "35a Divisione di Fanteria" 
            	strength = 25
            	type = infantry 
		model = 1
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 52 } 
        name = "XI Corpo d'Armata" 
        location = 426
        division = { 
            	id = { type = 23500 id = 53 } 
            	name = "21a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 54 } 
            	name = "22a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 55 } 
        name = "XII Corpo d'Armata" 
        location = 430 
        division = { 
            	id = { type = 23500 id = 56 } 
            	name = "23a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		extra = artillery
		brigade_model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 23500 id = 57 } 
            	name = "24a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry 
		model = 2
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 23500 id = 58 } 
        name = "25a Divisione di Fanteria" 
        location = 434
        division = { 
            	id = { type = 23500 id = 59 } 
            	name = "25a Divisione di Fanteria" 
            	strength = 50 
            	type = infantry
		model = 2 
		experience = 0
        	} 
   	} 

landunit = { 
        id = { type = 23500 id = 68 } 
        name = "Regio Corpo Truppe Coloniali della Somalia" 
        location = 836
        division = { 
            	id = { type = 23500 id = 69 } 
            	name = "Gruppo Coloniale della Somalia" 
            	strength = 20
            	type = militia
		experience = 5
	model = 1
        	} 
       	}  
landunit = { 
        id = { type = 23500 id = 70 } 
        name = "Regio Corpo Truppe Coloniali dell'Eritrea" 
        location = 817
        division = { 
            	id = { type = 23500 id = 71 } 
            	name = "1o Gruppo Coloniale dell'Eritrea" 
            	strength = 40
            	type = militia
		experience = 5
	model = 1
        	} 
        division = { 
            	id = { type = 23500 id = 72 } 
            	name = "2o Gruppo Coloniale dell'Eritrea" 
            	strength = 40
            	type = militia
		experience = 5
	model = 1
        	} 
       	}  
landunit = { 
        id = { type = 23500 id = 73 } 
        name = "Regio Corpo Truppe Coloniali della Tripolitania" 
        location = 750
        division = { 
            	id = { type = 23500 id = 74 } 
            	name = "Gruppo Coloniale della Tripolitania" 
            	strength = 50
				max_strength = 50
            	type = militia
				experience = 5
				model = 1
				locked = yes
        	} 
        division = { 
            	id = { type = 23500 id = 75 } 
            	name = "Cacciatori d'Africa" 
            	strength = 30
				max_strength = 30
            	type = militia
				model = 1
				experience = 5
				locked = yes
        	} 
        division = { 
            	id = { type = 23500 id = 76 } 
            	name = "Cavalleria Sahariana" 
            	strength = 30
				max_strength = 30
            	type = cavalry
				model = 0
				experience = 5
				locked = yes
        	} 
       	}  
landunit = { 
        id = { type = 23500 id = 77 } 
        name = "Regio Corpo Truppe Coloniali della Cirenaica" 
        location = 761
        division = { 
            	id = { type = 23500 id = 78 } 
            	name = "Gruppo Coloniale della Cirenaica" 
            	strength = 50
				max_strength = 50
            	type = militia
				model = 1
				experience = 5
				locked = yes
        	} 
        division = { 
            	id = { type = 23500 id = 79 } 
            	name = "3o Gruppo Coloniale dell'Eritrea" 
            	strength = 50
				max_strength = 50
            	type = militia
				model = 1
				experience = 5
				locked = yes
        	} 
        division = { 
            	id = { type = 23500 id = 80 } 
            	name = "Gruppo di Savari" 
            	strength = 30
				max_strength = 30
            	type = cavalry
				model = 1
				experience = 5
				locked = yes
        	} 
       	}  

landunit = { 
        id = { type = 23500 id = 81 } 
        name = "Expeditionary Force" 
        location = 756
        division = { 
            	id = { type = 23500 id = 82 } 
            	name = "Fezzan Column" 
            	strength = 20
				max_strength = 50
            	type = militia
				model = 1
				experience = 5
        	}
		}

airunit = { 
id = { type = 23500 id = 600 } 
name = "Corpo Aeronautica" 
location = 400 # Aviano
base = 400 # Aviano

division = { id = { type = 23500 id = 601 } name = "1. Squadriglia"
strength = 25 type = tactical_bomber model = 1 }
}


navalunit = { 
        id = { type = 23500 id = 500 } 
	name = "Regia Marina" 
        location = 422 # Taranto
        base = 422 # Taranto
 
	division = { id = { type = 23500 id = 501 } name = "RN Leonardo da Vinci" type = battleship model = 2 } 
	division = { id = { type = 23500 id = 502 } name = "RN Giulio Cesare" type = battleship model = 2 } 
        division = { id = { type = 23500 id = 503 } name = "RN Dante Alighieri" type = battleship model = 2 } 
        division = { id = { type = 23500 id = 504 } name = "RN Regina Margerhita" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 505 } name = "RN Vittorio Emanuele" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 506 } name = "RN Roma" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 507 } name = "RN Napoli" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 508 } name = "RN Sardegna" type = battleship model = 0 } 
        division = { id = { type = 23500 id = 509 } name = "RN Regina Elena" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 510 } name = "RN Benedetto Brin" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 511 } name = "RN Emanuele Filiberto" type = battleship model = 0 } 
        division = { id = { type = 23500 id = 512 } name = "RN Ammiraglio di S. Bon" type = battleship model = 1 } 
        division = { id = { type = 23500 id = 513 } name = "RN Vettor Pisani" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 514 } name = "RN Varese" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 515 } name = "RN Francesco Ferruccio" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 516 } name = "RN Pisa" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 517 } name = "RN Amalfi" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 518 } name = "RN San Giorgio" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 519 } name = "RN San Marco" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 520 } name = "RN Marco Polo" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 521 } name = "RN Giuseppe Garibaldi" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 522 } name = "RN Carlo Alberto" type = heavy_cruiser model = 1 } 
        division = { id = { type = 23500 id = 523 } name = "RN Libia" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 524 } name = "RN Liguria" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 525 } name = "RN Lombardia" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 526 } name = "RN Puglia" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 527 } name = "RN Nino Bixio" type = light_cruiser model = 1 } 
        division = { id = { type = 23500 id = 528 } name = "RN Quarto" type = light_cruiser model = 1 } 
        division = { id = { type = 23500 id = 529 } name = "RN Agordat" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 530 } name = "RN Piemonte" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 531 } name = "RN Calabria" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 532 } name = "RN Coatit" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 533 } name = "RN Elba" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 534 } name = "RN Etna" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 535 } name = "RN Etruria" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 536 } name = "RN Giovanni Bausan" type = light_cruiser model = 0 } 
        division = { id = { type = 23500 id = 537 } name = "1a Flottiglia" type = destroyer model = 1 } 
        division = { id = { type = 23500 id = 538 } name = "2a Flottiglia" type = destroyer model = 1 } 
   	} 

navalunit = { 
        id = { type = 23500 id = 539 } 
	name = "1a Divisione torpediniere" 
        location = 422 # Taranto
        base = 422 # Taranto
 
        division = { id = { type = 23500 id = 540 } name = "3a Flottiglia" type = destroyer model = 0 } 
        division = { id = { type = 23500 id = 541 } name = "4a Flottiglia" type = destroyer model = 0 } 
    	} 
    
navalunit = { 
        id = { type = 23500 id = 542 } 
	name = "2a Divisione torpediniere" 
        location = 434 # Cagliari 
        base = 434 # Cagliari 

        division = { id = { type = 23500 id = 543 } name = "5a Flottiglia" type = destroyer model = 0 } 
        division = { id = { type = 23500 id = 544 } name = "6a Flottiglia" type = destroyer model = 0 } 
    	}
 
navalunit = { 
        id = { type = 23500 id = 545 } 
	name = "4a Divisione torpediniere" 
        location = 400 # Venezia 
        base = 400 # Venezia 

        division = { id = { type = 23500 id = 546 } name = "7a Flottiglia" type = destroyer model = 1 } 
        division = { id = { type = 23500 id = 547 } name = "8a Flottiglia" type = destroyer model = 0 } 
    	} 

navalunit = { 
        id = { type = 23500 id = 548 } 
	name = "1a Divisione Sottomarina" 
        location = 434 # Cagliari
        base = 434 # Cagliari 

        division = { id = { type = 23500 id = 549 } name = "1a Flottiglia" type = submarine model = 0 } 
    	} 
    
navalunit = { 
        id = { type = 23500 id = 550 } 
	name = "2a Divisione Sottomarina" 
        location = 400 # Venezia
        base = 400 # Venezia 
 
        division = { id = { type = 23500 id = 551 } name = "2a Flottiglia" type = submarine model = 0 } 
    	} 
    
navalunit = { 
        id = { type = 23500 id = 552 } 
	name = "Squadrone Albanese" 
        location = 362 # Tirana
        base = 362 # Tirana
 
        division = { id = { type = 23500 id = 553 } name = "RN Dandolo" type = battleship model = 0 } 
        division = { id = { type = 23500 id = 554 } name = "9a Flottiglia" type = destroyer model = 1 } 
    	} 
    
navalunit = { 
	id = { type = 23500 id = 555 } 
	name = "Squadrone di Tripoli" 
        location = 750 # Tripoli
        base = 750 # Tripoli
 
        division = { id = { type = 23500 id = 556 } name = "9a Flottiglia" type = destroyer model = 0 } 
    	}
 
navalunit = { 
        id = { type = 23500 id = 557 } 
	name = "Squadrone di Trasporto" 

        location = 422 # Taranto
        base = 422 # Taranto
 
        division = { id = { type = 23500 id = 558 } name = "10a Flottiglia" type = transport model = 0 } 
        division = { id = { type = 23500 id = 559 } name = "11a Flottiglia" type = transport model = 0 } 
        division = { id = { type = 23500 id = 560 } name = "12a Flottiglia" type = transport model = 0 } 
    	} 


division_development = { 
        id = { type = 23500 id = 561 } 
        name = "RN Conte di Cavour" 
        type = battleship 
        model = 2 
        cost = 0.4
        date = { year = 1915 month = april day = 1 } 
} 
division_development = { 
        id = { type = 23500 id = 562 } 
        name = "RN Caio Duilio" 
        type = battleship 
        model = 2 
        cost = 0.4 
        date = { year = 1916 month = june day = 13 } 
} 
division_development = { 
        id = { type = 23500 id = 563 } 
        name = "RN Andrea Doria" 
        type = battleship 
        model = 2 
        cost = 0.4
        date = { year = 1916 month = march day = 13 } 
} 
division_development = { 
	id = { type = 23500 id = 564 } 
	name = "RN Marsala" 
	type = light_cruiser 
	model = 1 
	cost = 0.2
	date = { year = 1915 month = august day = 4 }
} 
division_development = { 
	id = { type = 23500 id = 565 } 
	name = "RN Campania" 
	type = light_cruiser 
	model = 0 
	cost = 0.2
	date = { year = 1917 month = april day = 17 }
} 
division_development = { 
	id = { type = 23500 id = 566 } 
	name = "RN Basilicata" 
	type = light_cruiser 
	model = 0 
	cost = 0.2
	date = { year = 1917 month = august day = 1 }
} 
 
}
