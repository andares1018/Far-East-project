 
 ############################## 
 # Country definition for DEN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = DEN
	ai             = "DEN_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	manpower        = 5 
	capital        = 294 
	# Resource Reserves 
	energy                 = 660
	metal                  = 330
	rare_materials         = 165
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 100 
  diplomacy = 
  {  relation = {  tag = BEL value = 100  } 
   relation = {  tag = ENG value = 100  } 
   relation = {  tag = FRA value = 75  } 
   relation = {  tag = U08 value = 25  } 
   relation = {  tag = U09 value = 15  } 
   relation = {  tag = RUS value = 25  } 
   relation = {  tag = HOL value = 100  } 
   relation = {  tag = LUX value = 100  } 
   relation = {  tag = NOR value = 150  } 
   relation = {  tag = PER value = 50  } 
   relation = {  tag = SWE value = 100  } 
   relation = {  tag = USA value = 75  } 
   } 
  SpyInfo        = {  country = "DEN" NumberOfSpies = 3  } 
  nationalprovinces   = {  1 2 3 216 217 218 219 220 294 1783  } 
  ownedprovinces     = {  1 2 3 217 218 219 220 294 1783  } 
  controlledprovinces  = {  1 2 3 217 218 219 220 294 1783  } 
  claimedprovinces = { 150 }
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
  techapps               = { 
	#Early Fighter  

	#Interwar Bomber 

	#Great War Tank 

	#Great War Heavy Field Artillery 
	2290     
	#Early Static Anti-Air Artillery 
	2800 2450   
	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division
	1010  1020 1030
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division

	#Air Doctrines - ww1 techs

	#Naval Infantry

	#Engineers
	1830
	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Faculty of Atomic Research 

	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100
	#Great War Destroyer 
	3010 3020
	#Early Light Cruiser 
	3110 3120 
	#Early Heavy Cruiser 
	3210 
	#Short Range Submarine 
	3610 3620
	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#ASW 18
	#Medicine
	5600
	#Troopships
	3810
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 9 
   political_left  = 6 
   free_market    = 10 
   freedom      = 9 
   professional_army = 3
   defense_lobby     = 2
   interventionism  = 3 
   } 

   headofstate            = {  type = 9 id = 75134  } # Christian X
   headofgovernment       = {  type = 9 id = 75128  } # Carl Theodor Zahle
   foreignminister        = {  type = 9 id = 75117  } # Erik Scavenius
   armamentminister       = {  type = 9 id = 75159  } # Peter Munch
   ministerofsecurity     = {  type = 9 id = 75156  } # Ove Rode
   ministerofintelligence = {  type = 9 id = 75157  } # Valdemar Henrik Mensen
   chiefofstaff           = {  type = 9 id = 75160  } # Palle Berthelsen
   chiefofarmy            = {  type = 9 id = 75158  } # Christian X
   chiefofnavy            = {  type = 9 id = 75110  } # Otto Joachim Moltke Kofoed-Hansen
   chiefofair             = {  type = 9 id = 75161  } # Christian X
   
   
  landunit = 
   {  location = 294 
   name   = "Den Danske Hær" 
   id    = {  type = 27000 id = 40  } 
   Division = 
   {  id    = {  type = 27000 id = 41  } 
    name   = "1. Division" 
    type   = infantry 
    model  = 2
    strength = 30
	experience = 0
    } 
   Division = 
   {  id    = {  type = 27000 id = 43  } 
    name   = "2. Division" 
    type   = infantry 
    model  = 2
    strength = 20
	experience = 0
    }
   Division = 
   {  id    = {  type = 27000 id = 44  } 
    name   = "3. Division" 
    type   = infantry 
    model  = 2
    strength = 20
	experience = 0
    } 	 
   } 	


	
navalunit = { 
        id = { type = 27000 id = 500 } 
        name = "Søværnet" 
        location = 294 # København
        base = 294 # København
 
        division = { id = { type = 27000 id = 501 } name = "Peder Skram" type = heavy_cruiser model = 1 } 
        division = { id = { type = 27000 id = 502 } name = "Herluf Trolle" type = heavy_cruiser model = 1 } 
        division = { id = { type = 27000 id = 503 } name = "Olfert Fischer" type = heavy_cruiser model = 1 } 
        division = { id = { type = 27000 id = 504 } name = "Iver Hvitfeldt" type = heavy_cruiser model = 1 } 
        division = { id = { type = 27000 id = 505 } name = "Heimdal" type = light_cruiser model = 0 } 
        division = { id = { type = 27000 id = 506 } name = "Geiser" type = light_cruiser model = 0 } 
        division = { id = { type = 27000 id = 507 } name = "Hekla" type = light_cruiser model = 0 } 
        division = { id = { type = 27000 id = 508 } name = "Valkyrien" type = light_cruiser model = 0 } 
        division = { id = { type = 27000 id = 509 } name = "1:e Jagarflottiljen" type = destroyer model = 0 } 
        division = { id = { type = 27000 id = 510 } name = "2:e Jagarflottiljen" type = destroyer model = 0 } 
    	} 

navalunit = { 
        id = { type = 27000 id = 511 } 
        name = "Ubaatsflottiljen" 
        location = 294 # København
        base = 294 # København
 
        division = { id = { type = 27000 id = 512 } name = "1:e Ubaatsflottiljen" type = submarine model = 1 } 
    	} 
  } 
 
