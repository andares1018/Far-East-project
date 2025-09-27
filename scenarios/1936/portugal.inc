 
 ############################## 
 # Country definition for POR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = POR 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	# Resource Reserves 
	energy                 = 1020
	metal                  = 510
	rare_materials         = 255
	oil                    = 500 
	supplies               = 500 
	money                  = 15 
	capital                = 476 
	manpower               = 94 
	transports             = 100 
	escorts                = 7 
      
   # Azores 
   diplomacy = 
   {  relation = {  tag = BEL value = -20  } 
     relation = {  tag = BRA value = 75  } 
     relation = {  tag = ENG value = 100  } 
     relation = {  tag = FIN value = 50  } 
     relation = {  tag = GER value = 75  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = ITA value = 65  } 
     relation = {  tag = SAF value = 125 access = yes  } 
     relation = {  tag = SPR value = -50  } 
    } 
   SpyInfo                = {  country = "POR" NumberOfSpies = 5  } 
   # Cabinda 
   nationalprovinces      = {  476 477 478 479 480 481 482  } 
   ownedprovinces         = {  476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617  } 
   controlledprovinces    = {  476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617  } 
   claimedprovinces       = {  853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617  } #Colonial Empire
   # Western Minor Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = {  
 #Great War Infantry Division  
 1010  1020 1030 1040 1050 1060   
 #Early Mountain Division 
 1160  1170 1180 1190 1200 1210 1220 1230 1240  
 #Great War Cavalry Division  
 13060 13070 13080 1310 1320 1330 1340   
 #Tankette 
 7600 7610 2620 2010 2630 2640  
 #Basic Armoured Car  
 2860 2870 2880 2020  
 #Great War Heavy Field Artillery 
 2290 2300 2310 
 #Early Static Anti-Air Artillery 
 2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Naval Infantry
#1560 1570 1580
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Engineers
1830 1840 1850 1860
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Early Light Cruiser 
3110 3120 3130
#Short Range Submarine 
3610 3620 3630 3640
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Modern Agriculture  
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 5090  
 #Basic Oil Refining 
 #5190 
 #Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610 5620 
#Improved Great War Hospital System
14000 14010

#Land Doctrines WWI - Entente Line
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Land Doctrine WWII - Firepower Focus?  WTF?  Really?
6010 6020
#Naval Doctrines
8010 8040 8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 4 
     free_market       = 5 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 3 
    } 

   headofstate            = {  type = 9 id = 20001  } 
   headofgovernment       = {  type = 9 id = 20002  } 
   foreignminister        = {  type = 9 id = 20003  } 
   armamentminister       = {  type = 9 id = 20004  } 
   ministerofsecurity     = {  type = 9 id = 20005  } 
   ministerofintelligence = {  type = 9 id = 20006  } 
   chiefofstaff           = {  type = 9 id = 20007  } 
   chiefofarmy            = {  type = 9 id = 20008  } 
   chiefofnavy            = {  type = 9 id = 20009  } 
   chiefofair             = {  type = 9 id = 20010  } 
   landunit = 
   {  id       = {  type = 14000 id = 1000  } 
     location = 476 
     name     = "Exército do Portugal" 
     Division = 
     {  id       = {  type = 14000 id = 1001  } 
       name     = "1o Batalhão de Infantaria" 
       type     = infantry 
	   model    = 7
       extra    = artillery 
	   brigade_model = 6
       strength     = 35 
      } 
     Division = 
     {  id       = {  type = 14000 id = 1002  } 
       name     = "2o Batalhão de Infantaria" 
       type     = infantry 
	   model    = 6
       strength     = 35 
      } 
	      Division = 
     {  id       = {  type = 14000 id = 1003  } 
       name     = "3o Batalhão de Infantaria" 
       type     = infantry 
	   model    = 6
       strength     = 35 
      } 
	 Division = 
     {  id           = {  type = 14000 id = 1004  } 
       name         = "4o Batalhão de Infantaria" 
       type         = infantry
	   model = 6
       strength     = 35 
       organisation = 30 
      }
     Division = 
     {  id           = {  type = 14000 id = 1005  } 
       name         = "5o Batalhão de Infantaria" 
       type         = infantry 
	   model = 6
       strength     = 35 
       organisation = 30 
      }
     Division = 
     {  id           = {  type = 14000 id = 1006  } 
       name         = "6o Batalhão de Infantaria" 
       type         = infantry
	   model = 6
       strength     = 35 
       organisation = 30 
      }	  
	 Division = 
     {  id           = {  type = 14000 id = 1007  } 
       name         = "7o Batalhão de Infantaria" 
       type         = infantry
	   model = 6	   
       strength     = 35 
       organisation = 30 
      }	   
	  
    } 
   navalunit = 
   {  id       = {  type = 19600 id = 1003  } 
     location = 476 
     base     = 476 
     name     = "Transporte de Navio do Portugal" 
     Division = 
     {  id   = {  type = 19600 id = 1004  } 
       name = "1o Flotilha de Navio de Transporte" 
       type = transport 
	   model    = 0
      } 
     Division = 
     {  id       = {  type = 19600 id = 9303  } 
       name     = "Viana do Castello Flotilha" 
       type     = destroyer 
       model    = 4
       strength     = 100 
      } 
    } 
   navalunit = 
   {  id       = {  type = 19600 id = 1005  } 
     location = 963 
     base     = 963 
     name     = "Transporte de Navio de Colonias" 
     Division = 
     {  id   = {  type = 19600 id = 1006  } 
       name = "2o Flotilha de Navio de Transporte" 
       type = transport 
	   model    = 0
      } 
     Division = 
     {  id    = {  type = 19600 id = 1007  } 
       name  = "Douro Flotilha" 
       type  = destroyer 
       model = 0 
      } 
    } 
   navalunit = 
   {  id       = {  type = 19600 id = 9302  } 
     name     = "Marinha do Portugal" 
     location = 476 
     base     = 476 
     Division = 
     {  id       = {  type = 19600 id = 9304  } 
       name     = "1o Flotilha de Submarino" 
       type     = submarine 
       model    = 3 
       strength     = 100 
      } 
    } 
   airunit = 
   {  id       = {  type = 19600 id = 9300  } 
     name     = "Aéreo do Portugal" 
     location = 476 # Lissabon 
     base     = 476 
     Division = 
     {  id       = {  type = 19600 id = 9301  } 
       name     = "1o Avião de Bombardeiro Tático" 
       type     = tactical_bomber 
       strength     = 100 
       model    = 4
      } 
    } 
  } 
 
