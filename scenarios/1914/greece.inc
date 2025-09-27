 
############################## 
# Country definition for GRE # 
############################## 
  
##################### 
# Country main data # 
##################### 
  
country = {
	tag            = GRE 
	manpower       = 0
	ai             = "GRE_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	# Resource Reserves 
	energy         = 900
	metal          = 450
	rare_materials = 225
	oil            = 500 
	supplies       = 500 
	money          = 10 
	capital        = 377 
	transports     = 240 
	escorts        = 15 
	
	policy = {
		date = {  year = 0 month = january day = 0  } 
		democratic        = 8 #5 
		political_left    = 4 #2 
		free_market       = 5 
		freedom           = 4 
		professional_army = 6
		defense_lobby     = 5 
		interventionism   = 4 
	}
   
	headofstate            = {  type = 9 id = 90213  } # Constantine I
	headofgovernment       = {  type = 9 id = 90195  } # Eleftherios Venizelos
	foreignminister        = {  type = 9 id = 90187  } # Eleftherios Venizelos
	armamentminister       = {  type = 9 id = 90214  } # Alexandros Diomidis
	ministerofsecurity     = {  type = 9 id = 90228  } # Emmanouil Repoulis
	ministerofintelligence = {  type = 9 id = 90237  } # Eksadaktilos Athanasios
	chiefofstaff           = {  type = 9 id = 90238  } # Ioannis Metaxas
	chiefofarmy            = {  type = 9 id = 90239  } # Constantine I
	chiefofnavy            = {  type = 9 id = 90240  } # Mark Kerr
	#chiefofair            = {  type = 9 id = 220010 } # ?No sepperate airforce branch at the time
   
   
   
	nationalprovinces = {  
		328 333 360 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 384 387 388 409 1077 
	} 
	ownedprovinces = {  
		360 364 365 366 367 368 369 371 372 373 374 375 376 377 380 381 382 383
	} 
	controlledprovinces = {  
		360 364 365 366 367 368 369 371 372 373 374 375 376 377 380 381 382 383
	}
	claimedprovinces = { 1057 1076 1078 1079 } 

	# Western Minor Tech '14 
	# Group D 1914 techs 
	# ###################### 
	techapps = { 
		#Great War Heavy Field Artillery 
		2290 
		#Engineers
		1830  
		#Early Infantry Division
		1010  1020 
		#1930 Cavalry Division
		13060  
		#Early Mountain Division
		1160  1170 
		#Modern Agriculture  
		5700
		#Construction Engineering
		5800
		#Scientific Management
		5810
		# Census Tabulating Machine
		5310		
		#Medicine
		5600
		#Landdoctrine ww1 - rest
		6500 6510 6530 6580
		#Improved Destroyer 
		3010 3020 3030
		#Early Light Cruiser 
		3110 3120 3130
		#Early Heavy Cruiser 
		3210 3220
		# Battleship
		3410
		#Short Range Submarine
		3610 
		#Naval Doctrines
		8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 81300 81310
		#Troopships
		3810
		#Interceptors  
		4500
		#Exp.  Bomber 
		4600
		#Air Doctrines - ww1 techs
		27480 27490 27500 27510
	} 
	
	diplomacy = {
		relation = {  tag = BUL value = -75  } 
		relation = {  tag = ENG value = 50  } 
		relation = {  tag = FRA value = 20  } 
		relation = {  tag = U08 value = 75  } 
		relation = {  tag = ITA value = -35  } 
		relation = {  tag = ALB value = -50  }
		relation = {  tag = SER value = 75  }
		relation = {  tag = U09 value = -25  }
		relation = {  tag = OTT value = -75  }    
		relation = {  
			tag    = ROM 
			value   = 100 
			guaranteed = { day = 1 month = june year = 1914 }
		} 
	} 
	SpyInfo        = {  country = "GRE" NumberOfSpies = 6  } 

	
	# Greek corps commanders
	#
	# A Corps : Constantine Kallaris
	# B Corps : Emanouel Manousogianakis
	# C Corps : Constantine Moschopoulos
	# D Corps : Stefanos Gennadis
	# E Corps : Napoleon Sotilis
	# Army command : King Constantine (actual command, not only nominal)

	landunit = {
		id = { type = 19111 id = 24 }
		name = "Vasilikos Ellinikos Stratos"
		location = 377
		leader = 90066
		division = {
			id = { type = 19111 id = 25 }
			name = "Vasilikos Ellinikos Stratos"
			strength = 75
			type = hq
			model = 0
			experience = 20
		}
	}
	landunit = {
		id = { type = 19111 id = 1 }
		name = "A Soma Stratou"
		location = 377
		leader = 90077
		division = {
			id = { type = 19111 id = 2 }
			name = "I Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
		division = {
			id = { type = 19111 id = 3 }
			name = "II Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 20
			extra = artillery
			brigade_model = 0
		}
		division = {
			id = { type = 19111 id = 4 }
			name = "XIII Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
	}
	landunit = {
		id = { type = 19111 id = 5 }
		name = "B Soma Stratou"
		location = 372
		leader = 90065
		division = {
			id = { type = 19111 id = 6 }
			name = "III Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
		division = {
			id = { type = 19111 id = 7 }
			name = "IV Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 20
			extra = artillery
			brigade_model = 0
		}
		division = {
			id = { type = 19111 id = 8 }
			name = "XIV Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
	}
	landunit = {
		id = { type = 19111 id = 9 }
		name = "C Soma Stratou"
		location = 365
		leader = 90067
		division = {
			id = { type = 19111 id = 10 }
			name = "X Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
		division = {
			id = { type = 19111 id = 11 }
			name = "XI Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 20
			extra = artillery
			brigade_model = 0
		}
		division = {
			id = { type = 19111 id = 12 }
			name = "XII Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 5
			extra = cavalry_brigade
			brigade_model = 1
		}
	}
	landunit = {
		id = { type = 19111 id = 13 }
		name = "D Soma Stratou"
		location = 364
		leader = 90076
		division = {
			id = { type = 19111 id = 14 }
			name = "V Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 20
			extra = artillery
			brigade_model = 0
		}
		division = {
			id = { type = 19111 id = 15 }
			name = "VI Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
		division = {
			id = { type = 19111 id = 16 }
			name = "VII Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
	}
	landunit = {
		id = { type = 19111 id = 17 }
		name = "E Soma Stratou"
		location = 367
		#leader = not in DB !
		division = {
			id = { type = 19111 id = 18 }
			name = "VIII Merarchia"
			strength = 50
			type = infantry
			model = 2
			experience = 20
			extra = artillery
			brigade_model = 0
		}
		division = {
			id = { type = 19111 id = 19 }
			name = "IX Merarchia"
			strength = 40
			type = infantry
			model = 2
			experience = 20
		}
	}
#	landunit = {
#		id = { type = 19111 id = 20 }
#		name = "Thessaloniki Frourio"
#		location = 365
#		division = {
#			id = { type = 19111 id = 21 }
#			name = "Thessaloniki Frourio"
#			strength = 40
#			type = garrison
#			model = 1
#			experience = 5
#		}
#	}
#	landunit = {
#		id = { type = 19111 id = 22 }
#		name = "Ioannina Frourio"
#		location = 367
#		division = {
#			id = { type = 19111 id = 23 }
#			name = "Ioannina Frourio"
#			strength = 20
#			type = garrison
#			model = 1
#			experience = 0
#		}
#	}

	airunit = {
		id = { type = 19111 id = 50 }
		name = "Lochos Aeroporon"
		location = 377
		base = 377
		division = {
			id = { type = 19111 id = 51 }
			name = "1. Sygkrotima"
			strength = 10
			max_strength = 20
			type = tactical_bomber
			model = 1
		}
	}

	navalunit = {
		id = { type = 19111 id = 500 }
		name = "Basilikos Stolos"
		leader = 90070 #Kondouriotis
		location = 377 # Athínai
		base = 377 # Athínai
 
		division = { id = { type = 19111 id = 501 } name = "Kilkis" type = battleship model = 1 }
		division = { id = { type = 19111 id = 502 } name = "Limnos" type = battleship model = 1 }
        division = { id = { type = 19111 id = 503 } name = "BEN Georgios Averoff" type = heavy_cruiser model = 2 }
        division = { id = { type = 19111 id = 504 } name = "BEN Helle" type = light_cruiser model = 1 }
        division = { id = { type = 19111 id = 505 } name = "BEN Hydra" type = heavy_cruiser model = 1 }
        division = { id = { type = 19111 id = 506 } name = "BEN Spetsai" type = heavy_cruiser model = 1 }
        division = { id = { type = 19111 id = 507 } name = "BEN Psara" type = heavy_cruiser model = 1 }
        division = { id = { type = 19111 id = 508 } name = "1. Torpilakatos" type = destroyer model = 2 }
        division = { id = { type = 19111 id = 509 } name = "2. Torpilakatos" type = destroyer model = 2 }
        division = { id = { type = 19111 id = 510 } name = "3. Torpilakatos" type = destroyer model = 2 }
		division = { id = { type = 19111 id = 511 } name = "4. Torpilakatos" type = destroyer model = 1 }
	}

} 
