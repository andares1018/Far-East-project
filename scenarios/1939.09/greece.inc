 
 ############################## 
 # Country definition for GRE # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GRE 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	manpower               = 0 
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	capital                = 377 
	transports             = 40 
   escorts                = 15 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     free_market       = 5 
     freedom           = 4 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 4 
    } 
   nationalprovinces      = { 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 }
   ownedprovinces         = { 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 380 381 382 383 } 
   controlledprovinces    = { 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 380 381 382 383 }
   claimedprovinces    	  = { 328 333 360 }

	# Western Minor Tech '40
	# Group D 1940 techs 
	# ###################### 
	# GW fighter 
	techapps = {  
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Agriculture  
	5700 5710 5010
	# Oil Refining 
	5190
	# Medicine
	5600 5610 5620 5630

	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970

	# Armoured Car  
	2860 2870 2880 2020
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Tank Artillery 
	2400
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines (GBP)
	6560 6030
	
	# Destroyer 
	3010 3020 3030 3040 3050 3060
	# Light Cruiser 
	3110 3120 3130 3140
	# Heavy Cruiser 
	3210 3220 3230
	# Battleship
	3410 3420 3430
	# Submarine
	3610 3620 3630 3640
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	#Troopships
	3810 3820
	
	#Naval Doctrines
	8020 8040 8050 8060 8070 8080 8500 8100 8110 8120 82500

	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole fighter
	4300 4310 4320 4330
	# strategic bomber
	4800 4810 4820
	# navalbomber
	4700 4710

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
	
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = BUL value = -75  } 
     relation = {  tag = ENG value = 50  } 
     relation = {  tag = FIN value = 40  } 
     relation = {  tag = FRA value = 75  } 
     relation = {  tag = GER value = 15  } 
     relation = {  tag = ITA value = -100  }
     relation = 
     {  tag        = ROM 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1934  } 
      } 
     relation = {  tag = SOV value = 15  } 
     relation = {  tag = TUR value = 100  } 
     relation = 
     {  tag        = YUG 
       value      = 100 
       guaranteed = {  day = 29 month = december year = 1934  } 
      } 
    } 
   SpyInfo                = {  country = "GRE" NumberOfSpies = 6  } 
   headofstate            = {  type = 9 id = 90014  } 
   headofgovernment       = {  type = 9 id = 90028  } 
   foreignminister        = {  type = 9 id = 90049  } 
   armamentminister       = {  type = 9 id = 90072  } 
   ministerofsecurity     = {  type = 9 id = 90092  } 
   ministerofintelligence = {  type = 9 id = 90111  } 
   chiefofstaff           = {  type = 9 id = 90124  } 
   chiefofarmy            = {  type = 9 id = 90008  } 
   chiefofnavy            = {  type = 9 id = 90009  } 
   chiefofair             = {  type = 9 id = 90149  } 
   dormant_ministers      = {  90010  } 
  landunit =
   { id = { type = 15500 id = 1 }
     location = 377
     name = "I. Soma Stratou"
     Division =
     { id = { type = 15500 id = 2 }
       name = "2. Merarchia Pezikou"
       strength = 100
       model = 8
       type = infantry
      }
     Division =
     { id = { type = 15500 id = 3 }
       name = "3. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 8
      }
     Division =
     { id = { type = 15500 id = 4 }
       name = "4. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
       extra = artillery
       brigade_model = 5
      }
    }
   landunit =
   { id = { type = 15500 id = 5 }
     location = 375
     name = "II. Soma Stratou"
     Division =
     { id = { type = 15500 id = 6 }
       name = "1. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 8
      }
     Division =
     { id = { type = 15500 id = 7 }
       name = "9. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
       extra = anti_air
       brigade_model = 1
      }
    }
   landunit =
   { id = { type = 15500 id = 8 }
     location = 365
     name = "III. Soma Stratou"
     Division =
     { id = { type = 15500 id = 9 }
       name = "6. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
       extra = artillery
       brigade_model = 5
      }
     Division =
     { id = { type = 15500 id = 10 }
       name = "10. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
      }
     Division =
     { id = { type = 15500 id = 11 }
       name = "11. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
      }
     Division =
     { id = { type = 15500 id = 12 }
       name = "17. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
      }
    }
   landunit =
   { id = { type = 15500 id = 13 }
     location = 375
     name = "IV. Soma Stratou"
     Division =
     { id = { type = 15500 id = 14 }
       name = "7. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
      }
     Division =
     { id = { type = 15500 id = 15 }
       name = "14. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
       extra = artillery
       brigade_model = 0
      }
    }
   landunit =
   { id = { type = 15500 id = 16 }
     location = 367
     name = "V. Soma Stratou"
     Division =
     { id = { type = 15500 id = 17 }
       name = "12. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 8
      }
     Division =
     { id = { type = 15500 id = 18 }
       name = "13. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 9
      }
    }
   landunit =
   { id = { type = 15500 id = 19 }
     location = 382
     name = "VI. Soma Stratou"
     Division =
     { id = { type = 15500 id = 20 }
       name = "5. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 8
      }
     Division =
     { id = { type = 15500 id = 21 }
       name = "8. Merarchia Pezikou"
       strength = 100
       type = infantry
       model = 8
       extra = artillery
       brigade_model = 6
      }
     Division =
     { id = { type = 15500 id = 22 }
       name = "1. Merarchia Ippikou"
       strength = 100
       type = cavalry
       model = 8
       extra = artillery
       brigade_model = 7
      }
    }
    navalunit = {
        id = { type = 15500 id = 23 }
        name = "Ellinikos Vasilikos Stolos"
        location = 377
        base = 377
        division = {
            id = { type = 15500 id = 24 }
            name = "1. Metaforiko"
            type = transport
            }
        division = {
            id = { type = 15500 id = 25 }
            name = "2. Metaforiko"
            type = transport
            }
        division = {
            id = { type = 15500 id = 28 }
            name = "3. Stoliskos Antitorpillikon"
            type = destroyer
            model = 1
            }
        division = {
            id = { type = 15500 id = 32 }
            name = "4. Stoliskos Antitorpillikon"
            type = destroyer
            model = 0
            }
        }
    navalunit = {
        id = { type = 15500 id = 1522 }
        name = "Polemikos Stolos"
        location = 377
        base = 377
        division = {
            id = { type = 15500 id = 30 }
            name = "BEN Georgios Averoff"
            type = heavy_cruiser
            model = 3
            }
        division = {
            id = { type = 15500 id = 31 }
            name = "BEN Helle"
            type = light_cruiser
            model = 3
            }
        division = {
            id = { type = 15500 id = 132 }
            name = "1. Stoliskos Antitorpillikon"
            type = destroyer
            model = 4
            }
        division = {
            id = { type = 15500 id = 232 }
            name = "2. Stoliskos Antitorpillikon"
            type = destroyer
            model = 2
            }
        }
airunit = {
    id = { type = 19111 id = 50 }
    name = "Polemiki Aeroporia"
    location = 377
    base = 377

    division = {
        id = { type = 19111 id = 51 }
        name = "Dioikisi Aeroporias Dioksis"
        strength = 36
        max_strength = 55
        type = interceptor
        model = 1
        }
    }
    navalunit = {
        id = { type = 15500 id = 2436 }
        name = "Stoliskos Ypovrychion"
        location = 377
        base = 377
        division = {
            id = { type = 15500 id = 29 }
            name = "1. Ypobrychio"
            type = submarine
            model = 3
            }
        }
  }
 