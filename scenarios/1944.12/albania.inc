 
 ############################## 
 # Country definition for U28 # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U28 
	puppet                 = SOV 
	control                = SOV
	ai_settings	= { flags = { MOB1 = yes } }
	manpower               = 0

	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	transports = 100
	capital                = 359 
	dissent                = 10

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 2 
     political_left    = 9 
     free_market       = 2 
     freedom           = 1 
     professional_army = 1 
     defense_lobby     = 4 
     interventionism   = 4 
    } 

   nationalprovinces      = {  359 362 329 361 360 334  } 
   ownedprovinces         = {  359 360 361 362  } 
   controlledprovinces    = {  359 360 361 362  } 
   # Eastern Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
 #Naval Infantry
#1560 
#Engineers
1830 1840 
# Inf support 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Manufactoring
5810
#Basic Construction Engineering 
5800 5080 
#Medicine
5600
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
} 
inventions = { 3000027 }

   SpyInfo                = {  country = "ALB" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 955003  } 
   headofgovernment       = {  type = 9 id = 955006  } 
   foreignminister        = {  type = 9 id = 955008  } 
   armamentminister       = {  type = 9 id = 955013  } 
   ministerofsecurity     = {  type = 9 id = 955018  } 
   ministerofintelligence = {  type = 9 id = 955022  } 
   chiefofstaff           = {  type = 9 id = 955026  } 
   chiefofarmy            = {  type = 9 id = 955029  } 
   chiefofnavy            = {  type = 9 id = 955033  } 
   chiefofair             = {  type = 9 id = 955037  } 

	landunit = {
		id = { type = 30659 id = 1 }
		name = "Albanian Army"
		location = 359
		division = {
			type = infantry
			model = 10
			id = { type = 30659 id = 2 }
			name = "1. Kembesorise Ndarje"
			strength = 50
		}
		division = {
			type = infantry
			model = 10
			id = { type = 30659 id = 3 }
			name = "2. Kembesorise Ndarje"
			strength = 50
		}
	}
  }
 