 
 ############################## 
 # Country definition for U64 # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U64
	flag_ext 	= _KMT
	ai = "U64.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes} }
	dissent = 10
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 20 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1247
	manpower               = 173 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 1 
    } 
 free                   = { ic = 4 }
   nationalprovinces      = { 1240 1246 1247 1241 1243 1244 1242 1245 1236 1235 1216 1237 1323 } 
   ownedprovinces         = { 1246 1241 1243 1244 1242 1247 }
   controlledprovinces    = { 1246 1241 1243 1244 1242 1247 }
	#North China

 	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Mountain
	1230

	# Cavalry
	1350 1360

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

	# Artillery (from GER/SOV)
	2920 2930

	#Manpower Focus
	6570
	
	# Naval Doctrines
	8010 8020 8050 8060 8070 8080
	
	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720
	#Early Battleship
	3410
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760
}

   diplomacy = 
   {  relation = {  tag = CHI value = 100 access = yes  } 
     relation = {  tag = CGX value = 200 } 
     relation = {  tag = CXB value = 200 } 
     relation = {  tag = CSX value = 100 access = yes } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 200 access = yes } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
     relation = {  tag = CHC value = -75  } 
    } 
   SpyInfo                = {  country = "U64" NumberOfSpies = 3  } 
   
   headofstate            = {  type = 9 id = 2500400 } 
   headofgovernment       = {  type = 9 id = 2500401 } 
   foreignminister        = {  type = 9 id = 2500406 } 
   armamentminister       = {  type = 9 id = 2500408 } 
   ministerofsecurity     = {  type = 9 id = 2500421 } 
   ministerofintelligence = {  type = 9 id = 2500422 } 
   chiefofstaff           = {  type = 9 id = 2500430 } 
   chiefofarmy            = {  type = 9 id = 2500403 } 
   chiefofair             = {  type = 9 id = 2500403 }


	##############################################
	# 29th Army (Hebei/Hebei Autonomous Council) #
	##############################################
    landunit = 
   {  location = 1247 # Beijing
     name     = "29th Army" 
     id       = {  type = 22000 id = 17  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 18  } 
       name       = "37th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 19 } 
       name       = "38th Division" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 20  } 
       name       = "132nd Division" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 21  } 
       name       = "143rd Division" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 22  } 
       name       = "9th Cavalry Division" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 23  } 
       name       = "39th Independent Brigade" 
       type       = infantry
	   strength  = 100
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 24  } 
       name       = "13th Independent Cavalry Brigade" 
       type       = cavalry
	   strength  = 80
       model     = 6
      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 25  } 
       name       = "29th Army Special Brigade" 
       type       = infantry
	   strength  = 100
       model     = 7
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 26  } 
       name       = "29th Army HQ" 
       type       = hq
	   strength  = 100
       model     = 1
      }
    }
	landunit = 
   {  location = 1247 # Beijing
     name     = "Hebei Provincial Security Group" 
     id       = {  type = 22000 id = 27  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 28  } 
       name       = "North Hebei Security Group" 
       type       = infantry
	   strength  = 25
       model     = 6
      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 29  } 
       name       = "South Hebei Security Group" 
       type       = infantry
	   strength  = 25
       model     = 6
      }
    }
}