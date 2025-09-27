 
 ############################## 
 # Country definition for URU # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = URU 
	ai             = "URU_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
	capital        = 2052 
	manpower        = 0
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 2 
   freedom      = 5 
   free_market    = 5 
   professional_army = 3
   defense_lobby     = 4 
   interventionism  = 1 
   } 
   
  nationalprovinces   = {  2051 2052  } 
  ownedprovinces     = {  2051 2052  } 
  controlledprovinces  = {  2051 2052  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
  techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  
	#Great War Heavy Field Artillery 

	#Early Infantry Division
	1010 1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division 
	1160  1170  
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Mechanized Agriculture
	5700
	#Improved Construction Engineering

	#Basic Oil Refining


	#Naval Infantry

	#Engineers
	1830
	#ASW 18

	#Troopships
	3810
	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Firepower Focus Doctrine

	#Air Doctrines - ww1 techs
} 
  diplomacy = 
  {  relation = {  tag = ARG value = -50  } 
   relation = {  tag = BOL value = 10  } 
   relation = {  tag = BRA value = 125  } 
   relation = {  tag = CHL value = 20  } 
   relation = {  tag = COL value = 10  } 
   relation = {  tag = ECU value = 10  } 
   relation = {  tag = PAR value = 20  } 
   relation = {  tag = PRU value = 25  } 
   relation = {  tag = RUS value = 10  } 
   relation = {  tag = USA value = 100  } 
   relation = {  tag = VEN value = 10  } 
   relation = {  tag = U08 value = 30  } 
   relation = {  tag = ENG value = 30  }
   } 
  SpyInfo        = {  country = "URU" NumberOfSpies = 3  } 
  landunit = 
  {  id    = {  type = 13700 id = 40  } 
   name   = "Ejercito de Uruguay" 
   location = 2052 
   Division = 
   {  id    = {  type = 13700 id = 4000  } 
    name   = "1a Division de Infanteria" 
    strength = 40
    type   = infantry 
	model = 1
	experience = 0
	} 
   } 
  } 
 