 
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
	energy                 = 900
	metal                  = 450
	rare_materials         = 225
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 377 
	transports             = 100 
	escorts                = 15 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 #5 
     political_left    = 3 #2 
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

   # Western Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#Engineers
1830 1840 1850 
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Early Anti-Tank Artillery 
#2400
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080  
#Basic Oil Refining 
#5190
#Computers & cryptografi
5310 54010 54020 5316 5326
#Medicine
5600 5610 5620 5630
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Early Light Cruiser 
3110 3120 3130
#Early Heavy Cruiser 
3210 3220 3230
#Short Range Submarine
3610 3620 3630 3640
#Naval Doctrines
8020 8040 8050 
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = BUL value = -75  } 
     relation = {  tag = ENG value = 50  } 
     relation = {  tag = FIN value = 40  } 
     relation = {  tag = FRA value = 20  } 
     relation = {  tag = GER value = 15  } 
     relation = {  tag = GRE value = 75  } 
     relation = {  tag = ITA value = -35  } 
     relation = {  tag = POL value = 35  } 
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
	
	headofstate            = {  type = 9 id = 90014  } #Georgios II
	headofgovernment       = {  type = 9 id = 90002  } #Constantinos Demertzis
	foreignminister        = {  type = 9 id = 90003  } #Constantinos Demertzis
	armamentminister       = {  type = 9 id = 90004  } #Georgios Mantzavinos
	ministerofsecurity     = {  type = 9 id = 90005  } #Georgios Logothetis
	ministerofintelligence = {  type = 9 id = 90241  } #Ioannis Metaxas
	chiefofstaff           = {  type = 9 id = 90123  } #Alexandros Papagos 
	chiefofarmy            = {  type = 9 id = 90008  } #Alexandros Papagos
	chiefofnavy            = {  type = 9 id = 90009  } #Alexandros Sakellariou
	chiefofair             = {  type = 9 id = 90242  } #Panagiotes Gazis
	
landunit =
   { id = { type = 15500 id = 1 }
     location = 377
     name = "I. Soma Stratou"
     Division =
     { id = { type = 15500 id = 2 }
       name = "2. Merarchia Pezikou"
       strength = 40
       model = 6
       type = infantry
      }
     Division =
     { id = { type = 15500 id = 3 }
       name = "3. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 6
      }
     Division =
     { id = { type = 15500 id = 4 }
       name = "4. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
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
       strength = 40
       type = infantry
       model = 6
      }
     Division =
     { id = { type = 15500 id = 7 }
       name = "9. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
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
       strength = 40
       type = infantry
       model = 7
       extra = artillery
       brigade_model = 5
      }
     Division =
     { id = { type = 15500 id = 10 }
       name = "10. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
      }
     Division =
     { id = { type = 15500 id = 11 }
       name = "11. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
      }
     Division =
     { id = { type = 15500 id = 12 }
       name = "17. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
      }
    }
   landunit =
   { id = { type = 15500 id = 13 }
     location = 375
     name = "IV. Soma Stratou"
     Division =
     { id = { type = 15500 id = 14 }
       name = "7. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
      }
     Division =
     { id = { type = 15500 id = 15 }
       name = "14. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
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
       strength = 40
       type = infantry
       model = 6
      }
     Division =
     { id = { type = 15500 id = 18 }
       name = "13. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 7
      }
    }
   landunit =
   { id = { type = 15500 id = 19 }
     location = 382
     name = "VI. Soma Stratou"
     Division =
     { id = { type = 15500 id = 20 }
       name = "5. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 6
      }
     Division =
     { id = { type = 15500 id = 21 }
       name = "8. Merarchia Pezikou"
       strength = 40
       type = infantry
       model = 6
       extra = artillery
       brigade_model = 6
      }
     Division =
     { id = { type = 15500 id = 22 }
       name = "1. Merarchia Ippikou"
       strength = 40
       type = cavalry
       model = 6
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
            model = 1
            }
        division = {
            id = { type = 15500 id = 31 }
            name = "BEN Helle"
            type = light_cruiser
            model = 0
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
 