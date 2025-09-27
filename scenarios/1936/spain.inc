 
 ############################## 
 # Country definition for SPR # 
 ############################## 
   
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SPR 
	regular_id             = SPA 
	intrinsic_gov_type     = left_wing_radical
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }   
	manpower               = 30 
	# Resource Reserves 
	energy                 = 2280
	metal                  = 1140
	rare_materials         = 570
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	dissent                = 30 
	capital                = 460 

	transports             = 100 
	escorts                = 27 
   # Gibralter claim 
   diplomacy = 
   {  relation = {  tag = ENG value = -10  } 
     relation = {  tag = FIN value = 35  } 
     relation = {  tag = FRA value = 10  } 
     relation = {  tag = GER value = -50  } 
     relation = {  tag = IRE value = 50  } 
     relation = {  tag = ITA value = -50  } 
     relation = {  tag = POR value = -50  } 
     relation = {  tag = SOV value = -10  } 
    } 
   SpyInfo                = {  country = "SPR" NumberOfSpies = 7  } 
   # Spanish Guinea 
   nationalprovinces      = {  348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 990 991                         } 
   ownedprovinces         = {  436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991    
                             } 
   # Spanish Guinea 
   controlledprovinces    = {  436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991   
                             }
	claimedprovinces = {
		715 716 913 916 987 988 989
	}
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Early Anti-Tank Artillery 
#2400
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Naval Infantry
#1560 1570 1580
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Engineers
1830 1840 1850 1860
#Early Battleship 
3410 3420 3430 3440 3450 3456 3460 3470
#Improved Heavy Cruiser 
3210 3220 3230 3240 3250
#Short Range Submarine 
3610 3620 3630 3640
#Interwar Light Cruiser 
3110 3120 3130 3140
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Modern Agriculture  
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
##5190 
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 
#Improved Great War Hospital System
14000 14010

# WWI Land Doctrines - Entente line: eng fra ita usa bel hol jap
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Landdoctrine ww2 - none?

