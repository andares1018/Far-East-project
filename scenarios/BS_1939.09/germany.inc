# Fortifications
province = { id = 184 landfort = 3 } # East Prussia forts
province = { id = 158 landfort = 2 } # Stettin defences
province = { id = 159 landfort = 1 } # Kustrin defences
province = { id = 164 landfort = 1 } # Oppeln defences

#Anti Aircraft Batteries
province = { id = 172 anti_air = 2 } #Cottbus
province = { id = 199 anti_air = 2 } #Plzen
province = { id = 207 anti_air = 3 } #Praha
province = { id = 196 anti_air = 2 } #Slavkov/Brno

province = {
	id = 158
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
	}
	naval_base = {
		size = 5
		current_size = 5
	}
}

#Breslau
province = {
	id = 167
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
}

#Koenigsberg
province = {
	id = 184
	anti_air = 1
	air_base = {
		size = 10
		current_size = 10
	}
	supplypool = 200
	oilpool = 200
}

#Berlin
province = {
	id = 163
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
	}
}


country = {
	tag = GER

	ai = "fallweiss_GER.ai"

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic        = 1 
		political_left    = 1 
		free_market       = 5 
		freedom           = 2 
		professional_army = 7 
		defense_lobby     = 10 
		interventionism   = 10 
	}

	headofstate            = {  type = 9 id = 1   } 
	headofgovernment       = {  type = 9 id = 2   } 
	foreignminister        = {  type = 9 id = 35  } 
	armamentminister       = {  type = 9 id = 70  } 
	ministerofsecurity     = {  type = 9 id = 86  } 
	ministerofintelligence = {  type = 9 id = 6   } 
	chiefofstaff           = {  type = 9 id = 132 } 
	chiefofarmy            = {  type = 9 id = 146 } 
	chiefofnavy            = {  type = 9 id = 9   } 
	chiefofair             = {  type = 9 id = 10  } 

	diplomacy = { 
	}

	capital = 163

   	manpower = 850

	extra_tc = 130	#Not balanced! 

	transports = 40
	escorts = 20

	# Resource Reserves		#No production in this scenario!
	oil 	=	40000
	supplies =	65000

	free = 	{
		ic = 75
	}

	ownedprovinces =
	{
		163 157 160 162 172 158 161 159 165 167 166 164 168 155 #Germany Proper
		205 199 204 200 207 202 197 196 206 198 201 # Bohemia-Moravia
		261 182 184 183 185 #East Prussia
	}
	controlledprovinces =
	{
		163 157 160 162 172 158 161 159 165 167 166 164 168 155 #Germany Proper
		205 199 204 200 207 202 197 196 206 198 201 # Bohemia-Moravia
		261 182 184 183 185 #East Prussia
	}
	nationalprovinces =
	{
		163 157 160 162 172 158 161 159 165 167 166 164 168 155 #Germany Proper
		205 199 204 200 207 202 197 196 206 198 201 # Bohemia-Moravia
		261 182 184 183 185 #East Prussia
	}
	
	techapps = { 
		# Infantry Division  
		1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
		# Cavalry 
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
		# Motorized Infantry
		1396 1400
		# Mountain Division 
		1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
		# Engineers
		1830 1840 1850 1860 1870
		# Supply
		1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130
		# Airborne Infantry
		1670

		# Armoured Car  
		2860 2870 2880 2020 2150
		# Light / Early Tank 
		7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
		#Medium Tank
		2070
		# Heavy Tank
		2100
		# Field Artillery 
		2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
		# Anti-tank Artillery
		2400 2410 2420
		# Static Anti-Air Artillery 
		2800 2450 21180 21190 21200 2460 2470
		# Anti-Air Artillery Brigade 
		2810 2820 2510 2520

		# Destroyer 
		3010 3020 3030 3040 3050 3060 3070
		# Light Cruiser 
		3110 3120 3130 3140 3150 3160
		# Heavy Cruiser 
		3210 3220 3230 3240 3250 3260  
		# Battlecruiser
		3310 3320 3330 3340
		# Battleship 
		3410 3420 3430 3440 3450 3456 3460 3470 3480
		# Submarine 
		3610 3620 3630 3640 3650 3660 3670
		# Aircraft Carrier 
		3510 3520 3530
		# Light Carrier 
		12100 12110 12120 12130
		# Torpedo & ASW 18
		3720 3730 3736 3740 3750 3760 3900 3910
		# Troopships
		3810 3820 3830

		# Air Transport 
		4290 4250
		# Multirole fighter
		4300 4310 4320 4330 4340 4040 4070
		# CAS
		4400 4170 4280
		# Strategic bomber
		4800 4810 4820 4220
		# Navalbomber
		4700 4710 4190
		# Interceptor  
		4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
		# Tactical Bomber
		4600 4610 4620 4630 4120 4130 4140 4150
		# Seaplanes
		4740 4750 4760 4770 4780 4790 4850
		# Escort Fighter
		4050 4080
		# CAG
		4900 4910 4920

		# Manufacturing
		5810 5820 5050 5830 5060 5070 5130
		# Construction Engineering 
		5800 5080 5090
		# Oil Refining
		5190 5200
		# Computers & cryptography
		5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360
		# Atomic Research
		5470 5480 5490
		# Exp. Rocket
		5560
		# Agriculture 
		5700 5710 5010 5020 5030
		# Medicine
		5600 5610 5620 5630 5640
		# Radar
		5410 5416 5417

		# Great War Land Doctrines (central powers)
		6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
		# WW2 Land Doctrines
		6210 6220 6230 6240 6250 6260 6900 
		#Great War Hospital System 
		14000 14010 14020 14030

		#Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
		9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9150 9190 9200 9210 9220 9230 9240

		#Naval Doctrines
		8010 8020 8030 8040 8050 8060 8070 8080
		# Amphib
		82300 82310
		# Naval Logistics
		82500
		# Naval Interdiction
		8500 8510 8520 8550 8560 8600 8570 8610 8620
		# Indirect Approach
		81300 81310 81320 81330 81340 81350 81360 81370
		# Naval Supremacy
		8100 8110 8120 8150 8160 8170 8200 8210
	} 
	
