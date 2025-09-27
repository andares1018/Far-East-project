 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	control                = GER
	belligerence           = 5 
	manpower               = 500 
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

	# Eastern Minor Tech '43.07
	# Group C 1943.07 techs 
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
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
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
     political_left    = 4 
     free_market       = 4 
     freedom           = 3 
     professional_army = 8 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105026  } 
   foreignminister        = {  type = 9 id = 105137  } 
   armamentminister       = {  type = 9 id = 105052  } 
   ministerofsecurity     = {  type = 9 id = 105067  } 
   ministerofintelligence = {  type = 9 id = 105085  } 
   chiefofstaff           = {  type = 9 id = 105096  } 
   chiefofarmy            = {  type = 9 id = 105104  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105121  } 
   dormant_ministers      = {  105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105024
                               105066 105038 105120 105134 105004 105025 105133 105039 105135
                            } 

   # ROYAL HUNGARIAN ARMY
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Királyi Honvédség" 
     leader   = 105073 # Szombathelyi
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Foparancsnokság" 
       strength     = 50
       type     = hq
	   model = 2
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 12  } 
     name     = "I. páncéloshadtest" 
     leader   = 105040 # Horváth F
     location = 284 
     Division = 
     {  id       = {  type = 20500 id = 55  } 
       name     = "1. tábori páncéloshadosztály" 
       strength     = 75
       type     = armor 
	   model = 0
      } 
     Division = 
     {  id       = {  type = 20500 id = 60  } 
       name     = "2. tábori páncéloshadosztály" 
       strength     = 55
       type     = armor 
	   model = 0
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 61  } 
     name     = "Székely Határvédelmi Erok" 
     leader   = 105136 # Kozma I
     location = 293 
     Division = 
     {  id       = {  type = 20500 id = 62  } 
       name     = "9. székely határvadászdandár" 
       strength     = 55
       type     = infantry
	   model = 10
      } 
    } 
   # 1st Army
   landunit = 
   {  id       = {  type = 20500 id = 63  } 
     name     = "I. hadsereg" 
     leader   = 105057 # Náday
     location = 296 
     Division = 
     {  id       = {  type = 20500 id = 64  } 
       name     = "1. Lovashadosztály" 
       strength     = 50
       type     = cavalry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 35  } 
     name     = "VI. hadtest/I. hadsereg" 
     leader   = 105010 # Beregffy
     location = 296 
     Division = 
     {  id       = {  type = 20500 id = 36  } 
       name     = "16. gyaloghadosztály" 
       strength     = 55
       type     = infantry
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 38  } 
       name     = "18. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 65  } 
     name     = "VIII. Katonai körzet" 
     leader   = 105049 # László
     location = 292 
     Division = 
     {  id       = {  type = 20500 id = 66  } 
       name     = "24. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 44  } 
       name     = "23. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 67  } 
       name     = "2. hegyidandár" 
       strength     = 40
       type     = bergsjaeger 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 49  } 
     name     = "IX. hadtest/I. hadsereg" 
     leader   = 105084 # Veress
     location = 213 
     Division = 
     {  id       = {  type = 20500 id = 50  } 
       name     = "25. gyaloghadosztály" 
       strength     = 45
       type     = infantry
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 52  } 
       name     = "27. gyaloghadosztály" 
       strength     = 45
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 68  } 
       name     = "1. hegyidandár" 
       strength     = 40
       type     = bergsjaeger 
	   model = 10
      } 
    } 
   # 2nd Army
   landunit = 
   {  id       = {  type = 20500 id = 21  } 
     name     = "II. hadtest/I. hadsereg" 
     leader   = 105124 # Aggteleky
     location = 292 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "6. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "5. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 41  } 
     name     = "VII. Katonai körzet" 
     location = 209 
     Division = 
     {  id       = {  type = 20500 id = 43  } 
       name     = "20. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 42  } 
       name     = "19. tartalékhadosztály" 
       strength     = 55
       type     = infantry
	   model = 10
      } 
    } 
   # 3rd Army
   landunit = 
   {  id       = {  type = 20500 id = 22  } 
     name     = "III. hadtest/III. hadsereg" 
     leader   = 105005 # Bakay
     location = 277 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "7. gyaloghadosztály" 
       strength     = 65
       type     = infantry 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 24  } 
       name     = "9. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 27  } 
     name     = "IV. hadtest/II. hadsereg" 
     leader   = 105037 # Heszlényi
     location = 341 
     Division = 
     {  id       = {  type = 20500 id = 28  } 
       name     = "10. gyaloghadosztály" 
       strength     = 65
       type     = infantry
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 30  } 
       name     = "12. tartalékhadosztály" 
       strength     = 55
       type     = infantry 
	   model = 10
      } 
    } 
   landunit = 
   {  id       = {  type = 20500 id = 56  } 
     name     = "V. hadtest/III. hadsereg" 
     location = 277 
     Division = 
     {  id       = {  type = 20500 id = 32  } 
       name     = "13. gyaloghadosztály" 
       strength     = 65
       type     = infantry
	   model = 10
      } 
    } 
   # 3rd Army
   landunit = 
   {  id       = {  type = 20500 id = 45  } 
     name     = "VII. hadtest" 
     leader   = 105134 # Kiss I
     location = 605 
     Division = 
     {  id       = {  type = 20500 id = 57  } 
       name     = "201. tartalékhadosztály" 
       strength     = 75
       type     = infantry
	   model = 10
       extra = engineer
       brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 20500 id = 46  } 
       name     = "2. Könnyuhadosztály" 
       strength     = 75
       type     = infantry
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 48  } 
       name     = "5. Könnyuhadosztály" 
       strength     = 75
       type     = infantry
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20500 id = 47  } 
       name     = "8. Könnyuhadosztály" 
       strength     = 75
       type     = infantry 
	   model = 10
      } 
      dig_in = 20.000
    } 
   # 2nd German Army
   landunit = 
   {  id       = {  type = 20500 id = 58  } 
     name     = "II. Armee" 
     location = 605 
     Division = 
     {  id       = {  type = 20500 id = 59  } 
       name     = "1. tartalékhadosztály" 
       strength     = 75
       type     = infantry
	   model = 10
       extra = engineer
       brigade_model = 3
      } 
      dig_in = 20.000
    } 

   # 1ST AIR ARMY
   airunit = 
   {  id       = {  type = 20500 id = 70  } 
     name     = "Magyar Királyi Honvéd Légiero" 
     leader   = 105191 # Háry
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
 