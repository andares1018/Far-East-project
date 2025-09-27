 
 ############################## 
 # Country definition for BEL # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag          = BEL 
	capital        = 116 
	manpower        = 3 
	# Resource Reserves 
	ai           = "BEL_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }	
	energy                 = 1980
	metal                  = 990
	rare_materials         = 495
	oil          = 500 
	supplies        = 500 
	money         = 20 
	transports       = 100 
	escorts        = 20 
  diplomacy = 
  { relation = { tag = AST value = 50 } 
   relation = { tag = CAN value = 50 } 
   relation = { tag = DEN value = 100 } 
   relation = { tag = ENG value = 75 } 
   relation = { tag = FRA value = 50 } 
   relation = { tag = U08 value = -75 } 
   relation = { tag = HOL value = 175 } 
   relation = { tag = ITA value = 0 } 
   relation = { tag = LUX value = 200 } 
   relation = { tag = NOR value = 100 } 
   relation = { tag = NZL value = 20 } 
   relation = { tag = POR value = -50 } 
   relation = { tag = SAF value = 35 } 
   relation = { tag = SWE value = 100 } 
   relation = { tag = USA value = 50 } 
   } 
  SpyInfo        = { country = "BEL" NumberOfSpies = 6 } 
  nationalprovinces   = { 108 110 111 112 113 114 115 116 117 } 
  ownedprovinces     = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899  } 
  controlledprovinces  = { 114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899  } 
  claimedprovinces    = { 846 847 894 897 898 899 901 902 903 904 905 906 } #Belgian Congo

  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  
	4500

	#Basic Armoured Car  
	2860
	#Tankette 

	#Great War Heavy Field Artillery 
	2290  
	#Early Static Anti-Air Artillery 
	2800
	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division
	1160
	#Engineers
	1830
	
	#Interbellum 1930 Supply 
	1910 
	#Air Doctrines - ww1 techs
	27480 27490
	#Experimental bomber
	4600 4610
	
	#Naval Infantry

	#Mechanized Agriculture 
	5810 5800 5310 54010 5600 5080 #Industry tech
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Troopships
	3810


	#Landdoctrine ww1 - exp entente eng fra ita USA bel HOL jap 
	6500 6510 # 6530
	#Air Doctrines - ww1 techs
	#Naval Doctrine
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 81300

	#Great War Hospital System 
} 
  policy = 
  { date       = { year = 0 month = january day = 0 } 
	democratic = 7
	political_left = 5
	free_market = 9
	freedom = 8
	professional_army = 4
	defense_lobby = 4
	interventionism = 3
  } 
  
   headofstate            = {  type = 9 id = 70187  } # Albert I
   headofgovernment       = {  type = 9 id = 70172  } # Charles de Broqueville
   foreignminister        = {  type = 9 id = 70164  } # Jules Davignon
   armamentminister       = {  type = 9 id = 70190  } # Aloys van de Vyvere
   ministerofsecurity     = {  type = 9 id = 70196  } # Paul Berryer
   ministerofintelligence = {  type = 9 id = 70183  } # Charles de Broqueville  
   chiefofstaff           = {  type = 9 id = 70158  } # Chevalier de Selliers de Moranville
   chiefofarmy            = {  type = 9 id = 70156  } # Albert I
   chiefofnavy            = {  type = 9 id = 70206  } # Belgian Navy formed 1917 #Charles de Broqueville
   chiefofair             = {  type = 9 id = 70152  } # Clément de Saint-Marcq
 
