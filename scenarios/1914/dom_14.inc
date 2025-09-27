 
 ############################## 
 # Country definition for DOM # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = DOM 
	ai             = "DOM_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 1
	transports       = 100 
	capital        = 1780 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 4 
   free_market    = 8 
   freedom      = 5 
   professional_army = 2
   defense_lobby     = 5 
   interventionism  = 1 
   }
  
  nationalprovinces   = {  1780  } 
  ownedprovinces     = {  1780  } 
  controlledprovinces  = {  1780  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  

	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Naval Infantry
	#Air Doctrines - ww1 techs

	#Troopships
	3810
	#Engineers
	1830 
 } 
  diplomacy = 
  {  relation = {  tag = CUB value = 50  } 
   relation = {  tag = HAI value = -30  } 
   relation = {  tag = USA value = 125  } 
   } 
  SpyInfo        = {  country = "DOM" NumberOfSpies = 1  } 
  landunit = 
  {  id    = {  type = 28000 id = 75  } 
   name   = "Ejercito de Rep. Dominicana" 
   location = 1780 
   Division = 
   {  id    = {  type = 28000 id = 7500  } 
    name   = "Ejercito Nacional" 
    strength = 5
    type   = infantry 
    model  = 0
	experience = 0
    } 
   } 
  } 
 