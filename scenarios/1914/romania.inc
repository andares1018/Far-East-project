 
 ############################## 
 # Country definition for ROM # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = ROM 
	ai             = "ROM_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	capital        = 316 
	manpower        = 4
	# Resource Reserves 
	energy                 = 1020
	metal                  = 510
	rare_materials         = 255
	oil          = 500 
	supplies        = 500 
	money         = 15 
	transports       = 100 
  diplomacy = 
  {  relation = {  tag = BUL value = -15  } 
   relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 50  } 
   relation = {  tag = U08 value = 50  } 
   relation = { tag = U09 value = -50 }
   relation = 
   {  tag    = GRE 
    value   = 100 
    guaranteed = { day = 1 month = june year = 1914 }
    } 
   relation = {  tag = ITA value = 50  } 
   relation = {  tag = RUS value = 50  } 
   relation = 
   {  tag    = OTT value   = -30 } 
   } 
  SpyInfo        = {  country = "ROM" NumberOfSpies = 5  } 
  nationalprovinces   = {  285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 621 
   } 
  ownedprovinces     = {  297 298 299 307 308 309 310 311 312 313 314 315 316  
   } 
  controlledprovinces  = {  297 298 299 307 308 309 310 311 312 313 314 315 316 
   } 
  # Eastern Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = {
	#Early Fighter  
	4500

	#Early Bomber 
	4600 4610

	#Great War Heavy Field Artillery 
	2290  

	#Medicine
	5600

	#Engineers
	1830  
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  1170 

	#Modern Agriculture 
	5700
	#Early Construction Engineering
	5800
	#Scientific Management
	5810
	# Census Tabulating Machine
	5310

	#Improved Destroyer 
	3010 3020 3030
	#Short Range Submarine 
	3610 
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8120
	#Air Doctrines - ww1 techs
	27480 27490

	#Troopships
	3810
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 6 
   freedom      = 4 
   free_market    = 4 
   professional_army = 5 
   defense_lobby     = 5 
   interventionism  = 6 
   }
   
   headofstate            = {  type = 9 id = 110158  } # Carol I
   headofgovernment       = {  type = 9 id = 110196  } # Ion I. C. Bratianu
   foreignminister        = {  type = 9 id = 110136  } # Emanoil Porumbaru
   armamentminister       = {  type = 9 id = 110164  } # Emil Costinescu (not validated)
   ministerofsecurity     = {  type = 9 id = 110185  } # Vasile G. Mortun
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 110127  } # Vasile Zottu
   chiefofarmy            = {  type = 9 id = 110120  } # Ferdinand I
   #chiefofnavy            = {  type = 9 id = ###  } # Eustatiu Sebastian
   #chiefofair             = {  type = 9 id = 220010  } # ?
	
   
landunit = { 
        id = { type = 16111 id = 1 } 
        name = "Armata Regala" 
        location = 316
        division = { 
            	id = { type = 16111 id = 4 } 
            	name = "Cartier General" 
            	strength = 30
            	type = hq
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 2 } 
            	name = "Divisie 22 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 3 } 
            	name = "Divisie 23 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 5 } 
        name = "Corp 1 Armata" 
        location = 315 # Craiova 
        division = { 
            	id = { type = 16111 id = 6 } 
            	name = "Divisie 1 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 7 } 
            	name = "Divisie 2 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2  
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 8 } 
            	name = "Divisie 11 Infanterie" 
            	strength = 20
            	type = infantry
		model = 1
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 9 } 
            	name = "Armata I" 
            	strength = 30
            	type = hq
		model = 0
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 10 } 
        name = "Corp 2 Armata" 
        location = 316 # Bucuresti 
        division = { 
            	id = { type = 16111 id = 11 } 
            	name = "Divisie 3 Infanterie" 
            	strength = 40
            	type = infantry 
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 12 } 
            	name = "Divisie 4 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 13 } 
            	name = "Divisie 12 Infanterie" 
            	strength = 20
            	type = infantry 
		model = 1
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 14 } 
            	name = "Divisie 1 Cavalerie" 
            	strength = 40
            	type = cavalry 
		model = 2
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 15 } 
            	name = "Armata II" 
            	strength = 30
            	type = hq
		model = 0
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 16 } 
        name = "Corp 3 Armata" 
        location = 311
        division = { 
            	id = { type = 16111 id = 17 } 
            	name = "Divisie 5 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 18 } 
            	name = "Divisie 6 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 19 } 
            	name = "Divisie 13 Infanterie" 
            	strength = 20
            	type = infantry 
		model = 1
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 20 } 
            	name = "Armata III" 
            	strength = 30
            	type = hq
		model = 0
		experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 21 } 
        name = "Corp 4 Armata" 
        location = 297 # Iasi 
        division = { 
            	id = { type = 16111 id = 22 } 
            	name = "Divisie 7 Infanterie" 
            	strength = 40
            	type = infantry 
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 23 } 
            	name = "Divisie 8 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 24 } 
            	name = "Divisie 14 Infanterie" 
            	strength = 20
            	type = infantry 
		model = 1
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 25 } 
            	name = "Divisie 2 Cavalerie" 
            	strength = 40
            	type = cavalry 
		model = 2
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 26 } 
        name = "Corp 5 Armata" 
        location = 310
        division = { 
            	id = { type = 16111 id = 27 } 
            	name = "Divisie 9 Infanterie" 
            	strength = 40
            	type = infantry 
		model = 2
		extra = cavalry_brigade
		brigade_model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 28 } 
            	name = "Divisie 10 Infanterie" 
            	strength = 40
            	type = infantry
		model = 2
		experience = 5
        	} 
        division = { 
            	id = { type = 16111 id = 29 } 
            	name = "Divisie 15 Infanterie" 
            	strength = 20
            	type = infantry 
		model = 1
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 30 } 
        name = "Corp 6 Armata" 
        location = 315
        division = { 
            	id = { type = 16111 id = 31 } 
            	name = "Divisie 16 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 32 } 
            	name = "Divisie 17 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 33 } 
            	name = "Divisie 18 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
    	} 
landunit = { 
        id = { type = 16111 id = 34 } 
        name = "Corp 7 Armata" 
        location = 311
        division = { 
            	id = { type = 16111 id = 35 } 
            	name = "Divisie 19 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 36 } 
            	name = "Divisie 20 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
        division = { 
            	id = { type = 16111 id = 37 } 
            	name = "Divisie 21 Infanterie" 
            	strength = 5
            	type = infantry
		model = 0
		experience = 0
        	} 
    	} 

airunit = { 
	id = { type = 16111 id = 100 } 
	name = "Corp al Aeronautilor Permanenti" 
	location = 316
	base = 316

	division = { 
		id = { type = 16111 id = 101 } 
		name = "Grup 1" 
		strength = 30 
		type = tactical_bomber 
		model = 1 
		}
	}

navalunit = { 
        id = { type = 16111 id = 500 } 
        name = "Maritime Division" 
        location = 310 # Constanta
        base = 310 # Constanta

        division = { id = { type = 16111 id = 501 } name = "Elisabeta" type = light_cruiser model = 0 } 
        division = { id = { type = 16111 id = 502 } name = "1st Flotilla" type = destroyer model = 0 } 
    	} 



}
