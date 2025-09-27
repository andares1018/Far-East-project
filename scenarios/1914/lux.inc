 
 ############################## 
 # Country definition for LUX # 
 ############################## 
  
 country = 
 {  tag          = LUX 
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	ai           = "lux_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 2
	capital        = 109 
  diplomacy = 
  {  relation = {  tag = BEL value = 150  } 
   relation = {  tag = DEN value = 100  } 
   relation = {  tag = FRA value = 120  } 
   relation = {  tag = U08 value = 100  } 
   relation = {  tag = HOL value = 150  } 
   relation = {  tag = NOR value = 50  } 
   relation = {  tag = SWE value = 50  } 
   relation = {  tag = USA value = 30  } 
   relation = {  tag = BRA value = 25  } 
   relation = {  tag = ENG value = 50  } 
   } 
  SpyInfo        = {  country = "LUX" NumberOfSpies = 3  } 
  nationalprovinces   = {  109  } 
  ownedprovinces     = {  109  } 
  controlledprovinces  = {  109  } 
  # Western Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290    
	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  
	#Early Static Anti-Air Artillery 

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 
	#Medicine
	5600
	#Basic Oil Refining 

	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Great War Hospital System 
	14000
	#Air Doctrines - ww1 techs
}  
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 4 
   freedom      = 9 
   free_market    = 8 
   professional_army = 2
   defense_lobby     = 2 
   interventionism  = 1 
   } 
   
   headofstate            = {  type = 9 id = 385083  } # Marie-Adélaïde
   headofgovernment       = {  type = 9 id = 385076  } # Paul Eyschen
   foreignminister        = {  type = 9 id = 385072 } # Paul Eyschen
   armamentminister       = {  type = 9 id = 385088  } # Mathias Mongenast
   ministerofsecurity     = {  type = 9 id = 385092  } # Pierre Braun
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   #chiefofstaff           = {  type = 9 id = ###  } # ?
   #chiefofarmy            = {  type = 9 id = ###  } # ?
   #chiefofnavy            = {  type = 9 id = ###  } # ?
   #chiefofair             = {  type = 9 id = ###  } # ?
   
   
   
  } 
 