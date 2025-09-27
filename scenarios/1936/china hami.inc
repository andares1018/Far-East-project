 
 ############################## 
 # Country definition for UPS # 
 ############################## 
  
 country = 
 {  tag                    = UPS
	regular_id             = CHI 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes RES = yes} }
	dissent = 10
	extra_tc               = 4 
	energy                 = 20
	metal                  = 20
	rare_materials         = 20
	oil                    = 0
	supplies               = 5000 
	money                  = 5
	capital                = 1277
	manpower               = 20
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4
     freedom           = 3 
     free_market       = 3 
     professional_army = 6
     defense_lobby     = 5 
     interventionism   = 5 
    } 
   nationalprovinces      = {  1273 1274 1275 1276 1277 1278 1279 1280 1281 1282  } 
   ownedprovinces         = {  1277 1274 } 
   controlledprovinces    = {  1277 1274 } 
# Hami
 techapps = { 
	
	# Construction Engineering
	5800

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 
	# Cavalry Division  
	13060 13070 13080 1310
	# Supply 
	1910 1920 1930

	# Field Artillery 
	2290

	# Hospital System
	14000
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670

	} 

blueprints = {
	# Medicine (most were still imported)
	5600

	# Artillery
	2300
	
	# Infantry
	1050 1060
	
	# Mountain
	1220
}
  inventions = {  3000027 }
   diplomacy = 
   {

    } 
   SpyInfo                = {  country = "UPS" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 1408002  } 
   headofgovernment       = {  type = 9 id = 1408005  } 
   foreignminister        = {  type = 9 id = 1408007  } 
   armamentminister       = {  type = 9 id = 1408009  } 
   ministerofsecurity     = {  type = 9 id = 1408011  } 
   ministerofintelligence = {  type = 9 id = 1408012  } 
   chiefofstaff           = {  type = 9 id = 1408014  } 
   chiefofarmy            = {  type = 9 id = 1408017  } 

  landunit = 
   {  location = 1280
     name     = "Ili Garrison" 
     id       = {  type = 25600 id = 16  } 
     Division = 
     {  id   = {  type = 25600 id = 17 } 
       name = "Ili Garrison" 
       type = militia 
	   strength = 30
	   model    = 3
      } 
    }
  landunit = 
   {  location = 1277
     name     = "NRA 36th Division" 
     id       = {  type = 25600 id = 18  } 
     Division = 
     {  id   = {  type = 25600 id = 19 } 
       name = "NRA 36th Division" 
       type = infantry
	   strength = 100
	   model    = 7
      } 
    }

	landunit = 
   {
     location = 1277 #Qumul
     name     = "Hami Garrison Command" 
     id       = {  type = 25600 id = 30 } 
     Division = 
     {  id   = {  type = 25600 id = 31  } 
       name = "Hami Garrison" 
       type = garrison 
	   strength = 4
	   model    = 3
      } 
    }
}
