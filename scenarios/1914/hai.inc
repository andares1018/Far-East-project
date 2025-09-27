 
 ############################## 
 # Country definition for HAI # 
 ############################## 

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = HAI
	ai             = "HAI_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	manpower        = 2
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
	capital        = 1781 
	dissent = 10
  SpyInfo        = {  country = "HAI" NumberOfSpies = 1  } 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 6 
   free_market    = 4 
   freedom      = 6 
   professional_army = 2
   defense_lobby     = 5 
   interventionism  = 2 
   } 
   
   headofstate            = {  type = 9 id = 350098  } # Oreste Zamor
   headofgovernment       = {  type = 9 id = 350089  } # Oreste Zamor
   foreignminister        = {  type = 9 id = 350103  } # Jacques Nicolas Léger
   
  nationalprovinces   = {  1781 } 
  ownedprovinces     = {  1781  } 
  controlledprovinces  = {  1781  } 
  claimedprovinces = { 1780 }
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#1916 lgt. Infantry Division  
	1010 
	#1916 Cavalry Division  
	13060  
	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 6510
	#Air Doctrines - ww1 techs
  } 
  diplomacy = 
  {  relation = {  tag = CUB value = 30  } 
   relation = {  tag = DOM value = -75  } 
   relation = {  tag = USA value = 100 access = yes } 
   relation = {  tag = ENG value = 25  } 
   relation = {  tag = U08 value = 25  } 
   relation = {  tag = FRA value = 35  } 
   relation = {  tag = CAN value = 35  } 
   } 
  landunit = 
  {  id    = {  type = 17500 id = 53  } 
   name   = "Armée d'Haïti" 
   location = 1781 
   Division = 
   {  id    = {  type = 17500 id = 5301  } 
    name   = "Armée d'Haïti" 
    strength = 15
    type   = infantry 
	model = 0
	experience = 0
    } 
   } 
  } 
 