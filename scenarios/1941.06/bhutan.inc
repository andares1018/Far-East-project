 
 ############################## 
 # Country definition for BHU # 
 ############################## 
  
 country = 
 {  tag                    = BHU
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } } 
	puppet                 = ENG 
	manpower               = 0 
	# Resource Reserves 
	energy                 = 200
	metal                  = 200
	rare_materials         = 100
	oil                    = 200 
	supplies               = 200 
	money                  = 10 
	capital                = 1456 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 8 
     freedom           = 9 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1456  } 
   ownedprovinces         = {  1456  } 
   controlledprovinces    = {  1456  } 
	# ROTW Minor Tech '41 
	# Group E 1941 techs 
	# ###################### 
	techapps = {  
	#Interwar Armoured Car  
	2860
	# Inf support 
	1910 1920 1930 1940 1950 1960 1970
	#Light Field Artillery  
	2290
	#SW Tank 
	7600 7610	
	#1916 lgt. Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1160  1170 1180 1190 1200 1210 1220 1230 
	#1916 Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Construction
	5800
	# Early Agriculture
	5700 
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
	
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AST value = 200  } 
     relation = {  tag = CAN value = 200  } 
     relation = {  tag = ENG value = 200  } 
     relation = {  tag = U01 value = 150  } 
     relation = {  tag = GER value = -200  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = -100  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "BHU" NumberOfSpies = 1  } 
   headofstate            = {  type = 9 id = 330001  } 
   headofgovernment       = {  type = 9 id = 330002  } 
   foreignminister        = {  type = 9 id = 330015  } 
   armamentminister       = {  type = 9 id = 330023  } 
   ministerofsecurity     = {  type = 9 id = 330031  } 
   ministerofintelligence = {  type = 9 id = 330038  } 
   chiefofstaff           = {  type = 9 id = 330044  } 
   chiefofarmy            = {  type = 9 id = 330047  } 
   chiefofnavy            = {  type = 9 id = 330009  } 
   chiefofair             = {  type = 9 id = 330010  } 
   landunit = 
   {  location = 1456 
     id       = {  type = 16000 id = 1  } 
     name     = "Royal Bhutanese Army" 
     Division = 
     {  id       = {  type = 16000 id = 2  } 
       name     = "Household Division" 
       type     = infantry 
       model    = 6
       strength = 10 
      } 
     Division = 
     {  id       = {  type = 16000 id = 3  } 
       name     = "Royal Division" 
       type     = infantry 
       model    = 6
       strength = 10 
      } 
    } 
  } 
 