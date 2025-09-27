 
 ############################## 
 # Country definition for SPA # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {   tag          = SPA 
	ai             = "SPA_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	flag_ext = _14
	name = SPA14

	manpower        = 84
	# Resource Reserves 
	energy                 = 2280
	metal                  = 1140
	rare_materials         = 570
	oil          = 500 
	supplies        = 500 
	money         = 20 
	dissent        = 30 
	capital        = 460 
	transports       = 200 
	escorts        = 27 
  # Gibralter claim 
  diplomacy = 
  {   relation = {   tag = ENG value = -10   } 
   relation = {   tag = FRA value = 10   } 
   relation = {   tag = U08 value = -50   } 
   relation = {   tag = ITA value = -50   } 
   relation = {   tag = POR value = -50   } 
    } 
	
   headofstate            = {  type = 9 id = 35204  } # Alfonso XIII
   headofgovernment       = {  type = 9 id = 35210  } # Eduardo Dato
   foreignminister        = {  type = 9 id = 35220  } # Salvador Bermúdez de Castro
   armamentminister       = {  type = 9 id = 35239  } # Gabino Bugallal Araújo
   ministerofsecurity     = {  type = 9 id = 35265  } # José Sánchez-Guerra Martínez
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 35285  } # Ramón Echagüe
   chiefofarmy            = {  type = 9 id = 35302  } # Ramón Echagüe
   chiefofnavy            = {  type = 9 id = 35320  } # Augusto Miranda y Godoy
   chiefofair             = {  type = 9 id = 35329  } # Alfredo Kindelán
	
	
	
  SpyInfo        = {   country = "SPA" NumberOfSpies = 7   } 
  # Spanish Guinea 
  nationalprovinces   = {   444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461  
               348 440 438 436 442 443 475 437 439 452 447 990 991 469 
 455 448 449 446 462 445 459 473 465 454   450               } 
  ownedprovinces     = {   441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475  
               437 439 452 447 990 991  469  715   987 988 913 
  446 
 449 448 455 454 465 473 
 462 459 445 450 
 989  716 916   
                 } 
  # Spanish Guinea 
  controlledprovinces  = {   441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475  
               437 439 452 447 990 991   715   987 988 913 
  446 469 450 
 449 448 455 454 465 473 
 462 459 445  
 989  716 916  
                 } 
	claimedprovinces = {
		715 716 913 916 987 988 989
	}
  # Semi-Major Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Interwar Bomber 
	4600
	#Basic Armoured Car  

	#Tankette 

	#Early Anti-Tank Artillery 

	#Great War Heavy Field Artillery 
	2290  
	#Early Static Anti-Air Artillery 

	#Early Bomber 

	#Basic Anti-Air Artillery Brigade 

	#Naval Infantry

	#Engineers
	1830
	#Early Battleship 
	3410 3420 3430 
	#Early Battlecruiser

	#Improved Heavy Cruiser 
	3210 3220 
	#Short Range Submarine 
	3610
	#Interwar Light Cruiser 
	3110 3120
	#Improved Destroyer 
	3010 3020 3030
	#Great War Infantry Division  
	1010  1020  1030
	#Great War Cavalry Division  
	13060 13070 
	#Early Mountain Division 
	1160  1170  
	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#ASW 18

	#Troopships
	3810
	#Medicine
	5600

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 81300
	#Air Doctrines - ww1 techs
} 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 9 
   political_left  = 1 
   freedom      = 7 
   free_market    = 4 
   professional_army = 5 
   defense_lobby     = 4 
   interventionism  = 5 
    } 
	
  dormant_leaders    = {   } 
  # Spanish Troops 
 
landunit = { 
        id = { type = 28111 id = 3 } 
        name = "1o Cuerpo de Ejercito" 
        location = 460 
        division = { 
            	id = { type = 28111 id = 1 } 
            	name = "Cuartel General" 
            	strength = 50
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 4 } 
            	name = "1a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 5 } 
            	name = "2a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 2 } 
            	name = "1a División de Caballería" 
            	strength = 65
            	type = cavalry
		model = 2
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 28111 id = 6 } 
        name = "2o Cuerpo de Ejercito" 
        location = 474 
        division = { 
            	id = { type = 28111 id = 7 } 
            	name = "3a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 8 } 
            	name = "4a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2		
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 28111 id = 9 } 
        name = "3o Cuerpo de Ejercito" 
        location = 464
        division = { 
            	id = { type = 28111 id = 10 } 
            	name = "5a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        } 
        division = { 
            	id = { type = 28111 id = 11 } 
            	name = "6a División de Infantería" 
            	strength = 60
            	type = infantry 
		model = 2
		experience = 0
        	} 
   	} 
landunit = { 
        id = { type = 28111 id = 12 } 
        name = "4o Cuerpo de Ejercito" 
        location = 440 
        division = { 
            	id = { type = 28111 id = 13 } 
            	name = "7a División de Infantería" 
            	strength = 60
            	type = infantry 
		model = 2 
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 14 } 
            	name = "8a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2  
		experience = 0
        	} 
    } 
