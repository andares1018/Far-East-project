 
 ############################## 
 # Country definition for IRE # 
 ############################## 
    
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = IRE
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } } 
	manpower               = 0 
	# Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	capital                = 34 
      
   diplomacy = 
   {  relation = {  tag = ARG value = 20  } 
     relation = {  tag = AST value = 75  } 
     relation = {  tag = AUS value = 10  } 
     relation = {  tag = BEL value = 75  } 
     relation = {  tag = BRA value = 20  } 
     relation = {  tag = CAN value = 75  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = ETH value = 100  } 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = FRA value = 25  } 
     relation = {  tag = GER value = 15  } 
     relation = {  tag = HOL value = 75  } 
     relation = {  tag = HUN value = 25  } 
     relation = {  tag = ITA value = 20  } 
     relation = {  tag = LUX value = 75  } 
     relation = {  tag = MEX value = 30  } 
     relation = {  tag = NZL value = 75  } 
     relation = {  tag = POR value = 25  } 
     relation = {  tag = SAF value = 80  } 
     relation = {  tag = SOV value = 1  } 
     relation = {  tag = SPR value = 50  } 
     relation = {  tag = USA value = 75  } 
    } 
   SpyInfo                = {  country = "IRE" NumberOfSpies = 5  } 
   nationalprovinces      = {  30 31 32 33 34 35 36  } 
   ownedprovinces         = {  30 31 32 33 34  } 
   controlledprovinces    = {  30 31 32 33 34  } 
   # Western Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Basic Armoured Car  
2860 2870 2880 
#Great War Heavy Field Artillery 
2290 2300 2310 
#SW Tank 
7600 7610 2620 2010
#Great War Infantry Division  
1010  1020 1030 1040 1050 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#Great War Cavalry Division  
13060 13070 13080 1310 1320
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 
#Medicine
5600 5610 5620

#Troopships
3810
#Early Static Anti-Air Artillery 
2800 2450 
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050
#Improved Construction Engineering 
5800 5080  
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path (FRA / UK)
6560
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 3 
     freedom           = 8 
     free_market       = 7 
     professional_army = 2 
     defense_lobby     = 4 
     interventionism   = 2 
    } 

   headofstate            = {  type = 9 id = 125001  } 
   headofgovernment       = {  type = 9 id = 125002  } 
   foreignminister        = {  type = 9 id = 125003  } 
   armamentminister       = {  type = 9 id = 125004  } 
   ministerofsecurity     = {  type = 9 id = 125005  } 
   ministerofintelligence = {  type = 9 id = 125006  } 
   chiefofstaff           = {  type = 9 id = 125007  } 
   chiefofarmy            = {  type = 9 id = 125008  } 
   chiefofnavy            = {  type = 9 id = 125009  } 
   chiefofair             = {  type = 9 id = 125010  } 
   # Firepower 
   landunit = 
   {  id       = {  type = 21500 id = 1  } 
     name     = "Regiment of Rifle" 
     location = 34 
     Division = 
     {  id           = {  type = 21500 id = 2  } 
       name         = "1/2/3/4/5 Rifle Battalions" 
       strength     = 50 
       max_strength = 50 
       type         = infantry 
	   model    = 6
      } 
    } 
   navalunit = 
   {  id       = {  type = 21500 id = 5  } 
     name     = "Irish Republic Navy" 
     location = 34 
     base     = 34 
     # Division = {  
     # id = {  type = 21500 id = 6  } 
     # name = "1st Destroyer Flotilla" 
     # type = destroyer 
     # model = 2
     #  } 
     Division = 
     {  id    = {  type = 21500 id = 7  } 
       name  = "1st Transport Flotilla" 
       type  = transport 
       model = 0 
      } 
    } 
  } 
 