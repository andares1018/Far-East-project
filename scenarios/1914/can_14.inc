 
 ############################## 
 # Country definition for CAN # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = CAN 
	puppet = ENG
	ai             = "CAN_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 2460
	metal                  = 1230
	rare_materials         = 615
	oil          = 500 
	supplies        = 500 
	money         = 20 
	manpower        = 13 
	capital        = 2108
	flag_ext = _14 
	transports       = 110 
	escorts        = 1 
  diplomacy = 
  {  relation = {  tag = AST value = 200  }
   relation = {  tag = BEL value = 150  } 
   relation = {  tag = BHU value = 200  } 
   relation = {  tag = ENG value = 200  } 
   relation = {  tag = FRA value = 150  } 
   relation = {  tag = HOL value = 80  } 
   relation = {  tag = ITA value = 1  } 
   relation = {  tag = NEP value = 200  } 
   relation = {  tag = NZL value = 200  }
   relation = {  tag = OMN value = 150  } 
   relation = {  tag = SAF value = 200  } 
   relation = {  tag = USA value = 150  } 
   relation = {  tag = YEM value = 150  } 
   relation = {  tag = U08 value = -10  } 
   } 
  SpyInfo        = {  country = "CAN" NumberOfSpies = 6  } 
 nationalprovinces   = { 2089 2092 2090 2093 2095 2103 2104 2105 2102 2099 2091 2096 2097 2098 2094 2100 2101 2106 2107 2115 2108 2109 
			 2129 2113 2114 2148 2149 2112 2127 2130 2111 2116 2123 2122 2121 2120 2125 2124 2117 2118 2119 2128 2135 2136 2137 2138 2132 2131 2134 2126 2133 }
 ownedprovinces     = { 2090 2089 2092 2105 2102 2099 2093 2091 2095 2094 2096  2103 2104 2101 2100  2097 2098 2107 2115 2106 2110 2129 2113 2114 2148 2149 2112 2127 2130 
              2108 2111 2109  2119  2117 2116 2123 2122 2121 2120 2125 2124 2128 2132 2131 2134 2126 2133 2118 }
 controlledprovinces  = { 2090 2089 2092 2105 2102 2099 2093 2091 2095 2094 2096  2103 2104 2101 2100  2097 2098  2107 2115  2106 2110 2129 2113 2114 2148 2149 2112 2127 2130 
               2108 2111 2109 2119  2117 2116 2123 2122 2121 2120 2125 2124 2128 2132 2131 2134 2126 2133 2118 
             }
  # Commonwealth Tech '14 
  # UK 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Infantry Division  
	1010  1020 1030 
	#Basic Cavalry Division 
	13060 13070 
	#Great War Hospital System 
	14000
	#Naval Infantry

	#Engineers
	1830
	#Great War Tank 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600
	#Improved Destroyer 
	3010 3020 
	#Early Light Cruiser 
	3110
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

	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - rest
	6500 6510 6530 

	#Land Doctrines

	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900
	#Air Doctrines - ww1 techs
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic = 7
   political_left = 4
   free_market    = 10 
   freedom      = 8 
   professional_army = 2 
   defense_lobby     = 2 
   interventionism  = 2 
   } 
   
   headofstate            = {  type = 9 id = 220165  } # Prince Arthur
   headofgovernment       = {  type = 9 id = 220160  } # Robert Borden
   foreignminister       = {  type = 9 id = 220181  } # Louis Coderre 
   armamentminister       = {  type = 9 id = 220172  } # William White
   ministerofsecurity     = {  type = 9 id = 220179  } # William James Roche
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 220180  } # Willoughby Gwatkin
   chiefofarmy            = {  type = 9 id = 220141  } # Willoughby Gwatkin
   chiefofnavy            = {  type = 9 id = 220145  } # Charles Kingsmill
   #chiefofair             = {  type = 9 id = ###  } # formed 9/18
  
  landunit = 
  {  id    = {  type = 20000 id = 1  } 
   name   = "Canadian Army" 
   location = 2108 
   Division = 
   {  id    = {  type = 20000 id = 2  } 
    name   = "Permanent Force" 
    strength = 20 
    type   = militia
    model  = 1 
    experience = 0
    } 
   }
  landunit = 
  {  id    = {  type = 20000 id = 3  } 
   name   = "Canadian Expeditionary Force" 
   location = 2108 
   Division = 
   {  id    = {  type = 20000 id = 4  } 
    name   = "1st Canadian Infantry Div." 
    strength = 5
    type   = infantry 
    model  = 2 
    experience = 0
    } 
   }
   
	navalunit = { 
		id = { type = 20000 id = 500 } 
		location = 2132 
		base = 2132 
		name = "Canadian Transport Fleet" 
		division = { 
			id = { type = 20000 id = 501 } 
			name = "1st Canadian Transport Squadron" 
			type = transport 
			model = 0
		} 
		division = { 
			id = { type = 20000 id = 502 } 
			name = "2nd Canadian Transport Squadron" 
			type = transport 
			model = 0
		} 
	} 
	
	navalunit = {
		id = { type = 20000 id = 7 } 
		name = "Royal Canadian Navy" 
		location = 2132 
		base = 2132 
		division = { 
			id = { type = 20000 id = 721 } 
			name = "HMCS Rainbow" 
			type = light_cruiser
			model = 0 
		}
		division = { 
			id = { type = 20000 id = 720 } 
			name = "HMCS Niobe" 
			type = light_cruiser
			model = 0 
		}
		division = {
			id = { type = 20000 id = 8  }
			name = "Destroyer Flotilla 1" 
			strength = 100 
			type = destroyer 
			model  = 0 
		} 
	} 
} 
 
