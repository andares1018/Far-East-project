 
 ############################## 
 # Country definition for BEL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BEL 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	capital                = 899 
	manpower               = 1 
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	rare_materials         = 510
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	transports             = 100 
	escorts                = 20 
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = U01 value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = HOL value = 200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    relation = { tag = NZL value = 200 }
    relation = { tag = POR value = -20 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 75 }
  }
   SpyInfo                = {  country = "BEL" NumberOfSpies = 6  } 
   nationalprovinces      = {  108 110 111 112 113 114 115 116 117 } 
   ownedprovinces         = {  846 847 894 897 898 899 901 902 903 904 905 906  } 
   controlledprovinces    = {  846 847 894 897 898 899 901 902 903 904 905 906  } 
   claimedprovinces       = {  846 847 894 897 898 899 901 902 903 904 905 906 } #Belgian Congo
	# Western Minor Tech '41
	# Group C 1941 techs 
	# ###################### 
	techapps               = { 
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Motorised Inf
	1396
	# Supply/Logistics
	1910 1920 1930 1940 1950 1960 1970 1980 1990
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Engineers
	1830 1840 1850 1860

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940
	# Anti-tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyers 
	3010
	# Torpedo & ASW 18
	3720 3730 3900
	# Troopships
	3810 3820
	
	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	
	# Computers & cryptography
	5310 54010 54020 54030 5316 5326 5327 5350
	# Oil
	5190
	# Medicine
	5600 5610 5620 5630 5640
	# Agriculture 
	5700 5710 5010 5020
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090
	
	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560 6030 6110
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	9040 9090
	# Naval Doctrines
	8010 8020 8040 8050 
	}
	
inventions = { 3000027 } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 3 
     free_market       = 9 
     freedom           = 10 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 4 
    } 
   headofstate            = {  type = 9 id = 70087  } 
   headofgovernment       = {  type = 9 id = 70016  } 
   foreignminister        = {  type = 9 id = 70023  } 
   armamentminister       = {  type = 9 id = 70034  } 
   ministerofsecurity     = {  type = 9 id = 70053  } 
   ministerofintelligence = {  type = 9 id = 70066  } 
   chiefofstaff           = {  type = 9 id = 70076  } 
   chiefofarmy            = {  type = 9 id = 70080  } 
   chiefofnavy            = {  type = 9 id = 70009  }   
   chiefofair             = {  type = 9 id = 70085  } 
   dormant_ministers      = {  70002 70003 70007 70025 70033 70050 70004 70005 70006 70026 70037 70046 70047 70048 70074 70079 70089 70092 70096 70097
                               70098 70099 70100 70101 70102
                            }
   dormant_leaders        = {  70002 70003 70004 70005 70006 70011 70012 70023 70025 70028 }

	landunit = { 
		id = { type = 11500 id = 1 } 
		name = "Garde Royale Coloniale" 
		location = 899 
		division = { 
			id = { type = 11500 id = 2 } 
			name = "1ère Garde Coloniale" 
			type = infantry
			model = 9 
			strength = 50
			} 
		} 

	navalunit = { 
		id = { type = 11500 id = 33 } 
		name = "1ste Transportatie Smaldeel" 
		location = 894 
		base = 894 
		division = { 
			id = { type = 11500 id = 34 } 
			name = "1ère Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 11500 id = 36 } 
			name = "2de Smaldeel" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 11500 id = 2322 } 
			name = "1ère Flottille de Contre-Torpilleur" 
			type = destroyer 
			} 
		division = { 
			id = { type = 11500 id = 2323 } 
			name = "2de Flotielje Torpedoboten" 
			type = destroyer 
			} 
		} 
  } 