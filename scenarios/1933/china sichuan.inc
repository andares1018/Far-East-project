 
 ############################## 
 # Country definition for UC4 # 
 ############################## 
  
 country = 
 {  tag                    = U66
	flag_ext 	= _KMT
	ai = "U66.ai"
	regular_id             =  CHI 
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
	capital                = 1299 
	manpower               = 150 #civil war 
	dissent                = 20 #civil war 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 2 
     free_market       = 4 
     professional_army = 2 
     defense_lobby     = 6 
     interventionism   = 2 
    } 
   nationalprovinces      = {  1299 1298 1302 1301 1297 1296 1291 1292 1293 1294 } 
   ownedprovinces         = {  1299 1298 1302 1297 1301 } 
   controlledprovinces    = {  1299 1298 1302 1297 1301 } 
  free                   = { ic = 4 }
	#Szechuan 
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
     relation = {  tag = CYN value = 50  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "U66" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 2500500 } 
   headofgovernment       = {  type = 9 id = 2500501 } 
   foreignminister        = {  type = 9 id = 2500506 } 
   armamentminister       = {  type = 9 id = 2500510 } 
   ministerofsecurity     = {  type = 9 id = 2500512 } 
   ministerofintelligence = {  type = 9 id = 2500515 } 
   chiefofstaff           = {  type = 9 id = 2500514 } 
   chiefofarmy            = {  type = 9 id = 2500502 } 
   chiefofnavy            = {  type = 9 id = 2500520 } 
   chiefofair             = {  type = 9 id = 2500521 } 

	######################
	# Sichaun Task Force #
	######################

	landunit = 
   {  location = 1297 # 
     name     = "7th Route Army" 
     id       = {  type = 22000 id = 78 } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 79 } 
       name       = "145th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 80 } 
       name       = "161st Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 81 } 
       name       = "164th Division" 
       type       = infantry
	   strength  = 100
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 82 } 
       name       = "11th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 83 } 
       name       = "13th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 84 } 
       name       = "16th Independent Brigade" 
       type       = infantry
	   strength  = 65
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 85 } 
       name       = "7th Route Army HQ" 
       type       = hq
	   strength  = 100
       model     = 2

      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "41st Corps" 
     id       = {  type = 22000 id = 86  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 87 } 
       name       = "122nd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 88 } 
       name       = "123rd Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 89 } 
       name       = "124th Division" 
       type       = infantry
	   strength  = 100
       model     = 5
	   extra1 = cavalry_brigade
	   brigade_model1 = 5

      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "45th Corps" 
     id       = {  type = 22050 id = 90  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 91 } 
       name       = "125th Division" 
       type       = infantry
	   strength  = 62
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 92 } 
       name       = "126th Division" 
       type       = infantry
	   strength  = 62
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 93 } 
       name       = "127th Division" 
       type       = infantry
	   strength  = 62
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 94 } 
       name       = "128th Division" 
       type       = infantry
	   strength  = 62
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 95 } 
       name       = "131st Division" 
       type       = infantry
	   strength  = 62
       model     = 5

      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "47th Corps" 
     id       = {  type = 22000 id = 96  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 97 } 
       name       = "104th Division" 
       type       = infantry
	   strength  = 60
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 98 } 
       name       = "Reinforcement Regiments" 
       type       = infantry
	   strength  = 60
       model     = 5

      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "14th Route Army" 
     id       = {  type = 22000 id = 99  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 100 } 
       name       = "14th Independent Brigade" 
       type       = infantry
	   strength  = 60
       model     = 5

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 101 } 
       name       = "14th Route Army HQ" 
       type       = hq
	   strength  = 60
       model     = 2

      }
    }
	landunit = 
   {  location = 1299 # Chongqing
     name     = "Sichuan Provincial Security Group" 
     id       = {  type = 22000 id = 102  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 103 } 
       name       = "1st 2nd 3rd 4th 5th 6th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 104 } 
       name       = "7th 8th 9th 10th 11th 12th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 105 } 
       name       = "13th 14th 15th 16th 17th 18th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4

      }
	  Division = 
     {  experience = 30 
       id         = {  type = 22050 id = 106 } 
       name       = "20th 21st 22nd 23rd 24th Militia Regiments" 
       type       = militia
	   strength  = 100
       model     = 4

      }
    }



	# Sichuan Air Force
	airunit = 
   {  location = 1299
     name     = "Sichuan Air Force" 
     base     = 1299
     id       = {  type = 22050 id = 191  } 
     Division = 
     {  id           = {  type = 22000 id = 192 } 
       name         = "33rd Squadron" 
       type         = multi_role 
       model        = 3
       strength     = 9
      } 
    }
  }  
 