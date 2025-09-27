 
 ############################## 
 # Country definition for UPE # 
 ############################## 
 # East Turkestan!
  
 country = 
 {  	tag                    = UPE
	puppet				   = SOV
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }   
	# Resource Reserves 
	energy                 = 240
	metal                  = 120
	rare_materials         = 60
	oil                    = 5000 
	supplies               = 2000 
	money                  = 10 
	capital                = 1280 # Gulja
	manpower               = 5 
	dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 6 
     freedom           = 5 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 6 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 }
   ownedprovinces         = {  1273 1276 1280 }
   controlledprovinces    = {  1273 1276 1280 } 

   # ROTW Minor Tech '36  # Copied from Mongolia
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
7600 7610
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 


#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
# Land Doctrines WW1 - Entente Line (Default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

 } 
  inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHC value = 40  } 
     relation = {  tag = SOV value = 125  } 
     relation = {  tag = TAN value = 125  } 
     relation = {  tag = CHI value = -125  } 
    } 
   SpyInfo                = {  country = "UPE" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 1400026  }
   headofgovernment       = {  type = 9 id = 1400028  } 
   foreignminister        = {  type = 9 id = 1400027  } 
   armamentminister       = {  type = 9 id = 1400018  } 
   ministerofsecurity     = {  type = 9 id = 1400035  } 
   ministerofintelligence = {  type = 9 id = 1400030  } 
   chiefofstaff           = {  type = 9 id = 1400023  } 
   chiefofarmy            = {  type = 9 id = 1400024  } 
   #chiefofnavy            = {  type = 9 id = 420009  } 
   #chiefofair             = {  type = 9 id = 420010  } 
   landunit = 
   {  location = 1280
     name     = "National Army of the Second East Turkestan Republic" 
     id       = {  type = 25600 id = 5  } 
     Division = 
     {  id   = {  type = 25600 id = 6 } 
       name = "Suidun-Ghulja-Kensai Regiments" 
       type = militia 
	   strength = 80 
	   model    = 4
      } 
     Division = 
     {  id   = {  type = 25600 id = 7  } 
       name = "Ghulja Reserve Regiment" 
       type = garrison
	   strength = 20
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 8  } 
       name = "Tungan-Sibo-Mongol Regiments" 
       type = militia 
	   strength = 80 
	   model    = 4
      }
	 Division = 
	 {  id   = {  type = 25600 id = 9  }
	   name = "Kazakh Cavalry Regiment"
	   type = cavalry
	   strength = 40
	   model = 6
	  }
    } 
  } 
 