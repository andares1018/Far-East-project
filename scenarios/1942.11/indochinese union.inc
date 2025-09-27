 
 ############################## 
 # Country definition for U03 INDOCHINESUNION # 
 ############################## 
  
 ##################### 
 # Country main data # 
 #####################
 country = 
 {  tag                    = U03 
	capital                = 1395 
	puppet                 = JAP 
	control                = JAP
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 420
	metal                  = 210
	rare_materials         = 105
	oil                    = 500 
	supplies               = 2000 
	money                  = 50 
	manpower               = 0 
	transports             = 100 
	escorts                = 10 
      
   diplomacy = 
   {   
   relation = {  tag = FRA value = 50 }
   relation = {  tag = JAP value = 50 access = yes }  
    } 
   SpyInfo                = {  country = "U03" NumberOfSpies = 3  } 
  
    
   nationalprovinces      = { 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405  } 
   ownedprovinces         = {  1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1400 1401 1404  } 
   controlledprovinces    = {  1395 1396 1397 1399 1403 1392 1393 1405 1394 1398 1400 1401 1404  } 
   
  # FRA 1936 techs 
   # ###################### 
   techapps               = {  
 #Great War Infantry Division  
 1010  1020 1030 1040 1050 1060   
 #Early Mountain Division 
 1160  1170 1180 1190 1200 1210 1220 1230 1240  
 #Interbellum 1930 Supply 
 1910 1920 1930 1940 1950 1960 

 #1930 Cavalry Division  
 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370  
 #Basic Armoured Car  
 2860 2870 2880 2020  
 #Great War Heavy Field Artillery 
 2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450
#SW Tank 
7600 7610
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010 
#Interwar Bomber 
4600 4610 4620 4630 4120
#Improved Construction Engineering
5800 5080  
#Engineers
1830 1840 

#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8020 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
  } 
inventions = { 3000027 }    
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 4 
     political_left    = 3 
     free_market       = 8 
     freedom           = 10 
     professional_army = 2 
     defense_lobby     = 7 
     interventionism   = 5 
    } 

   headofstate            = {  type = 9 id = 830203  } 
   headofgovernment       = {  type = 9 id = 830054  } 
   foreignminister        = {  type = 9 id = 830067  } 
   armamentminister       = {  type = 9 id = 830083  } 
   ministerofsecurity     = {  type = 9 id = 830106  } 
   ministerofintelligence = {  type = 9 id = 830122  } 
   chiefofstaff           = {  type = 9 id = 830143  } 
   chiefofarmy            = {  type = 9 id = 830164  } 
   chiefofnavy            = {  type = 9 id = 830180  } 
   chiefofair             = {  type = 9 id = 830195  } 
  # ################# 
   # ### OOB #### 
   # ################# 
     
    landunit = 
   {  id       = {  type = 13500 id = 186  } 
     name     = "Troupes d'Indochine" 
     location = 1395 
     Division = 
     {  id       = {  type = 13500 id = 1871  } 
       name     = "Division de Tonkin" 
	   model    = 6
       strength = 65 
       type     = infantry 
      } 
     Division = 
     {  id       = {  type = 13500 id = 1881  } 
       name     = "Division de Cochinchine-Cambodge" 
       strength = 60 
       type     = infantry 
	   model    = 7
       extra    = engineer 
	   brigade_model = 2
      } 
    } 
    landunit = 
   {  id       = {  type = 13500 id = 1891  } 
     name     = "Saigon Boeitai" 
     location = 1399 
     Division = 
     {  id       = {  type = 13500 id = 1901  } 
       name     = "Dai 1 Indoshina Shubitai" 
       strength = 100 
       type     = garrison 
	   model    = 3
      }  } 
    landunit = 
   {  id       = {  type = 13500 id = 1911  } 
     name     = "Tai Chuton Gun" 
     location = 1404 
     Division = 
     {  id       = {  type = 13500 id = 1921  } 
       name     = "Dai 4 Indoshina Shubitai" 
       strength = 100 
       type     = garrison 
	   model    = 3
      }  } 
     landunit = 
   {  id       = {  type = 13500 id = 193  } 
     name     = "Indoshina Chuton Gun" 
     location = 1392 
     Division = 
     {  id       = {  type = 13500 id = 194  } 
       name     = "Dai 2 Indoshina Shubitai" 
       strength = 100 
       type     = garrison 
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 13500 id = 195  } 
       name     = "Dai 3 Indoshina Shubitai" 
       strength = 100 
       type     = garrison 
	   model    = 3
       } 
    } 
  }