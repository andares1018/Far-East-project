 
 ############################## 
 # Country definition for NZL # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = NZL 
	puppet = ENG 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 420
	metal                  = 210
	rare_materials         = 105
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	transports             = 100 
	escorts                = 15 
	capital                = 1721 
	manpower               = 5 
	
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 10 
     political_left    = 10 
     freedom           = 10 
     free_market       = 8 
     professional_army = 3 
     defense_lobby     = 2 
     interventionism   = 6 
    } 	
	
   diplomacy = 
   {  relation = {  tag = AST value = 200  } # was access = yes 
     relation = {  tag = BEL value = 20  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } # was access = yes 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = 1  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = 1  } 
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = PHI value = 25  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "NZL" NumberOfSpies = 5  } 
   nationalprovinces      = {  1718 1719 1720 1721 1722 1723  } 
   ownedprovinces         = {  1718 1719 1720 1721 1722 1723 1731 1732 1741 1742 1748  } 
   controlledprovinces    = {  1718 1719 1720 1721 1722 1723 1731 1732 1741 1742 1748  } 
   # Commonwealth Tech '36 
   # UK 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Basic Cavalry Division 
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Naval Infantry
#1560 1570 1580
#Engineers
1830 1840 1850 1860
#Great War Tank 
7600 7610 2620 2010 2630
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Mechanized Agriculture 
5700 5710 5010 5020
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Basic Oil Refining 
#5190 
#Computers & cryptografi
5310 54010 54020 54030 5316 5326

#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Medicine
5600 5610 5620 5630
#Troopships
3810  

# Land Doctrines WW1 - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - Def. Focus (Commonwealth)
6560
# Engagement Theories
8010 8020 8040 8050 8060 8070 8080
# Naval Supremacy
8100 8110 8120 8150 8160 8200 8210
# Naval Interdiction
8500 8510 8520 8600
# Engagement Tactics
8900 8910 8920 8930 8940
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  9140
} 
inventions = { 3000027 }

   headofstate            = {  type = 9 id = 215001  } 
   headofgovernment       = {  type = 9 id = 215002  } 
   foreignminister        = {  type = 9 id = 215003  } 
   armamentminister       = {  type = 9 id = 215004  } 
   ministerofsecurity     = {  type = 9 id = 215005  } 
   ministerofintelligence = {  type = 9 id = 215006  } 
   chiefofstaff           = {  type = 9 id = 215007  } 
   chiefofarmy            = {  type = 9 id = 215008  } 
   chiefofnavy            = {  type = 9 id = 215009  } 
   chiefofair             = {  type = 9 id = 215010  } 
   landunit = 
   {  id       = {  type = 10600 id = 1  } 
     name     = "New Zealand Military Forces" 
     location = 1721 
     Division = 
     {  id       = {  type = 10600 id = 2  } 
       name     = "New Zealand Division" 
       strength   = 5 
       type     = infantry 
	   model    = 7 
      } 
    } 

	navalunit = { 
		id = { type = 10600 id = 12 } 
		name = "HM New Zealand Navy" 
		location = 1721 
		base = 1721 
		division = { 
			id = { type = 10600 id = 15 } 
			name = "1st Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10600 id = 22 } 
			name = "4th Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10600 id = 23 } 
			name = "5th Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10600 id = 2299 } 
			name = "1st Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 10600 id = 2300 } 
			name = "2nd Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 10600 id = 2301 } 
			name = "3rd Destroyer Flotilla" 
			type = destroyer 
			} 
		} 
	navalunit = { 
		id = { type = 10600 id = 2297 } 
		name = "RNZN Fleet 1" 
		location = 1721 
		base = 1721 
		division = { 
			id = { type = 10600 id = 2302 } 
			name = "4th Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 10600 id = 2303 } 
			name = "5th Destroyer Flotilla" 
			type = destroyer 
			} 
		division = { 
			id = { type = 10600 id = 20 } 
			name = "2nd Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10600 id = 21 } 
			name = "3rd Transport Flotilla" 
			type = transport model = 1 
			} 
		} 
  } 
 
