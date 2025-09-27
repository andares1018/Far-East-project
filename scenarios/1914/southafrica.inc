 
 ############################## 
 # Country definition for SAF # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = SAF 
	puppet = ENG
	flag_ext = _14 
	ai             = "SAF_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 660
	metal                  = 330
	rare_materials         = 165
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 4
	transports       = 100 
	capital        = 873

  diplomacy = 
  {  relation = {  tag = AST value = 200  } # was access = yes 
   relation = {  tag = BEL value = 35  } 
   relation = {  tag = BHU value = 200  } 
   relation = {  tag = CAN value = 200  } # was access = yes 
   relation = {  tag = ENG value = 200  } # was access = yes 
   relation = {  tag = FRA value = 150  } 
   relation = {  tag = U08 value = 1  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = NEP value = 200  } 
   relation = {  tag = NZL value = 200  } # was access = yes 
   relation = {  tag = OMN value = 150  } 
   relation = {  tag = POR value = 125  } 
   relation = {  tag = USA value = 125  } 
   relation = {  tag = YEM value = 150  } 
   } 
  SpyInfo        = {  country = "SAF" NumberOfSpies = 3  } 
  nationalprovinces   = {  872 873 875 876 878 879 880 881   } 
  ownedprovinces     = {  872 873 875 876 878 879 880 881   } 
  controlledprovinces  = {  872 873 875 876 878 879 880 881   } 
  claimedprovinces = { 882 883 884 885 886 }
  # Commonwealth Tech '14 
  # UK 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Early Bomber 

	#Basic Armoured Car  

	#Naval Infantry

	#Engineers
	1830 
	#Great War Tank 

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division  
	1010  1020 1030 
	#Basic Cavalry Division 
	13060 13070 
	#Mechanized Agriculture 
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Air Doctrines 
	9010

	#Naval Doctrines 
	8010
	#Great War Hospital System 
	14000
	#Interbellum 1930 Supply 
	1910 
	#Great War Destroyer 
	3010 3020
	# Census Tabulating Machine 
	#Medicine
	5600
	#ASW 18

	#Troopships
	3810
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 7 
   political_left  = 5 
   freedom      = 7 
   free_market    = 8 
   professional_army = 3
   defense_lobby     = 2 
   interventionism  = 4 
   }
   
   headofstate            = {  type = 9 id = 425111 } # Herbert John Gladstone
   headofgovernment       = {  type = 9 id = 425105  } # Louis Botha
   #foreignminister        = {  type = 9 id = ### } # est. 1927
   armamentminister       = {  type = 9 id = 425115 } # Jan Smuts
   #ministerofsecurity     = {  type = 9 id = ###  } # ministry of inferior est. 2/16
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 425097  } # Christiaan Beyers
   #chiefofarmy            = {  type = 9 id = ###  } # Christiaan Beyers
   #chiefofnavy            = {  type = 9 id = 220009  } # est. 1922
   #chiefofair             = {  type = 9 id = 220010  } # ?
   
 landunit = { 
        id = { type = 27111 id = 43 } 
        name = "Union Defence Forces" 
        location = 880 
        division = { 
            	id = { type = 27111 id = 44 } 
            	name = "1st-5th S.A. Mounted Rifles" 
            	strength = 100 
            	type = cavalry 
		model = 2
		experience = 0
        	} 
    	} 

landunit = { 
        id = { type = 27111 id = 45 } 
        name = "Active Citizen Force"
        location = 876 
        division = { 
            	id = { type = 27111 id = 46 } 
            	name = "1st-20th A.C.F. Mounted Rifles" 
            	strength = 30
            	type = cavalry 
		model = 1
		experience = 0
       		} 
        division = { 
            	id = { type = 27111 id = 47 } 
            	name = "1st-14th A.C.F. Dismntd. Rifles" 
            	strength = 30
            	type = infantry 
		model = 1
		experience = 0
        	} 
        division = { 
           	id = { type = 27111 id = 48 } 
           	name = "1st-12th A.C.F. Infantry" 
           	strength = 50
            	type = infantry 
		model = 1
		experience = 0
        	} 
    	} 
}
 