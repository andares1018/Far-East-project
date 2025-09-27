 
 ############################## 
 # Country definition for BRA # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BRA 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	rare_materials         = 510
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	manpower               = 46 
      
   capital                = 2075 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 3 
     free_market       = 8 
     freedom           = 5 
     professional_army = 3 
     defense_lobby     = 6 
     interventionism   = 3 
    } 
   nationalprovinces      = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
   ownedprovinces         = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
   controlledprovinces    = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
	# Semi-Major Tech '41
	# Group C 1941 techs 
	# ###################### 
	techapps               = {  
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Multirole fighter
	4300 4310 4320 4330
	# Strategic bomber
	4800 4810
	# Seaplanes
	4740 4750 4760 4770 4780
	# Naval Infantry
	#1560 1570 1580
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980
	# Engineers
	1830 1840 1850 1860
	# Armoured Car  
	2860 2870 2880 2020
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
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Agriculture  
	5700 5710 5010 5020
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering
	5800 5080 5090
	# Oil Refining 
	5190
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
	# Medicine
	5600 5610 5620
	# Hospital System
	14000 14010

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560
	# Engagement Theories
	8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500
	}
	
inventions = { 3000027 } 
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
   SpyInfo                = {  country = "BRA" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 160001  } 
   headofgovernment       = {  type = 9 id = 160002  } 
   foreignminister        = {  type = 9 id = 160023  } 
   armamentminister       = {  type = 9 id = 160040  } 
   ministerofsecurity     = {  type = 9 id = 160063  } 
   ministerofintelligence = {  type = 9 id = 160076  } 
   chiefofstaff           = {  type = 9 id = 160007  } 
   chiefofarmy            = {  type = 9 id = 160096  } 
   chiefofnavy            = {  type = 9 id = 160110  } 
   chiefofair             = {  type = 9 id = 160010  } 
   landunit = 
   {  id       = {  type = 18000 id = 1  } 
     name     = "1o Exército do Brasil" 
     location = 2059 
     Division = 
     {  id       = {  type = 18000 id = 2  } 
       name     = "I Divisão de Infantaria" 
       strength = 100 
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 18000 id = 3  } 
       name     = "II Divisão de Infantaria" 
       strength = 100 
	   type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 18000 id = 4  } 
       name     = "CCLXVIII Divisão do Guarda Civíl" 
       strength = 100 
       type     = militia 
	   model    = 4
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 18000 id = 5  } 
       name     = "CCLXIX Divisão do Guarda Civíl" 
       strength = 100 
       type     = militia 
	   model    = 4
      } 
    } 
   landunit = 
   {  id       = {  type = 18000 id = 6  } 
     name     = "2o Exército do Brasil" 
     location = 2075 
     Division = 
     {  id       = {  type = 18000 id = 7  } 
       name     = "III Divisão de Infantaria" 
       strength = 100 
       type     = infantry 
	   model    = 7
      } 
     Division = 
     {  id       = {  type = 18000 id = 8  } 
       name     = "XCII Divisão de Cavalaria" 
       strength = 100 
       type     = cavalry 
	   model    = 8
      } 
	 Division = 
     {  id       = {  type = 18000 id = 30  } 
       name     = "XCI Divisão de Cavalaria" 
       strength = 100 
       type     = cavalry 
	   model    = 8
      }
	 Division = 
     {  id       = {  type = 18000 id = 28  } 
       name     = "IV Divisão de Infantaria" 
       strength = 100 
       type     = infantry 
	   model    = 7
      }
	Division = 
     {  id       = {  type = 18000 id = 27  } 
       name     = "V Divisão de Infantaria" 
       strength = 100 
       type     = infantry 
	   model    = 7
      }
	Division = 
     {  id       = {  type = 18000 id = 26  } 
       name     = "VI Divisão de Infantaria" 
       strength = 100 
       type     = infantry 
	   model    = 7
      }	  
    } 
	navalunit = { 
		id = { type = 18000 id = 25 } 
		name = "Navais do Transporte" 
		location = 2075 
		base = 2075 
		division = { 
			id = { type = 18000 id = 15 } 
			name = "4. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 16 } 
			name = "5. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 17 } 
			name = "6. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 2306 } 
			name = "1. Flotilla de Contratorpedeiros" 
			type = destroyer 
			model = 1
			} 
		} 
	navalunit = { 
		id = { type = 18000 id = 18 } 
		name = "Marinha do Brazil" 
		location = 2058 
		base = 2058 
		division = { 
			id = { type = 18000 id = 19 } 
			name = "NRB São Paulo" 
			type = battleship 
			model = 4 
			} 
		division = { 
			id = { type = 18000 id = 29 } 
			name = "NRB Minas Gerais" 
			type = battleship 
			model = 4 
			} 
		division = { 
			id = { type = 18000 id = 21 } 
			name = "NRB Bahia" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 18000 id = 23 } 
			name = "NRB Rio Grande do Sul" 
			type = light_cruiser 
			model = 3 
			} 
		}  
	navalunit = { 
		id = { type = 18000 id = 2304 } 
		name = "I Flotilla do Brasil" 
		location = 2075 
		base = 2075 
		division = { 
			id = { type = 18000 id = 2307 } 
			name = "2. Flotilla de Contratorpedeiros" 
			type = destroyer 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 13 } 
			name = "2. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 12 } 
			name = "1. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 14 } 
			name = "3. Flotilla de Navios de Transporte" 
			type = transport 
			model = 1
			} 
		division = { 
			id = { type = 18000 id = 2309 } 
			name = "1. Flotilla de Submarinos" 
			type = submarine 
			model = 3
			} 
		} 
   airunit = 
   {  id       = {  type = 18000 id = 9  } 
     name     = "Aereo do Brésil" 
     location = 2075 
     base     = 2075 
     Division = 
     {  id       = {  type = 18000 id = 10  } 
       name     = "1. Grupo de Caças" 
       strength = 50 
       type     = interceptor 
       model    = 6
      } 
    } 
  } 
 