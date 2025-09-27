 
 ############################## 
 # Country definition for UC3 # 
 ############################## 
  
 country = 
 {  tag                    = U65
	flag_ext 	= _KMT
	regular_id             = CHI 
	ai = "U65.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 4 
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 100 
	supplies               = 6000 
	money                  = 50 
	capital                = 1293
	manpower               = 50 
	dissent                = 25 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
  free                   = { ic = 4 }
   nationalprovinces      = {  1293 1292 1291 1298 1297 1296 1299 1302 1294 1290 1295 } 
   ownedprovinces         = {  1293 1292 1296 1291 } 
   controlledprovinces    = {  1293 1292 1296 1291 } 
	#Yunnan
   techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Medicine
	5600 5610

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 4120
	# Strategic Bomber
	4800 4810
	# Naval Bomber
	4700 

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Infantry
	1070

	# Mountain
	1230

	# Cavalry
	1320 1330 1340 1350

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Supply
	1960

	# Tank
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

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
	
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760

}
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "U65" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 2500700 } 
   headofgovernment       = {  type = 9 id = 2500701 } 
   foreignminister        = {  type = 9 id = 2500706 } 
   armamentminister       = {  type = 9 id = 2500710 } 
   ministerofsecurity     = {  type = 9 id = 2500705 } 
   ministerofintelligence = {  type = 9 id = 2500711 } 
   chiefofstaff           = {  type = 9 id = 2500708 } 
   chiefofarmy            = {  type = 9 id = 2500702 } 

   # ###### 
   # CHINA 1936 OOB 
   # Type = 22100
   # ###### 
   # Xikang
   # http://forum.paradoxplaza.com/forum/showthread.php?687389-OOB-and-information-of-China-for-moders&p=15451250&viewfull=1#post15451250
	landunit = 
   {  location = 1292 # Ya'an
     name     = "24th Corps" 
     # leader =  
     id       = {  type = 22150 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 2  } 
       name       = "136th Division" 
       type     = militia 
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
      Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 3  } 
       name       = "137th Division" 
       type     = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 4  } 
       name       = "138th Division" 
       type       = militia
       strength   = 33
       model      = 3
	   extra1 = police
	   brigade_model1 = 1
      }
    }

	landunit = 
   {  location = 1292 # 
     name     = "21st Corps" 
     id       = {  type = 22150 id = 64  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 65 } 
       name       = "146th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	 Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 66 } 
       name       = "147th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 67 } 
       name       = "162nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 68 } 
       name       = "12th Independent Brigades" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 69 } 
       name       = "15th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
    }
	landunit = 
   {  location = 1292 # Chengdu
     name     = "23rd Corps" 
     id       = {  type = 22150 id = 70  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 71 } 
       name       = "144th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 72 } 
       name       = "148th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 73 } 
       name       = "17th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
    }
	landunit = 
   {  location = 1292 # Chengdu
     name     = "44th Corps" 
     id       = {  type = 22050 id = 74  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 75 } 
       name       = "149th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 76 } 
       name       = "150th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22150 id = 77 } 
       name       = "163rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
    }

  }  
 