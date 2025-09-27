 
 ############################## 
 # Country definition for MEN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MEN 
	regular_id             = MON
	puppet                 = JAP 
	control                = JAP 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes revolter_set = yes } }
	# Resource Reserves 
	energy                 = 900
	metal                  = 450
	rare_materials         = 225
	transports = 100
	oil                    = 200 
	supplies               = 100 
	money                  = 10 
	manpower               = 0 
	capital                = 1246 
	free                   = {  energy = 14 metal = 7 rare_materials = 4  } 
	diplomacy = 
	{  relation = {  tag = CHC value = -200  } 
	 relation = {  tag = CHI value = -200  }  
	 relation = {  tag = GER value = 20  } 
	 relation = {  tag = JAP value = 200 access = yes  } 
	 relation = {  tag = SIA value = 75  } 
	 relation = {  tag = USA value = 1  } 
    } 
   nationalprovinces      = {  1119 1120 1121 1122 1123 1124 1125 1238 1239 1240 1246 1268 1269 1270 1272} 
   ownedprovinces         = {  1238 1239 1240 1246 1269 1270 } 
   controlledprovinces    = {  1238 1239 1240 1246 1269 1270 }
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
     professional_army = 3 
     defense_lobby     = 8 
     interventionism   = 8 
    } 

   SpyInfo                = {  country = "MEN" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 700001  } 
   headofgovernment       = {  type = 9 id = 700002  } 
   foreignminister        = {  type = 9 id = 700003  } 
   armamentminister       = {  type = 9 id = 700004  } 
   ministerofsecurity     = {  type = 9 id = 700005  } 
   ministerofintelligence = {  type = 9 id = 700006  } 
   chiefofstaff           = {  type = 9 id = 700007  } 
   chiefofarmy            = {  type = 9 id = 700008  } 
   chiefofnavy            = {  type = 9 id = 700009  } 
   chiefofair             = {  type = 9 id = 700010  } 
   # Basic Construction Engineering Development Process 
   landunit = 
   {  location = 1246 
     id       = {  type = 22700 id = 1  } 
     name     = "Di'1 Mengkukuo Jun"  
     Division = 
     {  id       = {  type = 22700 id = 2  } 
       name     = "1. Mengkukuo Hoheishidan" 
       type     = militia
		model = 4
      }
     Division = 
     {  id       = {  type = 22700 id = 3  } 
       name     = "3. Mengkukuo Kiheishidan" 
       type     = cavalry
		model = 9
      }
     Division = 
     {  id       = {  type = 22700 id = 5  } 
       name     = "Roppou Suiyuan shûsei butai" 
       type     = militia
		model = 4
      }
    } 
  } 
 
