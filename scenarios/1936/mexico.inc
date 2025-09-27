 
 ############################## 
 # Country definition for MEX # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MEX
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } } 
	# Resource Reserves 
	energy                 = 1140
	metal                  = 570
	rare_materials         = 285
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 20 
	capital                = 1974 
	manpower               = 0 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8 
     political_left    = 8 
     freedom           = 6 
     free_market       = 6 
     professional_army = 2 
     defense_lobby     = 4 
     interventionism   = 3 
    } 

   nationalprovinces      = {  1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982  } 
   ownedprovinces         = {  1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982  } 
   controlledprovinces    = {  1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982  } 
   # Semi-Major Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090   
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240   
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340    
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Modern Agriculture  
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050
#Improved Construction Engineering 
5800 5080 5090
#Basic Oil Refining 
#5190 
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850 

#Troopships
3810
#Torpedo

#Medicine
5600 
#Great War Hospital System
14000

# Land Doctrines WW1 - Entente (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WW2 - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
} 
inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 50  } 
     relation = {  tag = HOL value = 25  } 
     relation = {  tag = IRE value = 30  } 
     relation = {  tag = USA value = 125  } 
    } 
   SpyInfo                = {  country = "MEX" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 170001  } 
   headofgovernment       = {  type = 9 id = 170002  } 
   foreignminister        = {  type = 9 id = 170003  } 
   armamentminister       = {  type = 9 id = 170004  } 
   ministerofsecurity     = {  type = 9 id = 170005  } 
   ministerofintelligence = {  type = 9 id = 170006  } 
   chiefofstaff           = {  type = 9 id = 170007  } 
   chiefofarmy            = {  type = 9 id = 170008  } 
   chiefofnavy            = {  type = 9 id = 170009  } 
   chiefofair             = {  type = 9 id = 170010  } 
   # Firepower 
   landunit = 
   {  id       = {  type = 29500 id = 1  } 
     name     = "Ejercito de Mexico" 
     location = 1974 
     Division = 
     {  id       = {  type = 29500 id = 2  } 
       name     = "Guardia del Presidente" 
       strength     = 50
       type     = infantry 
       model    = 8 # Special trained w. foreign eq. 
      } 
     Division = 
     {  id       = {  type = 29500 id = 3  } 
       name     = "I División de Infantería" 
       strength     = 50
       type     = infantry 
	   model = 6
      } 
     Division = 
     {  id       = {  type = 29500 id = 4  } 
       name     = "II División de Infantería" 
       strength     = 50
       type     = infantry 
	   model = 6
      } 
     Division = 
     {  id       = {  type = 29500 id = 5  } 
       name     = "III División de Infantería" 
       strength     = 50
       type     = infantry 
	   model = 6
       extra    = artillery 
	   brigade_model = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 29500 id = 6  } 
     name     = "Caballería de Mexico" 
     location = 1976 
     Division = 
     {  id       = {  type = 29500 id = 7  } 
       name     = "I División de Caballería" 
       strength     = 50
       type     = cavalry 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 29500 id = 8  } 
       name     = "II División de Caballería" 
       strength     = 50
       type     = cavalry 
	   model = 7
      } 
    } 
   # navalunit = {  
   # id = {  type = 29500 id = 9  } 
   # name = "Armada de Mexico" 
   # location = 1970 
   # base = 1970 
   # Division = {   
   # id = {  type = 29500 id = 10  }  
   # name = "1a Flotilla de Destructores"  
   # type = destroyer  
   # model = 3 
   #  } 
   #  } 
   airunit = 
   {  id       = {  type = 29500 id = 11  } 
     name     = "Fuerza Aérea Mexicana" 
     location = 1970 
     base     = 1970 
     Division = 
     {  id       = {  type = 29500 id = 12  } 
       name     = "1a Grupo Aéreo de Caza" 
       type     = interceptor 
       model    = 4
       strength = 50 
      } 
    } 
  } 
 
