 
 ############################## 
 # Country definition for COL # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = COL 
	ai             = "COL_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 660
	metal                  = 330
	rare_materials         = 165
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 4 
	transports       = 100 
	capital        = 1991 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
	democratic = 5
	political_left = 4
	free_market = 7
	freedom = 5
	professional_army = 2 
	defense_lobby  = 5 
	interventionism = 3
   } 
   headofstate            = {  type = 9 id = 175180 } # José Vicente Concha
  
  nationalprovinces   = {  1990 1991 1987 1986 1994 2009 1985  1756 } 
  ownedprovinces     = {  1756 1985 1986 1987 1990 1991 1994 2009 } 
  controlledprovinces  = {  1756 1985 1986 1987 1990 1991 1994 2009 } 
  claimedprovinces = { 2077 2078 889 } 
  
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

	#Early Static Anti-Air Artillery

	#Basic Anti-Air Artillery Brigade

	#Modern Agriculture
	5700
	#Improved Construction Engineering

	#Basic Oil Refining

	#Naval Infantry

	#Engineers

	#Great War Destroyer 
	3010 
	#ASW 18

	#Troopships
	3810
	#Medicine
	5600
	#Air Doctrines - ww1 techs
	#Landdoctrine ww1 - rest
	6500 6510  
	#Naval Doctrines
	8050
}
  diplomacy = 
  {  relation = {  tag = ARG value = 10  } 
   relation = {  tag = BOL value = 1  } 
   relation = {  tag = BRA value = 10  } 
   relation = {  tag = CHL value = 15  } 
   relation = {  tag = ECU value = 20  } 
   relation = {  tag = U08 value = 0  } 
   relation = {  tag = PAN value = 50  } 
   relation = {  tag = PAR value = 10  } 
   relation = {  tag = PRU value = -35  } 
   relation = {  tag = URU value = 10  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = VEN value = 20  } 
   } 
  SpyInfo        = {  country = "COL" NumberOfSpies = 3  } 
  landunit = 
  {  id    = {  type = 23000 id = 40  } 
   name   = "1a División de Infanteria" 
   location = 1991 
   Division = 
   {  id    = {  type = 23000 id = 4000  } 
    name   = "1a División de Infanteria" 
    strength = 20
    type   = infantry 
    model  = 0
	experience = 0
     } 
   } 
  landunit = 
  {  id    = {  type = 23000 id = 4001  } 
   name   = "2a División de Infanteria" 
   location = 1986 
   Division = 
   {  id    = {  type = 23000 id = 4006  } 
    name   = "2a División de Infanteria" 
    strength = 15
    type   = infantry 
    model  = 0
	experience = 0
     } 
   } 
  landunit = 
  {  id    = {  type = 23000 id = 4007  } 
   name   = "3a División de Infanteria" 
   location = 1985 
   Division = 
   {  id    = {  type = 23000 id = 4008  } 
    name   = "3a División de Infanteria" 
    strength = 15
    type   = infantry 
    model  = 0
	experience = 0
     } 
   } 

  navalunit = 
  {  id    = {  type = 23000 id = 4002  } 
   name   = "Armada de Colombia" 
   location = 1990 
   base   = 1990 
   division = { id = { type = 23000 id = 4004 } name = "Almirante Lezo" type = light_cruiser model = 0 } 

   Division = 
   {  id  = {  type = 23000 id = 4003  } 
    name = "1a Flotilla de Torpedillos" 
    type = destroyer 
    model = 0 
    } 
   } 
  } 
 