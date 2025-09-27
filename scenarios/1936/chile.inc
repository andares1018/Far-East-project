 
 ############################## 
 # Country definition for CHL # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHL 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# Resource Reserves 
	energy                 = 720
	metal                  = 360
	rare_materials         = 180
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 2023 
	manpower               = 20 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 6 
     free_market       = 8 
     freedom           = 7 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 2 
    } 

   nationalprovinces      = {  2022 2023 2024 2025 2030 2031 2032 2043 } 
   ownedprovinces         = {  2022 2023 2024 2025 2030 2031 2032 2043  } 
   controlledprovinces    = {  2022 2023 2024 2025 2030 2031 2032 2043  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010 1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160 1170 1180 1190 1200 1210 1220 1230 1240
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 1860 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Mechanized Agriculture 
5700 5710 5010 5020
#Computers & cryptografi
5310 54010 54020 5316 5326
#Improved Construction Engineering 
5800 5080  

#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Great War Battleship 
3410 3420 3430 3440 3450 3456 3460 3470
#Short Range Submarine 
3610 3620 3630 3640
#Early Light Cruiser 
3110 3120 3130
#Early Heavy Cruiser 
3210 3220 3230
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines 
8010 8020 8040 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010

}
inventions = { 3000027 } 
   diplomacy = 
   {  relation = {  tag = ARG value = -20  } 
     relation = {  tag = BOL value = -50  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = COL value = 15  } 
     relation = {  tag = ECU value = 20  } 
     relation = {  tag = GER value = 50  } 
     relation = {  tag = ITA value = 30  } 
     relation = {  tag = JAP value = 20  } 
     relation = {  tag = PAR value = 35  } 
     relation = {  tag = PRU value = -25  } 
     relation = {  tag = URU value = 20  } 
     relation = {  tag = USA value = 100  } 
     relation = {  tag = VEN value = 20  } 
    } 
   SpyInfo                = {  country = "CHL" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 210001  } 
   headofgovernment       = {  type = 9 id = 210002  } 
   foreignminister        = {  type = 9 id = 210003  } 
   armamentminister       = {  type = 9 id = 210004  } 
   ministerofsecurity     = {  type = 9 id = 210005  } 
   ministerofintelligence = {  type = 9 id = 210006  } 
   chiefofstaff           = {  type = 9 id = 210007  } 
   chiefofarmy            = {  type = 9 id = 210008  } 
   chiefofnavy            = {  type = 9 id = 210009  } 
   chiefofair             = {  type = 9 id = 210010  } 
   landunit = 
   {  id       = {  type = 12500 id = 1  } 
     name     = "Ejercito de Chile" 
     location = 2023 
     Division = 
     {  id       = {  type = 12500 id = 2  } 
       name     = "1. División de Infantería" 
       strength   = 30 
       type     = infantry 
       model    = 6
       extra    = artillery 
	   brigade_model = 4
      } 
     Division = 
     {  id       = {  type = 12500 id = 3  } 
       name     = "2. División de Infantería" 
       strength   = 30 
       type     = infantry 
       model    = 6
      } 
     Division = 
     {  id       = {  type = 12500 id = 4  } 
       name     = "1. División de Montaña de Chile" 
       strength   = 30 
       type     = bergsjaeger 
       model    = 6 
	   extra    = engineer 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 12500 id = 5  } 
       name     = "División Caballería nro. 1" 
       strength   = 40 
       type     = cavalry 
       model    = 7 
      } 
    } 
	navalunit = { 
		id = { type = 12500 id = 6 } 
		name = "Armada de Chile" 
		location = 2023 
		base = 2023 
		division = { 
			id = { type = 12500 id = 7 } 
			name = "Flotilla des Torpideros nro. 1" 
			type = destroyer 
			model = 2
			} 
		division = { 
			id = { type = 12500 id = 887 } 
			name = "Flotilla des Torpideros nro. 2" 
			type = destroyer 
			model = 4
			} 
		division = { 
			id = { type = 12500 id = 9 } 
			name = "BACH Almirante Latorre" 
			type = battleship 
			model = 4 
			} 
		division = { 
			id = { type = 12500 id = 14 } 
			name = "BACH Almirante O'Higgins" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 12500 id = 10 } 
			name = "BACH Blanco Encalada" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 12500 id = 11 } 
			name = "BACH Chacabuco" 
			type = light_cruiser 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 12500 id = 2438 } 
		name = "I Flotilla de la Armada" 
		location = 2023 
		base = 2023 
		division = { 
			id = { type = 12500 id = 13 } 
			name = "Flotilla des Submarinos nro. 2" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 12500 id = 12 } 
			name = "Flotilla des Submarinos nro. 1" 
			type = submarine 
			model = 1 
			} 
		} 
  } 
 