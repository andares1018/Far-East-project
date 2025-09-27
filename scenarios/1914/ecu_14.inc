 
 ############################## 
 # Country definition for ECU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = ECU 
	ai             = "ECU_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
	capital        = 2042 
	manpower        = 4
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 6 
   free_market    = 8 
   freedom      = 5 
   professional_army = 5 
   defense_lobby     = 5 
   interventionism  = 1 
   } 

  nationalprovinces   = {  2007 2008 2010 2033 2040 2041 2042  } 
  ownedprovinces     = {  2007 2008 2010 2033 2040 2041 2042  } 
  controlledprovinces  = {  2007 2008 2010 2033 2040 2041 2042  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160   

	#Naval Infantry

	#Engineers
	1830 
	#Early Static Anti-Air Artillery 
	2800
	#Basic Anti-Air Artillery Brigade 


	#Modern Agriculture
	5700
	#Improved Construction Engineering


	#Troopships
	3810 

	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510  
} 
  diplomacy = 
  {  relation = {  tag = ARG value = 10  } 
   relation = {  tag = BOL value = -20  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = CHL value = 20  } 
   relation = {  tag = COL value = 20  } 
   relation = {  tag = PAR value = 25  } 
   relation = {  tag = PRU value = -50  } 
   relation = {  tag = URU value = 10  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = VEN value = 20  } 
   relation = {  tag = U08 value = 25  } 
   relation = {  tag = ENG value = 25  } 
   } 
  SpyInfo        = {  country = "ECU" NumberOfSpies = 3  } 
  landunit = 
  {  id    = {  type = 10800 id = 1  } 
   name   = "Ejercito Ecuatoriano" 
   location = 2042 
   Division = 
   {  id    = {  type = 10800 id = 2  } 
    name   = "Ejercito Ecuatoriano" 
    strength = 35
    type   = infantry 
    model  = 1
	experience = 0
    } 
   } 
	navalunit = { 
        id = { type = 10800 id = 3 } 
        name = "Ecuadorian Fleet" 
        location = 2042 
        base = 2042 
        
	division = { id = { type = 10800 id = 4 } name = "1st Flotilla" type = destroyer model = 0 } 
    	}
	
	
  } 
 