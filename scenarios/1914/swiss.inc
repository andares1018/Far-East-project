 
 ############################## 
 # Country definition for SCH # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SCH 
	ai             = "SCH_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	capital        = 392 
	manpower        = 9
	# Resource Reserves 
	energy                 = 840
	metal                  = 420
	rare_materials         = 210
	oil          = 500 
	supplies        = 500 
	money         = 25 
	transports       = 100 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 2 
   freedom      = 7 
   free_market    = 9 
   professional_army = 3
   defense_lobby     = 8 
   interventionism  = 1 
   } 
   
   headofstate            = {  type = 9 id = 80137  } # Arthur Hoffmann
   headofgovernment       = {  type = 9 id = 80156  } # Hans Schatzmann
   foreignminister        = {  type = 9 id = 80128  } # Arthur Hoffmann 
   armamentminister       = {  type = 9 id = 80148  } # Giuseppe Motta 
   ministerofsecurity     = {  type = 9 id = 80157  } # Eduard Müller 
   ministerofintelligence = {  type = 9 id = 80158  } # Camille Decoppet
   chiefofstaff           = {  type = 9 id = 80159  } # Theodore Sprecher von Bernegg
   chiefofarmy            = {  type = 9 id = 80123  } # Ulrich Wille
   chiefofnavy            = {  type = 9 id = 80160  } # landlocked, ergo no navy Ulrich Wille
   chiefofair             = {  type = 9 id = 80118  } # Theodor Real 

   
  nationalprovinces   = {  389 390 391 392  } 
  ownedprovinces     = {  389 390 391 392  } 
  controlledprovinces  = {  389 390 391 392  } 
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Multirole fighter

	#Early Anti-Tank Artillery 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Great War Infantry Division  

	#Great War Cavalry Division  
	13060 13070 13080 1310
	#Interbellum 1930 Supply 
	1910 
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division

	#Early Mountain Division 
	1160  1170 1180 
	#Engineers
	1830
	#Air Doctrines - ww1 techs

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 
	#Medicine
	5600
	#Firepower Focus Doctrine 

	#Great War Tank 
	#Landdoctrine ww1 - rest
	6500 6510 # 6530   
} 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 1  } 
   relation = {  tag = U08 value = 50  } 
   relation = {  tag = U09 value = 50  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = USA value = 1  } 
   } 
  SpyInfo        = {  country = "SCH" NumberOfSpies = 5  } 
  # Superior Firepower 
  # #################### 
  # ###Swiss 36OOB#### 
  # #################### 
  landunit = 
  {  id    = {  type = 30600 id = 1  } 
   location = 391 
   name   = "1. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 2  } 
    name   = "1. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 3  } 
    name   = "1./2. Gebirgs-Brigade" 
    strength = 5
    type   = bergsjaeger
	model = 2
    extra  = cavalry_brigade
	brigade_model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 30600 id = 4  } 
   location = 391 
   name   = "2. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 5  } 
    name   = "2. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = cavalry_brigade
	brigade_model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 6  } 
    name   = "13./14. Infanterie-Brigade" 
    strength = 5
    type   = infantry
	model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 30600 id = 7  } 
   location = 392
   name   = "3. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 8  } 
    name   = "3. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 9  } 
    name   = "1./2. Landwehr-Brigade" 
    strength = 5
    type   = infantry
	model = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 30600 id = 10  } 
   location = 389 
   name   = "4. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 11  } 
    name   = "4. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = cavalry_brigade
	brigade_model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 12  } 
    name   = "3./4. Landwehr-Brigade" 
    strength = 5
    type   = infantry
	model = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 30600 id = 13  } 
   location = 389 
   name   = "5. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 14  } 
    name   = "5. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 15  } 
    name   = "3./4. Gebirgs-Brigade" 
    strength = 5
    type   = bergsjaeger
	model = 2
    extra  = cavalry_brigade
	brigade_model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 30600 id = 16  } 
   location = 389 
   name   = "6. Infanterie-Division" 
   Division = 
   {  id    = {  type = 30600 id = 17  } 
    name   = "6. Infanterie-Division" 
    strength = 5
    type   = infantry 
	model = 2
    extra  = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id    = {  type = 30600 id = 18  } 
    name   = "5./6. Landwehr-Brigade" 
    strength = 5
    type   = infantry
	model = 1
	experience = 0
    } 
   } 
  } 
 