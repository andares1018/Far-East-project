 
 ############################## 
 # Country definition for PER # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
	puppet                 = ENG
	control                = ENG
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 1085 
	manpower               = 50 
	dissent                = 5
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 5 
     professional_army = 3 
     defense_lobby     = 4 
     interventionism   = 2 
    } 

   nationalprovinces      = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  } 
   ownedprovinces         = {  1095 1085 1084 1087 1082 1089 1091 1090 1088 1086 1092 1094 1093  } 
   controlledprovinces    = {  1095 1085 1084 1087 1082 1089 1091 1090 1088 1086 1092 1094 1093  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610
#1916 lgt. Infantry Division  
1010  1020 1030 1040 1050 1060
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Medicine
5600
#Engineers
1830 1840 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700
# Land Doctrines WWI - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Advanced oil extraction
55010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = ENG value = 100  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = TUR value = -50  } 
    } 
   SpyInfo                = {  country = "PER" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 150012  } 
   headofgovernment       = {  type = 9 id = 150018  } 
   foreignminister        = {  type = 9 id = 150126  } 
   armamentminister       = {  type = 9 id = 150044  } 
   ministerofsecurity     = {  type = 9 id = 150052  } 
   ministerofintelligence = {  type = 9 id = 150064  } 
   chiefofstaff           = {  type = 9 id = 150073  } 
   chiefofarmy            = {  type = 9 id = 150075  } 
   chiefofnavy            = {  type = 9 id = 150082  } 
   chiefofair             = {  type = 9 id = 150087  } 
   landunit = 
   {  location = 1085 
     name     = "Lasgar Parsi" 
     id       = {  type = 16600 id = 1  } 
     Division = 
     {  id    = {  type = 16600 id = 2  } 
       name  = "1. Dastebandi Sarbaze Piyade" 
       type  = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id    = {  type = 16600 id = 3  } 
       name  = "2. Dastebandi Sarbaze Piyade" 
       type  = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 16600 id = 4  } 
       name = "1. Dastebandi Savareh" 
	   model    = 9
       type = cavalry 
      } 
    } 
  } 
 
