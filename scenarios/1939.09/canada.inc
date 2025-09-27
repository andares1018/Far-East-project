 
 ############################## 
 # Country definition for CAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CAN 
	ai                     = "CAN_1939.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes} }
	# Resource Reserves 

	energy                 = 2000
	metal                  = 2000
	rare_materials         = 1000
	oil                    = 1000 
	supplies               = 1000 
	money                  = 100 
	manpower               = 300 
	capital                = 2108 
	transports             = 100 
	escorts                = 1 
    
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 150  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = -200  } 
     relation = {  tag = HOL value = 80  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = -100  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = U05 value = 80  }
     relation = {  tag = USA value = 175  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "CAN" NumberOfSpies = 6  } 
   nationalprovinces      = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2135 2136 2137 2138 2148 2149  } 
   ownedprovinces         = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149   } 
   controlledprovinces    = {  2089 2090 2091 2092 2093 2094 2095 2096 2097 2098 2099 2100 2101 2102 2103 2104 2105 2106 2107 2108 2109 2110 2111 2112 2113 2114 2115 2116 2117 2118 2119 2120 2121 2122 2123 2124 2125 2126 2127 2128 2129 2130 2131 2132 2133 2134 2148 2149 
                             } 
							 
	# Commonwealth Tech '40 
	# CAN 1940 techs 
	# ###################### 
	techapps = { 
	# Manufacturing
	5810 5820 5050 5830 5060
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

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Motorized Infantry
	1396
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Naval Infantry
	1560 1570
	# Engineers
	1830 1840 1850 1860
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940
	# Anti-tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Hospital System 
	14000 14010 14020 14030

	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Armor Division formation
	6900
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560 6030 6110 6120

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250
	# Battlecruiser  
	3310 3320 3330
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Submarines
	3610 3620 3630 3640 3650
	# Torpedo & ASW 
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8550 8560 8600 8900 8910 8920 8930 8940 8950 8960	

	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Multi-role fighter
	4300 4310 4320 4330 4340
	# strategic bomber
	4800 4810 4820
	# Seaplanes
	4740 4750 4760 4770 4780
	# Naval Bombers
	4700 4710

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 
	27460 27470 9010 9140 9040 9050 9090 9100 9110 9120 9190
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 10 
     political_left    = 3 
     free_market       = 10 
     freedom           = 10 
     professional_army = 7 
     defense_lobby     = 7 
     interventionism   = 8 
    }
	
   headofstate            = {  type = 9 id = 220001  } 
   headofgovernment       = {  type = 9 id = 220002  } 
   foreignminister        = {  type = 9 id = 220003  } 
   armamentminister       = {  type = 9 id = 220004  } 
   ministerofsecurity     = {  type = 9 id = 220005  } 
   ministerofintelligence = {  type = 9 id = 220006  } 
   chiefofstaff           = {  type = 9 id = 220070  } #Thomas Anderson
   chiefofarmy            = {  type = 9 id = 220078  } #Thomas Anderson
   chiefofnavy            = {  type = 9 id = 220009  } 
   chiefofair             = {  type = 9 id = 220010  }
   landunit = 
   {  id       = {  type = 20000 id = 1  } 
     name     = "Canadian Army" 
     location = 2108 
     Division = 
     {  id       = {  type = 20000 id = 2  } 
       name     = "1st Canadian Infantry Div." 
       strength = 80 
       type     = infantry 
       model    = 9 
       extra    = artillery
       brigade_model = 2
      }
     Division = 
     {  id       = {  type = 20000 id = 3  } 
       name     = "2nd Canadian Infantry Div." 
       strength = 60
       type     = infantry 
       model    = 9 
      } 
     Division = 
     {  id       = {  type = 20000 id = 9  } 
       name     = "1st Canadian Armored Div." 
       strength = 15 
       type     = light_armor 
       model    = 1 
      }
    } 
	navalunit = { 
		id = { type = 20000 id = 500 } 
		name = "Canadian Transport Fleet" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 30053 id = 504 } 
			name = "'Empress of Canada' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 505 } 
			name = "'Empress of Russia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 506 } 
			name = "'Empress of Asia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 2279 } 
			name = "Destroyer Flotilla 2" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2280 } 
			name = "Destroyer Flotilla 3" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2281 } 
			name = "Destroyer Flotilla 4" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 20000 id = 7 } 
		name = "Royal Canadian Navy" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 20000 id = 8 } 
			name = "Destroyer Flotilla 1" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 30053 id = 501 } 
			name = "'Empress of Japan' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 502 } 
			name = "'Empress of Australia' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 503 } 
			name = "'Empress of Britain' Flotilla" 
			type = transport 
			} 
		division = { 
			id = { type = 30053 id = 2282 } 
			name = "Destroyer Flotilla 5" 
			type = destroyer 
			} 
		division = { 
			id = { type = 30053 id = 2283 } 
			name = "Destroyer Flotilla 6" 
			type = destroyer 
			} 
		} 

	division_development = {
		name  = "3rd Canadian Infantry Div." 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 30053 id = 600  } 
		date  = {  year = 1940 month = september day = 5  } 
	}
	division_development = {
		name  = "4th Canadian Infantry Div." 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 30053 id = 601  } 
		date  = {  year = 1940 month = september day = 5  } 
	}
  } 
 