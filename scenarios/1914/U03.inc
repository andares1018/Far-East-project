 
 ############################## 
 # Country definition for U03 INDOCHINESUNION # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
 province = 
 {  id     = 1395 
  naval_base = {  size = 4 current_size = 4  } 
  }       # Hanoi 
 province = 
 {  id     = 1399 
  #supplypool = 100 
  #oilpool  = 1 
  naval_base = {  size = 4 current_size = 4  } 
  }       # Saigon 
  
 country = 
 {  tag          = U03 
	capital        = 1395 
	puppet         = FRA
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }  
	# Resource Reserves 
	energy                 = 420
	metal                  = 210
	rare_materials         = 105
	oil          = 500 
	supplies        = 2000 
	money         = 50 
	manpower        = 32
	transports       = 100 
	escorts        = 10 
  
  diplomacy = 
  {   
  relation = {  tag = FRA value = 50 access = yes  }  
   } 
  SpyInfo        = {  country = "U03" NumberOfSpies = 3  } 
  
   headofstate            = {  type = 9 id = 830202 } # Joost van Vollenhoven
   
  nationalprovinces   = {    } 
  
  ownedprovinces     = {   
  1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 
   } 
  
  controlledprovinces  = {   
  1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 
   } 
  
 # FRA 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Infantry Division
	1010 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160 1170 
	#Great War Infantry Division   
	#Interbellum 1930 Supply 

	#Basic Armoured Car  
	#Great War Heavy Field Artillery 
	2290    
	#Early Anti-Tank Artillery 

	#Early Static Anti-Air Artillery 

	#Great War Destroyer 
	3010 
	#Interwar Light Cruiser 
	3110 
	#Early Heavy Cruiser 

	#Interwar Fighter  

	#Interwar Bomber 

	#Improved Construction Engineering

	#Naval Infantry

	#ASW 18

	#Troopships
	3810
	#Engineers
	1830 

	#Naval Doctrines
	8010
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510 6530
 }    
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   free_market    = 8 
   freedom      = 10 
   professional_army = 2
   defense_lobby   = 3 
   interventionism  = 5 
   }
   
 # ################# 
  # ### OOB #### 
  # ################# 
   
  landunit = 
  {  id    = {  type = 13500 id = 186  } 
   name   = "Groupe de l'Indochine" 
   location = 1399 
   Division = 
   {  id    = {  type = 13500 id = 1871  } 
    name   = "1ère Division Coloniale" 
    strength = 45
    type   = infantry 
	model = 1
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 13500 id = 1881  } 
   name   = "Tirailleurs annamites" 
   location = 1397 
   Division = 
   {  id    = {  type = 13500 id = 1891  } 
    name   = "1er Rgt. Tirailleurs Annamites" 
    strength = 20
	max_strength = 40
    type   = militia
	model = 1
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 13500 id = 1892  } 
   name   = "Tirailleurs tonkinois" 
   location = 1395 
   Division = 
   {  id    = {  type = 13500 id = 1893  } 
    name   = "1/2/3/4ème Rgts. Tirailleurs Tonkinois" 
    strength = 60
	max_strength = 100
    type   = militia
	model = 1
	experience = 5
    } 
   } 
  }