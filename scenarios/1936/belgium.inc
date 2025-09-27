 
 ############################## 
 # Country definition for BEL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = BEL 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	capital                = 116 
	manpower               = 7 
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	rare_materials         = 510
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	transports             = 100 
	escorts                = 20 
	
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 3 
     free_market       = 9 
     freedom           = 10 
     professional_army = 5 
     defense_lobby     = 2 
     interventionism   = 2 
    } 	
	
	
   diplomacy = 
   {  relation = {  tag = AST value = 75  } 
     relation = {  tag = CAN value = 150  } 
     relation = {  tag = DEN value = 100  } 
     relation = {  tag = ENG value = 150  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 120  } 
     relation = {  tag = GER value = 20  } 
     relation = {  tag = HOL value = 150  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = ITA value = -5  } 
     relation = {  tag = JAP value = -25  } 
     relation = {  tag = LUX value = 200  } 
     relation = {  tag = NOR value = 100  } 
     relation = {  tag = NZL value = 20  } 
     relation = {  tag = POR value = -20  } 
     relation = {  tag = SAF value = 35  } 
     relation = {  tag = SWE value = 100  } 
     relation = {  tag = USA value = 75  } 
    } 
   SpyInfo                = {  country = "BEL" NumberOfSpies = 6  } 
   nationalprovinces      = {  108 110 111 112 113 114 115 116 117 } 
   ownedprovinces         = {  108 110 111 112 113 114 115 116 117 846 847 894 897 898 899 901 902 903 904 905 906  } 
   controlledprovinces    = {  108 110 111 112 113 114 115 116 117 846 847 894 897 898 899 901 902 903 904 905 906  } 
   claimedprovinces       = {  846 847 894 897 898 899 901 902 903 904 905 906 } #Belgian Congo
   # Western Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Motorised Inf
1396
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Engineers
1830 1840 1850 1860

#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510

# Destroyers 
3010
#Torpedo & ASW 18
3720 3730 3900
#Troopships
3810

#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120

#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Medicine
5600 5610 5620 5630
#Modern Agriculture 
5700 5710 5010
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090

#Great War Hospital System 
14000 14010 14020
# Great War Land Doctrines
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560 6030 6110
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
}
inventions = { 3000027 } 

   headofstate            = {  type = 9 id = 70001  } 
   headofgovernment       = {  type = 9 id = 70002  } 
   foreignminister        = {  type = 9 id = 70003  } 
   armamentminister       = {  type = 9 id = 70004  } 
   ministerofsecurity     = {  type = 9 id = 70005  } 
   ministerofintelligence = {  type = 9 id = 70213  } #Robert de Foy
   chiefofstaff           = {  type = 9 id = 70007  } 
   chiefofarmy            = {  type = 9 id = 70008  } 
   chiefofnavy            = {  type = 9 id = 70009  } 
   chiefofair             = {  type = 9 id = 70010  } 
   landunit = 
   {  id       = {  type = 11500 id = 1  } 
     location = 113 
     name     = "Corps de Cavalerie" 
     Division = 
     {  id    = {  type = 11500 id = 2  } 
       name  = "1ère Division de cavalerie" 
	   strength = 50 
       type  = cavalry 
       model = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id    = {  type = 11500 id = 3  } 
       name  = "2ème Division de cavalerie" 
	   strength = 50 
       type  = cavalry 
       model = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 4  } 
     location = 111 
     name     = "Corps des chasseurs ardennais" 
     Division = 
     {  id    = {  type = 11500 id = 5  } 
       name  = "1ère Division de chasseurs ardennais" 
	   strength = 55 
       type  = infantry 
       model = 8
	extra = armored_car
	brigade_model = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 6  } 
     location = 116 
     name     = "Ier Corps d'armée" 
     Division = 
     {  id    = {  type = 11500 id = 7  } 
       name  = "1ère Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 8  } 
       name  = "2ème Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 11500 id = 9  } 
       name  = "13ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 10  } 
       name  = "14ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 11  } 
     location = 115 
     name     = "IIème Corps d'armée" 
     Division = 
     {  id    = {  type = 11500 id = 12  } 
       name  = "3ème Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 13  } 
       name  = "4ème Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 11500 id = 14  } 
       name  = "15ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 15  } 
       name  = "16ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 16  } 
     location = 108 
     name     = "IIIème Corps d'armée" 
     Division = 
     {  id    = {  type = 11500 id = 17  } 
       name  = "5ème Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 18  } 
       name  = "6ème Division d'infanterie" 
	   strength = 50 
       type  = infantry 
       model = 7
      } 
     Division = 
     {  id    = {  type = 11500 id = 19  } 
       name  = "17ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
     Division = 
     {  id    = {  type = 11500 id = 20  } 
       name  = "18ème Division d'infanterie" 
	   strength = 5 
       type  = infantry 
       model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 21  } 
     location = 899 
     name     = "1ère Brigade de la Force Publique" 
     Division = 
     {  id    = {  type = 11500 id = 22  } 
       name  = "1ère Brigade de la Force Publique" 
	   strength = 90 
       type  = militia
       model = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 23  } 
     location = 898 
     name     = "2ème Brigade de la Force Publique" 
     Division = 
     {  id    = {  type = 11500 id = 24  } 
       name  = "2ème Brigade de la Force Publique" 
	   strength = 90 
       type  = militia
       model = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 11500 id = 25  } 
     location = 905 
     name     = "3ème Brigade de la Force Publique" 
     Division = 
     {  id    = {  type = 11500 id = 26  } 
       name  = "3ème Brigade de la Force Publique" 
	   strength = 90 
       type  = militia
       model = 3
      } 
    } 
	navalunit = { 
		id = { type = 11500 id = 27 } 
		name = "1ste Transportatie Smaldeel" 
		location = 114 
		base = 114 
		division = { 
			id = { type = 11500 id = 28 } 
			name = "1ère Transporte Naval" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 11500 id = 29 } 
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
 
