province = {
	id = 612
	air_base = {
		size = 5
		current_size = 5 
	}
}

province = {
	id = 591
	air_base = {
		size = 5
		current_size = 5 
	}
	anti_air = 3
}


province = {
	id = 599
	air_base = {
		size = 5
		current_size = 5 
	}
}



country = {
	tag = SOV

	ai = "fallweiss_SOV.ai"

	capital = 599

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic        = 1 
		political_left    = 10 
		freedom           = 1 
		free_market       = 1 
		professional_army = 6 
		defense_lobby     = 6 
		interventionism   = 4 
	}

	headofstate            = {  type = 9 id = 30002  } # Stalin 
	headofgovernment       = {  type = 9 id = 30016  } # Molotov 
	foreignminister        = {  type = 9 id = 30021  } 
	armamentminister       = {  type = 9 id = 30004  } 
	ministerofsecurity     = {  type = 9 id = 30028  } 
	ministerofintelligence = {  type = 9 id = 30033  } 
	chiefofstaff           = {  type = 9 id = 30038  } 
	chiefofarmy            = {  type = 9 id = 30008  } 
	chiefofnavy            = {  type = 9 id = 30049  } 
	chiefofair             = {  type = 9 id = 30053  }

	# Resource Reserves#No production in this scenario!
	oil = 15000
	supplies = 25000

	manpower = 100
	dissent = 15

	free = {
		ic = 15
	}

	extra_tc = 110

	ownedprovinces =      {
		593 590 591 592 599 594 596 597 598 595 609 616 611 612 614 618 619
	}
	controlledprovinces = {
		593 590 591 592 599 594 596 597 598 595 609 616 611 612 614 618 619
	}
	nationalprovinces =   {
		593 590 591 592 599 594 596 597 598 595 609 616 611 612 614 618 619
	}

	techapps = {
		#Early Infantry Division  
		1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
		#Early Mountain Division 
		1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
		#SEMI-MOTORIZED CAVALRY 
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
		#Motorised Inf
		1396 1400
		#Paratroopers
		1670 1680
		#Engineers
		1830 1840 1850 1860 1870
		#Interbellum 1930 Supply 
		1910 1920 1930 1940 1950 1960 1970 1980 1990 199130

		#Early Tank 
		7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2100 2070
		#Basic Armoured Car  
		2860 2870 2880 2020 2150
		#Early Field Artillery 
		2290 2300 2310 2900 2910 2920 2930 2940 2320
		#Anti-tank Artillery
		2400 2410
		#Early Static Anti-Air Artillery 
		2800 2450 21180 21190 21200 2460
		#Anti-air Brig
		2810 2820 2510 2520

		#Improved Destroyer 
		3010 3020 3030 3040 3050 3060 3070
		#Interwar Light Cruiser 
		3110 3120 3130 3140 3150 3160 
		#Improved Heavy Cruiser 
		3210 3220 3230 3240 3250 3260 12020
		#Great War Battlecruiser  
		3310 3320 3330 3340
		#Early Battleship 
		3410 3420 3430 3440 3450 3456 3460 3470 3480
		#Short Range Submarine 
		3610 3620 3630 3640 3650 3660
		#Seaplane carrier
		12100
		#Torpedo & ASW 18
		3720 3730 3736 3740 3750 3900 3910
		#Troopships
		3810 3820

		#CAS
		4400 4170 4280
		#Inteceptor  
		4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
		#Tactical Bomber 
		4600 4610 4620 4630 4120 4130 4140
		#Multirole fighter
		4300 4310 4320 4330 4340 4040 4070
		#Escort Fighter
		4050 4080
		#ww1 strategic bomber
		4800 4810 4820 4220 4230
		#ww1 navalbomber
		4700 4710 4190
		# Transports
		4290 4250 4260 4270
		#SEAPLANES
		4740 4750 4760 4770

		#Modern Agriculture  
		5700 5710 5010 5020 
		#Computers & cryptografi
		5310 54010 54020 54030 5320 5316 5326 5327 5350
		#manufactoring
		5810 5820 5830 5050 5060 5070
		#Construction Engineering 
		5800 5080 5090 5100
		#Radar
		5410 5416
		#Basic Oil Refining 
		5190 5200
		#Medicine
		5600 5610 5620 5630
		# Atomics
		5470 5480
		#Exp. Rocket
		5560

		#Great War Hospital System 
		14000 14010 14020 14030
		# Great War Land Doctrines (central powers)
		6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910
		#Land Doctrines
		6570 6300 6900 6310

		# Naval Doctrines 
		# Theory
		8010 8020 8030 8040 8050 8060 8070 8080
		# Amphib
		82300
		# Logistics
		82500
		# Naval Interdiction
		8500 8510 8550 8560 8600 8610
		# Indirect Approach
		81300 81310 81320 81330 81340 81350 81360
		# Naval Supremacy
		8100 8110 8120 8150 8160 8200 8210

		#Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
		9040 9050 9060 9070 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220
	}

