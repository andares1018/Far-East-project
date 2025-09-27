 ############################## 
 # Country definition for NEP # 
 ############################## 
  
 country = 
 {  tag          = NEP 
	ai             = "NEP_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	puppet         = ENG 
	control        = ENG 
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil          = 200 
	supplies        = 200 
	money         = 10 
	transports       = 100 
	capital        = 1457 
	manpower        = 7 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   freedom      = 6 
   free_market    = 5 
   professional_army = 3 
   defense_lobby     = 2 
   interventionism  = 2 
   }
	
   headofstate            = {  type = 9 id = 395058  } # Tribhuhvan Bir Bikram Shah
   headofgovernment       = {  type = 9 id = 395057  } # Chandra Shumshere Rana
   #foreignminister        = {  type = 9 id = 245072  } 
   #armamentminister       = {  type = 9 id = 245076  } 
   #ministerofsecurity     = {  type = 9 id = 245079  } 
   #ministerofintelligence = {  type = 9 id = 245078 } 
   #chiefofstaff           = {  type = 9 id = 245068  } 
   #chiefofarmy            = {  type = 9 id = 245065  } 
   #chiefofnavy            = {  type = 9 id = 245081  } 
   #chiefofair             = {  type = 9 id = 245080  }
   
  nationalprovinces   = {  1451 1452 1457 } 
  ownedprovinces     = {  1457  } 
  controlledprovinces  = {  1457  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  
	2290
	#1916 lgt. Infantry Division  
	1010 
	#1916 Cavalry Division  

	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs
  } 
  diplomacy = 
  {  relation = {  tag = AST value = 200  } 
   relation = {  tag = BHU value = 200  } 
   relation = {  tag = CAN value = 200  } 
   relation = {  tag = ENG value = 200  } 
   relation = {  tag = FRA value = 150  } 
   relation = {  tag = U08 value = 1  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = NZL value = 200  } 
   relation = {  tag = OMN value = 150  } 
   relation = {  tag = SAF value = 200  } 
   relation = {  tag = USA value = 100  } 
   relation = {  tag = YEM value = 150  } 
   } 
  SpyInfo        = {  country = "NEP" NumberOfSpies = 2  } 
  
  landunit = 
  {  location = 1457 
   name   = "Royal Nepalese Army" 
   id    = {  type = 31500 id = 1  } 
   Division = 
   {  id  = {  type = 31500 id = 2  } 
    name = "Regular Army" 
    type = infantry 
	model = 1
	strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 31500 id = 3  } 
    name = "Provincial Forces" 
    type = militia
	model = 0
	strength = 100
	experience = 0
    } 
   } 
  } 
 