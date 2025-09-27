 
 ############################## 
 # Country definition for ECU # 
 ############################## 
  

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ECU 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 2042 
	manpower               = 1
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 6 
     free_market       = 8 
     freedom           = 5 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 1 
    } 
   nationalprovinces      = {  2007 2008 2010 2033 2040 2041 2042  } 
   ownedprovinces         = {  2007 2008 2010 2033 2040 2041 2042  } 
   controlledprovinces    = {  2007 2008 2010 2033 2040 2041 2042  } 
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
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Naval Infantry
#1560
#Engineers
1830 1840 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Medicine
5600 5610
#Modern Agriculture
5700 5710 5010
#Improved Construction Engineering
5800 5080  

#Troopships
3810 
 
 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ARG value = 10  } 
     relation = {  tag = BOL value = -20  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = 20  } 
     relation = {  tag = COL value = 20  } 
	 
     relation = {  tag = PAR value = 25  } 
     relation = {  tag = PRU value = -50  } 
     relation = {  tag = URU value = 10  } 
     relation = {  tag = USA value = 75  } 
     relation = {  tag = VEN value = 20  } 
    } 
   SpyInfo                = {  country = "ECU" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 190001  } 
   headofgovernment       = {  type = 9 id = 190002  } 
   foreignminister        = {  type = 9 id = 190003  } 
   armamentminister       = {  type = 9 id = 190004  } 
   ministerofsecurity     = {  type = 9 id = 190005  } 
   ministerofintelligence = {  type = 9 id = 190006  } 
   chiefofstaff           = {  type = 9 id = 190007  } 
   chiefofarmy            = {  type = 9 id = 190008  } 
   chiefofnavy            = {  type = 9 id = 190009  } 
   chiefofair             = {  type = 9 id = 190010  } 
   landunit = 
   {  id       = {  type = 29000 id = 50  } 
     name     = "Ejercito de Ecuador" 
     location = 2042 
     Division = 
     {  id       = {  type = 29000 id = 5000  } 
       name     = "1a Brigada de Infantería" 
       strength = 100 
       type     = infantry 
       model    = 6 
       extra    = anti_air 
	   brigade_model = 1
      } 
    } 
  } 
 