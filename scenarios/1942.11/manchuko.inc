 
 ############################## 
 # Country definition for MAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MAN 
	puppet                 = JAP 
	control                = JAP
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }	
	# Resource Reserves 
	energy                 = 900
	metal                  = 450
	rare_materials         = 225
	transports = 100
	oil                    = 200 
	supplies               = 100 
	money                  = 10 
	manpower               = 63 
	capital                = 1208 
   free                   = {  energy = 14 metal = 7 rare_materials = 4  } 
   diplomacy = 
   {  relation = {  tag = CHC value = -200  } 
     relation = {  tag = CHI value = -200  }
     relation = {  tag = U67 value = -200 }  
     relation = {  tag = GER value = 20  } 
     relation = {  tag = JAP value = 200 access = yes  } 
     relation = {  tag = SIA value = 75  } 
     relation = {  tag = USA value = 1  } 
    } 
   nationalprovinces      = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 1216 1235 1236 } 
   ownedprovinces         = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 1216 1235 1236 } 
   controlledprovinces    = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 1216 1235 1236 } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610 2620 2010
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Naval Infantry
#1560 
#Medicine
5600
#Troopships
3810
#Engineers
1830 1840
#Manufactoring
5810 5820
# Basic Construction Engineering
5800 5080 
# Early Anti-Tank Artillery
#2400  
 
 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 # Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
 } 
 inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 8 
    } 

   SpyInfo                = {  country = "MAN" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 235001  } 
   headofgovernment       = {  type = 9 id = 235004  } 
   foreignminister        = {  type = 9 id = 235012  } 
   armamentminister       = {  type = 9 id = 235021  } 
   ministerofsecurity     = {  type = 9 id = 235014  } 
   ministerofintelligence = {  type = 9 id = 235036  } 
   chiefofstaff           = {  type = 9 id = 235054  } 
   chiefofarmy            = {  type = 9 id = 235045  } 
   chiefofnavy            = {  type = 9 id = 235059  } 
   chiefofair             = {  type = 9 id = 235063  } 
   # Basic Construction Engineering Development Process 
   landunit = 
   {  location = 1237 
     id       = {  type = 28500 id = 1  } 
     name     = "Di'1 Fang'tien Jüntuan" 
     Division = 
     {  id       = {  type = 28500 id = 2  } 
       name     = "7 Man'chu Lü" 
       type     = militia
		model = 3   
       strength = 90 
      } 
    } 
   landunit = 
   {  location = 1214 
     id       = {  type = 28500 id = 8  } 
     name     = "Di'2 Ji'lin Jüntuan" 
     Division = 
     {  id       = {  type = 28500 id = 9  } 
       name     = "8 Man'chu Lü" 
       type     = militia 
	   model = 4
       strength = 60 
      } 
     Division = 
     {  id       = {  type = 28500 id = 13  } 
       name     = "2 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 45 
      } 
    } 
   landunit = 
   {  location = 1206 
     id       = {  type = 28500 id = 16  } 
     name     = "Di'3 Qiqihar Jüntuan" 
     Division = 
     {  id       = {  type = 28500 id = 17  } 
       name     = "9 Man'chu Lü" 
       type     = militia 
	   model = 4
       strength = 75 
      } 
    } 
   landunit = 
   {  location = 1199 
     id       = {  type = 28500 id = 23  } 
     name     = "Di'4 Harbin Jüntuan" 
     Division = 
     {  id       = {  type = 28500 id = 24  } 
       name     = "10 Man'chu Lü" 
       type     = militia 
	   model = 4
       strength = 15 
      } 
    } 
   landunit = 
   {  location = 1202 
     id       = {  type = 28500 id = 33  } 
     name     = "Di'5 Chengde Jüntuan" 
     Division = 
     {  id       = {  type = 28500 id = 34  } 
       name     = "12 Man'chu Lü" 
       type     = militia 
	   model = 3
       strength = 45 
      } 
    } 
  } 
 
