############################## 
# Country definition for U52 # Jebel Shammar
############################## 
  
 country = 
 {   tag          = U52
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	manpower        = 5 
	# Resource Reserves 
	energy                 = 180
	metal                  = 90
	rare_materials         = 45
	oil          = 200 
	supplies        = 200 
	money         = 10 
	capital        = 1044 
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   free_market    = 6 
   freedom      = 7 
   professional_army = 5 
   defense_lobby     = 6 
   interventionism  = 4 
    }
	
  nationalprovinces   = {   1044 1046 1048 1049 1045 1040 1031 1030 1022 1024 1025 1038 1032 } 
  ownedprovinces     = {   1044 1046 } 
  controlledprovinces  = {   1044 1046  }
  claimedprovinces = { 1047 1041 } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500 # 6510   
	#Air Doctrines - ww1 techs
	#Engineers
  } 
  diplomacy = 
  {  
relation = { tag = SAU value = -200 }
relation = { tag = ENG value = -50 }
relation = { tag = YEM value = 25 }
relation = { tag = FRA value = -15   }  
relation = { tag = ITA value = -15   } 
relation = {   tag = OMN value = -125  } 
   relation = {   tag = PER value = 0  }  
   relation = {   tag = GRE value = -15   } 
   relation = {   tag = U02 value = -25   } 
   relation = {   tag = U08 value = 25  }
   relation = {   tag = U09 value = 25  }   
   relation = {   tag = U53 value = 25   } 
   relation = {   tag = U91 value = 25   } 
   relation = {   tag = ETH value = 25   } 
# relation = {   tag = SOM value = 35   } 
    } 
  SpyInfo        = {   country = "U52" NumberOfSpies = 2   } 

  landunit = 
  {  location = 1044
   id    = {  type = 25400 id = 1  } 
   name   = "Rashidian army" 
   Division = 
   {  id    = {  type = 25400 id = 2  } 
    name   = "Rashidi bodyguard" 
    type   = cavalry
	model = 0
    strength = 30
	experience = 10
    } 
   Division = 
   {  id    = {  type = 25400 id = 3  } 
    name   = "Ujman tribe" 
    type   = cavalry
	model = 0
    strength = 100
	experience = 0
    } 
   } 
  } 
