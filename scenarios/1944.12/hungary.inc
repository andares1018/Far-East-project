 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes MOB9 = yes RES = yes } }
	puppet                 = GER
	control                = GER
	belligerence           = 3 
	manpower               = 130
	capital                = 284 
	# Resource Reserves 
	energy                 = 1500
	metal                  = 1750
	rare_materials         = 1000
	transports = 100
	oil                    = 250 
	supplies               = 400 
	money                  = 30 
	dissent                = 5
    
  diplomacy =
  { relation = { tag = BUL value = 125 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = U01 value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = RSI value = 200 }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = ROM value = -200 }
  } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  209 210 215 276 277 278 279 280 281 282 283 284 286 288 292 293 296 341 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213  } 
 controlledprovinces = {  276 278 279 284 210  } 
 claimedprovinces = { 188 208 211 212 213 214 285 287 289 291 295 } 

	# Eastern Minor Tech '44.12
	# Group C 1944.12 techs 
	# ###################### 
	techapps               = {

	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture 
	5700 5710 5010 5020 5030
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327 5350 5320
	# Oil Refining 
	5190 
	# Medicine
	5600 5610 5620 5630

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Inf
	1396
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Anti-Tank Artillery 
	2400
	
	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
	# Armored Division Formation
	6900
	# Grand Battle Plan
	6560 6030 6120 6110

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040 9050 9090 9100 9110 9120 9130 9140 9190 9230
	
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 4 
     freedom           = 2 
     professional_army = 9 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105011  } 
   headofgovernment       = {  type = 9 id = 105206  } 
   foreignminister        = {  type = 9 id = 105036  } 
   armamentminister       = {  type = 9 id = 105050  } 
   ministerofsecurity     = {  type = 9 id = 105064  } 
   ministerofintelligence = {  type = 9 id = 105080  } 
   chiefofstaff           = {  type = 9 id = 105094  } 
   chiefofarmy            = {  type = 9 id = 105102  } 
   chiefofnavy            = {  type = 9 id = 105112  } 
   chiefofair             = {  type = 9 id = 105119  } 
   dormant_ministers      = {  105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105024
                               105066 105038 105120 105134 105004 105025 105133 105039 105135 105026 105136 105137 
                               105020 105035 105001 105009 105127 
                            } 

   # ROYAL HUNGARIAN ARMY
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Királyi Honvédség" 
     leader = 105010 # Beregffy
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Foparancsnokság" 
       strength     = 50
       type     = hq
	   model = 2
       experience = 50
      } 
     Division = 
     {  id       = {  type = 20500 id = 11  } 
       name     = "1. huszárhadosztály" 
       strength     = 50
       type     = cavalry 
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 12  } 
       name     = "1. tábori páncéloshadosztály" 
       strength     = 60
       type     = armor 
	   model = 0
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 13  } 
       name     = "2. tábori páncéloshadosztály" 
       strength     = 35
       type     = armor 
	   model = 0
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 14  } 
       name     = "'Szent László' hadosztály" 
       strength     = 65
       type     = infantry
	   model = 10
       extra = artillery
       brigade_model = 8
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 15  } 
       name     = "10. gyaloghadosztály" 
       strength     = 65
       type     = infantry
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 16  } 
       name     = "12. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 17  } 
       name     = "23. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
       experience = 60
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  id       = {  type = 20500 id = 3  } 
     name     = "I. Panzerarmee" 
     location = 235 
     Division = 
     {  id       = {  type = 20500 id = 4  } 
       name     = "2. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 5  } 
       name     = "5. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
       experience = 60
      } 
      dig_in = 20.000
    } 
   # 1st Army
   landunit = 
   {  id       = {  type = 20500 id = 6  } 
     name     = "I. hadsereg" 
     leader = 105049 # László
     location = 211 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "16. gyaloghadosztály" 
       strength     = 55
       type     = infantry
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "24. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "1. hegyidandár" 
       strength     = 40
       type     = bergsjaeger 
	   model = 10
       experience = 60
      } 
      dig_in = 20.000
    } 
   # 3rd Army
   landunit = 
   {  id       = {  type = 20500 id = 18  } 
     name     = "III. hadsereg" 
     leader = 105037 # Heszlényi
     location = 278 
     Division = 
     {  id       = {  type = 20500 id = 19  } 
       name     = "25. gyaloghadosztály" 
       strength     = 45
       type     = infantry
	   model = 10
       experience = 60
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  id       = {  type = 20500 id = 20  } 
     name     = "VIII. Armee" 
     location = 210 
     Division = 
     {  id       = {  type = 20500 id = 21  } 
       name     = "9. gyaloghadosztály" 
       strength     = 65
       type     = infantry
	   model = 10
       experience = 60
      } 
     Division = 
     {  id       = {  type = 20500 id = 22  } 
       name     = "27. tartalékhadosztály" 
       strength     = 35
       type     = infantry
	   model = 10
       experience = 60
      } 
      dig_in = 20.000
    } 
   # 1ST AIR ARMY
   airunit = 
   {  id       = {  type = 20500 id = 70  } 
     name     = "Magyar Királyi Honvéd Légiero" 
     leader = 105191 # Háry
     location = 284 
     base     = 284 
     Division = 
     {  id       = {  type = 20500 id = 71  } 
       name     = "1. vadászosztály" 
       type     = interceptor 
       model    = 9
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20500 id = 72  } 
       name     = "1. bombázóosztály" 
       type     = tactical_bomber 
       model    = 6 
       strength = 30 
      } 
    } 
  } 
 