###########################
# USSR OOB 1939
# http://www.geocities.com/kumbayaaa/warpolishsoviet1939.html
# General note - Soviet infantry givisions had extra artillery support (two artillery regiments 
# per division) - I give one artillery brigade per corps to represent that
##########################

	landunit = {
		id = { type = 10846 id = 1 }
		name = "Belorusskiy Front"
		location = 599

		division = {
			locked = yes
			id = { type = 10846 id = 2 }
			name = "Belorusskiy Front"
			strength = 100
			type = hq
			model = 2
		}
	}
	
	landunit = {
		id = { type = 10846 id = 3 }
		name = "3-ya Armiya"
		location = 593
		leader = 30269

		division = {
			locked = yes
			id = { type = 10846 id = 4 }
			name = "3-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 5 }
		name = "4-y Strelkovyi Korpus"
		location = 593

		division = {
			locked = yes
			id = { type = 10846 id = 6 }
			name = "27-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 7 }
			name = "50-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}
	
	landunit = {
		id = { type = 10846 id = 8 }
		name = "Lepel Gruppa"
		location = 593

		division = {
			locked = yes
			id = { type = 10846 id = 9 }
			name = "5-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 10 }
			name = "24-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 11 }
			name = "22-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 12 }
			name = "25-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 13 }
		name = "11-ya Armiya"
		location = 592

		division = {
			locked = yes
			id = { type = 10846 id = 14 }
			name = "11-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}
	
	landunit = {
		id = { type = 10846 id = 15 }
		name = "16-y Strelkovyi Korpus"
		location = 592

		division = {
			locked = yes
			id = { type = 10846 id = 16 }
			name = "2-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 17 }
			name = "100-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}

	landunit = {
		id = { type = 10846 id = 18 }
		name = "3-y Kavaleriyskiy Korpus"
		location = 592

		division = {
			locked = yes
			id = { type = 10846 id = 19 }
			name = "7-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 20 }
			name = "36-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 21 }
			name = "6-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 22 }
		name = "5-y Strelkovyi Korpus"
		location = 599

		division = {
			locked = yes
			id = { type = 10846 id = 23 }
			name = "4-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 24 }
			name = "13-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}

	landunit = {
		id = { type = 10846 id = 25 }
		name = "6-y Kavaleriyskiy Korpus"
		location = 599

		division = {
			locked = yes
			id = { type = 10846 id = 26 }
			name = "4-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 27 }
			name = "6-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 28 }
			name = "11-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
	}

	landunit = {
		id = { type = 10846 id = 29 }
		name = "6-y Tankovyi Korpus"
		location = 599

		division = {
			locked = yes
			id = { type = 10846 id = 30 }
			name = "2-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 31 }
			name = "21-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 32 }
			name = "27-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 33 }
			name = "20-ya Motorizovannaya Brigada"
			strength = 25
			max_strength = 25
			type = motorized
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 34 }
		name = "10-ya Armiya"
		location = 596

		division = {
			locked = yes
			id = { type = 10846 id = 35 }
			name = "10-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 36 }
		name = "11-y Strelkovyi Korpus"
		location = 596

		division = {
			locked = yes
			id = { type = 10846 id = 37 }
			name = "6-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 38 }
			name = "33-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 39 }
			name = "121-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}

	landunit = {
		id = { type = 10846 id = 40 }
		name = "4-ya Armiya"
		location = 597

		division = {
			locked = yes
			id = { type = 10846 id = 41 }
			name = "4-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
		division = {
			locked = yes
			id = { type = 10846 id = 42 }
			name = "8-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 43 }
			name = "29-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 44 }
			name = "32-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 45 }
		name = "24-y Strelkovyi Korpus"
		location = 597

		division = {
			locked = yes
			id = { type = 10846 id = 46 }
			name = "52-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}

	landunit = {
		id = { type = 10846 id = 47 }
		name = "Ukrainskiy Front"
		location = 612

		division = {
			locked = yes
			id = { type = 10846 id = 48 }
			name = "Ukrainskiy Front"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 49 }
		name = "5-ya Armiya"
		location = 595

		division = {
			locked = yes
			id = { type = 10846 id = 50 }
			name = "5-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 51 }
		name = "15-y Strelkovyi Korpus"
		location = 595

		division = {
			locked = yes
			id = { type = 10846 id = 52 }
			name = "45-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 53 }
			name = "60-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 54 }
			name = "87-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
	}

	landunit = {
		id = { type = 10846 id = 55 }
		name = "8-y Strelkovyi Korpus"
		location = 595

		division = {
			locked = yes
			id = { type = 10846 id = 56 }
			name = "44-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 57 }
			name = "81-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 58 }
			name = "36-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 59 }
		name = "6-ya Armiya"
		location = 616

		division = {
			locked = yes
			id = { type = 10846 id = 60 }
			name = "6-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 61 }
		name = "2-y Kavaleriyskiy Korpus"
		location = 616

		division = {
			locked = yes
			id = { type = 10846 id = 62 }
			name = "3-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 63 }
			name = "5-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 64 }
			name = "14-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 65 }
			name = "24-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = light_armor
			model = 1
		}
	}

	landunit = {
		id = { type = 10846 id = 66 }
		name = "17-y Strelkovyi Korpus"
		location = 616

		division = {
			locked = yes
			id = { type = 10846 id = 67 }
			name = "96-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 68 }
			name = "97-ya Strelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 9
			extra = artillery
		}
		division = {
			locked = yes
			id = { type = 10846 id = 69 }
			name = "10-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 70 }
			name = "38-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 71 }
		name = "12-ya Armiya"
		location = 618

		division = {
			locked = yes
			id = { type = 10846 id = 72 }
			name = "12-ya Armiya"
			strength = 100
			type = hq
			model = 2
		}
	}

	landunit = {
		id = { type = 10846 id = 73 }
		name = "4-y Kavaleriyskiy Korpus"
		location = 618

		division = {
			locked = yes
			id = { type = 10846 id = 74 }
			name = "32-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 75 }
			name = "34-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 76 }
			name = "26-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 77 }
		name = "5-y Kavaleriyskiy Korpus"
		location = 618

		division = {
			locked = yes
			id = { type = 10846 id = 78 }
			name = "9-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 79 }
			name = "16-ya Kavaleriyskaya Diviziya"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			locked = yes
			id = { type = 10846 id = 80 }
			name = "23-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
	}

	landunit = {
		id = { type = 10846 id = 81 }
		name = "25-y Tankovyi Korpus"
		location = 618

		division = {
			locked = yes
			id = { type = 10846 id = 82 }
			name = "4-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = light_armor
			model = 1
		}
		division = {
			locked = yes
			id = { type = 10846 id = 83 }
			name = "5-ya Tankovaya Brigada"
			strength = 25
			max_strength = 25
			type = armor
			model = 0
		}
		division = {
			locked = yes
			id = { type = 10846 id = 84 }
			name = "1-ya Motorizovannaya Brigada"
			strength = 25
			max_strength = 25
			type = motorized
			model = 0
		}
	}
################################### END OF LAND FORCES

	airunit = {
		id = { type = 10846 id = 85 }
		name = "Kievskoe Vozdushnoe Komandovanie"
		location = 612
		base = 612

		division = {
			id = { type = 10846 id = 86 }
			name = "36./44. IAD"
			strength = 100
			type = interceptor
			model = 8
		}
		division = {
			id = { type = 10846 id = 87 }
			name = "63./64. IAD"
			strength = 100
			type = interceptor
			model = 8
		}
		division = {
			id = { type = 10846 id = 88 }
			name = "19./62. BAD"
			strength = 100
			type = tactical_bomber
			model = 6
		}
		division = {
			id = { type = 10846 id = 89 }
			name = "14./15. IAD"
			strength = 100
			type = interceptor
			model = 8
		}
		division = {
			id = { type = 10846 id = 90 }
			name = "17. IAD"
			strength = 50
			type = interceptor
			model = 8
		}
	}

	airunit = {
		id = { type = 10846 id = 91 }
		name = "Zapadnoe Vozdushnoe Komandovanie"
		location = 599
		base = 599

		division = {
			id = { type = 10846 id = 92 }
			name = "11./184. IAD"
			strength = 100
			type = interceptor
			model = 8
		}
		division = {
			id = { type = 10846 id = 93 }
			name = "12./13. BAD"
			strength = 100
			type = tactical_bomber
			model = 6
		}
		division = {
			id = { type = 10846 id = 94 }
			name = "9./10. IAD"
			strength = 100
			type = interceptor
			model = 8
		}
	}
}