landunit = { 
        id = { type = 28111 id = 15 } 
        name = "5o Cuerpo de Ejercito" 
        location = 442 
        division = { 
            	id = { type = 28111 id = 16 } 
            	name = "9a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2  
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 17 } 
            	name = "10a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 33 } 
            	name = "Agrupacion de Montana" 
            	strength = 45
            	type = bergsjaeger
		model = 2
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 28111 id = 18 } 
        name = "6o Cuerpo de Ejercito" 
        location = 451 
        division = { 
            	id = { type = 28111 id = 19 } 
            	name = "11a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 28111 id = 20 } 
            	name = "12a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2  
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 28111 id = 21 } 
        name = "7o Cuerpo de Ejercito" 
        location = 447
        division = { 
            	id = { type = 28111 id = 22 } 
            	name = "13a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	}  
        division = { 
            	id = { type = 28111 id = 24 } 
            	name = "14a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2  
		experience = 0
        	}  
    	} 
landunit = { 
        id = { type = 28111 id = 25 } 
        name = "8o Cuerpo de Ejercito" 
        location = 441 
        division = { 
            	id = { type = 28111 id = 26 } 
            	name = "15a División de Infantería" 
            	strength = 60
            	type = infantry 
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 0
        	}  
        division = { 
            	id = { type = 28111 id = 23 } 
            	name = "16a División de Infantería" 
            	strength = 60
            	type = infantry
		model = 2  
		experience = 0
        	}  
    	} 

landunit = { 
        id = { type = 28111 id = 27 } 
        name = "Comandancia General de Baleares" 
        location = 475 
        division = { 
            	id = { type = 28111 id = 28 } 
            	name = "Comandancia General de Baleares" 
            	strength = 45
		max_strength = 75
            	type = garrison
		model = 1
		experience = 0
		locked = yes
        	}  
    	} 
landunit = { 
        id = { type = 28111 id = 29 } 
        name = "Comandancia General de Canarias" 
        location = 990 
        division = { 
            	id = { type = 28111 id = 30 } 
            	name = "Comandancia General de Canarias" 
            	strength = 30
		max_strength = 50
            	type = garrison
		model = 1
		experience = 0
		locked = yes
        	}  
    	} 
landunit = { 
        id = { type = 28111 id = 31 } 
        name = "Fuerzas Regulares Indigenas" 
        location = 715 
        division = { 
            	id = { type = 28111 id = 32 } 
            	name = "Fuerzas Regulares Indigenas" 
            	strength = 60
		max_strength = 100
            	type = infantry
		model = 1
		experience = 0
        	}  
    	} 

navalunit = { 
        id = { type = 28111 id = 500 } 
        name = "Armada Española" 
        location = 473 # Cadiz
        base = 473 # Cadiz
 
        division = { id = { type = 28111 id = 501 } name = "España" type = battleship model = 2 } 
        division = { id = { type = 28111 id = 502 } name = "Pelayo" type = heavy_cruiser model = 0 } 
        division = { id = { type = 28111 id = 504 } name = "Emperador Carlos V" type = heavy_cruiser model = 1 } 
        division = { id = { type = 28111 id = 505 } name = "Princesa de Asturias" type = heavy_cruiser model = 1 } 
        division = { id = { type = 28111 id = 506 } name = "Cataluña" type = heavy_cruiser model = 1 } 
        division = { id = { type = 28111 id = 507 } name = "Rio de la Plata" type = light_cruiser model = 0 } 
        division = { id = { type = 28111 id = 508 } name = "Estramadura" type = light_cruiser model = 1 } 
        division = { id = { type = 28111 id = 509 } name = "Reina Regente" type = light_cruiser model = 1 } 
	division = { id = { type = 28111 id = 514 } name = "Alfonso XIII" type = light_cruiser model = 0 }
	division = { id = { type = 28111 id = 515 } name = "Lepanto" type = light_cruiser model = 0 }        
	division = { id = { type = 28111 id = 516 } name = "1a Flotilla" type = destroyer model = 1 } 
	division = { id = { type = 28111 id = 517 } name = "2a Flotilla" type = destroyer model = 1 } 
        division = { id = { type = 28111 id = 511 } name = "Flotilla del Transporte" type = transport model = 0 } 
    	}
		
 airunit = {     
 name = "Escuadrilla Expedicionaria"  
 base = 715  # Tangier 
 location = 715  # Tangier
 leader = 35087 # Kindelán
  
 Division = {  
 id = { type = 28111 id = 518 } 
 name = "Escuadrilla Expedicionaria"  
 strength = 30 
 type = tactical_bomber 
 model = 0 } 
  } 
 
division_development = { 
        id = { type = 28111 id = 512 } 
        name = "Alfonso XIII" 
        type = battleship 
        model = 2 
		cost = 0.4
        date = { year = 1915 month = august day = 16 } 
    	} 
division_development = { 
        id = { type = 28111 id = 513 } 
        name = "Jaime I" 
        type = battleship 
        model = 2 
		cost = 0.4
        date = { year = 1922 month = may day = 12 } 
    	}


}

