 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	belligerence           = 5 
	manpower               = 2000 
	capital                = 284 
	# Resource Reserves 
	energy                 = 2000
	metal                  = 2000
	rare_materials         = 1000
	transports = 100
	oil                    = 1000 
	supplies               = 1000 
	money                  = 100 
    
  diplomacy =
  { relation = { tag = BUL value = 125 }
    relation = { tag = SLO value = -20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 125 }
    relation = { tag = U01 value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = ITA
      value      = 200
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = ROM
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
  } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  209 210 215 276 277 278 279 280 281 282 283 284 286 288 292 293 296 341 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341  } 
 controlledprovinces = {  276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341  } 
 claimedprovinces = { 188 208 211 212 213 214 285 287 289 291 295 } 
	# Eastern Minor Tech '41 
	# Group D 1941 techs 
	# ###################### 
	# GW fighter 
	techapps               = {  
	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole fighter
	4300 4310 4320 4330
	# Tactical bomber
	4600 4610 4620 4630 4120 4130
	# Strategic bomber
	4800 4810 4820
	# Navalbomber
	4700 4710
	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 
	# Supply 
	1910 1920 1930 1940 1950 1960 1970
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Motorized Division  
	1396
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Engineers
	1830 1840 1850 1860
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Tanks
	7600 7610 2620 2010 2630 2640 2646
	# Agriculture  
	5700 5710 5010 5020
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090 
	# Medicine
	5600 5610 5620
	# Hospital System
	14000 14010
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Manpower Focus People's Army Path (SOV)
	6570 6300
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     free_market       = 4 
     freedom           = 3 
     professional_army = 8 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105025  } 
   foreignminister        = {  type = 9 id = 105039  } 
   armamentminister       = {  type = 9 id = 105052  } 
   ministerofsecurity     = {  type = 9 id = 105067  } 
   ministerofintelligence = {  type = 9 id = 105084  } 
   chiefofstaff           = {  type = 9 id = 105095  } 
   chiefofarmy            = {  type = 9 id = 105103  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105121  } 
   dormant_ministers      = {  105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105024
                               105066 105038 105120 105134 105004
                            } 

   #################################################################################### 
   # OOB Hungarian Troops - June 1941 by omega20
   # ref: http://niehorster.orbat.com/015_hungary/41-huba-2/_army.htm
   #################################################################################### 

   ##########################################
   #
   # ROYAL HUNGARIAN ARMY
   ##########################################
   landunit = 
   { id       = {  type = 20500 id = 1  } 
     name     = "Magyar Királyi Honvédség" 
     leader = 105088 # Werth
     location = 284 
     division = 
     { id    = {  type = 20500 id = 2  } 
       name  = "Foparancsnokság" 
       type  = hq
       model = 2
       strength = 50
     } 
   } 
   landunit = 
   { id       = {  type = 20500 id = 3  } 
     name     = "Gyorshadtest" 
     leader = 105056 # Miklós
     location = 213 # border with USSR
     division = 
     { id    = {  type = 20500 id = 4  } 
       name  = "1. gépkocsizó dandár" 
       type  = motorized 
       model = 0
       strength = 40
     } 
     division = 
     { id    = {  type = 20500 id = 5  } 
       name  = "2. gépkocsizó dandár" 
       type  = motorized 
       model = 0
       strength = 40
     } 
     division = 
     { id    = {  type = 20500 id = 6  } 
       name  = "1. lovasdandár" 
       type  = cavalry 
       model = 10
       strength = 40
     } 
     division = 
     { id    = {  type = 20500 id = 7  } 
       name  = "2. lovasdandár" 
       type  = cavalry 
       model = 10
       strength = 40
     } 
   } 
   ##########################################
   #
   # 1ST ARMY
   ##########################################
   landunit = 
   { id       = {  type = 20500 id = 8  } 
     name     = "I. hadtest" 
     leader = 105064 # Ruszkiczay-Rüdiger
     location = 284 # Budapest
     division = 
     { id    = {  type = 20500 id = 9  } 
       name  = "1. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 10  } 
       name  = "2. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 11  } 
       name  = "3. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 12  } 
     name     = "II. hadtest" 
     leader = 105036 # Hennyey
     location = 278 # Székesfehérvár
     division = 
     { id    = {  type = 20500 id = 13  } 
       name  = "4. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 14  } 
       name  = "5. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 15  } 
       name  = "6. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 16  } 
     name     = "III. hadtest" 
     leader = 105114 # Kiss L
     location = 279 # Szombathely
     division = 
     { id    = {  type = 20500 id = 17  } 
       name  = "7. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 18  } 
       name  = "8. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 19  } 
       name  = "9. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   ##########################################
   #
   # 2ND ARMY
   ##########################################
   landunit = 
   { id       = {  type = 20500 id = 20  } 
     name     = "IV. hadtest" 
     location = 277 # Pécs
     division = 
     { id    = {  type = 20500 id = 21  } 
       name  = "10. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 22  } 
       name  = "11. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 23  } 
       name  = "12. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 24  } 
     name     = "V. hadtest" 
     location = 280 # Szeged
     division = 
     { id    = {  type = 20500 id = 25  } 
       name  = "13. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 26  } 
       name  = "14. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 27  } 
       name  = "15. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 28  } 
     name     = "VI. hadtest" 
     leader = 105004 # Bajnóczy
     location = 281 # Debrecen
     division = 
     { id    = {  type = 20500 id = 29  } 
       name  = "16. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 30  } 
       name  = "17. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 31  } 
       name  = "18. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   ##########################################
   #
   # 3RD ARMY
   ##########################################
   landunit = 
   { id       = {  type = 20500 id = 32  } 
     name     = "VII. hadtest" 
     leader = 105115 # Nagy Gy
     location = 282 # Miskolc
     division = 
     { id    = {  type = 20500 id = 33  } 
       name  = "19. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 34  } 
       name  = "20. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 35  } 
       name  = "21. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 36  } 
     name     = "VIII. hadtest" 
     leader = 105073 # Szombathelyi
     location = 213 # border with USSR
     division = 
     { id    = {  type = 20500 id = 37  } 
       name  = "22. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 38  } 
       name  = "23. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 39  } 
       name  = "24. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 40  } 
       name  = "1. határvadászdandár" 
       type  = bergsjaeger 
       model = 9
       strength = 40
     } 
     division = 
     { id    = {  type = 20500 id = 41  } 
       name  = "8. határvadászdandár" 
       type  = bergsjaeger 
       model = 9
       strength = 40
      } 
    } 
   landunit = 
   { id       = {  type = 20500 id = 42  } 
     name     = "IX. hadtest" 
     location = 292 # Kolozsvár
     division = 
     { id    = {  type = 20500 id = 43  } 
       name  = "25. gyalogdandár" 
       type  = infantry
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 44  } 
       name  = "26. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 45  } 
       name  = "27. gyalogdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
     division = 
     { id    = {  type = 20500 id = 46  } 
       name  = "9. határvadászdandár" 
       type  = infantry 
       model = 9
       strength = 45
      } 
    } 

   # 1ST AIR ARMY
   airunit = 
   { id       = {  type = 20500 id = 70  } 
     name     = "Magyar Királyi Honvéd Légiero" 
     leader = 105191 # Háry
     location = 284 
     base     = 284 
     division = 
     { id    = {  type = 20500 id = 71  } 
       name  = "1. vadászosztály" 
       type  = interceptor 
       model    = 9
       strength = 30 
      } 
     division = 
     { id    = {  type = 20500 id = 72  } 
       name  = "1. bombázóosztály" 
       type  = tactical_bomber 
       model    = 6 
       strength = 30 
      } 
    } 
  } 
 