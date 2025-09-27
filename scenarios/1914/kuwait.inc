 
 ############################## 
 # Country definition for U91 # Kuwait
 ############################## 
  
 country = 
 {   tag          = U91 
	puppet 		  = ENG
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes revolter_set = yes } }
	manpower        = 7 
	# Resource Reserves 
	energy                 = 180
	metal                  = 90
	rare_materials         = 45
	oil          = 200 
	supplies        = 200 
	money         = 10 
	capital        = 1041 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   free_market    = 8 
   freedom      = 7 
   professional_army = 3 
   defense_lobby     = 3 
   interventionism  = 3 
    } 

   headofstate            = {  type = 9 id = 1270021  } # Mubarak Al-Sabah
   headofgovernment       = {  type = 9 id = 1270061  } # William Henry Irvine Shakespear
   foreignminister        = {  type = 9 id = 1270023  } # Mubarak Al-Sabah
   armamentminister       = {  type = 9 id = 1270024  } # Mubarak Al-Sabah
   ministerofsecurity     = {  type = 9 id = 1270025  } # Mubarak Al-Sabah
   ministerofintelligence = {  type = 9 id = 1270026  } # Mubarak Al-Sabah
   chiefofstaff           = {  type = 9 id = 1270066  } # Percy Zachariah Cox
   chiefofarmy            = {  type = 9 id = 1270067  } # Percy Zachariah Cox
   chiefofnavy            = {  type = 9 id = 1270068  } # Percy Zachariah Cox
   #chiefofair             = {  type = 9 id = ###  } # ?
	
  nationalprovinces   = {   1041  } 
  ownedprovinces     = {   1041  } 
  controlledprovinces  = {   1041  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500 # 6510   
	#Air Doctrines - ww1 techs
	#Engineers
  } 
  diplomacy = 
  {  
   relation = {  tag = ENG value = 200 access = yes } 
   relation = {  tag = SAU value = -20  } 
   relation = {  tag = U91 value = -20  } 
   relation = {  tag = U50 value = -10  } 
   relation = {  tag = OTT value = -150 } 
   relation = {  tag = PER value = -25  } 

    } 
  SpyInfo        = {   country = "U91" NumberOfSpies = 1   } 

  landunit = 
  {  location = 1041
   id    = {  type = 25300 id = 1  } 
   name   = "Kuwaiti army" 
   Division = 
   {  id    = {  type = 25300 id = 2  } 
    name   = "Kuwaiti army" 
    type   = cavalry
	model = 0
    strength = 30
	experience = 0
    } 
   } 
 }