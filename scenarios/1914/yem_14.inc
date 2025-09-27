 
 ############################## 
 # Country definition for YEM # 
 ############################## 
  
 country = 
 {   tag          = YEM 
	ai             = "YEM_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	manpower        = 5 
	puppet                 = OTT
	# Resource Reserves 
	energy                 = 180
	metal                  = 90
	rare_materials         = 45
	oil          = 200 
	supplies        = 200 
	money         = 10 
	capital        = 1050 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   free_market    = 8 
   freedom      = 9 
   professional_army = 2 
   defense_lobby     = 1 
   interventionism  = 1 
    } 
	
   headofstate            = {  type = 9 id = 445001  } # Yahya Muhammad Hamid ed-Din
   headofgovernment       = {  type = 9 id = 445026  } # Mahmud Nedim Akdilek
   foreignminister        = {  type = 9 id = 445003  } # Yahya Muhammad Hamid ed-Din
   armamentminister       = {  type = 9 id = 445027  } # Yahya Muhammad Hamid ed-Din
   ministerofsecurity     = {  type = 9 id = 445005  } # Yahya Muhammad Hamid ed-Din
   ministerofintelligence = {  type = 9 id = 445028  } # Yahya Muhammad Hamid ed-Din 
   chiefofstaff           = {  type = 9 id = 445007  } # Yahya Muhammad Hamid ed-Din 
   chiefofarmy            = {  type = 9 id = 445029  } # Yahya Muhammad Hamid ed-Din 
   #chiefofnavy            = {  type = 9 id = ###  } # ? 
   #chiefofair             = {  type = 9 id = ###  } # ?
	
	
  nationalprovinces   = {   1050 1051 1053 840 } 
  ownedprovinces     = {   1050   } 
  controlledprovinces  = {   1050   } 
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
    } 
  SpyInfo        = {   country = "YEM" NumberOfSpies = 1   } 
 
  landunit = 
  {  id    = {  type = 15900 id = 1  } 
   name   = "Zaydian army" 
   location = 1050 
   Division = 
   {  id    = {  type = 15900 id = 2  } 
    name   = "Zaydian bodyguard" 
    strength = 10
    type   = cavalry
	model = 0
	experience = 20
    } 
   Division = 
   {  id    = {  type = 15900 id = 3  } 
    name   = "Yemeni tribes" 
    strength = 10
    type   = cavalry
	model = 0
	experience = 20
    } 
   } 
  } 