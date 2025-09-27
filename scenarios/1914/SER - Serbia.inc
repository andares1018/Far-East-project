 
 ############################## 
 # Country definition for SER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag			= SER
	ai			= "SER_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes revolter_set = yes } } 
	# Resource Reserves 
	energy                 = 720
	metal                  = 360
	rare_materials         = 180
	oil          = 500 
	supplies        = 500 
	money         = 15 
	transports       = 100 
	capital        = 338 
	manpower        = 30 # should increase only with mobilisation decision
  diplomacy = 
  {  relation = {  tag = BUL value = -100  } 
   
   
   relation = {  tag = FRA value = 150  }
   relation = {  tag = ENG value = 90  }
   relation = {  tag = RUS value = 170  }
   relation = {  tag = MTN value = 200 guaranteed = { day = 11 month = february year = 1914 }  }  
   
   relation = {  tag    = GRE value   = 100 } 

   relation = {  tag = U08 value = -10  }
   relation = { tag = OTT value = -125 } 
   relation = {  tag    = ROM     value   = 100 }
 }  
  SpyInfo        = {  country = "SER" NumberOfSpies = 4  } 
  nationalprovinces   = {   327 329 330 331 335 336 337 338 339 340 342 354
   } 
  ownedprovinces     = {   327 328 329 330 331 333 334 338 339 340 342  
   } 
  controlledprovinces  = {   327 328 329 330 331 333 334 338 339 340 342  
   } 
  claimedprovinces = { 328 333 334 353 355 356 357 358 359 361 }
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Great War Heavy Field Artillery 
	2290 
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 13080
	#Early Mountain Division
	1160  1170 

	#Naval Infantry

	#Engineers
	1830  
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600

	#Troopships
	3810
	#Modern Agriculture  
	5700
	#Early Construction Engineering
	5800
	#Scientific Management
	5810
	# Census Tabulating Machine
	5310

	#Landdoctrine ww1 - rest
	6500 6510 6530 6580
	#Interceptors  
	4500
	#Exp.  Bomber 
	4600
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   freedom      = 5 
   free_market    = 5 
   professional_army = 4 
   defense_lobby   = 3 
   interventionism  = 6 
   }
   
   headofstate            = {  type = 9 id = 415093  } # Peter I
   headofgovernment       = {  type = 9 id = 415080  } # Nikola Pasic
   foreignminister        = {  type = 9 id = 415071  } # Nikola Pasic
   armamentminister       = {  type = 9 id = 415103  } # Lazar Pacu
   ministerofsecurity     = {  type = 9 id = 415114  } # Stojan Protic
   ministerofintelligence = {  type = 9 id = 415089  } # Dragutin Dimitrijevic
   chiefofstaff           = {  type = 9 id = 415054  } # Radomir Putnik
   #chiefofarmy            = {  type = 9 id = ###  	 } # Stepa Stepanovic (de facto)
   #chiefofnavy            = {  type = 9 id = ###  	 } # no navy
   chiefofair             = {  type = 9 id = 415041  } # Kosta Miletic
   
   
 landunit = {   
 id = {  type = 10200 id = 1  } 
 name = "1. Moravski Vojni Okrug" 
 location = 330
 Division = {   
 id = {  type = 10200 id = 2  } 
 name = "Moravska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 25
	experience = 20
  }    
 Division = {   
 id = {  type = 10200 id = 3  } 
 name = "Moravska divizija II poziva" 
 type = infantry 
	model = 1
 strength = 5
	experience = 20
  } 
 } 
 landunit = {   
 id = {  type = 10200 id = 4  } 
 name = "2. Drinski Vojni Okrug" 
 location = 340
 Division = {   
 id = {  type = 10200 id = 5  } 
 name = "Drinska divizija I poziva" 
 type = infantry 
	model = 2
 strength = 25
	experience = 20
   }
 Division = {   
 id = {  type = 10200 id = 6  } 
 name = "Drinska divizija II poziva" 
 type = infantry 
	model = 1
 strength = 5
	experience = 20
   } 
 } 
  landunit = {   
 id = {  type = 10200 id = 7  } 
 name = "3. Dunavski Vojni Okrug" 
 location = 338 #Beograd 
 leader = 415050 # Radomir Putnik
 Division = {   
 id = {  type = 10200 id = 8  } 
 name = "Vojska Srbje Generalshtaba" 
 type = hq
 strength = 25
	model = 0
	experience = 20
  } 
 Division = {   
 id = {  type = 10200 id = 9  } 
 name = "Dunavska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 25
	experience = 20
  }
 Division = {   
 id = {  type = 10200 id = 10  } 
 name = "Dunavska divizija II poziva" 
 type = infantry 
 model = 1
 strength = 5
	experience = 20
  }
 Division = {   
 id = {  type = 10200 id = 11  } 
 name = "Konjicka divizija" 
 type = cavalry 
 model = 1
 strength = 40
	experience = 20
   } 
 }   
  landunit = 
  {  id    = {  type = 10200 id = 12  } 
   location = 327
   name   = "4. Sumadijski Vojni Okrug" 
 Division = {   
 id = {  type = 10200 id = 13  } 
 name = "Sumadijska divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 25
	experience = 20
  } 
   Division = 
   {  id    = {  type = 10200 id = 14  } 
    name   = "Sumadijska divizija II poziva" 
    strength = 5
    type   = infantry 
	model = 1
	experience = 20
    } 
   } 
 landunit = {   
 id = {  type = 10200 id = 15  } 
 name = "5. Timocki Vojni Okrug" 
 location = 331
 Division = {   
 id = {  type = 10200 id = 16  } 
 name = "Timocka divizija I poziva" 
 type = infantry
 strength = 25
	model = 2
	experience = 20
  } 
  Division = {   
 id = {  type = 10200 id = 17  } 
 name = "Timocka divizija II poziva" 
 type = infantry 
	model = 1
 strength = 5
	experience = 20
  } 
 } 
 landunit = {   
 id = {  type = 10200 id = 18  } 
 name = "6/7/8/9/10. Vojni Okrug" 
 location = 333
  Division = {   
 id = {  type = 10200 id = 19  } 
 name = "Kombinovana divizija I poziva" 
 type = infantry 
 model = 2 # equipped from french delivered weapons
 strength = 25
	experience = 0
  }
 } 
} 
 