#Naval Doctrines
8010 8020 8040 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 1 
     freedom           = 7 
     free_market       = 4 
     professional_army = 4 
     defense_lobby     = 4 
     interventionism   = 5 
    } 

   headofstate            = {  type = 9 id = 255001  } 
   headofgovernment       = {  type = 9 id = 255002  } 
   foreignminister        = {  type = 9 id = 255003  } 
   armamentminister       = {  type = 9 id = 255004  } 
   ministerofsecurity     = {  type = 9 id = 255005  } 
   ministerofintelligence = {  type = 9 id = 255006  } 
   chiefofstaff           = {  type = 9 id = 255007  } 
   chiefofarmy            = {  type = 9 id = 255008  } 
   chiefofnavy            = {  type = 9 id = 255009  } 
   chiefofair             = {  type = 9 id = 255010  } 
   dormant_leaders        = {  255008 255051  } 
   # Spanish Troops 
   landunit = 
   {  id       = {  type = 27600 id = 1  } 
     location = 460 
     name     = "1a División Orgánica" 
     Division = 
     {  id   = {  type = 27600 id = 2  } 
       name = "1a División Orgánica" # HQ in Madrid
       type = infantry 
	   model      = 7
       extra = light_armor_brigade
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 3  } 
     location = 460 
     name     = "1a División de Caballería" 
     Division = 
     {  id   = {  type = 27600 id = 4  } 
       name = "1a División de Caballería" # HQ in Madrid
       type = cavalry 
	   model      = 8
       extra = artillery 
	   brigade_model = 1
	strength = 75
      } 
     Division = 
     {  id       = {  type = 27600 id = 5  } 
       name     = "Brigada Blindada" # HQ in Madrid
       type     = light_armor 
       model    = 0
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 6  } 
     location = 474 
     name     = "2a División Orgánica" 
     Division = 
     {  id    = {  type = 27600 id = 7  } 
       name  = "2a División Orgánica" # HQ in Sevilla
       type  = infantry 
	   model      = 7
       extra = artillery 
	   brigade_model = 6
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 8  } 
     location = 464 
     name     = "3a División Orgánica" 
     Division = 
     {  id    = {  type = 27600 id = 9  } 
       name  = "3a División Orgánica" # HQ in Valencia
       type  = infantry 
	   model      = 7
       extra = cavalry_brigade
	   brigade_model = 8
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 10  } 
     location = 440 
     name     = "4a División Orgánica" 
     Division = 
     {  id   = {  type = 27600 id = 11  } 
       name = "4a División Orgánica" # HQ in Barcelona
       type = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 12  } 
     location = 442 
     name     = "5a División Orgánica" 
     Division = 
     {  id   = {  type = 27600 id = 13  } 
       name = "5a División Orgánica" # HQ in Zaragoza
       type = infantry 
	   model      = 7
       extra = cavalry_brigade
	   brigade_model = 8
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 14  } 
     location = 446 
     name     = "Brigadas de Montaña" 
     Division = 
     {  id   = {  type = 27600 id = 15  } 
       name = "Brigadas de Montaña" 
       type = bergsjaeger 
	   model      = 7
	strength = 60
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 16  } 
     location = 451 
     name     = "6a División Orgánica" 
     Division = 
     {  id    = {  type = 27600 id = 17  } 
       name  = "6a División Orgánica" # HQ in Burgos
       type  = infantry 
	   model      = 7
       extra = anti_air 
	   brigade_model = 0
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 18  } 
     location = 448 
     name     = "7a División Orgánica" 
     Division = 
     {  id   = {  type = 27600 id = 19  } 
       name = "7a División Orgánica" # HQ in Valladolid
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 20  } 
     location = 441 
     name     = "8a División Orgánica" 
     Division = 
     {  id    = {  type = 27600 id = 21  } 
       name  = "8a División Orgánica" # HQ in La Coruña
       type  = infantry 
	   model      = 7
       extra = artillery
	   brigade_model = 1
	strength = 75
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 22  } 
     location = 475 
     name     = "Comandancia Militar de Baleares" 
     Division = 
     {  id       = {  type = 27600 id = 23  } 
       name     = "Comandancia Militar de Baleares" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 24  } 
     location = 990 
     name     = "Comandancia Militar de Canarias" 
     Division = 
     {  id       = {  type = 27600 id = 25  } 
       name     = "Comandancia Militar de Canarias" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 26  } 
     location = 444 
     name     = "Comandancia Militar de Asturias" # created after the Asturias Insurrection of 1934
     Division = 
     {  id       = {  type = 27600 id = 27  } 
       name     = "Comandancia Militar de Asturias" 
       type     = infantry 
	   model      = 6
       strength = 30 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 28  } 
     location = 987 
     name     = "Fuerzas de África Occidental" 
     Division = 
     {  id       = {  type = 27600 id = 29  } 
       name = "Fuerzas de África Occidental" 
       type = militia
	   model      = 3
	strength = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 30  } 
     location = 715 
     name     = "Circunscripción Occidental" 
     Division = 
     {  id       = {  type = 27600 id = 31  } 
       name     = "Tercios de la Legión" 
       type     = infantry 
	   model      = 7
       strength = 60 
      } 
     Division = 
     {  id       = {  type = 27600 id = 32  } 
       name     = "Mehal-La 1" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 33  } 
       name     = "Mehal-La 3" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 34  } 
       name     = "Mehal-La 4" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 35  } 
     location = 716 
     name     = "Circunscripción Oriental" 
     Division = 
     {  id       = {  type = 27600 id = 36  } 
       name     = "Fuerzas Regulares Indigenas" 
       type     = infantry
	   model      = 5
       strength = 70 
      } 
     Division = 
     {  id       = {  type = 27600 id = 37  } 
       name     = "Mehal-La 2" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 27600 id = 38  } 
       name     = "Mehal-La 5" 
       type     = militia
	   model      = 2
       strength = 50 
      } 
    } 
   landunit = 
   {  id       = {  type = 27600 id = 39  } 
     location = 913 
     name     = "Guardias Coloniales" 
     Division = 
     {  id       = {  type = 27600 id = 40  } 
       name     = "Guardias Coloniales" 
       type     = militia 
	   model      = 4
       strength = 30 
      } 
    } 
   # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases. 
	navalunit = { 
		id = { type = 27600 id = 50 } 
		name = "Base Naval Cádiz" 
		location = 473 
		base = 473 
		division = { 
			id = { type = 27600 id = 51 } 
			name = "ARE República" 
			type = light_cruiser 
			model = 3 
			strength = 60 
			} 
		division = { 
			id = { type = 27600 id = 52 } 
			name = "Flotilla de Destructores No. 3" 
			type = destroyer 
			model = 4
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 53 } 
		name = "ARE Méndez Núñez" 
		location = 441 
		base = 441 
		division = { 
			id = { type = 27600 id = 54 } 
			name = "ARE Méndez Núñez" 
			type = light_cruiser 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 55 } 
		name = "Escuadrón de Batalla" 
		location = 436 
		base = 436 
		division = { 
			id = { type = 27600 id = 56 } 
			name = "1a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 57 } 
			name = "2a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 58 } 
			name = "Flotilla de Torpederas No. 1" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 27600 id = 59 } 
			name = "Flotilla de Torpederas No. 2" 
			type = destroyer 
			model = 0
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 60 } 
		name = "Armada Colonial" 
		location = 990 
		base = 990 
		division = { 
			id = { type = 27600 id = 61 } 
			name = "Flotilla de Destructores No. 1" 
			type = destroyer 
			model = 3
			} 
		division = { 
			id = { type = 27600 id = 62 } 
			name = "3a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 63 } 
			name = "4a Flotilla de Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 27600 id = 64 } 
			name = "Flotilla de Destructores No. 2" 
			type = destroyer 
			model = 4
			} 
		} 
	navalunit = { 
		id = { type = 27600 id = 65 } 
		name = "Grupo C" 
		location = 464 
		base = 464 
		division = { 
			id = { type = 27600 id = 66 } 
			name = "S101 Flotilla" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 27600 id = 67 } 
			name = "S103 Flotilla" 
			type = submarine 
			model = 3 
			} 
		}     
	navalunit = { 
		id = { type = 27600 id = 68 } 
		name = "I Flotilla de la Armada" 
		location = 436 
		base = 436 
		division = { 
			id = { type = 27600 id = 69 } 
			name = "ARE Jaime I" 
			type = battleship 
			model = 2 
			strength = 50 
			} 
		division = { 
			id = { type = 27600 id = 70 } 
			name = "ARE España" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 27600 id = 71 } 
			name = "ARE Almirante Cervera" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 72 } 
			name = "ARE Libertad" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 73 } 
			name = "ARE Miguel de Cervantes" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 27600 id = 74 } 
			name = "Flotilla de Destructores No. 4" 
			type = destroyer 
			model = 4
			} 
		} 
   airunit = 
   {  location = 460 
     base     = 460 
     id       = {  type = 27600 id = 100  } 
     name     = "1a Escuadra Aérea" 
     Division = 
     {  id       = {  type = 27600 id = 101  } 
       name     = "1er Grupo Táctico" 
       strength = 30 
       type     = tactical_bomber
		model    = 4  
      } 
     Division = 
     {  id       = {  type = 27600 id = 102  } 
       name     = "2o Grupo Táctico" 
       strength = 30 
       type     = tactical_bomber 
	   model    = 4
      } 
    } 
   airunit = 
   {  location = 436 
     base     = 436 
     id       = {  type = 27600 id = 103  } 
     name     = "2a Escuadra Aérea" 
     Division = 
     {  id       = {  type = 27600 id = 104  } 
       name     = "1er Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 6
      } 
     Division = 
     {  id       = {  type = 27600 id = 105  } 
       name     = "3er Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 6
      } 
    }  
   airunit = 
   {  location = 990 
     base     = 990 
     id       = {  type = 27600 id = 106  } 
     name     = "Fuerzas Aéreas del África" 
     Division = 
     {  id       = {  type = 27600 id = 107  } 
       name     = "1er Grupo de Bombardeo" 
       strength = 30 
       type     = tactical_bomber 
	   model    = 4
      } 
     Division = 
     {  id       = {  type = 27600 id = 108  } 
       name     = "2o Grupo de Caza" 
       strength = 30 
       type     = interceptor 
	   model    = 5
      } 
    } 
   division_development = 
   {  name  = "ARE Canarias" 
     type  = heavy_cruiser 
     model = 4 
     new_model = no
     cost  = 0.3 
     id    = {  type = 27600 id = 500  } 
     date  = {  year = 1936 month = march day = 1  } 
    } 
   division_development = 
   {  name  = "ARE Baleares" 
     type  = heavy_cruiser 
     model = 4 
     new_model = no
     cost  = 0.3 
     id    = {  type = 27600 id = 501  } 
     date  = {  year = 1936 month = june day = 1  } 
    } 
	division_development = {
		name = "S104 Flotilla"
		type = submarine
		model = 3
		cost = 0.1
		id = { type = 27600 id = 502 }
		date = { year = 1936 month = march day = 1 }
	}
  } 
 