landunit = {
	id = { type = 18150 id = 1 }
	name = "1ère Division d'Armée"
	leader = 70058 # Baix
	location = 114
	division = {
		id = { type = 18150 id =2 }
		name = "1ère Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	}
landunit = {
	id = { type = 18150 id = 3 }
	name = "2ème Division d'Armée"
	leader = 70059 # Dossin
	location = 115
	division = {
		id = { type = 18150 id = 4 }
		name = "2ème Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	#division = {
	#	id = { type = 18150 id = 5 }
	#	name = "Position fortifiée d'Anvers"
	#	strength = 80
	#	type = garrison
	#	model = 1
	#	locked = yes
		#experience = 10
	#	}
	}
landunit = { 
	id = { type = 18150 id = 6 }
	name = "3ème Division d'Armée"
	leader = 70060 # Leman
	location = 108
	division = {
		id = { type = 18150 id = 7 }
		name = "3ème Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	#division = {
	#	id = { type = 18150 id = 8 }
	#	name = "Position fortifiée de Liège"
	#	strength = 80
	#	type = garrison
		#model = 1
		#locked = yes
		#experience = 10
		#}
	}
landunit = {
	id = { type = 18150 id = 9 }
	name = "4ème Division d'Armée"
	leader = 70061 # Michel
	location = 113
	division= {
		id = { type = 18150 id = 10 }
		name = "4ème Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	#division = {
		#id = { type = 18150 id = 11 }
		#name = "Position fortifiée de Namur"
		#strength = 80
		#type = garrison
		#model = 1
		#locked = yes
		#experience = 10
		#}
	}
landunit = {
	id = { type = 18150 id = 12 }
	name = "5ème Division d'Armée"
	leader = 70062 # Ruwet
	location = 112
	division = {
		id = { type = 18150 id = 13 }
		name = "5ème Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	}
landunit = {
	id = { type = 18150 id = 14 }
	name = "6ème Division d'Armée"
	leader = 70053 # King Albert I (for the Belgian Army)
	location = 116
	division = {
		id = { type = 18150 id = 15 }
		name = "6ème Division d'Armée"
		strength = 55
		type = infantry
		model = 2
		experience = 0
		}
	division = {
		id = { type = 18150 id = 16 }
		name = "Division de Cavalerie"
		strength = 50
		type = cavalry
		model = 2
		experience = 0
		}
	}
landunit = {
	id = { type = 18150 id = 17 }
	name = "Troupes du Congo-Kasaï"
	location = 899
	division = {
		id = { type = 18150 id = 18 }
		name = "Troupes du Congo-Kasaï"
		strength = 45
		type = militia
		model = 1
		experience = 5
	max_strength = 50
		}
	}
landunit = {
	id = { type = 18150 id = 19 }
	name = "Troupes de l'Equateur"
	location = 906
	division = {
		id = { type = 18150 id = 20 }
		name = "Troupes de l'Equateur"
		strength = 35
		type = militia
		model = 1
		experience = 5
	max_strength = 50
		}
	}
landunit = {
	id = { type = 18150 id = 21 }
	name = "Troupes de la province orientale"
	location = 905
	division = {
		id = { type = 18150 id = 22 }
		name = "Troupes de la province orientale"
		strength = 45
		type = militia
		model = 1
		experience = 5
	max_strength = 50
		}
	}
landunit = {
	id = { type = 18150 id = 23 }
	name = "Troupes du Katanga"
	location = 898
	division = {
		id = { type = 18150 id = 24 }
		name = "Troupes du Katanga"
		strength = 50
		type = militia
		model = 1
		experience = 5
	max_strength = 50
		}
	}
landunit = {
	id = { type = 18150 id = 27 }
	name = "Force Publique"
	location = 899
	division = {
		id = { type = 18150 id = 28 }
		name = "Garnison de Léopoldville"
		strength = 20
		type = garrison
		model = 1
		experience = 0
		locked = yes
		}
	}

airunit = { 
	id = { type = 18150 id = 101 } 
	name = "Aviation Militaire/Militar Vliegwezen" 
	leader = 70109 # de Saint-Marcq
	base = 116 # Brussels
	location = 116 
	division = { 
		id = { type = 18150 id = 102 } 
		name = "1. Escadrille" 
		strength = 15 
		max_strength = 25 
		type = tactical_bomber 
		model = 1 
		}
	}
 
navalunit = { 
		id = { type = 18150 id = 201 } 
		name = "1ste Transportatie Smaldeel" 
		location = 114 
		base = 114 
		division = { 
			id = { type = 11500 id = 202 } 
			name = "1er Transport Naval" 
			type = transport 
		} 
	} 
 } 