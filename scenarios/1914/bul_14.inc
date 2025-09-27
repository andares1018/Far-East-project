 
 ############################## 
 # Country definition for BUL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = BUL 
	ai             = "BUL_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	# Resource Reserves 
	energy                 = 1500
	metal                  = 750
	rare_materials         = 375
	oil          = 500 
	supplies        = 500 
	money         = 50 
	manpower        = 24 
	capital        = 321 

	transports       = 110 
	escorts        = 4 
  diplomacy = 
  {  relation = {  tag = ENG value = 20  } 
   relation = {  tag = FRA value = 30  } 
   relation = {  tag = U08 value = 150  } 
   relation = {  tag = U09 value = 100  } 
   relation = {  tag = GRE value = -150  } 
   relation = {  tag = ROM value = -25  } 
   relation = {  tag = RUS value = 75  } 
   relation = {  tag = OTT value = -50  } 
   relation = {  tag = SER value = -150  }
   relation = {  tag = MTN value = -50 }
   relation = {  tag = ALB value = 200 }
   } 
  SpyInfo        = {  country = "BUL" NumberOfSpies = 6  } 

  nationalprovinces   = {  318 323 325 324 321 320 319 326 364 370 317 331 307 322 
 #Macedonia and Greece 
 328 333 363 365 366 
  } 
  ownedprovinces     = {  317 318 319 320 321 322 323 324 325 326 370 363  } 
  controlledprovinces  = {  317 318 319 320 321 322 323 324 325 326 370 363  } 
  claimedprovinces  = {  334 385 } 
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
  techapps               = { 
	#Early Fighter  
	4500
	#Early Bomber 
	4600 4610
	
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division
	1160  1170 
	#Naval Infantry

	#Engineers
	1830
	#Supply 
	1910 1920
	
	#Field Artillery 
	2290 
	
	#Scientific Management
	5810
	
	#Modern Agriculture  
	5700

	#Early Construction Engineering
	5800

	# Census Tabulating Machine
	5310
	
	#Medicine
	5600 
	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - exp central germany, turkey, austr, hun, bul, russia
	6500 6510 6530 6590 
	#Naval Doctrine
	8010 8020 8040 8050 8060 8070 8080 8100 8110 81300
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
	
}
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 4 
   free_market    = 6 
   freedom      = 5 
   professional_army = 6 
   defense_lobby     = 9 
   interventionism  = 9 
   } 
   
   headofstate            = {  type = 9 id = 95205  } # Ferdinand I
   headofgovernment       = {  type = 9 id = 95196  } # Vasil Radoslavov
   foreignminister        = {  type = 9 id = 95185  } # Vasil Radoslavov
   armamentminister       = {  type = 9 id = 95218  } # Dimitar Tonchev
   ministerofsecurity     = {  type = 9 id = 95233  } # Vasil Radoslavov
   ministerofintelligence = {  type = 9 id = 95202 } # Atanas Vatev
   chiefofstaff           = {  type = 9 id = 95239  } # Pravoslav Tenev
   chiefofarmy            = {  type = 9 id = 95139  } # Kliment Boyadzhiev
   chiefofnavy            = {  type = 9 id = 95151  } # Konstantin Kirkov
   chiefofair             = {  type = 9 id = 95138  } # Vasil Zlatarov
  
