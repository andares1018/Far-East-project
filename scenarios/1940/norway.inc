 
 ############################## 
 # Country definition for NOR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = NOR 
	ai = "nor_1940.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 3 
	capital                = 495 

	# Norwegian merchant marine is INSANE! 
	transports             = 200 
	escorts                = 5 
   diplomacy = 
   {  relation = {  tag = BEL value = 100  } 
     relation = {  tag = DEN value = 150  } 
     relation = {  tag = ENG value = 90  } 
     relation = {  tag = FIN value = 75  }
     relation = {  tag = FRA value = 150  }
     relation = {  tag = GER value = -200  } 
     relation = {  tag = HOL value = 100  } 
     relation = {  tag = LUX value = 100  } 
     relation = {  tag = SWE value = 150  } 
     relation = {  tag = U05 value = 100  }
     relation = {  tag = USA value = 75  } 
    } 
   SpyInfo                = {  country = "NOR" NumberOfSpies = 5  } 
   nationalprovinces      = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
   ownedprovinces         = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
   controlledprovinces    = {  497 496 495  } 
   # Western Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Early Heavy Cruiser 
3210 3220 3230
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Mechanized Agriculture 
5700 5710 5010 5020
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190

#Great War Destroyer 
3010 3020 3030 3040
#Early Light Cruiser 
3110 3120 3130
#Great War Battleship 
3410 3420 3430 3440 3450 3456 3460
#Short Range Submarine 
3610 3620 3630
#Naval Doctrines
8010 8020 8040 8050 
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Naval Infantry
#1560 1570 1580
#Engineers
1830 1840 1850 1860
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 5630
# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
                             } 
	inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 9 
     freedom           = 7 
     free_market       = 7 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 2 
    } 

   headofstate            = {  type = 9 id = 65001  } 
   headofgovernment       = {  type = 9 id = 65002  } 
   foreignminister        = {  type = 9 id = 65003  } 
   armamentminister       = {  type = 9 id = 65004  } 
   ministerofsecurity     = {  type = 9 id = 65005  } 
   ministerofintelligence = {  type = 9 id = 65006  } 
   chiefofstaff           = {  type = 9 id = 65007  } 
   chiefofarmy            = {  type = 9 id = 65008  } 
   chiefofnavy            = {  type = 9 id = 65060  } #Henry Diesen
   chiefofair             = {  type = 9 id = 65142  } #Henry Diesen
   landunit = 
   {  location = 495 
     name     = "6. Divisjon" 
     id       = {  type = 12600 id = 11  } 
     Division = 
     {  id       = {  type = 12600 id = 12  } 
       name     = "6. Infanteridivisjon" 
       type     = infantry 
	   model = 8
       strength = 20 
      } 
    } 
  } 
 
