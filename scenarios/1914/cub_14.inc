 
 ############################## 
 # Country definition for CUB # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = CUB
	ai             = "CUB_1914.ai" 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	puppet                 = USA
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 3  
	transports       = 100 
	capital        = 1776 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 4 
   free_market    = 8 
   freedom      = 8 
   professional_army = 3
   defense_lobby     = 4 
   interventionism  = 3 
   }
  
  nationalprovinces   = {  1775 1776 1777 1778 1779  } 
  ownedprovinces     = {  1775 1776 1777 1779  } 
  controlledprovinces  = {  1775 1776 1777 1779  } 
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

	#Naval Infantry

	#Engineers
	1830
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs

	#Troopships
	3810
 } 
  diplomacy = 
  {  relation = {  tag = DOM value = 50  } 
   relation = {  tag = ENG value = 35  } 
   relation = {  tag = HAI value = 30  } 
   relation = {  tag = SPA value = -50  } 
   relation = {  tag = MEX value = 10  } 
   relation = {  tag = U69 value = 5  }
   relation = {  tag = PAN value = 25  } 
   relation = {  tag = VEN value = 25  } 
   relation = {  tag = BRA value = 50  } 
   relation = {  tag = COL value = 25  } 
   relation = {  tag = U08 value = 25  } 
   } 
  SpyInfo        = {  country = "CUB" NumberOfSpies = 2  } 
  
  landunit = 
  {  id    = {  type = 26000 id = 40  } 
   name   = "Ejercito de Cuba" 
   location = 1776 
   Division = 
   {  id    = {  type = 26000 id = 4000  } 
    name   = "Ejercito de Cuba" 
    strength = 65 
    type   = infantry 
    model  = 1 
    extra  = cavalry_brigade
	brigade_model = 1
	experience = 0
    } 
   } 
  } 
 