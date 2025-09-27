 
 ############################## 
 # Country definition for ARG # 
 ############################## 
  
               

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ARG 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	manpower               = 20 
	# Resource Reserves 
	energy                 = 5000
	metal                  = 5000
	rare_materials         = 5000
	transports = 100
	oil                    = 5000 
	supplies               = 5000 
	money                  = 100 
	capital                = 2050 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     free_market       = 8 
     freedom           = 6 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 3 
    } 
   nationalprovinces      = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2043 2044 2045 2048 2049 2050 2053 2054 2055 2056  } 
   ownedprovinces         = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056  } 
   controlledprovinces    = {  2026 2027 2028 2029 2034 2035 2036 2037 2038 2039 2044 2048 2049 2050 2053 2054 2055 2056  } 
	# Semi-Major Tech '44
	# Group C 1944.06 techs 
	# ###################### 
	techapps = {
	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Seaplanes
	4740 4750 4760 4770 4780
	# Tank 
	7600 7610 2620 2010 2630 2640 2646
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery Brigade 
	2810 2820 2510
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Naval Infantry
	#1560 1570 1580
	# Engineers
	1830 1840 1850 1860
	# Medicine
	5600 5610 5620
	# Agriculture 
	5700 5710 5010 5020
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Destroyer 
	3010 3020 3030 3040 3050 3060
	# Light Cruiser 
	3110 3120 3130 3140 3150
	# Heavy Cruiser 
	3210 3220 3230 3240
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460
	# Submarine 
	3610 3620 3630 3640
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820

	# Hospital System
	14000 14010
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560
	# Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500
	}
	
inventions = { 3000027 }
  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
   SpyInfo                = {  country = "ARG" NumberOfSpies = 6  } 
   headofstate            = {  type = 9 id = 165021  } 
   headofgovernment       = {  type = 9 id = 165035  } 
   foreignminister        = {  type = 9 id = 165055  } 
   armamentminister       = {  type = 9 id = 165081  } 
   ministerofsecurity     = {  type = 9 id = 165101  } 
   ministerofintelligence = {  type = 9 id = 165122  } 
   chiefofstaff           = {  type = 9 id = 165137  } 
   chiefofarmy            = {  type = 9 id = 165150  } 
   chiefofnavy            = {  type = 9 id = 165161  } 
   chiefofair             = {  type = 9 id = 165173  } 
   dormant_ministers      = {  165001 165002 165003 165004 165005 165006 165007 165008 165009 165010 165011 165025 165141 165017 165031 165052
                               165103 165116 165134 165015 165019 165033 165013 165027 
                            }
   dormant_leaders        = {  165014  }

   # Argentine OOB 
   landunit = 
   {  id       = {  type = 12000 id = 1  } 
     name     = "I Cuerpo de Ejército" 
     location = 2048 # Buenos Aires 
     Division = 
     {  id       = {  type = 12000 id = 2  } 
       name     = "Supreme HQ" 
       type     = hq 
       model    = 2 
       strength = 100 
      } 
     Division = 
     {  id       = {  type = 12000 id = 3  } 
       name     = "III Brigada 'Pellegrini'" 
       strength = 100 
       type     = infantry
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 12000 id = 4  } 
       name     = "II Brigada 'San Martín'" 
       strength = 60 
       type     = infantry
	   model    = 8	   
       extra    = artillery 
	   brigade_model = 6
      } 
	  Division = 
     {  id       = {  type = 12000 id = 5  } 
       name     = "II Brigada de Montaña" 
       strength = 30 
       type     = bergsjaeger 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 12000 id = 6  } 
       name     = "I Brigada 'Ing. Krausse'" 
       strength = 60 
       type     = infantry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 12000 id = 7  } 
     name     = "II Cuerpo de Ejército" 
     location = 2048 
     Division = 
     {  id       = {  type = 12000 id = 8  } 
       name     = "VI Brigada de Montaña 'Villegas'" 
       strength = 35 
       type     = bergsjaeger 
	   model    = 8
      } 
     Division = 
     {  id       = {  type = 12000 id = 9  } 
       name     = "IV Brigada de Infantería" 
       strength = 100 
       type     = infantry 
	   model    = 8
       extra    = anti_air 
	   brigade_model = 1
      } 
	      Division = 
     {  id       = {  type = 12000 id = 10  } 
       name     = "IX Brigada de Infantería" 
       strength = 60 
       type     = infantry 
	   model    = 8
      } 
    } 
	
   landunit = 
   {  id       = {  type = 12000 id = 11  } 
     name     = "III Cuerpo de Ejército" 
     location = 2048 
     Division = 
     {  id       = {  type = 12000 id = 12  } 
       name     = "VI Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
     Division = 
     {  id       = {  type = 12000 id = 13  } 
       name     = "IV Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
	      Division = 
     {  id       = {  type = 12000 id = 14  } 
       name     = "IX Brigada" 
       strength = 30 
       type     = cavalry 
	   model    = 9
      } 
    } 	
	
	
	navalunit = { 
		id = { type = 12000 id = 15 } 
		name = "Argentinian Navy" 
		location = 2048 
		base = 2048 
		division = { 
			id = { type = 12000 id = 16 } 
			name = "ARA Veinticinco De Mayo" 
			type = heavy_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 17 } 
			name = "ARA Almirante Brown" 
			type = heavy_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 18 } 
			name = "ARA Moreno" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 20 } 
			name = "ARA Rivadavia" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 22 } 
			name = "ARA Independencia" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 24 } 
			name = "ARA La Libertad" 
			type = heavy_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 12000 id = 25 } 
			name = "ARA La Argentina" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 12000 id = 26 } 
			name = "ARA Generale Belgrano" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 12000 id = 28 } 
			name = "ARA Generale Pueyrredon" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 12000 id = 30 } 
			name = "Flotilla de Destructores nro. 1" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 12000 id = 32 } 
			name = "Flotilla de Destructores nro. 2" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 12000 id = 33 } 
			name = "Flotilla de Submarinos nro. 1" 
			type = submarine 
			model = 2 
			} 
		}   
   airunit = 
   {  id       = {  type = 12000 id = 36  } 
     name     = "Aviación del Ejército" 
     location = 2048 
     base     = 2048 
     Division = 
     {  id       = {  type = 12000 id = 37  } 
       name     = "Grupo Aérea Nro. 1" 
       strength = 90 
       type     = multi_role 
       model    = 5
      } 
    } 
   airunit = 
   {  id       = {  type = 12000 id = 38  } 
     name     = "Aviación Naval" 
     location = 2048 
     base     = 2048 
     Division = 
     {  id       = {  type = 12000 id = 39  } 
       name     = "Fuerza Aeronaval Nro. 1" 
       strength = 40 
       type     = naval_bomber 
       model    = 1
      } 
    } 
  } 
 