############################
#  ARMY GROUP NORTH 	   #
############################
	landunit = {
		id = { type = 30010 id = 1 }
		name = "Heeresgruppe Nord"
		leader = 278 
		location = 155
		
		division = {
			id = { type = 30010 id = 2 }
			name = "HG Nord"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 64 }
			name = "73. Infanterie-Division"
			type = infantry
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 66 }
			name = "206. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 68 }
			name = "208. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 70 }
			name = "10. Panzer-Division"
			type = light_armor
			strength = 100
			model = 2
		}
	}

	landunit = {
		id = { type = 30010 id = 3 }
		name = "3. Armee"
		leader = 313
		location = 185
		
		division = {
			id = { type = 30010 id = 4 }
			name = "3. Armee"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 34 }
			name = "217. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 35 }
			name = "Kampfgruppe 'Danzig'"
			type = infantry
			strength = 10
			max_strength = 10
			model = 8
		}
	}

	landunit = {
		id = { type = 30010 id = 5 }
		name = "I. Armeekorps"
		leader = 216
		location = 185
		
		division = {
			id = { type = 30010 id = 7 }
			name = "Infanterie-Brigade Danzig"
			type = infantry
			strength = 20
			max_strength = 20
			model = 10
		}
		division = {
			id = { type = 30010 id = 9 }
			name = "11. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 11 }
			name = "61. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 13 }
			name = "Panzer-Division Kempf"
			type = light_armor
			strength = 60
			max_strength = 60
			model = 2
		}
	}

	landunit = {
		id = { type = 30010 id = 14 }
		name = "XXI. Armeekorps"
		leader = 293
		location = 183
		
		division = {
			id = { type = 30010 id = 17 }
			name = "21. Infanterie-Division"
			type = infantry
			extra1 = artillery
			extra2 = light_armor_brigade
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 19 }
			name = "228. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 20 }
		name = "Armeekorps 'Wodrig'"
		leader = 365
		location = 185

		division = {
			id = { type = 30010 id = 23 }
			name = "1. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 25 }
			name = "12. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 27 }
			name = "1. Kavallerie-Brigade"
			type = cavalry
			strength = 20
			max_strength = 20
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 28 }
		name = "Kampfgruppe 'Brand'"
		leader = 589
		location = 185

		division = {
			id = { type = 30010 id = 29 }
			name = "Infanterie-Brigade 'Goldap'"
			type = infantry
			strength = 20
			max_strength = 20
			model = 8
		}
		division = {
			id = { type = 30010 id = 30 }
			name = "Kommando der Festung 'Lotzen'"
			type = garrison
			strength = 10
			max_strength = 10
			model = 5
		}
	}

	landunit = {
		id = { type = 30010 id = 31 }
		name = "Kommando der Festung 'Königsberg'"
		location = 184

		division = {
			id = { type = 30010 id = 32 }
			name = "Kommando der Festung 'Königsberg''"
			type = garrison
			strength = 10
			max_strength = 10
			model = 5
		}
	}

	landunit = {
		id = { type = 30010 id = 36 }
		name = "4. Armee"
		leader = 310
		location = 161

		division = {
			id = { type = 30010 id = 37 }
			name = "4. Armee"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 39 }
			name = "207. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 61 }
			name = "23. Infanterie-Division"
			type = infantry
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 62 }
			name = "218. Infanterie-Division"
			type = infantry
			strength = 100
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 40 }
		name = "II. Armeekorps"
		leader = 257
		location = 161

		division = {
			id = { type = 30010 id = 43 }
			name = "3. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 45 }
			name = "32. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 46 }
		name = "III. Armeekorps"
		leader = 101
		location = 161

		division = {
			id = { type = 30010 id = 49 }
			name = "50. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 51 }
			name = "Infanterie-Brigade 'Netze'"
			type = infantry
			strength = 20
			max_strength = 20
			model = 8
		}
	}

	landunit = {
		id = { type = 30010 id = 52 }
		name = "XIX. Armeekorps"
		leader = 94
		location = 161

		division = {
			id = { type = 30010 id = 55 }
			name = "3. Panzer-Division"
			type = armor
			strength = 100
			model = 0
		}
		division = {
			id = { type = 30010 id = 57 }
			name = "2. Infanterie-Division (mot.)"
			type = motorized
			strength = 100
			model = 1
		}
		division = {
			id = { type = 30010 id = 59 }
			name = "20. Infanterie-Division (mot.)"
			type = motorized
			strength = 100
			model = 1
		}
	}

	landunit = {
		id = { type = 30010 id = 71 }
		name = "Heeresgruppe Süd"
		leader = 334
		location = 166

		division = {
			id = { type = 30010 id = 72 }
			name = "HG Süd"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 164 }
			name = "62. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 166 }
			name = "213. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 168 }
			name = "221. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 73 }
		name = "8. Armee"
		leader = 20
		location = 167

		division = {
			id = { type = 30010 id = 74 }
			name = "8. Armee"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
	}

	landunit = {
		id = { type = 30010 id = 75 }
		name = "X. Armeekorps"
		leader = 266
		location = 164

		division = {
			id = { type = 30010 id = 78 }
			name = "24. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 80 }
			name = "30. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 81 }
		name = "XIII. Armeekorps"
		leader = 350
		location = 164

		division = {
			id = { type = 30010 id = 84 }
			name = "10. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 86 }
			name = "17. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 88 }
			name = "LSSAH"
			type = motorized
			strength = 20
			max_strength = 20
			model = 1
		}
	}
	
	landunit = {
		id = { type = 30010 id = 89 }
		name = "10. Armee"
		leader = 333
		location = 164

		division = {
			id = { type = 30010 id = 90 }
			name = "10. Armee"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 126 }
			name = "1. leichte Division"
			type = light_armor
			strength = 100
			model = 2
		}
	}
	
	landunit = {
		id = { type = 30010 id = 91 }
		name = "IV. Armeekorps"
		location = 164

		division = {
			id = { type = 30010 id = 94 }
			name = "4. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 96 }
			name = "46. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 97 }
		name = "XI. Armeekorps"
		leader = 315
		location = 164

		division = {
			id = { type = 30010 id = 100 }
			name = "18. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 102 }
			name = "19. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 103 }
		name = "XIV. Armeekorps"
		leader = 351
		location = 164

		division = {
			id = { type = 30010 id = 106 }
			name = "13. Infanterie-Division (mot.)"
			type = motorized
			strength = 100
			model = 1
		}
		division = {
			id = { type = 30010 id = 108 }
			name = "29. Infanterie-Division (mot.)"
			type = motorized
			strength = 100
			model = 1
		}
	}
	
	landunit = {
		id = { type = 30010 id = 109 }
		name = "XV. Armeekorps"
		leader = 142
		location = 164

		division = {
			id = { type = 30010 id = 112 }
			name = "2. leichte Division"
			type = light_armor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 30010 id = 114 }
			name = "3. leichte Division"
			type = light_armor
			strength = 100
			model = 2
		}
	}
	
	landunit = {
		id = { type = 30010 id = 115 }
		name = "XVI. Armeekorps"
		leader = 139
		location = 164

		division = {
			id = { type = 30010 id = 116 }
			name = "XVI. Armeekorps"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
		division = {
			id = { type = 30010 id = 118 }
			name = "1. Panzer-Division"
			type = armor
			strength = 100
			model = 0
		}
		division = {
			id = { type = 30010 id = 120 }
			name = "4. Panzer-Division"
			type = armor
			strength = 100
			model = 0
		}
		division = {
			id = { type = 30010 id = 122 }
			name = "14. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 124 }
			name = "31. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 127 }
		name = "14. Armee"
		leader = 188
		location = 201

		division = {
			id = { type = 30010 id = 128 }
			name = "14. Armee"
			type = hq
			strength = 50
			max_strength = 50
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30010 id = 129 }
		name = "VIII. Armeekorps"
		leader = 33
		location = 168

		division = {
			id = { type = 30010 id = 132 }
			name = "5. Panzer-Division"
			type = armor
			strength = 100
			model = 0
		}
		division = {
			id = { type = 30010 id = 134 }
			name = "8. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 136 }
			name = "28. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 138 }
			name = "239. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 140 }
			name = "SS Germania"
			type = motorized
			strength = 10
			max_strength = 10
			model = 1
		}
	}
	
	landunit = {
		id = { type = 30010 id = 141 }
		name = "XVII. Armeekorps"
		leader = 157
		location = 212

		division = {
			id = { type = 30010 id = 144 }
			name = "7. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 146 }
			name = "44. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 148 }
			name = "45. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 149 }
		name = "XVIII. Armeekorps"
		leader = 543
		location = 214

		division = {
			id = { type = 30010 id = 152 }
			name = "2. Panzer-Division"
			type = armor
			strength = 100
			model = 0
		}
		division = {
			id = { type = 30010 id = 154 }
			name = "4. leichte Division"
			type = light_armor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 30010 id = 156 }
			name = "3. Gebirgs-Division"
			type = bergsjaeger
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 157 }
		name = "VII. Armeekorps"
		leader = 340
		location = 206

		division = {
			id = { type = 30010 id = 160 }
			name = "27. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 162 }
			name = "68. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 169 }
		name = "XXII. Armeekorps"
		leader = 309
		location = 212

		division = {
			id = { type = 30010 id = 172 }
			name = "2. Gebirgs-Division"
			type = bergsjaeger
			strength = 100
			model = 10
		}
		division = {
			id = { type = 30010 id = 174 }
			name = "1. Gebirgs-Division"
			type = bergsjaeger
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 175 }
		name = "56. Infanterie-Division"
		leader = 171
		location = 172

		division = {
			id = { type = 30010 id = 176 }
			name = "56. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 177 }
		name = "57. Infanterie-Division"
		location = 204

		division = {
			id = { type = 30010 id = 178 }
			name = "57. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 179 }
		name = "252. Infanterie-Division"
		leader = 279
		location = 166

		division = {
			id = { type = 30010 id = 180 }
			name = "252. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}

	landunit = {
		id = { type = 30010 id = 181 }
		name = "257. Infanterie-Division"
		location = 163

		division = {
			id = { type = 30010 id = 182 }
			name = "257. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	landunit = {
		id = { type = 30010 id = 183 }
		name = "259. Infanterie-Division"
		location = 162

		division = {
			id = { type = 30010 id = 184 }
			name = "259. Infanterie-Division"
			type = infantry
			extra = artillery
			strength = 100
			model = 10
		}
	}
	
	navalunit = { 
		name = "Baltische Flotte" 
		id = { type = 30010 id = 185 } 
		leader = 383
		location = 2719 base = 158 #Pommeranian Bay 
		
		division = { id = { type = 30010 id = 186 } name = "KMS Schleswig-Holstein" type = battleship model = 2 }
		division = { id = { type = 30010 id = 187 } name = "KMS Schlesien" type = battleship model = 2 }
		division = { id = { type = 30010 id = 188 } name = "1. Zerstörergeschwader" type = destroyer model = 6 } 
		division = { id = { type = 30010 id = 189 } name = "2. Zerstörergeschwader" type = destroyer model = 6 }
		division = { id = { type = 30010 id = 190 } name = "3. Unterseebootflotille" type = submarine model = 5 } 
		division = { id = { type = 30010 id = 191 } name = "5. Unterseebootflotille" type = submarine model = 5 } 
	} 

	airunit = { 
		location = 167
		base = 167
		id = { type = 30010 id = 192 } 
		name = "Luftflotte 4" 
		leader = 560
		
		division = { id = { type = 30010 id = 193 } name = "JG 77 'Herz As'" strength = 100 type = interceptor model = 10 } 
		division = { id = { type = 30010 id = 194 } name = "Kampfgeschwader 76" strength = 100 type = tactical_bomber model = 7 } 
		division = { id = { type = 30010 id = 195 } name = "Kampfgeschwader 77" strength = 100 type = tactical_bomber model = 7 } 
		division = { id = { type = 30010 id = 196 } name = "Sturzkampfgeschwader 76" strength = 100 type = cas model = 2 } 
		division = { id = { type = 30010 id = 197 } name = "Sturzkampfgeschwader 77" strength = 100 type = cas model = 2 } 
	} 

	airunit = { 
		location = 184
		base = 184
		id = { type = 30010 id = 198 } 
		name = "Luftflotte 1" 
		leader = 450

		division = { id = { type = 30010 id = 199 } name = "JG 2 'Richthofen'" strength = 100 type = interceptor model = 10 } 
		division = { id = { type = 30010 id = 200 } name = "JG 3 'Udet'" strength = 100 type = interceptor model = 10 } 
		division = { id = { type = 30010 id = 201 } name = "KG 1 'Hindenburg'" strength = 100 type = tactical_bomber model = 7 } 
		division = { id = { type = 30010 id = 202 } name = "KG 2 'Holzhammer'" strength = 100 type = tactical_bomber model = 7 } 
		division = { id = { type = 30010 id = 203 } name = "KG 3 'Blitz'" strength = 100 type = tactical_bomber model = 7 } 
		division = { id = { type = 30010 id = 204 } name = "KG 4 'General Wever'" strength = 95 type = tactical_bomber  model = 7 } 
		division = { id = { type = 30010 id = 205 } name = "Sturzkampfgeschwader 1" strength = 60 type = cas model = 2 } 
		division = { id = { type = 30010 id = 206 } name = "Stukageschwader 2 'Immelmann'" strength = 70 type = cas model = 2 } 
		division = { id = { type = 30010 id = 207 } name = "JG 1 'Oesau'" strength = 100 type = multi_role model = 6 } 
	} 
}
