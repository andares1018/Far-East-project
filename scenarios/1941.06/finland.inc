 
 ############################## 
 # Country definition for FIN # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = FIN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes } }
	# Resource Reserves 
	energy                 = 900
	metal                  = 450
	rare_materials         = 225
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 525 
	manpower               = 150 
	transports             = 100 
	escorts                = 2 
  diplomacy =
  { relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 100 }
    relation = { tag = SLO value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = U01 value = 85 }
    relation = { tag = GER value = 125 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = -100 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = U05 value = 100 }
  } 
   SpyInfo                = {  country = "FIN" NumberOfSpies = 5  } 
   nationalprovinces      = {  511 512 513 514 515 516 517 518 519 520 521 522 523 524 525 526 527 528 529 530 531 532 533 536 537 538 539 540 } 
   ownedprovinces         = {  512 513 511 526 524 525 518 521 527 520 516 515 517 523 529 522 528 533 514  } 
   controlledprovinces    = {  512 513 511 526 524 525 518 521 527 520 516 515 517 523 529 522 528 533 514  } 
	
	# Finland 1941.06 techs 
	# ###################### 
	techapps = {
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture  
	5700 5710 5010 5020
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Oil Refining 
	5190
	# Medicine
	5600 5610 5620 5630
	# Winter equipment
	5920
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Anti-Tank Artillery 
	2400
	
	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6390 6400 6420 6410

	# Destroyer 
	3010 3020 3030 3040 3050
	# Heavy Cruiser 
	3210 3220 3230
	# Submarine 
	3610 3620 3630 3640
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8040 8050 8070 8080 8100 8200 8500
	
	# Interceptor Fighter
	4500 4510 4520 4530 4540 4550 4010 4020
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	9040 9050 9090
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 2 
     free_market       = 9 
     freedom           = 7 
     professional_army = 7 
     defense_lobby     = 9 
     interventionism   = 4 
    } 
   headofstate            = {  type = 9 id = 145016  } 
   headofgovernment       = {  type = 9 id = 145029  } 
   foreignminister        = {  type = 9 id = 145043  } 
   armamentminister       = {  type = 9 id = 145063  } 
   ministerofsecurity     = {  type = 9 id = 145076  } 
   ministerofintelligence = {  type = 9 id = 145091  } 
   chiefofstaff           = {  type = 9 id = 145102  } 
   chiefofarmy            = {  type = 9 id = 145107  } 
   chiefofnavy            = {  type = 9 id = 145110  } 
   chiefofair             = {  type = 9 id = 145114  }
   dormant_ministers      = {  145001 145013 145002 145024 145003 145040 145041 145004 145061 145005 145007 145008 145015 145025 145028 145030
                               145038 145042 145006 145121
                            } 

   #################################################################################### 
   # OOB Finnish Troops - June 1941 by omega20
   # ref: http://niehorster.orbat.com/024_finland/41-06-29/_army.html
   #################################################################################### 

   ##########################################
   #
   # FINNISH ARMY
   ##########################################
   landunit = 
   { location = 525 
     name     = "Maavoimat" 
     id       = {  type = 32000 id = 1  } 
     division = 
     { id    = {  type = 32000 id = 2  } 
       name  = "Päämaja" 
       strength = 50
       type  = hq 
       model = 3 
     }
     division = 
     { id    = {  type = 32000 id = 3  } 
       name  = "Ratsuväenprikatii" 
       strength = 50
       type  = cavalry
       model = 9 
     }  
     division = 
     { id    = {  type = 32000 id = 4  } 
       name  = "9. Divisioona" 
       strength = 75
       type  = infantry 
       model = 10 
     } 
     division = 
     { id    = {  type = 32000 id = 5  } 
       name  = "14. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
     }   
     division = 
     { id    = {  type = 32000 id = 6  } 
       name  = "17. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
     }  
   }
   landunit = 
   { location = 528 
     name     = "Päämajan reservit" 
     id       = {  type = 32000 id = 7  }
     division = 
     { id    = {  type = 32000 id = 8  } 
       name  = "1. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
       extra = artillery 
       brigade_model = 7
     }   
     division = 
     { id    = {  type = 32000 id = 9  } 
       name  = "13. Divisioona" 
       strength = 60
       type  = bergsjaeger
       model = 7 
     }
   }
   landunit = 
   { location = 528 
     name     = "II Armeijakunta" 
     id       = {  type = 32000 id = 10  } 
     division = 
     { id    = {  type = 32000 id = 11  } 
       name  = "2. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9
       extra = anti_air 
	   brigade_model = 2
     }
     division = 
     { id    = {  type = 32000 id = 12  } 
       name  = "15. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9
     } 
     division = 
     { id    = {  type = 32000 id = 13  } 
       name  = "18. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9
     } 
   }
   landunit = 
   { location = 523 
     name     = "III Armeijakunta" 
     id       = {  type = 32000 id = 14  }
     division = 
     { id    = {  type = 32000 id = 15  } 
       name  = "3. Divisioona" 
       strength = 60
       type  = bergsjaeger 
       model = 7
     } 
   }
   landunit = 
   { location = 514 
     name     = "III Armeijakunta" 
     id       = {  type = 32000 id = 16  }
     division = 
     { id    = {  type = 32000 id = 17  } 
       name  = "6. Divisioona" 
       strength = 75
       type  = infantry 
       model = 10 
     }
   }
   landunit = 
   { location = 529 
     name     = "IV Armeijakunta" 
     id       = {  type = 32000 id = 18  }
     division = 
     { id    = {  type = 32000 id = 19  } 
       name  = "4. Divisioona" 
       strength = 75
       type  = infantry 
       model = 10
     } 
     division = 
     { id    = {  type = 32000 id = 20  } 
       name  = "8. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
     }
     division = 
     { id    = {  type = 32000 id = 21  } 
       name  = "10. Divisioona" 
       strength = 75
       type  = infantry 
       model = 8 
     }  
     division = 
     { id    = {  type = 32000 id = 22  } 
       name  = "12. Divisioona" 
       strength = 60
       type  = bergsjaeger 
       model = 7 
     }  
   }
   landunit = 
   { location = 533 
     name     = "VI Armeijakunta" 
     id       = {  type = 32000 id = 23  } 
     division = 
     { id    = {  type = 32000 id = 24  } 
       name  = "5. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9
     } 
     division = 
     { id    = {  type = 32000 id = 25  } 
       name  = "11. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9
     }
     division = 
     { id    = {  type = 32000 id = 26  } 
       name  = "Ryhmä Oinonen" 
       strength = 65
       type  = bergsjaeger
       model = 7 
     }
   }
   landunit = 
   { location = 533 
     name     = "VII Armeijakunta" 
     id       = {  type = 32000 id = 27  } 
     division = 
     { id    = {  type = 32000 id = 28  } 
       name  = "7. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
      } 
     division = 
     { id    = {  type = 32000 id = 29  } 
       name  = "19. Divisioona" 
       strength = 75
       type  = infantry 
       model = 9 
     } 
   }
   landunit = 
   { location = 517 
     name     = "Erillinen Osasto P" 
     id       = {  type = 32000 id = 30  }
     division = 
     { id    = {  type = 32000 id = 31  } 
       name  = "Petsamon Erillisosasto" 
       strength = 60
       type  = bergsjaeger
       model = 7 
     }
   }      
   landunit = 
   { location = 525 
     name     = "Kenttätäydennysprikaati" 
     id       = {  type = 32000 id = 32  } 
     division = 
     { id    = {  type = 32000 id = 33  } 
       name  = "21. Divisioona"
       strength = 75	   
       type  = infantry 
       model = 7 
     } 
     division = 
     { id    = {  type = 32000 id = 34  } 
       name  = "23. Divisioona"
       strength = 75	   
       type  = infantry 
       model = 7 
     } 
   } 

	navalunit = { 
		id = { type = 32000 id = 100 } 
		name = "Suomen Laivasto" 
		location = 525 
		base = 525 
		division = { 
			id = { type = 32000 id = 101 } 
			name = "Ilmarinen" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 32000 id = 102 } 
			name = "Väinämöinen" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 32000 id = 104 } 
			name = "1. Rannikkolaivue" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 32000 id = 105 } 
		name = "I. Laivasto" 
		location = 525 
		base = 525 
		division = { 
			id = { type = 32000 id = 106 } 
			name = "1. Sukellusvenelaivue" 
			type = submarine 
			model = 2 
			} 
		} 
	airunit = { 
		id = { type = 32000 id = 2000 } 
		name = "Suomen Ilmavoimat" 
		location = 525 
		base = 525 
		division = { 
			id = { type = 32000 id = 2001 } 
			name = "Suomen Ilmavoimat" 
			type = interceptor 
			model = 5 
			} 
		}
  } 
 