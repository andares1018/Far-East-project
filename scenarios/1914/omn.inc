 
 ############################## 
 # Country definition for OMN # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = OMN 
	ai             = "OMN_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	puppet         = ENG 
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil          = 200 
	supplies        = 200 
	money         = 10 
	transports       = 100 
	capital        = 1052 
	dissent = 10
	manpower        = 8 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 4 
   freedom      = 4 
   free_market    = 5 
   professional_army = 3 
   defense_lobby     = 2 
   interventionism  = 3 
   }
   
   headofstate            = {  type = 9 id = 400029  } # Taimur bin Feisal
   headofgovernment       = {  type = 9 id = 400030  } # Robert Arthur Edward Benn
   foreignminister        = {  type = 9 id = 400031  } # Taimur bin Feisal 
   armamentminister       = {  type = 9 id = 400032  } # Taimur bin Feisal 
   ministerofsecurity     = {  type = 9 id = 400033  } # Taimur bin Feisal 
   ministerofintelligence = {  type = 9 id = 400034  } # Taimur bin Feisal 
   chiefofstaff           = {  type = 9 id = 400035  } # Percy Zachariah Cox 
   chiefofarmy            = {  type = 9 id = 400036  } # Percy Zachariah Cox 
   chiefofnavy            = {  type = 9 id = 400037  } # Percy Zachariah Cox 
   #chiefofair             = {  type = 9 id = ###  } # ?
   
  nationalprovinces   = { 840 1043 1052 } 
  ownedprovinces      = { 1043 1052 } 
  controlledprovinces = { 1043 1052 } 
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

	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 # 6510
	#Air Doctrines - ww1 techs
 } 
  diplomacy = 
  {  relation = {  tag = AST value = 40  } 
   relation = {  tag = BHU value = 40  } 
   relation = {  tag = CAN value = 40  } 
   relation = {  tag = ENG value = 150  } 
   relation = {  tag = FRA value = 50  } 
   relation = {  tag = U08 value = 1  } 
   relation = {  tag = U91 value = 125  } 
   relation = {  tag = ITA value = 15  } 
   relation = {  tag = NEP value = 5  } 
   relation = {  tag = NZL value = 25  } 
   relation = {  tag = SAF value = 25  } 
   relation = {  tag = SAU value = -15  } 
   relation = {  tag = OTT value = -35  } 
   relation = {  tag = USA value = 15  } 
   relation = {  tag = YEM value = 50  }
   relation = {  tag = U53 value = -10  } 
   relation = {  tag = U51 value = 10  } 
   relation = {  tag = PER value = -15  } 
   } 
  SpyInfo        = {  country = "OMN" NumberOfSpies = 1  } 
  landunit = 
  {  id    = {  type = 11114 id = 1  } 
   name   = "Royal Omani Army" 
   location = 1052 
   Division = 
   {  id    = {  type = 11114 id = 2  } 
    name   = "Royal Omani Bodyguard" 
    type   = militia
	model = 0
    strength = 10
	experience = 0
    } 
   } 
  } 
 