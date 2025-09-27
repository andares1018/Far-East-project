 
 ############################## 
 # Country definition for SIK # 
 ############################## 
  
 country = 
 {  tag			= SIK
	puppet		= SOV 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }  
	# Resource Reserves 
	energy                 = 200
	metal                  = 200
	rare_materials         = 100
	oil                    = 100 
	supplies               = 100 
	money                  = 100 
	capital                = 1281 # Urumqi 
	manpower               = 0 
	dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   nationalprovinces      = {  1273 1274 1275 1276 1277 1278 1279 1280 1281 1282  } 
   ownedprovinces         = {  1273 1274 1275 1276 1277 1279 1280 1281 1282  } 
   controlledprovinces    = {  1273 1274 1275 1276 1277 1279 1280 1281 1282  } 
# Xinjiang
   techapps = { 
	
	# Manufacturing
	5810 5820 5050
	# Construction Engineering
	5800

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080
	# Mountain Division
	1160 1170 1180 1190 1200 1210 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Engineers
	1830
	# Supply
	1910 1920 1930 1940 1950 1960 1970

	# Field Artillery 
	2290 2300 2310 2900 2910

	#Manpower Focus
	6570 6300

	# Hospital System
	14000 14010 
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910


	} 

blueprints = {
	
	# Infantry
	1090 1100

	# Mountain
	1220

	# Cavalry

	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870

	# Artillery
	2910

	# Hospital System
	14020


	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
}
  inventions = { 3000027 }

   diplomacy = 
   {  relation = {  tag = CHC value = 40  } 
     relation = {  tag = SOV value = 125  } 
     relation = {  tag = TAN value = 125  } 
     relation = {  tag = CHI value = -125  } 
    } 
   SpyInfo                = {  country = "SIK" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 420001  } 
   headofgovernment       = {  type = 9 id = 420002  } 
   foreignminister        = {  type = 9 id = 420003  } 
   armamentminister       = {  type = 9 id = 420004  } 
   ministerofsecurity     = {  type = 9 id = 420005  } 
   ministerofintelligence = {  type = 9 id = 420006  } 
   chiefofstaff           = {  type = 9 id = 420007  } 
   chiefofarmy            = {  type = 9 id = 420008  } 
   chiefofnavy            = {  type = 9 id = 420009  } 
   chiefofair             = {  type = 9 id = 420010  } 
   landunit = 
   {  location = 1281 
     name     = "Xin'jiang Jüntuan 1" 
     id       = {  type = 25600 id = 1  } 
     Division = 
     {  id   = {  type = 25600 id = 2  } 
       name = "1 Xin'jiang Shi" 
       type = infantry 
	   strength = 40 
	   model    = 6
      } 
     Division = 
     {  id   = {  type = 25600 id = 3  } 
       name = "7 Xin'jiang Lü" 
       type = militia 
	   strength = 40 
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 4  } 
       name = "8 Xin'jiang Lü" 
       type = militia 
	   strength = 40 
	   model    = 3
      } 
    } 
  } 
 