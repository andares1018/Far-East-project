 
 ############################## 
 # Country definition for JAP # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = JAP 
	ai                     = "JAP_1939.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes} }
	belligerence           = 15 
	capital                = 1552 
	manpower               = 8000 
	# Resource Reserves 
	energy                 = 5000 
	metal                  = 5000 
	rare_materials         = 2500 
	oil                    = 7500 
	supplies               = 250 
	money                  = 100
	transports             = 1100 
	escorts                = 11 

  diplomacy =
  { relation = { tag = AST value = -25 }
    relation = { tag = BEL value = -25 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = CYN value = -100 }
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = -40 }
    relation = { tag = GER value = 75 }
    relation = { tag = HOL value = -50 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = MEN value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = SIK value = -170 }
    relation = { tag = U05 value = -50 }
    relation = { tag = USA value = 15 }
  }
   SpyInfo                = {  country = "JAP" NumberOfSpies = 9  } 
    
   # Sakhalin 
   nationalprovinces      = {  1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1555 1542   
                              1541
         1547 1548 1546 
		 1228 1229 1230 1231 1232 1233 # South Korea 
		1221 1222 1223 1224 1225 1226 1227 # North Korea
		 1361 1362 1363 1364 # Taiwan 
                             } 
   ownedprovinces         = {  1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1686 1685 1684 1668 
        1670 1671 1665 1669 1667 1666 1674 1675 1676 1677 1681   1364 1225 1226 
  
         1227 1223 1221 1228 1233 1232 1231 1230 1224 1219  1542 1555 1361  
         1547 1548 1546 
 # Sakhalin 
 1222 1229 1363 
  
 #Japan in China        
 1362 1245 } 
  
   controlledprovinces    = {  1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1686 1685 1684 1668 
                              1670 1671 1665 1669 1667 1666 1674 1675 1676 1677 1681   1364 1225 1226 
                              1227 1223 1221 1228 1233 1232 1231 1230 1224 1219  1542 1555 1361  
         1547 1548 1546 1362 
 # Sakhalin 
 1222 1229 1363 
  
 #Japan in China        
 1245 1241 1247 1242 1243 1244 1251 1252 1248 1249 1250 1327 1328 1329 1330 1331 1332 1321 1323 1333 1334 1335 1339 1336 1340 1337 1338 1344 1342 1345 1343 1350 1353 
 1318 1369 1365 1370 1346 1348 1253 1254 1322 1367 1358
                             } 
   claimedprovinces = {   
 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 #Pacific Island
 1219 #Port Arthur / Dalian
 1245 #Tangshan (border between Manchukuo and Japan under Japanese rule for gameplay reason)
 1683 #Guam 
 } 	
	# JAP 1936 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396
	# Paratroopers
	1670
	# Marines
	1560 1570 1580 1590
	# Engineers
	1830 1840 1850 1860 1870 
	# Interbellum 1930 Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130

	# Tanks 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040
	# Basic Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-Tank Artillery 
	2400 2410
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Battle Cruiser
	3310 3320 3330 3340
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Super Heavy Battleship
	3490
	# Air Carrier
	3510 3520 3530 3540 3550
	# Light carrier 
	12100 12110 12120 12130
	# Submarine
	3610 3620 3630 3640 3650 3660
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900
	# Troopships
	3810 3820 3830

	# Close Air support
	4400 4170
	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Escort Fighter
	4050
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140
	# Naval Bomber 
	4700 4710 4190
	# Transports
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# strategic bomber
	4800 4810 4820
	# CAG
	4900 4910 4920 4930 4280

	# Agriculture
	5700 5710 5010 5020 5030
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Oil Refining 
	5190 
	#Computers & cryptography
	5310 54010 54020 54030 5320
	5316 5326 5327 5350
	# RADAR
	5410 5416 
	# Medicine
	5600 5610 5620
	# Exp. Rocket
	5560

	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6390 6400 6420 6410
	# Hospital System 
	14000 14010 14020 14030

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940 8950 8960 8970 8980
	# Subsidiary Carrier Role
	81650
	# Aerial Supremacy column
	81700 81710 81720
	# Scouting Focus column
	81850 81860 81870
	# Amphibious Warfare
	82300 82310
	# Logistic Support
	82500
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 9190 9200 9210 9220 9230 9240
	} 
	
blueprints = { 81730 81740 } 
inventions = { 3000027 }

policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 2 
     freedom           = 3 
     free_market       = 4 
     professional_army = 7 
     defense_lobby     = 8 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 50001  } 
   headofgovernment       = {  type = 9 id = 50052  } # Abe Nobuyuki
   foreignminister        = {  type = 9 id = 50078  } # Abe Nobuyuki
   armamentminister       = {  type = 9 id = 50128  } # Kazuo Aoki
   ministerofsecurity     = {  type = 9 id = 50231  } # Ohara Naoshi
   ministerofintelligence = {  type = 9 id = 50187  } 
   chiefofstaff           = {  type = 9 id = 50304  } 
   chiefofarmy            = {  type = 9 id = 50330  } 
   chiefofnavy            = {  type = 9 id = 50360  } 
   chiefofair             = {  type = 9 id = 50394  }
   
  ### Japan Land OOB ### 

   landunit = 
   {  id       = {  type = 13016 id = 1000  } 
     name     = "Shina Hakengun" # China Expeditionary Army
     location = 1338 
     Division = 
     {  id       = {  type = 13016 id = 1001  } 
       name     = "Shina Hakengun shireibu"
       strength  = 80 
       type     = hq 
       model    = 3 
      }
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1002  } 
     name     = "Kita Shina Hômengun" # North China Theater Army
     location = 1247 
     Division = 
     {  id       = {  type = 13016 id = 1003  } 
       name     = "Kita Shina Hômengun shireibu"
       strength  = 80 
       type     = hq 
       model    = 3 
      }
     Division = 
     {  id       = {  type = 13016 id = 1004  } 
       name     = "Dai 27 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1005  } 
     name     = "Kita Shina Hômengun" 
     location = 1243 
     Division = 
     {  id       = {  type = 13016 id = 1006  } 
       name     = "Dai 35 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1007  } 
     name     = "Kita Shina Hômengun" 
     location = 1245 
     Division = 
     {  id       = {  type = 13016 id = 1008  } 
       name     = "Dai 1 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1009  } 
     name     = "Kita Shina Hômengun" 
     location = 1241 
     Division = 
     {  id       = {  type = 13016 id = 1010  } 
       name     = "Dai 7 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1011  } 
     name     = "Kita Shina Hômengun" 
     location = 1244 
     Division = 
     {  id       = {  type = 13016 id = 1012  } 
       name     = "Dai 8 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1013  } 
     name     = "Kita Shina Hômengun" 
     location = 1323 
     Division = 
     {  id       = {  type = 13016 id = 1014  } 
       name     = "Dai 15 Dokuritsu konsei ryodan" # Independent Mixed Brigade 
       strength  = 60
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 500  } 
     name     = "Moukogo Gun" # Mongol Army
     location = 1269 
     Division = 
     {  id       = {  type = 13016 id = 9  } 
       name     = "Dai 26 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = anti_air 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 13016 id = 10  } 
       name     = "Dai 2 Dokuritsu konsei ryodan" # Independent Mixed Brigade 
       strength = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 11  } 
       name     = "Dai 1 Moukogo Kiheishidan" 
       strength  = 70 
       type     = cavalry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 13016 id = 12  } 
       name     = "Dai 2 Moukogo Kiheishidan" 
       strength  = 70 
       type     = cavalry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 13016 id = 13  } 
       name     = "Dai 3 Moukogo Kiheishidan" 
       strength  = 70 
       type     = cavalry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 13016 id = 14  } 
       name     = "Dai 4 Moukogo Kiheishidan" 
       strength  = 70 
       type     = cavalry 
       model    = 7 
      } 
     Division = 
     {  id       = {  type = 13016 id = 15  } 
       name     = "Dai 5 Moukogo Kiheishidan" 
       strength  = 70 
       type     = cavalry 
       model    = 7 
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1015  } 
     name     = "Dai 1 Gun" # 1st Army
     location = 1252
     Division = 
     {  id       = {  type = 13016 id = 4  } 
       name     = "Dai 37 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 6
      }
     Division = 
     {  id       = {  type = 13016 id = 1016  } 
       name     = "Dai 3 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1017  } 
     name     = "Dai 1 Gun" 
     location = 1254
     Division = 
     {  id       = {  type = 13016 id = 3  } 
       name     = "Dai 36 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1018  } 
       name     = "Dai 41 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1019  } 
     name     = "Dai 1 Gun" 
     location = 1253
     Division = 
     {  id       = {  type = 13016 id = 1020  } 
       name     = "Dai 4 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1021  } 
       name     = "Dai 9 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1022  } 
       name     = "Dai 16 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1023  } 
     name     = "Dai 12 Gun" # 12th Army
     location = 1321
     Division = 
     {  id       = {  type = 13016 id = 1024  } 
       name     = "Dai 32 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1025  } 
       name     = "Dai 10 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1026  } 
     name     = "Dai 12 Gun" 
     location = 1322
     Division = 
     {  id       = {  type = 13016 id = 1027  } 
       name     = "Dai 5 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1028  } 
       name     = "Dai 6 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1031  } 
     name     = "Dai 11 Gun" 
     location = 1327
     Division = 
     {  id       = {  type = 13016 id = 1032  } 
       name     = "Dai 3 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1033  } 
       name     = "Dai 13 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1034  } 
     name     = "Dai 11 Gun" 
     location = 1336
     Division = 
     {  id       = {  type = 13016 id = 1035  } 
       name     = "Dai 6 'Kumamoto' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1036  } 
       name     = "Dai 14 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1037  } 
     name     = "Dai 11 Gun" 
     location = 1339
     Division = 
     {  id       = {  type = 13016 id = 1038  } 
       name     = "Dai 34 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1039  } 
       name     = "Dai 18 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1040  } 
     name     = "Dai 11 Gun" 
     location = 1343
     Division = 
     {  id       = {  type = 13016 id = 1041  } 
       name     = "Dai 39 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1042  } 
       name     = "Dai 40 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1043  } 
     name     = "Dai 13 Gun" 
     location = 1340
     Division = 
     {  id       = {  type = 13016 id = 1044  } 
       name     = "Dai 11 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1045  } 
     name     = "Dai 13 Gun" 
     location = 1344
     Division = 
     {  id       = {  type = 13016 id = 1046  } 
       name     = "Dai 12 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1048  } 
       name     = "Dai 116 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1049  } 
     name     = "Dai 13 Gun" 
     location = 1318
     Division = 
     {  id       = {  type = 13016 id = 1050  } 
       name     = "Dai 13 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1051  } 
       name     = "Dai 17 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1052  } 
     name     = "Dai 13 Gun" 
     location = 1353
     Division = 
     {  id       = {  type = 13016 id = 6  } 
       name     = "Dai 15 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1053  } 
       name     = "Dai 20 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1054  } 
     name     = "Dai 13 Gun" 
     location = 1350
     Division = 
     {  id       = {  type = 13016 id = 7  } 
       name     = "Dai 17 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
     Division = 
     {  id       = {  type = 13016 id = 1055  } 
       name     = "Dai 22 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
    }
   landunit = 
   {  id       = {  type = 13016 id = 1056  } 
     name     = "Dai 23 Gun" 
     location = 1369
     Division = 
     {  id       = {  type = 13016 id = 1058  } 
       name     = "Dai 19 Dokuritsu konsei ryodan" # Independent Mixed Brigade
       strength  = 60 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1059  } 
     name     = "Dai 23 Gun" 
     location = 1370
     Division = 
     {  id       = {  type = 13016 id = 1060  } 
       name     = "Dai 104 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1061  } 
     name     = "Dai 23 Gun" 
     location = 1358
     Division = 
     {  id       = {  type = 13016 id = 1062  } 
       name     = "Dai 38 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
    }
   landunit = 
   {  id       = {  type = 13016 id = 1063  } 
     name     = "Dai 14 Gun" 
     location = 1342
     Division = 
     {  id       = {  type = 13016 id = 40  } 
       name     = "Dai 16 'Kyoto' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = engineer 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 13016 id = 41  } 
       name     = "Dai 48 'Formosa' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 7
      } 
    }
   landunit = 
   {  id       = {  type = 13016 id = 1064  } 
     name     = "Dai 15 Gun" 
     location = 1345
     Division = 
     {  id       = {  type = 13016 id = 43  } 
       name     = "Dai 2 'Sendai' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = engineer 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 13016 id = 1066  } 
       name     = "Dai 55 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1067  } 
     name     = "Dai 25 Gun" 
     location = 1348
     Division = 
     {  id       = {  type = 13016 id = 44  } 
       name     = "Dai 56 Hoheiryodan" 
       strength = 80 
       type     = infantry 
       model    = 10 
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 45  } 
       name     = "Dai 1 Konoe Shidan" # Imperial Guards 
       strength  = 90 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 6
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1068  } 
     name     = "Dai 25 Gun" 
     location = 1346
     Division = 
     {  id       = {  type = 13016 id = 1069  } 
       name     = "Dai 5 'Hiroshima' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
     Division = 
     {  id       = {  type = 13016 id = 1070  } 
       name     = "Dai 18 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      }
    }
   landunit = 
   {  id       = {  type = 13016 id = 1  } 
     name     = "Manchukuo Hakengun" 
     location = 1199 
     Division = 
     {  id       = {  type = 13016 id = 2  } 
       name     = "Manchukuo Hakengun shireibu" 
       strength  = 70 
       type     = hq 
       model    = 3 
      }   
    } 
   landunit = 
   {  id       = {  type = 13016 id = 16  } 
     name     = "Kantôgun" # Kwantung Theater Army, General Army lvl Changchung, Manchuria  
     location = 1208 
     Division = 
     {  id       = {  type = 13016 id = 17  } 
       name     = "Kantôgun saikô shireibu" # Kwantung Theater Army HQ 
       strength  = 70 
       type     = hq 
       model    = 3 
      } 
     Division = 
     {  id       = {  type = 13016 id = 18  } 
       name     = "Dai 10 'Himeji' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = anti_air 
	   brigade_model = 2
      } 
     Division = 
     {  id       = {  type = 13016 id = 1478  } 
       name     = "Dai 24 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
     Division = 
     {  id       = {  type = 13016 id = 20  } 
       name     = "Kantô Bôbitai" # Kwantung Defence Command 
       strength  = 70 
       type     = garrison 
       model    = 5
       extra    = police 
	   brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 21  } 
     name     = "Dai 3 Gun" # Botanko, Manchuko 
     location = 1201 
     Division = 
     {  id       = {  type = 13016 id = 22  } 
       name     = "Dai 9 'Kanazawa' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 13016 id = 23  } 
       name     = "Dai 12 'Kurume' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 7
      }
    } 
   landunit = 
   {  id       = {  type = 13016 id = 24  } 
     name     = "Dai 4 Gun" # Songo, Manchuko 
     location = 1200 
     Division = 
     {  id       = {  type = 13016 id = 25  } 
       name     = "Dai 1 'Tokyo' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 13016 id = 26  } 
       name     = "Dai 2 Dokuritsu shubitai" # Border Guards 
       strength  = 60 
       type     = garrison 
       model    = 5
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 27  } 
       name     = "Dai 3 Dokuritsu shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 28  } 
     name     = "Dai 5 Gun" # Toan, Manchuko 
     location = 1202 
     Division = 
     {  id       = {  type = 13016 id = 29  } 
       name     = "Dai 4 Dokuritsu shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 30  } 
       name     = "Dai 5 Dokuritsu shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 31  } 
       name     = "Dai 3 Manchuko Kiheishidan" 
       strength = 70 
       type     = cavalry 
       model    = 8 
      }
     Division = 
     {  id       = {  type = 13016 id = 1073  } 
       name     = "Dai 11 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 32  } 
     name     = "Dai 6 Gun" # Hailar, Manchuko 
     location = 1205 
     Division = 
     {  id       = {  type = 13016 id = 33  } 
       name     = "Dai 14 'Utsunomi' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id       = {  type = 13016 id = 34  } 
       name     = "Dai 23 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = police 
	   brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 35  } 
     name     = "Dai 20 Gun" # Keinei, Manchuko 
     location = 1204 
     Division = 
     {  id       = {  type = 13016 id = 36  } 
       name     = "Dai 8 'Hirosaki' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
       extra    = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 13016 id = 38  } 
       name     = "Dai 6 Dokuritsu shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5 
       extra    = artillery 
	   brigade_model = 5
      } 
    }  
   # Imperial General Headquarters 
   landunit = 
   {  id       = {  type = 13016 id = 46  } 
     name     = "Daihon'ei" # Imperial General HQ Tokyo 
     location = 1552 
     Division = 
     {  id       = {  type = 13016 id = 47  } 
       name     = "Daihon'ei" # Imperial General HQ 
       strength  = 70 
       type     = hq 
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 13016 id = 48  } 
       name     = "Dai 4 'Osaka' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 8 
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 49  } 
     name     = "Kita Hômengun" # North Japan Army 
     location = 1552 
     Division = 
     {  id       = {  type = 13016 id = 50  } 
       name     = "Dai 7 Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 13016 id = 51  } 
       name     = "Dai 57 Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 52  } 
     name     = "Chûô Hômengun" # Central Japan Army 
     location = 1557 
     Division = 
     {  id       = {  type = 13016 id = 53  } 
       name     = "Dai 53 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 9 
       extra    = anti_air 
	   brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 54  } 
     name     = "Roppou Hômengun" #West Japan Army 
     location = 1559 
     Division = 
     {  id       = {  type = 13016 id = 55  } 
       name     = "Dai 8 Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 56  } 
       name     = "Dai 14 Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
       extra    = anti_air 
	   brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 57  } 
     name     = "Tôbu Hômengun" # East Japan Army 
     location = 1560 
     Division = 
     {  id       = {  type = 13016 id = 58  } 
       name     = "Dai 52 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 9 
       extra    = anti_air 
	   brigade_model = 1
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 59  } 
     name     = "Chôsengun" # Korean Army 
     location = 1225 
     Division = 
     {  id       = {  type = 13016 id = 60  } 
       name     = "Dai 19 'Ranan' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 9 
       extra    = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 13016 id = 70  } 
       name     = "Dai 20 'Keyo' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 9 
       extra    = artillery 
	   brigade_model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 71  } 
     name     = "Nanpô Chôsengun" # South Korean Army 
     location = 1228 
     Division = 
     {  id       = {  type = 13016 id = 72  } 
       name     = "Dai 1 Chôsen Shubitai" # Korean Garrison 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 13016 id = 73  } 
       name     = "Dai 2 Chôsen Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1074  } 
     name     = "Taiwangun" # Taiwan Army 
     location = 1362 
     Division = 
     {  id       = {  type = 13016 id = 1075  } 
       name     = "Dai 1 Taiwan Shubitai" # Taiwan Garrison 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
     Division = 
     {  id       = {  type = 13016 id = 1076  } 
       name     = "Dai 2 Taiwan Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1077  } 
     name     = "Tokubetsuna tasukufôsu"
     location = 1367 
     Division = 
     {  id       = {  type = 13016 id = 1078  } 
       name     = "Dai 110 Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 1114  } 
     name     = "Dai 4 Gun"
     location = 1206 
     Division = 
     {  id       = {  type = 13016 id = 1113  } 
       name     = "Dai 7 'Asahigawa' Hoheishidan" 
       strength  = 80 
       type     = infantry 
       model    = 10 
      } 
    } 
   # Pacific garrisons: 
   landunit = 
   {  id       = {  type = 13016 id = 74  } 
     name     = "Saishu Chuton Gun" 
     location = 1545
     Division = 
     {  id       = {  type = 13016 id = 75  } 
       name     = "Saishu Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 76  } 
     name     = "Naha Chuton Gun" 
     location = 1564 
     Division = 
     {  id       = {  type = 13016 id = 77  } 
       name     = "Naha Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 78  } 
     name     = "Toyohara Chuton Gun" 
     location = 1542 
     Division = 
     {  id       = {  type = 13016 id = 79  } 
       name     = "Toyohara Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 80  } 
     name     = "Tomari Konkyochi tai" 
     location = 1666 
     Division = 
     {  id       = {  type = 13016 id = 81  } 
       name     = "Tomari Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 82  } 
     name     = "Shana Chuton Gun" 
     location = 1543 
     Division = 
     {  id       = {  type = 13016 id = 83  } 
       name     = "Shana Shubitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 84  } 
     name     = "Mariane Konkyochi tai" 
     location = 1686 
     Division = 
     {  id       = {  type = 13016 id = 85  } 
       name     = "Mariane Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 86  } 
     name     = "Palau Konkyochi tai" 
     location = 1670 
     Division = 
     {  id       = {  type = 13016 id = 87  } 
       name     = "Palau Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 88  } 
     name     = "Eniwetok Konkyochi tai" 
     location = 1675 
     Division = 
     {  id       = {  type = 13016 id = 89  } 
       name     = "Eniwetok Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 90  } 
     name     = "Bikini Konkyochi tai" 
     location = 1674 
     Division = 
     {  id       = {  type = 13016 id = 91  } 
       name     = "Bikini Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 92  } 
     name     = "Kwajalein Konkyochi tai" 
     location = 1676
     Division = 
     {  id       = {  type = 13016 id = 93  } 
       name     = "Kwajalein Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 94  } 
     name     = "Saipan Konkyochi tai" 
     location = 1685
     Division = 
     {  id       = {  type = 13016 id = 95  } 
       name     = "Saipan Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 96  } 
     name     = "Wotje Konkyochi tai" 
     location = 1681 
     Division = 
     {  id       = {  type = 13016 id = 97  } 
       name     = "Wotje Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 98  } 
     name     = "Iwo Jima Konkyochi tai" 
     location = 1661 
     Division = 
     {  id       = {  type = 13016 id = 99  } 
       name     = "Iwo Jima Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 100  } 
     name     = "Minami Torima Konkyochi tai" 
     location = 1672 
     Division = 
     {  id       = {  type = 13016 id = 101  } 
       name     = "Minami Torima Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 102  } 
     name     = "Woleai Konkyochi tai" 
     location = 1668
     Division = 
     {  id       = {  type = 13016 id = 103  } 
       name     = "Woleai Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 104  } 
     name     = "Truk Konkyochi tai" 
     location = 1667
     Division = 
     {  id       = {  type = 13016 id = 105  } 
       name     = "Truk Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 106  } 
     name     = "Ponape Konkyochi tai" 
     location = 1665
     Division = 
     {  id       = {  type = 13016 id = 107  } 
       name     = "Ponape Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 108  } 
     name     = "Marshall Konkyochi tai" 
     location = 1677
     Division = 
     {  id       = {  type = 13016 id = 109  } 
       name     = "Marshall Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 13016 id = 110  } 
     name     = "Yap Konkyochi tai" 
     location = 1669
     Division = 
     {  id       = {  type = 13016 id = 111  } 
       name     = "Yap Keibitai" 
       strength  = 60 
       type     = garrison 
       model    = 5
      } 
    } 
	
  ### Japan Navy OOB ### 
  


	# COMBINED FLEET
	# 1st Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 2000 } 
		name = "Dai 1 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 123 } 
			name = "Nagato" 
			type = battleship 
			model = 5 
			extra1 = naval_anti_air_l
			extra2 = naval_fire_controll_l
			extra3 = floatplane
			brigade_model3 = 4
		} 
		division = { 
			id = { type = 13016 id = 125 } 
			name = "Mutsu" 
			type = battleship 
			model = 5 
			extra1 = naval_anti_air_l
			extra2 = naval_fire_controll_l
			extra3 = naval_improved_hull_l
			extra4 = floatplane
			brigade_model4 = 4
		}
	}
	# 9 Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2001 } 
		name = "Dai 9 Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 132 } 
			name = "Kitakami" 
			type = light_cruiser 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 136 } 
			name = "Oi" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 11 Carrier Squadron
	navalunit = { 
		id = { type = 13016 id = 2117 } 
		name = "Dai 11 Koku Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 2100 } 
			name = "Mizuho" 
			type = escort_carrier 
			model = 0 
		} 
		division = { 
			id = { type = 13016 id = 2118 } 
			name = "Chiyoda" 
			type = escort_carrier 
			model = 0 
		} 
		division = { 
			id = { type = 13016 id = 2119 } 
			name = "Chitose" 
			type = escort_carrier 
			model = 0 
		} 
	}
	# 4th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2120 } 
		name = "Dai 4 Sensui Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 146 } 
			name = "Kinu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 2121 } 
			name = "Dai 18 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 2122 } 
			name = "Dai 19 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 2123 } 
			name = "Dai 21 Sensuisentai" 
			type = submarine 
			model = 1 
		} 
	}
	# 5th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2124 } 
		name = "Dai 5 Sensui Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 140 } 
			name = "Yura" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 2125 } 
			name = "Dai 28 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 2126 } 
			name = "Dai 29 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 2127 } 
			name = "Dai 30 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
	}
	# 1ST FLEET
	# 2nd Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 2002 } 
		name = "Dai 2 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 121 } 
			name = "Ise" 
			type = battleship 
			model = 4 
			extra1 = naval_improved_hull_l
			extra2 = naval_anti_air_l
			extra3 = floatplane
			brigade_model3 = 4
		} 
		division = { 
			id = { type = 13016 id = 122 } 
			name = "Hyuga" 
			type = battleship 
			model = 4 
			extra1 = naval_improved_hull_l
			extra2 = naval_anti_air_l
			extra3 = floatplane
			brigade_model3 = 4
		}
		division = { 
			id = { type = 13016 id = 118 } 
			name = "Fuso" 
			type = battleship 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 119 } 
			name = "Yamashiro" 
			type = battleship 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
	}
	# 3rd Battleship Squadron
	navalunit = { 
		id = { type = 13016 id = 2003 } 
		name = "Dai 3 Senkan Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 114 } 
			name = "Hiei" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 117 } 
			name = "Kirishima" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		}
	}
	navalunit = { 
		id = { type = 13016 id = 2103 } 
		name = "Dai 3 Senkan Sentai" 
		location = 2521 
		base = 1362 
 		division = { 
			id = { type = 13016 id = 113 } 
			name = "Kongo" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
		division = { 
			id = { type = 13016 id = 115 } 
			name = "Haruna" 
			type = battlecruiser 
			model = 3 
			extra1 = naval_improved_hull_l
			extra2 = floatplane
			brigade_model2 = 4
		} 
	}
	# 6th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2004 } 
		name = "Dai 6 Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 156 } 
			name = "Kako" 
			type = heavy_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 133 } 
			name = "Furutaka" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 157 } 
			name = "Aoba" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 158 } 
			name = "Kinugasa" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
	}
	# 3rd Carrier Squadron
	navalunit = { 
		id = { type = 13016 id = 2104 } 
		name = "Dai 3 Koku Sentai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 173 } 
			name = "Hosho" 
			type = escort_carrier 
			model = 2 
		}  
	}
	# 1st Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2115 } 
		name = "Dai 1 Kuchiku Sentai" 
		location = 1554 
		base = 1554
 		division = { 
			id = { type = 13016 id = 153 } 
			name = "Abukuma" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 186 } 
			name = "Dai 6 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
		division = { 
			id = { type = 13016 id = 207 } 
			name = "Dai 17 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 268 } 
			name = "Dai 21 Kuchikusentai" 
			type = destroyer
			model = 4
		}
		division = { 
			id = { type = 13016 id = 2251 } 
			name = "Dai 27 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
	}
	# 3rd Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2116 } 
		name = "Dai 3 Kuchiku Sentai" 
		location = 1554 
		base = 1554 
 		division = { 
			id = { type = 13016 id = 152 } 
			name = "Sendai" 
			type = light_cruiser 
			model = 3 
		}
    		division = { 
			id = { type = 13016 id = 198 } 
			name = "Dai 11 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 199 } 
			name = "Dai 12 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 214 } 
			name = "Dai 19 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}    
		division = { 
			id = { type = 13016 id = 215 } 
			name = "Dai 20 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# 2ND FLEET
	# 4th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2011 } 
		name = "Dai 4 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 166 } 
			name = "Takao" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 167 } 
			name = "Chokai" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 165 } 
			name = "Atago" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 169 } 
			name = "Maya" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 5th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2012 } 
		name = "Dai 5 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 163 } 
			name = "Myoko" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 159 } 
			name = "Nachi" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 160 } 
			name = "Haguro" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 7th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2013 } 
		name = "Dai 7 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 170 } 
			name = "Mikuma" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 171 } 
			name = "Mogami" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 264 } 
			name = "Kumano" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 265 } 
			name = "Suzuya" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 8th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2014 } 
		name = "Dai 8 Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 266 } 
			name = "Tone" 
			type = heavy_cruiser 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 267 } 
			name = "Chikuma" 
			type = heavy_cruiser 
			model = 5 
			extra1 = floatplane
			brigade_model1 = 4
		}
	}
	# 2nd Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2015 } 
		name = "Dai 2 Kuchiku Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 154 } 
			name = "Jintsu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 195 } 
			name = "Dai 8 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 205 } 
			name = "Dai 15 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 206 } 
			name = "Dai 16 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 213 } 
			name = "Dai 18 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}   
	}
	# 4th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2128 } 
		name = "Dai 4 Kuchiku Sentai" 
		location = 1365 
		base = 1365 
		division = { 
			id = { type = 13016 id = 161 } 
			name = "Naka" 
			type = light_cruiser 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 182 } 
			name = "Dai 2 Kuchikusentai" 
			type = destroyer 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 184 } 
			name = "Dai 4 Kuchikusentai" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13016 id = 196 } 
			name = "Dai 9 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 2248 } 
			name = "Dai 24 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
	}
	# 3RD FLEET
	# 16th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2016 } 
		name = "Dai 16 Sentai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 164 } 
			name = "Ashigara" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
		}
		division = { 
			id = { type = 13016 id = 130 } 
			name = "Kuma" 
			type = light_cruiser 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 137 } 
			name = "Nagara" 
			type = light_cruiser 
			model = 3 
		}
	}
	# 5th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2017 } 
		name = "Dai 5 Kuchiku Sentai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 145 } 
			name = "Natori" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 185 } 
			name = "Dai 5 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 2246 } 
			name = "Dai 22 Kuchikusentai" 
			type = destroyer
			model = 2
		} 
	}
	# 6th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2129 } 
		name = "Dai 6 Sensui Kantai" 
		location = 1362 
		base = 1362 
		division = { 
			id = { type = 13016 id = 234 } 
			name = "Dai 9 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 2350 } 
			name = "Dai 13 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
	}
	# 4TH FLEET
	# 18th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2018 } 
		name = "Dai 18 Sentai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 139 } 
			name = "Tenryu" 
			type = light_cruiser 
			model = 2
		}  
		division = { 
			id = { type = 13016 id = 127 } 
			name = "Tatsuta" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 6th Destroyer Squadron
	navalunit = { 
		id = { type = 13016 id = 2130 } 
		name = "Dai 6 Kuchiku Sentai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 150 } 
			name = "Yubari" 
			type = light_cruiser 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 2253 } 
			name = "Dai 29 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
	}
	# 7th Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2131 } 
		name = "Dai 7 Sensui Kantai" 
		location = 1667 
		base = 1667 
		division = { 
			id = { type = 13016 id = 2132 } 
			name = "Dai 26 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
		division = { 
			id = { type = 13016 id = 2133 } 
			name = "Dai 27 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 2134 } 
			name = "Dai 33 Sensuisentai" 
			type = submarine 
			model = 3 
		} 
	}
	# 5TH FLEET
	# 21th Cruiser Squadron
	navalunit = { 
		id = { type = 13016 id = 2019 } 
		name = "Dai 21 Sentai" 
		location = 1338  
		base = 1338 
 		division = { 
			id = { type = 13016 id = 131 } 
			name = "Tama" 
			type = light_cruiser 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 135 } 
			name = "Kiso" 
			type = light_cruiser 
			model = 2 
		} 
	}
	# 6TH FLEET
	# 1st Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2020 } 
		name = "Dai 1 Sensui Kantai" 
		location = 1676 
		base = 1676 
		division = { 
			id = { type = 13016 id = 226 } 
			name = "Dai 1 Sensuisentai" 
			type = submarine 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 227 } 
			name = "Dai 2 Sensuisentai" 
			type = submarine 
			model = 2 
		}
		division = { 
			id = { type = 13016 id = 2021 } 
			name = "Dai 3 Sensuisentai" 
			type = submarine 
			model = 3 
		}
		division = { 
			id = { type = 13016 id = 2320 } 
			name = "Dai 4 Sensuisentai" 
			type = submarine 
			model = 3 
		}  
	}
	# 2nd Submarine Squadron
	navalunit = { 
		id = { type = 13016 id = 2137 } 
		name = "Dai 1 Sensui Kantai" 
		location = 1676 
		base = 1676 

		division = { 
			id = { type = 13016 id = 2351 } 
			name = "Dai 11 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 2352 } 
			name = "Dai 12 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 2138 } 
			name = "Dai 20 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
	}
	# CARRIER STRIKE FORCE
	# 1st Carrier Division
	navalunit = { 
		id = { type = 13016 id = 112 } 
		name = "Dai 1 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 177 } 
			name = "Kaga" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 4 
		} 
		division = { 
			id = { type = 13016 id = 194 } 
			name = "Dai 7 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# 2nd Carrier Division
	navalunit = { 
		id = { type = 13016 id = 2139 } 
		name = "Dai 2 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 263 } 
			name = "Soryu" 
			type = carrier 
			model = 2 
			extra1 = cag 
			brigade_model1 = 4 
		}
		division = { 
			id = { type = 13016 id = 2630 } 
			name = "Hiryu" 
			type = carrier 
			model = 2 
			extra1 = cag 
			brigade_model1 = 4 
		} 
		division = { 
			id = { type = 13016 id = 2247 } 
			name = "Dai 23 Kuchikusentai" 
			type = destroyer 
			model = 2
		} 
	}
	# Akagi
	navalunit = { 
		id = { type = 13016 id = 1750 } 
		name = "Akagi" 
		location = 2513 
		base = 1552 
		division = { 
			id = { type = 13016 id = 175 } 
			name = "Akagi" 
			type = carrier 
			model = 0 
			extra1 = cag 
			brigade_model1 = 3 
		}  
	}
	# 4th Carrier Division
	navalunit = { 
		id = { type = 13016 id = 2140 } 
		name = "Dai 4 Koku Sentai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 179 } 
			name = "Ryujo" 
			type  = light_carrier 
			model = 0 
			extra1 = light_cag
			brigade_model1 = 3
		}  
		division = { 
			id = { type = 13016 id = 183 } 
			name = "Dai 3 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
	}
	# CHINA FLEET
	# China Fleet
	navalunit = { 
		id = { type = 13016 id = 2142 } 
		name = "Shina Kantai" 
		location = 1338 
		base = 1338 
		division = { 
			id = { type = 13016 id = 151 } 
			name = "Isuzu" 
			type = light_cruiser 
			model = 3 
		} 
		division = { 
			id = { type = 13016 id = 138 } 
			name = "Izumo" 
			type = heavy_cruiser 
			model = 1
		}
		division = { 
			id = { type = 13016 id = 187 } 
			name = "Dai 1 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 188 } 
			name = "Dai 2 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 189 } 
			name = "Dai 3 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 190 } 
			name = "Dai 4 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}
	# Kure Naval District
	navalunit = { 
		id = { type = 13016 id = 2144 } 
		name = "Kure Chinjufu" 
		location = 1554 
		base = 1554  
		division = { 
			id = { type = 13016 id = 200 } 
			name = "Dai 13 Kuchikusentai" 
			type = destroyer 
			model = 4 
		}
		division = { 
			id = { type = 13016 id = 230 } 
			name = "Dai 6 Sensuisentai" 
			type = submarine 
			model = 4 
		} 
	}
	# Ominato Guard District
	navalunit = { 
		id = { type = 13016 id = 2145 } 
		name = "Ôminato Keibifu" 
		location = 1551 
		base = 1551  
		division = { 
			id = { type = 13016 id = 181 } 
			name = "Dai 1 Kuchikusentai" 
			type = destroyer 
			model = 4 
		} 
	}
	# RESERVE FLEET
	# Crappy Reserve Fleet 1
	navalunit = { 
		id = { type = 13016 id = 231 } 
		name = "Dai 7 Sentai" 
		location = 1560 
		base = 1560 
		division = { 
			id = { type = 13016 id = 148 } 
			name = "Asama" 
			type = heavy_cruiser 
			model = 1 
		} 
		division = {
			id = { type = 13016 id = 258 }
			name = "Iwate"
			type = heavy_cruiser
			model = 1
		} 
		division = { 
			id = { type = 13016 id = 2249 } 
			name = "Dai 25 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
		division = { 
			id = { type = 13016 id = 2250 } 
			name = "Dai 26 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
		division = { 
			id = { type = 13016 id = 2252 } 
			name = "Dai 28 Kuchikusentai" 
			type = destroyer 
			model = 3
		} 
	}
	# Crappy Reserve Fleet 2
	navalunit = { 
		id = { type = 13016 id = 212 } 
		name = "Dai 9 Sentai" 
		location = 1552 
		base = 1552 
		division = {
			id = { type = 13016 id = 259 }
			name = "Azuma"
			type = heavy_cruiser
			model = 1
		}
		division = {
			id = { type = 13016 id = 262 }
			name = "Yakumo"
			type = heavy_cruiser
			model = 1
		} 
		division = {
			id = { type = 13016 id = 260 }
			name = "Kamoi"
			type = escort_carrier
			model = 0
		}    
		division = {
			id = { type = 13016 id = 261 }
			name = "Notoro"
			type = escort_carrier
			model = 0
		}  
	} 
	# Submarine Fleet 2
	navalunit = { 
		id = { type = 13016 id = 225 } 
		name = "Dai 2 Sensui Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 229 } 
			name = "I-5" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 250 } 
			name = "I-6" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 251 } 
			name = "I-7" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 252 } 
			name = "I-8" 
			type = nuclear_submarine
			model = 0
			extra1 = floatplane
			brigade_model1 = 4
		} 
		division = { 
			id = { type = 13016 id = 235 } 
			name = "Dai 10 Sensuisentai" 
			type = submarine 
			model = 5 
		} 
	} 
	# Transport Fleet 1
	navalunit = { 
		id = { type = 13016 id = 1508 } 
		name = "Dai 1 Yuso Kantai" 
		location = 1553 
		base = 1553 
		division = { 
			id = { type = 13016 id = 221 } 
			name = "Dai 16 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 2
	navalunit = { 
		id = { type = 13016 id = 1510 } 
		name = "Dai 2 Yuso Kantai" 
		location = 1553 
		base = 1553 
		division = { 
			id = { type = 13016 id = 224 } 
			name = "Dai 19 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 3
	navalunit = { 
		id = { type = 13016 id = 2244 } 
		name = "Dai 3 Yuso Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 218 } 
			name = "Dai 14 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 219 } 
			name = "Dai 15 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 222 } 
			name = "Dai 17 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 223 } 
			name = "Dai 18 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 4
	navalunit = { 
		id = { type = 13016 id = 2315 } 
		name = "Dai 4 Yuso Kantai" 
		location = 1554 
		base = 1554 
		division = { 
			id = { type = 13016 id = 216 } 
			name = "Dai 20 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 217 } 
			name = "Dai 13 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	} 
	# Transport Fleet 5
	navalunit = { 
		id = { type = 13016 id = 2146 } 
		name = "Dai 5 Yuso Kantai" 
		location = 1552 
		base = 1552 
		division = { 
			id = { type = 13016 id = 201 } 
			name = "Dai 14 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 208 } 
			name = "Dai 9 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 209 } 
			name = "Dai 10 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 210 } 
			name = "Dai 11 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 211 } 
			name = "Dai 12 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}  
	# KOREA FLEET
	# Korea Fleet
	navalunit = { 
		id = { type = 13016 id = 2025 } 
		name = "Chôsen Kantai" 
		location = 1232 
		base = 1232  
		division = { 
			id = { type = 13016 id = 197 } 
			name = "Dai 10 Kuchikusentai" 
			type = destroyer 
			model = 5 
		} 
		division = { 
			id = { type = 13016 id = 191 } 
			name = "Dai 5 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 192 } 
			name = "Dai 6 Yuso Sentai" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13016 id = 202 } 
			name = "Dai 7 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
		division = { 
			id = { type = 13016 id = 203 } 
			name = "Dai 8 Yuso Sentai" 
			type = transport 
			model = 2 
		} 
	}

	
  ### Japan Air OOB ### 
   airunit = 
   {  id       = {  type = 13016 id = 236  } 
     name     = "Dai 1 Kyokutsi Hikodan" 
     location = 1219 
     base     = 1219 
     Division = 
     {  id       = {  type = 13016 id = 237  } 
       name     = "Dai 1 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 7
      } 
    } 
   airunit = 
   {  id       = {  type = 13016 id = 238  } 
     name     = "Dai 1 Kokutai" 
     location = 1219 
     base     = 1219 
     Division = 
     {  id       = {  type = 13016 id = 239  } 
       name     = "Dai 2 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 7
      } 
    }
   airunit = 
   {  location = 1219 
     base     = 1219 
     id       = {  type = 13016 id = 240  } 
     name     = "Dai 2 Kokutai" 
     Division = 
     {  id    = {  type = 13016 id = 241  } 
       name  = "Dai 2 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      } 
     Division = 
     {  id       = {  type = 13016 id = 242  } 
       name     = "Dai 8 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
     Division = 
     {  id    = {  type = 13016 id = 243  } 
       name  = "Dai 9 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id       = {  type = 13016 id = 244  } 
       name     = "Dai 13 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
    }
   airunit = 
   {  location = 1362 
     base     = 1362 
     id       = {  type = 13016 id = 245  } 
     name     = "Dai 2 Kokutai" 
     Division = 
     {  id    = {  type = 13016 id = 246  } 
       name  = "Dai 3 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id    = {  type = 13016 id = 247  } 
       name  = "Dai 7 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      } 
     Division = 
     {  id    = {  type = 13016 id = 248  } 
       name  = "Dai 10 Keibakugeki Hikodan" 
       type  = tactical_bomber 
       model = 4
      }
     Division = 
     {  id       = {  type = 13016 id = 249  } 
       name     = "Dai 12 Kyokutsi Hikodan" 
       strength = 85 
       type     = interceptor 
       model    = 8
      } 
    }
   # ### Under division_development ###  
	division_development = {  
		name  = "Zuiho" 
		type  = light_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3000  } 
		date  = {  year = 1940 month = december day = 27  } 
		extra = light_cag
		brigade_model = 3
	}
	division_development = {  
		name  = "Shoho" 
		type  = light_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3001  } 
		date  = {  year = 1941 month = november day = 29  } 
		extra = light_cag
		brigade_model = 3
	}
	division_development = {  
		name  = "Shokaku" 
		type  = carrier 
		model = 3 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3002  } 
		date  = {  year = 1941 month = august day = 8  } 
		extra = cag 
		brigade_model = 3 
	}
	division_development = {  
		name  = "Zuikaku" 
		type  = carrier 
		model = 3 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3003  } 
		date  = {  year = 1941 month = september day = 25  } 
		extra = cag 
		brigade_model = 3 
	} 
	division_development = {  
		name  = "Junyo" 
		type  = carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3010  } 
		date  = {  year = 1942 month = may day = 3  } 
		extra = cag 
		brigade_model = 3 
	}
	division_development = {  
		name  = "Nisshin" 
		type  = escort_carrier 
		model = 0 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3011  } 
		date  = {  year = 1942 month = february day = 1  } 
	}
	division_development = {  
		name  = "Yamato" 
		type  = battleship 
		model = 11 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3004  } 
		date  = {  year = 1941 month = december day = 16  } 
		extra = floatplane
		brigade_model = 4
	}
	division_development = {  
		name  = "Musashi" 
		type  = battleship 
		model = 11 
		new_model = no
		cost  = 0.1
		id    = {  type = 13016 id = 3005  } 
		date  = {  year = 1942 month = august day = 5  } 
		extra = floatplane
		brigade_model = 4
	}
	division_development = {  
		name  = "Dai 30 Kuchikusentai" 
		type  = destroyer 
		model = 6 
		cost  = 0.1
		id    = {  type = 13016 id = 2254  } 
		date  = {  year = 1940 month = january day = 1  } 
	}
	division_development = {  
		name  = "Dai 31 Kuchikusentai" 
		type  = destroyer 
		model = 6 
		cost  = 0.1
		id    = {  type = 13016 id = 2255  } 
		date  = {  year = 1940 month = february day = 1  } 
	}
	division_development = {  
		name  = "Dai 32 Kuchikusentai" 
		type  = destroyer 
		model = 6 
		cost  = 0.1
		id    = {  type = 13016 id = 2256  } 
		date  = {  year = 1940 month = may day = 1  } 
	}
	division_development = {  
		name  = "I-9" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2257  } 
		date  = {  year = 1941 month = february day = 11  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-10" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2258  } 
		date  = {  year = 1941 month = october day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-15" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2259  } 
		date  = {  year = 1940 month = september day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-17" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2260  } 
		date  = {  year = 1941 month = january day = 29  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-19" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2261  } 
		date  = {  year = 1941 month = april day = 27  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-21" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2262  } 
		date  = {  year = 1941 month = july day = 14  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-23" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2263  } 
		date  = {  year = 1941 month = september day = 26  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-25" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2264  } 
		date  = {  year = 1941 month = october day = 14  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-26" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2265  } 
		date  = {  year = 1941 month = november day = 5 } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-27" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2266  } 
		date  = {  year = 1942 month = february day = 23  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
	division_development = {  
		name  = "I-30" 
		type  = nuclear_submarine 
		model = 1 
		cost  = 0.1
		id    = {  type = 13016 id = 2267  } 
		date  = {  year = 1942 month = february day = 27  } 
		extra1 = floatplane
		brigade_model1 = 4
	}
  } 
 
