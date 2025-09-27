    ############################## 
     # Country definition for CRO # 
     ############################## 
  
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CRO 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes revolter_set = yes } }
	puppet                 = GER
	control                = GER
	# Resource Reserves 
	energy                 = 500 
	metal                  = 500
	rare_materials         = 200
	oil                    = 200
	supplies               = 200 
	money                  = 10 
	manpower               = 10 
	capital                = 352 
   diplomacy = 
   { relation = {  tag = GER value = 200  } 
     relation = {  tag = ITA value = 200  } 
    } 
   SpyInfo                = {  country = "CRO" NumberOfSpies = 7  } 
   nationalprovinces      = {  352  } 
   ownedprovinces         = {  337 344 345 347 351 352 353 354 355 356 357 358  } 
   controlledprovinces    = {  337 344 345 347 351 352 353 354 355 356 357 358  } 
   claimedprovinces       = {  337 343 344 345 347 350 351 353 354 355 356 357 358  } 
   # Eastern Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Hospital System 
14000 14010 14020
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640 2646 2650 2030
#Basic Armoured Car  
2860 2870 2880 2020 2150
#Great War Heavy Field Artillery 
2290 2300 2310
#Early Static Anti-Air Artillery 
2800 2450 21180 21190 21200
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#Medicine
5600 5610 5620 5630
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Mechanized Agriculture 
5700 5710 5010
#Improved Construction Engineering 
5800 5080 5090 
#rocket
5560

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrines
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010  
 }
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     free_market       = 4 
     freedom           = 3 
     professional_army = 6 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 275042  } 
   headofgovernment       = {  type = 9 id = 275002  } 
   foreignminister        = {  type = 9 id = 275003  } 
   armamentminister       = {  type = 9 id = 275004  } 
   ministerofsecurity     = {  type = 9 id = 275005  } 
   ministerofintelligence = {  type = 9 id = 275006  } 
   chiefofstaff           = {  type = 9 id = 275007  } 
   chiefofarmy            = {  type = 9 id = 275008  } 
   chiefofnavy            = {  type = 9 id = 275009  } 
   chiefofair             = {  type = 9 id = 275010  }

   landunit = 
   { location = 352 
     name     = "1. korpusa" 
     id       = {  type = 12607 id = 3  } 
     division = 
     { id       = {  type = 12607 id = 1  } 
       name     = "1. gorska brigada" 
       type     = bergsjaeger 
       model    = 9 
       strength = 35
      }
     division = 
     { id       = {  type = 12607 id = 2  } 
       name     = "3. gorska brigada" 
       type     = bergsjaeger 
       model    = 9 
       strength = 35
      }
     division = 
     { id       = {  type = 12607 id = 10  } 
       name     = "4. gorska brigada" 
       type     = bergsjaeger 
       model    = 9 
       strength = 35
      }
     division = 
     { id       = {  type = 12607 id = 5  } 
       name     = "2. puscani brigada" 
       type     = infantry 
       model    = 9 
       strength = 35
      }
    }
   landunit = 
   { location = 358 
     name     = "2. korpusa" 
     id       = {  type = 12607 id = 6  } 
     division = 
     { id       = {  type = 12607 id = 4  } 
       name     = "1. puscani brigada" 
       type     = infantry 
       model    = 9 
       strength = 35
      }
     division = 
     { id       = {  type = 12607 id = 7  } 
       name     = "3. puscani brigada" 
       type     = infantry 
       model    = 9 
       strength = 35
      }
     division = 
     { id       = {  type = 12607 id = 8  } 
       name     = "4. puscani brigada" 
       type     = infantry 
       model    = 9 
       strength = 35
      }
    }
   landunit = 
   { location = 355 
     name     = "3. korpusa" 
     id       = {  type = 12607 id = 9  } 
     division = 
     { id       = {  type = 12607 id = 11  } 
       name     = "2. gorska brigada" 
       type     = bergsjaeger 
       model    = 9 
       strength = 35
      }
    }
  airunit =
  { id       = { type = 12607 id = 50 }
    name     = "Hrvatsko Zrakoplovstvo"
    location = 352
    base     = 352
    division =
    { id    = { type = 12607 id = 51 }
      name  = "Hrvatsko Zrakoplovstvo"
      type  = interceptor
      model = 5
      strength = 60
    }
  }
}