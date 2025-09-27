 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HOL 
	ai = "hol_1940.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	capital                = 122 
	manpower               = 1 
	# Resource Reserves 
	energy                 = 2000
	metal                  = 2000
	rare_materials         = 1000
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	transports             = 450 
	escorts                = 41 
   diplomacy = 
   {  relation = {  tag = BEL value = 150  } 
     relation = {  tag = CAN value = 80  } 
     relation = {  tag = DEN value = 100  } 
     relation = {  tag = ENG value = 125  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 75  } 
     relation = {  tag = GER value = -200  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = ITA value = -20  } 
     relation = {  tag = JAP value = -50  } 
     relation = {  tag = LUX value = 150  } 
     relation = {  tag = MEX value = 25  } 
     relation = {  tag = NOR value = 100  } 
     relation = {  tag = SWE value = 100  } 
     relation = {  tag = U05 value = 150 access = yes  }
     relation = {  tag = USA value = 70  } 
    } 
   SpyInfo                = {  country = "HOL" NumberOfSpies = 6  } 
   # Homeland 
   nationalprovinces      = {  118 119 120 121 122 123 124 125  } 
   # Homeland 
   ownedprovinces         = {  118 119 120 121 122 123 124 125 1761 1762 1999  } 
   # Homeland 
   controlledprovinces         = {  118 119 120 121 122 123 124 125 1761 1762 1999  } 
	claimedprovinces = { 1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 
	}
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 

#Naval Infantry
#1560 1570 1580
#Engineers
1830 1840 1850 1860
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Light armor brigades only techs / advanced Light armor
7600 7610 2010 2630 2640
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Interwar Light Cruiser 
3110 3120 3130 3140
#Improved Heavy Cruiser 
3210 3220 3230 3240 3250
#Interwar Battlecruiser 
3310 3320 3330 3340
#Great War Battleship 
3410 3420 3430 3440 3450 3456 3460
#Med Range Submarine 
3610 3620 3630 3640
#Torpedo & ASW 18
3720 3730 3736 3740 3900
#Troopships
3810
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Modern Agriculture 
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Faculty of Atomic Research 
5470
#Medicine
5600 5610 5620 5630
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path
6560 6030 6110
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Naval Doctrines
8050  8070   8010  8020  8030  8040 
#Great War Hospital System 
14000 14010 14020
#Advanced oil extraction
55010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 2 
     free_market       = 9 
     freedom           = 10 
     professional_army = 5 
     defense_lobby     = 4 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 15001  } 
   headofgovernment       = {  type = 9 id = 15021  } 
   foreignminister        = {  type = 9 id = 15038  } 
   armamentminister       = {  type = 9 id = 15064  } 
   ministerofsecurity     = {  type = 9 id = 15086  } 
   ministerofintelligence = {  type = 9 id = 15103  } 
   chiefofstaff           = {  type = 9 id = 15007  } 
   chiefofarmy            = {  type = 9 id = 15008  } 
   chiefofnavy            = {  type = 9 id = 15009  } 
   chiefofair             = {  type = 9 id = 15010  }
   dormant_ministers      = {  15002 15020 15003 15037 15004 15005 15006  } 

   landunit = 
   {  id       = {  type = 18500 id = 1  } 
     location = 119 
     name     = "1e Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 2  } 
       name  = "1e Divisie" 
	   strength     = 100
       type  = infantry 
	   model = 8 
       extra = artillery 
	   brigade_model = 5
      }
     Division = 
     {  id    = {  type = 18500 id = 5  } 
       name  = "3e Divisie" 
	   strength     = 100
       type  = infantry 
	   model = 8 
       extra = artillery 
	   brigade_model = 5
      }  
    } 
   landunit = 
   {  id       = {  type = 18500 id = 4  } 
     location = 121 
     name     = "2e Legerkorps" 
     Division = 
     {  id   = {  type = 18500 id = 3  } 
       name = "2e Divisie" 
	   strength     = 100
       type = infantry 
	   model = 8 
      } 
     Division = 
     {  id   = {  type = 18500 id = 6  } 
       name = "4e Divisie" 
	   strength     = 100
       type = infantry 
	   model = 7 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 7  } 
     location = 120 
     name     = "3e Legerkorps" 
     Division = 
     {  id    = {  type = 18500 id = 8  } 
       name  = "5e Divisie" 
	   strength     = 100
       type  = infantry 
	   model = 9
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id   = {  type = 18500 id = 9  } 
       name = "6e Divisie" 
	   strength     = 100
       type = infantry 
	   model = 8 
      } 
     Division = 
     {  id   = {  type = 18500 id = 1000  } 
       name = "1e Gemotoriseerde Huzaren" 
	   strength     = 100
       type = motorized 
	   model = 0 
      } 
     Division = 
     {  id   = {  type = 18500 id = 1001  } 
       name = "Peel Divisie" 
	   strength     = 100
       type = infantry 
	   model = 8 
      } 
    } 
   landunit = 
   {  id       = {  type = 18500 id = 10  } 
     location = 124 
     name     = "4e Legerkorps" 
	 strength     = 25
     Division = 
     {  id    = {  type = 18500 id = 11  } 
       name  = "7e Divisie" 
	   strength     = 100
       type  = infantry 
	   model = 9 
       extra = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id   = {  type = 18500 id = 12  } 
       name = "8e Divisie" 
	   strength     = 100
       type = infantry 
	   model = 8 
      } 
    } 
   navalunit = 
   {  id       = {  type = 18500 id = 17  } 
     location = 122 
     base     = 122 
     name     = "Koninklijke Vloot" 
     Division = 
     {  id    = {  type = 18500 id = 18  } 
       name  = "HrMs De Ruyter" 
       type  = light_cruiser 
       model = 4 
      }
     Division = 
     {  id    = {  type = 18500 id = 2000  } 
       name  = "HrMs Tromp" 
       type  = light_cruiser 
       model = 4 
      }
     Division = 
     {  id    = {  type = 18500 id = 2001  } 
       name  = "HrMs Jacob van Heemskerck" 
       type  = light_cruiser 
       model = 4
       strength = 30 # not armed; hastily commissioned due to German invasion 
      } 
     Division = 
     {  id    = {  type = 18500 id = 19  } 
       name  = "HrMs Java" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 20  } 
       name  = "HrMs Sumatra" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 21  } 
       name  = "1e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      }  
     Division = 
     {  id   = {  type = 18500 id = 23  } 
       name = "1e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 24  } 
       name = "2e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 25  } 
       name = "3e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 
	navalunit = { 
		id = { type = 18500 id = 1381 } 
		name = "3e Koninklijke Vloot" 
		location = 122 
		base = 122 
     Division = 
     {  id    = {  type = 18500 id = 39  } 
       name  = "1e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 40  } 
       name  = "2e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 41  } 
       name  = "3e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 3 
      } 
    }

	division_development = {
		name  = "HrMs De Zeven Provinciën" 
		type  = light_cruiser
		model = 5
		cost  = 0.1 
		id    = {  type = 18500 id = 3000  } 
		date  = {  year = 1942 month = august day = 1  } 
	}
	division_development = {
		name  = "HrMs Eendracht" # ex-Kijkduin
		type  = light_cruiser
		model = 5
		cost  = 0.1 
		id    = {  type = 18500 id = 3001  } 
		date  = {  year = 1942 month = august day = 1  } 
	}
  } 
 
