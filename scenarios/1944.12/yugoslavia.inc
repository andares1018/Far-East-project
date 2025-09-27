    ############################## 
     # Country definition for U27 # 
     ############################## 
  
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U27 
	puppet                 = SOV
	control                = SOV
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes RES = yes } }	
	# Resource Reserves 
	energy                 = 1000 
	metal                  = 1000
	rare_materials         = 500
	supplies               = 500 
	money                  = 100 
	manpower               = 750 # 650,000 by late 1944
	capital                = 338 
   diplomacy = 
   { relation = {  tag = SOV value = 200  } 
    } 
   SpyInfo                = {  country = "U27" NumberOfSpies = 7  } 
   nationalprovinces      = {  327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 403 406 } 
   ownedprovinces         = {  349 346 345 344 338 353 350 355 354 356 343 332 330 342 329 341 336 333 328 347 357 358 351 335 340 327 337 339 331 334  } 
   controlledprovinces    = {  327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 350 351 356  } 
   claimedprovinces       = {  337 343 344 345 347 350 351 353 354 355 356 357 358  } 
   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640 2646 2650 2030
#Basic Armoured Car  
2860 2870 2880 2020 2150
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Medicine
5600 5610 5620 5630
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Mechanized Agriculture 
5700 5710 5010
#Improved Construction Engineering 
5800 5080 5090 
#rocket
5560

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6680 6540 6910
#Land Doctrines
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  
 }
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 2 
     political_left    = 6 
     free_market       = 3 
     freedom           = 3 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   headofstate            = {  type = 9 id = 950002  } 
   headofgovernment       = {  type = 9 id = 950003  } 
   foreignminister        = {  type = 9 id = 950004  } 
   armamentminister       = {  type = 9 id = 950005  } 
   ministerofsecurity     = {  type = 9 id = 950016  } 
   ministerofintelligence = {  type = 9 id = 950006  } 
   chiefofstaff           = {  type = 9 id = 950009  } 
   chiefofarmy            = {  type = 9 id = 950010  } 
   chiefofnavy            = {  type = 9 id = 950011  } 
   chiefofair             = {  type = 9 id = 950008  }
	landunit = {
		id = { type = 30204 id = 49 }
		name = "Jugoslavenska Narodna Armija"
		location = 338
		division = {
			id = { type = 30204 id = 50 }
			name = "Generalstab Srbije"
			strength = 40
			type = hq
			model = 2
			experience = 20
		}
		division = {
			id = { type = 30204 id = 51 }
			name = "22. Srpska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 52 }
			name = "24. Srpska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 53 }
			name = "46. Srpska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 54 }
			name = "47. Srpska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 1 }
		name = "I. Proleterski Korpus"
		location = 337
		division = {
			id = { type = 30204 id = 2 }
			name = "1. Proleterska Divizija"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 3 }
			name = "6. Licka Proleterska Divizija 'Nikola Tesla'"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 4 }
			name = "5. Krajiska Divizija"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 5 }
			name = "21. Srpska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 6 }
		name = "II. Udarnicki Korpus"
		location = 335
		division = {
			id = { type = 30204 id = 7 }
			name = "2. Proleterska Divizija"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 8 }
			name = "3. Udarna Divizija"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 9 }
			name = "29. Hercegovacka Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 10 }
			name = "37. Sandzacka Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 11 }
		name = "III. Korpus"
		location = 342
		division = {
			id = { type = 30204 id = 12 }
			name = "17. Istocno-Bosanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 13 }
			name = "27. Istocno-Bosanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 14 }
			name = "38. Bosanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 15 }
		name = "IV. Korpus"
		location = 356
		division = {
			id = { type = 30204 id = 16 }
			name = "7. Banijska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 17 }
			name = "8. Kordunaska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 18 }
			name = "34. Hrvatska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 19 }
		name = "V. Korpus"
		location = 332
		division = {
			id = { type = 30204 id = 20 }
			name = "4. Krajiska Divizija"
			strength = 55
			type = infantry
			model = 9
			experience = 20
		}
		division = {
			id = { type = 30204 id = 21 }
			name = "10. Krajiska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 22 }
			name = "11. Krajiska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 23 }
		name = "VI. Korpus"
		location = 341
		division = {
			id = { type = 30204 id = 24 }
			name = "12. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 25 }
			name = "28. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 26 }
			name = "40. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 27 }
		name = "VII. Korpus"
		location = 351
		division = {
			id = { type = 30204 id = 28 }
			name = "14. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 29 }
			name = "15. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 30 }
			name = "18. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 31 }
		name = "VIII. Dalmatinski Udarni Korpus"
		location = 356
		division = {
			id = { type = 30204 id = 32 }
			name = "9. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 33 }
			name = "19. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 34 }
			name = "20. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 35 }
			name = "26. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 36 }
		name = "IX. Korpus"
		location = 350
		division = {
			id = { type = 30204 id = 37 }
			name = "30. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 38 }
			name = "31. Slavonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 39 }
		name = "X. Zagrebacki Korpus"
		location = 340
		division = {
			id = { type = 30204 id = 40 }
			name = "32. Zagorska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 41 }
			name = "33. Hrvatska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 42 }
		name = "XI. Korpus"
		location = 342
		division = {
			id = { type = 30204 id = 43 }
			name = "13. Primorsko-Goranska Udarna Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 44 }
			name = "35. Licka Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 45 }
		name = "XII. Korpus"
		location = 340
		division = {
			id = { type = 30204 id = 46 }
			name = "16. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 47 }
			name = "36. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 48 }
			name = "51. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 55 }
		name = "XIV. Korpus"
		location = 342
		division = {
			id = { type = 30204 id = 56 }
			name = "23. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 57 }
			name = "25. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 58 }
			name = "45. Vojvodanska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 59 }
		name = "XV. Korpus"
		location = 333
		division = {
			id = { type = 30204 id = 60 }
			name = "41. Makedonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 61 }
			name = "48. Makedonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
		division = {
			id = { type = 30204 id = 62 }
			name = "49. Makedonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 63 }
		name = "XVI. Korpus"
		location = 334
		division = {
			id = { type = 30204 id = 64 }
			name = "42. Makedonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
	landunit = {
		id = { type = 30204 id = 65 }
		name = "Bregalnicko-Strumicki Korpus"
		location = 334
		division = {
			id = { type = 30204 id = 66 }
			name = "50. Makedonska Divizija"
			strength = 55
			type = militia
			model = 5
			experience = 20
		}
	}
}