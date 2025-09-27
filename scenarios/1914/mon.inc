 
 ############################## 
 # Country definition for MON # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = MON
	ai	= "mon_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil          = 200 
	supplies        = 500 
	money         = 10 
	manpower        = 7 
	transports       = 100 
	capital        = 1124
	flag_ext = _14 
  diplomacy = 
  {  relation = {  tag = UCH value = -150  } 
   relation = {  tag = TIB value = 150  } 
   relation = {  tag = RUS value = 100  } 
   relation = {  tag = JAP value = 50  } 
   } 
  SpyInfo        = {  country = "MON" NumberOfSpies = 3  } 
  nationalprovinces   = {  1120 1121 1122 1123 1124 1125 1270 1272 1238 1239 1240 1206 1209 1162 1169 1268 1265 1119 } 
  ownedprovinces     = {  1120 1121 1122 1123 1124 1125  } 
  controlledprovinces  = {  1120 1121 1122 1123 1124 1125  } 

  headofstate            = { type = 9 id = 300110 }
  headofgovernment       = { type = 9 id = 300097 } #Tögs-Ochiryn Namnansüren
  foreignminister        = { type = 9 id = 300096 } #Balingiin Tserendorj

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
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 3
   freedom      = 5 
   free_market    = 3 
   professional_army = 3 
   defense_lobby     = 3 
   interventionism  = 4 
   }
   
  landunit = 
  {  location = 1124 
   name   = "Armija Mongol Nayramdakh" 
   id    = {  type = 30500 id = 1  } 
   Division = 
   {  id  = {  type = 30500 id = 5  } 
    name = "1. Nayramdakh Opolcheniya Div." 
    type = militia 
	strength = 20
	model = 1
	experience = 0
    } 
   Division = 
   {  id  = {  type = 30500 id = 6  } 
    name = "2. Nayramdakh Opolcheniya Div." 
    type = militia 
	strength = 20
	model = 0
	experience = 0
    }
   Division = 
   {  id  = {  type = 30500 id = 7  } 
    name = "4. Nayramdakh Opolcheniya Div." 
    type = cavalry 
	strength = 20
	model = 0
	experience = 5
    }

   } 
  } 
 