 
 ############################## 
 # Country definition for NZL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = NZL 
	ai             = "NZL_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	puppet = ENG 
	# Resource Reserves 
	energy                 = 420
	metal                  = 210
	rare_materials         = 105
	oil          = 500 
	supplies        = 500 
	money         = 10 
	transports       = 200 
	escorts        = 15 
	capital        = 1721 
	manpower        = 1
  diplomacy = 
  {  relation = {  tag = AST value = 200  } # was access = yes 
   relation = {  tag = BEL value = 20  } 
   relation = {  tag = BHU value = 200  } 
   relation = {  tag = CAN value = 200  } # was access = yes 
   relation = {  tag = ENG value = 200  } # was access = yes 
   relation = {  tag = FRA value = 150  } 
   relation = {  tag = U08 value = 25  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = NEP value = 200  } 
   relation = {  tag = OMN value = 150  } 
   relation = {  tag = SAF value = 200  } # was access = yes 
   relation = {  tag = USA value = 125  } 
   relation = {  tag = YEM value = 150  } 
   } 
  SpyInfo        = {  country = "NZL" NumberOfSpies = 2  } 
  nationalprovinces   = {  1718 1719 1720 1721 1722 1723  } 
  ownedprovinces     = {  1718 1719 1720 1721 1722 1723 
 1742 1741  
 1748  } 
  controlledprovinces  = {  1718 1719 1720 1721 1722 1723 
 1742 1741  
 1748  } 
  # Commonwealth Tech '14 
  # UK 1914 techs 
  # ###################### 
  techapps               = { 
	#Early Infantry Division  
	1010  1020 1030
	#Basic Cavalry Division 
	13060 13070  
	#Interbellum 1930 Supply 
	1910 
	#Great War Hospital System 

	#Naval Infantry

	#Engineers
	1830
	#Great War Tank 

	#Great War Heavy Field Artillery 
	2290  
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Improved Destroyer 
	3010 3020 3030
	#Interwar Light Cruiser 
	3110 3120
	#Early Fighter  

	#Early Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Census Tabulating Machine 

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8900
	#Air Doctrines - ww1 techs

	#ASW 18

	#Troopships
	3810  
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 10 
   political_left  = 10 
   freedom      = 10 
   free_market    = 8 
   professional_army = 2
   defense_lobby     = 2 
   interventionism  = 6 
   }
   
   headofstate            = {  type = 9 id = 215107  } # Arthur Foljambe
   headofgovernment       = {  type = 9 id = 215128  } # William Massey
   #foreignminister        = {  type = 9 id = ### } # est. 1919
   #armamentminister       = {  type = 9 id = ###  } # James Allen
   ministerofsecurity     = {  type = 9 id = 215129  } # Alexander Herdman
   #ministerofintelligence = {  type = 9 id = ### } # ?
   #chiefofstaff           = {  type = 9 id = ###  } # Alexander Godley
   #chiefofarmy            = {  type = 9 id = ###  } # Alexander Godley
   chiefofnavy            = {  type = 9 id = 215102  } # Percival Hall-Thompson
   #chiefofair             = {  type = 9 id = ### } # ?

   
  landunit = 
  {  id    = {  type = 10600 id = 1  } 
   name   = "New Zealand Military Forces" 
   location = 1721 
   Division = 
   {  id    = {  type = 10600 id = 2  } 
    name   = "Permanent Force" 
    strength = 10
    type   = militia
	model = 1
	experience = 0
    } 
   } 
   
	navalunit = {
		id = {  type = 10600 id = 12  } 
		name = "HM New Zealand Navy" 
		location = 1721 
		base = 1721 
		division = {
			id = {  type = 10600 id = 14  }
			name = "HMS Philomel"
			type = light_cruiser
			model = 0
		}
		division = {
			id = {  type = 10600 id = 15  } 
			name = "1st Transport Flotilla" 
			type = transport 
			model = 0 
		} 
	} 
} 
 
