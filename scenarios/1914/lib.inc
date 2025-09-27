 
 ############################## 
 # Country definition for LIB # 
 ############################## 
   
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = LIB
	ai	= "lib_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	puppet         = USA 
	control        = USA 
	# Resource Reserves 
	energy                 = 120
	metal                  = 60
	rare_materials         = 30
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
	capital        = 969 
	dissent = 3
	manpower        = 1
  SpyInfo        = {  country = "LIB" NumberOfSpies = 1  } 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 5 
   freedom      = 3 
   free_market    = 4 
   professional_army = 2
   defense_lobby     = 3 
   interventionism  = 1 
   } 
   
  nationalprovinces   = {  969  } 
  ownedprovinces     = {  969  } 
  controlledprovinces  = {  969  } 
  # ROTW Minor Tech '14 
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
  {  
   relation = {  tag = USA value = 200  } 
   relation = {  tag = ENG value = 50  } 
   relation = {  tag = U08 value = 100  } 
   relation = {  tag = FRA value = 75  } 
   relation = {  tag = HOL value = 20  }
   relation = {  tag = DEN value = 20  }  
   } 

  landunit = 
  {  location = 969 
   id    = {  type = 25500 id = 1  } 
   name   = "Liberian Frontier Force" 
   Division = 
   {  id    = {  type = 25000 id = 2  } 
    name   = "Liberian Frontier Force" 
    type   = militia 
	model = 1
    strength = 5
	experience = 0
    } 
   } 
  } 
 