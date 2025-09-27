 
 ############################## 
 # Country definition for COS # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = COS 
	manpower        = 1
	ai             = "cos_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
	capital        = 2081 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
	democratic = 3
	political_left = 4
	free_market = 7
	freedom = 6 
	professional_army = 2
	defense_lobby     = 3 
	interventionism  = 2 
   }

   headofstate            = {  type = 9 id = 310112  } # Alfredo González Flores
   headofgovernment       = {  type = 9 id = 310106  } # Alfredo González Flores
   foreignminister        = {  type = 9 id = 310118  } # Manuel Castro Quesada
   armamentminister       = {  type = 9 id = 310119  } # Ricardo Jiménez Oreamuno
   ministerofsecurity     = {  type = 9 id = 310117  } # Francisco Aguilar Barquero
   ministerofintelligence = {  type = 9 id = 310111  } # Juan Bautista Quirós Segura
   chiefofstaff           = {  type = 9 id = 310105 } # Federico Tinoco Granados
   chiefofarmy            = {  type = 9 id = 310101  } # Federico Tinoco Granados
   chiefofnavy            = {  type = 9 id = 310103  } # Federico Tinoco Granados
   #chiefofair             = {  type = 9 id =  } #
   
  nationalprovinces   = {  2081 2083 } 
  ownedprovinces     = {  2081  2083 } 
  controlledprovinces  = {  2081  2083 } 
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

	#Basic Anti-Air Artillery Brigade 

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Naval Infantry

	#Engineers
	1830 

	#Troopships
	3810
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510  
} 
  diplomacy = 
  {  relation = {  tag = USA value = 100  } 
relation = {  tag = U08 value = 25  } 
relation = {  tag = ENG value = 25  } 
relation = {  tag = PAN value = 75  } 
relation = {  tag = NIC value = 50  } 
relation = {  tag = SAL value = 50  } 
relation = {  tag = HON value = 50  } 
relation = {  tag = GUA value = 50  } 
relation = {  tag = MEX value = 10  } 
relation = {  tag = SPA value = 25  } 
   } 
  SpyInfo        = {  country = "COS" NumberOfSpies = 1  } 
  
  # Americas Group 1 # 
  landunit = 
  {  id    = {  type = 25000 id = 60  } 
   name   = "Ejercito de Costa Rica" 
   location = 2081 
   Division = 
   {  id    = {  type = 25000 id = 6000  } 
    name   = "Ejercito de Costa Rica" 
    strength = 5
    type   = infantry 
    model  = 0
	experience = 0
    } 
   } 
  } 
 