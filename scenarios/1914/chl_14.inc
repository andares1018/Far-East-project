 
 ############################## 
 # Country definition for CHL # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = CHL 
	ai             = "CHL_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# Resource Reserves 
	energy                 = 720
	metal                  = 360
	rare_materials         = 180
	oil          = 500 
	supplies        = 500 
	money         = 20 
	transports       = 100 
	capital        = 2023 
	manpower        = 10
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 5 
   free_market    = 8 
   freedom      = 7 
   professional_army = 4
   defense_lobby     = 5 
   interventionism  = 4
   }

   headofstate            = {  type = 9 id = 210140 } # Ramón Barros Luco
   headofgovernment       = {  type = 9 id = 210145 } # Ramón Barros Luco
   foreignminister        = {  type = 9 id = 210158 } # Alejandro Lira Lira
   armamentminister       = {  type = 9 id = 210194 } # Alfredo Barros Errázuriz 
   ministerofsecurity     = {  type = 9 id = 210243 } # Pedro Nicolás Montenegro
   ministerofintelligence = {  type = 9 id = 210270}  # Jorge Boonen Rivera
   chiefofstaff           = {  type = 9 id = 210273 } # Jorge Boonen Rivera
   chiefofarmy            = {  type = 9 id = 210278 } # Jorge Boonen Rivera
   chiefofnavy            = {  type = 9 id = 210283 } # Luis Alberto Goñi Simpson
   chiefofair             = {  type = 9 id = 210289  } # Pedro Pablo Dartnell
   
  nationalprovinces   = {  2022 2023 2024 2025 2030 2031 2032 2043 } 
  ownedprovinces     = {  2022 2023 2024 2025 2030 2031 2032 2043  } 
  controlledprovinces  = {  2022 2023 2024 2025 2030 2031 2032 2043  } 
  # ROTW Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
    techapps               = { 
	#Interwar Fighter  

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060   
	#Early Mountain Division
	1160   
	#Naval Infantry

	#Engineers
	1830 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Improved Destroyer 
	3010 3020 3030
	#Great War Battleship 
	3410   
	#Short Range Submarine 
	3610
	#Early Light Cruiser 
	3110 3120 
	#Early Heavy Cruiser 
	3210  
	#ASW 18

	#Troopships
	3810
	
	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Naval Doctrines 
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8900 8910
	#Air Doctrines - ww1 techs
	27480
}  
  diplomacy = 
  {  relation = {  tag = ARG value = -20  } 
   relation = {  tag = BOL value = -50  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = COL value = 15  } 
   relation = {  tag = ECU value = 20  } 
   relation = {  tag = U08 value = 50  } 
   relation = {  tag = U09 value = 50  } 
   relation = {  tag = SPA value = 50  } 
   relation = {  tag = ITA value = 30  } 
   relation = {  tag = JAP value = 20  } 
   relation = {  tag = PAR value = 35  } 
   relation = {  tag = PRU value = -25  } 
   relation = {  tag = URU value = 20  } 
   relation = {  tag = USA value = 100  } 
   relation = {  tag = VEN value = 20  } 
   } 
  SpyInfo        = {  country = "CHL" NumberOfSpies = 3  } 
  landunit = 
  {  id    = {  type = 12500 id = 1  } 
   name   = "Region militar I" 
   location = 2024 
   Division = 
   {  id    = {  type = 12500 id = 2  } 
    name   = "Ia División de Ejercito" 
    strength = 25
    type   = infantry 
    model  = 1
    extra  = cavalry_brigade
	brigade_model = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 12500 id = 3  } 
   name   = "Region militar II" 
   location = 2023 
   Division = 
   {  id    = {  type = 12500 id = 4  } 
    name   = "IIa División de Ejercito" 
    strength = 30
    type   = infantry 
    model  = 1
    extra  = cavalry_brigade
	brigade_model = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 12500 id = 5  } 
   name   = "Region militar III" 
   location = 2032 
   Division = 
   {  id    = {  type = 12500 id = 6  } 
    name   = "IIIa División de Ejercito" 
    strength = 25
    type   = infantry 
    model  = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 12500 id = 7  } 
   name   = "Region militar IV" 
   location = 2031 
   Division = 
   {  id    = {  type = 12500 id = 8  } 
    name   = "IVa División de Ejercito" 
    strength = 25
    type   = infantry 
    model  = 1
	experience = 0
    } 
   } 

   navalunit = { 
        id = { type = 12500 id = 500 } 
        name = "Chilean Fleet" 
        
        location = 2023 # Santiago
		base = 2023
		
        division = { id = { type = 12500 id = 501 } name = "Capitan Prat" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12500 id = 502 } name = "Esmeralda" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12500 id = 503 } name = "O'Higgins" type = heavy_cruiser model = 0 } 
        division = { id = { type = 12500 id = 504 } name = "Presidente Errazuriz" type = light_cruiser model = 0 } 
        division = { id = { type = 12500 id = 505 } name = "Blanco Encalada" type = light_cruiser model = 0 } 
        division = { id = { type = 12500 id = 506 } name = "Ministro Zenteno" type = light_cruiser model = 0 } 
        division = { id = { type = 12500 id = 507 } name = "Chacabuco" type = light_cruiser model = 0 } 
        division = { id = { type = 12500 id = 508 } name = "Flotilla des Destructores nro.1" type = destroyer model = 0 } 
        division = { id = { type = 12500 id = 509 } name = "Flotilla des Destructores nro.2" type = destroyer model = 0 } 
        division = { id = { type = 12500 id = 510 } name = "Flotilla des Destructores nro.3" type = destroyer model = 0 } 
   }  

  } 
 