landunit =
  { id = { type = 19000 id = 1 }
   location = 321
     name = "Tsarska Bulgarska Armija"
        division = {
        id = { type = 19000 id = 2 }
        name = "Tsarska Bulgarska Armija"
        strength = 10
        type = hq
	model = 0
	experience = 20
        }
        division = {
        id = { type = 19000 id = 3 }
        name = "Kavalerijska Divizija"
        strength = 30
        type = cavalry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 4 }
   location = 321
     name = "1-a 'Sofijska' Pekhotna Divizija"
        division = {
        id = { type = 19000 id = 5 }
        name = "1-a Armija"
        strength = 10
        type = hq
	model = 0
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 6 }
        name = "I/1-a 'Sofijska' Pekhotna Divizija"
        strength = 15
        type = infantry
        model = 2
	extra = artillery
	brigade_model = 0
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 7 }
        name = "II/1-a 'Sofijska' Pekhotna Divizija"
        strength = 15
        type = infantry
        model = 2
	extra = cavalry_brigade
	brigade_model = 1
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 8 }
        name = "III/1-a 'Sofijska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 9 }
   location = 324
     name = "2-a 'Trakijska' Pekhotna Divizija"
        division = {
        id = { type = 19000 id = 10 }
        name = "2-a Armija"
        strength = 10
        type = hq
	model = 0
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 11 }
        name = "I/2-a 'Trakijska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 12 }
        name = "II/2-a 'Trakijska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 13 }
        name = "III/2-a 'Trakijska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 14 }
   location = 325
     name = "3-a 'Balkanska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 15 }
        name = "I/3-a 'Balkanska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 16 }
        name = "II/3-a 'Balkanska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 17 }
        name = "III/3-a 'Balkanska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 18 }
   location = 326
     name = "4-a 'Preslavska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 19 }
        name = "I/4-a 'Preslavska' Pekhotna Divizija"
        strength = 15
        type = infantry
        model = 2
	experience = 20
	extra = cavalry_brigade
	brigade_model = 1
        }
        Division = {
        id = { type = 19000 id = 20 }
        name = "II/4-a 'Preslavska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 21 }
        name = "III/4-a 'Preslavska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 22 }
	location = 317
	name = "5-a 'Dunavska' Pekhotna Divizija"
	division = {
		id = { type = 19000 id = 23 }
		name = "3-a Armija"
		strength = 10
		type = hq
		model = 0
		experience = 20
	}
	Division = {
		id = { type = 19000 id = 24 }
		name = "I/5-a 'Dunavska' Pekhotna Divizija"
		strength = 20
		type = infantry
		model = 2
		experience = 20
		extra = artillery
		brigade_model = 0
	}
	Division = {
		id = { type = 19000 id = 25 }
		name = "II/5-a 'Dunavska' Pekhotna Divizija"
		strength = 20
		type = infantry
		model = 2
		experience = 20
	}
	Division = {
		id = { type = 19000 id = 26 }
		name = "III/5-a 'Dunavska' Pekhotna Divizija"
		strength = 5
		type = infantry
		model = 1
		experience = 20
	}
  }
landunit =
  { id = { type = 19000 id = 27 }
   location = 318
     name = "6-a 'Bdinska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 28 }
        name = "I/6-a 'Bdinska' Pekhotna Divizija"
        strength = 15
        type = infantry
        model = 2
	experience = 20
	extra = artillery
	brigade_model = 0
        }
        Division = {
        id = { type = 19000 id = 29 }
        name = "II/6-a 'Bdinska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 30 }
        name = "III/6-a 'Bdinska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 31 }
   location = 320
     name = "7-a 'Rilska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 32 }
        name = "I/7-a 'Rilska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 33 }
        name = "II/7-a 'Rilska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 34 }
        name = "III/7-a 'Rilska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 35 }
   location = 322
     name = "8-a 'Tundzhanska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 36 }
        name = "I/8-a 'Tundzhanska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 37 }
        name = "II/8-a 'Tundzhanska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 38 }
        name = "III/8-a 'Tundzhanska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 39 }
   location = 323
     name = "9-a 'Plevenska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 40 }
        name = "I/9-a 'Plevenska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 41 }
        name = "II/9-a 'Plevenska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 20
        }
        Division = {
        id = { type = 19000 id = 42 }
        name = "III/9-a 'Plevenska' Pekhotna Divizija"
        strength = 5
        type = infantry
        model = 1
	experience = 20
        }
    }
landunit =
  { id = { type = 19000 id = 43 }
   location = 319
     name = "10-a 'Belomorska' Pekhotna Divizija"
        Division = {
        id = { type = 19000 id = 44 }
        name = "I/10-a 'Belomorska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
	experience = 10
        }
        Division = {
        id = { type = 19000 id = 45 }
        name = "II/10-a 'Belomorska' Pekhotna Divizija"
        strength = 20
        type = infantry
        model = 2
		experience = 10
        }
    }

navalunit = {
	id = {  type = 19000 id = 46  }
	name = "Podvizhna otbrana" 
	location = 326 #Varna
	base = 326
	Division = {
		id = {  type = 19000 id = 47  } 
		name = "1-vi divizion patrulni korabi" 
		type = destroyer 
		model = 0 
	} 
}

# BULGARIAN AIR FORCE
airunit = {
	id       = {  type = 19000 id = 48  }
	location = 321 #Sofia
	base     = 321
	name     = "Vazduhoplavatelen park" 
	Division = {
		id       = {  type = 19000 id = 49  }
		name     = "Aeroplanna rota"
		strength = 9
		type     = interceptor
		model    = 0
	} 
} 

} 
 
