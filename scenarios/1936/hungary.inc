 
 ############################## 
 # Country definition for HUN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HUN 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	manpower               = 5 
	capital                = 284 
	# Resource Reserves 
	energy                 = 1740
	metal                  = 870
	rare_materials         = 435
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
    
   
   diplomacy = 
   {  relation = 
     {  tag        = AUS 
       value      = 100 
       guaranteed = {  day = 17 month = march year = 1934  } 
      } 
     relation = {  tag = CZE value = -50  } 
     relation = {  tag = ENG value = -50  } 
     relation = {  tag = FIN value = 75  } 
     relation = {  tag = FRA value = -70  } 
     relation = {  tag = GER value = 100  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = ITA value = 125  } 
     relation = {  tag = POL value = 50  } 
     relation = {  tag = ROM value = 1  } 
     relation = {  tag = YUG value = 80  } 
    } 
   SpyInfo                = {  country = "HUN" NumberOfSpies = 7  } 
 nationalprovinces = {  209 210 215 276 277 278 279 280 281 282 283 284 286 288 292 293 296 341 } 
 ownedprovinces = {  276 277 278 279 280 281 282 283 284  } 
 controlledprovinces = {  276 277 278 279 280 281 282 283 284  } 
 claimedprovinces = { 188 208 211 212 213 214 285 287 289 291 295 } 
   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Interwar Bomber 
4600 4610 4620 4630 4120
#Basic Armoured Car  
2860 2870 2880 2020
#Tankette 
7600 7610 2620 2010 2630 2640
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Early Anti-Tank Artillery 
#2400
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
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

#Great War Hospital System 
14000 14010 14020
#Medicine
5600 5610 5620 5630
#Engineers
1830 1840 1850 1860
# Great War Land Doctrines (central powers)
6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 1 
     free_market       = 4 
     freedom           = 3 
     professional_army = 3 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 105001  } 
   headofgovernment       = {  type = 9 id = 105002  } 
   foreignminister        = {  type = 9 id = 105003  } 
   armamentminister       = {  type = 9 id = 105004  } 
   ministerofsecurity     = {  type = 9 id = 105005  } 
   ministerofintelligence = {  type = 9 id = 105208  } #Gusztáv Hennyey
   chiefofstaff           = {  type = 9 id = 105007  } 
   chiefofarmy            = {  type = 9 id = 105008  } 
   chiefofnavy            = {  type = 9 id = 105009  } 
   chiefofair             = {  type = 9 id = 105010  } 
   landunit = 
   {  id       = {  type = 20500 id = 1  } 
     name     = "Magyar Királyi Honvédség" 
     location = 284 
	Division = 
     {  id       = {  type = 20500 id = 2  } 
       name     = "Foparancsnokság" 
       strength     = 30
       type     = hq
	   model = 2
      } 
     Division = 
     {  id       = {  type = 20500 id = 3  } 
       name     = "1. gyalogdandár" 
       strength     = 25
       type     = infantry
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 4  } 
       name     = "2. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 5  } 
       name     = "3. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 6  } 
       name     = "4. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 7  } 
       name     = "5. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 8  } 
       name     = "6. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 9  } 
       name     = "7. gyalogdandár" 
       strength     = 25
       type     = infantry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 20500 id = 10  } 
       name     = "1. lovasdandár" 
       strength     = 40
       type     = cavalry 
	   model = 8
      } 
     Division = 
     {  id       = {  type = 20500 id = 11  } 
       name     = "2. lovasdandár" 
       strength     = 40
       type     = cavalry 
	   model = 8
      } 
    } 
   airunit = 
   {  id       = {  type = 20500 id = 12  } 
     name     = "I Légügyi Hivatal" 
     location = 284 
     base     = 284 
     Division = 
     {  id       = {  type = 20500 id = 13  } 
       name     = "1. vadászosztály" 
       type     = interceptor 
       model    = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 20500 id = 14  } 
       name     = "1. bombázóosztály" 
       type     = tactical_bomber 
       model    = 4 
       strength = 30 
      } 
    } 
  } 
 