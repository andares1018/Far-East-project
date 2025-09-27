 
 ############################## 
 # Country definition for NOR # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = NOR 
	ai             = "NOR_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	oil          = 500 
	supplies        = 500 
	money         = 10 
	manpower        = 3
	capital        = 483 
	transports       = 200 
	escorts        = 5 
  diplomacy = 
  {  relation = {  tag = BEL value = 100  } 
   relation = {  tag = DEN value = 150  } 
   relation = {  tag = ENG value = 90  } 
   relation = {  tag = HOL value = 100  } 
   relation = {  tag = LUX value = 100  } 
   relation = {  tag = SWE value = 150  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = U08 value = 100  } 
   relation = {  tag = RUS value = 50  } 
   } 
   
   headofstate            = {  type = 9 id = 65108  } # Håakon VII
   headofgovernment       = {  type = 9 id = 65131  } # Gunnar Knudsen
   foreignminister        = {  type = 9 id = 65098  } # Nils Claus Ihlen
   armamentminister       = {  type = 9 id = 65132 } # Christian Theodor Holtfodt
   ministerofsecurity     = {  type = 9 id = 65117  } # Lars Abrahamsen
   ministerofintelligence = {  type = 9 id = 65106  } # Trygve Frivold Graff-Vang
   chiefofstaff           = {  type = 9 id = 65097 } # Christian Theodor Holtfodt
   chiefofarmy            = {  type = 9 id = 65133  } # Einar Wilhelm Anton Martin Krohn
   chiefofnavy            = {  type = 9 id = 65135 } # Karl Friedrich Griffin Dawes   
   chiefofair             = {  type = 9 id = 65136  } # Einar Wilhelm Anton Martin Krohn
   
  SpyInfo        = {  country = "NOR" NumberOfSpies = 3  } 
  nationalprovinces   = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
  ownedprovinces     = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
  controlledprovinces  = {  483 484 485 486 487 488 489 490 491 492 493 494 495 496 497  } 
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
	techapps               = {
	#Early Fighter

	#Early Bomber

	#Basic Armoured Car

	#Early Tank

	#Great War Heavy Field Artillery
	2290
	#Early Static Anti-Air Artillery

	#Basic Anti-Air Artillery Brigade

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  1170 1180
	#Early Anti-Tank Artillery

	#Interbellum 1930 Supply

	#Mechanized Agriculture
	5700
	#Basic Machine Tools

	#Improved Construction Engineering

	#improved Oil Refining

	#Census Tabulating Machine

	#Faculty of Atomic Research
	#Medicine
	5600
	#Naval Infantry

	#Engineers
	1830
	#Improved Destroyer
	3010 
	#Basic Light Cruiser
	3110 3120 
	#Improved Heavy Cruiser
	3210
	#Early Battleship
	3410 
	#Early Battlecruiser

	#Great War Air Carrier

	#Improved Light carrier

	#Short Range Submarine
	3610
	#Great War Hospital System

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#CAG 34

	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - exp entente eng fra ita USA bel HOL jap
	6500 6510  
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110
	#Air Doctrines - ww1 techs
   } 

  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 9 
   political_left  = 6 
   freedom      = 7 
   free_market    = 8
   professional_army = 3
   defense_lobby     = 4 
   interventionism  = 2 
   }
   
  landunit = 
  {  location = 484
   name   = "1. Divisjon" 
   id    = {  type = 12600 id = 1  } 
   Division = 
   {  id    = {  type = 12600 id = 2  } 
    name   = "1. Infanteridivisjon" 
    type   = infantry
	model = 2
    strength = 10
    experience = 0
    } 
   } 
  landunit = 
  {  location = 489
   name   = "2. Divisjon" 
   id    = {  type = 12600 id = 3  } 
   Division = 
   {  id    = {  type = 12600 id = 4  } 
    name   = "2. Infanteridivisjon" 
    type   = infantry
	model = 2
    strength = 10
    experience = 0
    } 
   } 
  landunit = 
  {  location = 485
   name   = "3. Divisjon" 
   id    = {  type = 12600 id = 5  } 
   Division = 
   {  id    = {  type = 12600 id = 6  } 
    name   = "3. Infanteridivisjon" 
    type   = infantry
	model = 1
    strength = 5
    experience = 0
    } 
   } 
  landunit = 
  {  location = 488
   name   = "4. Divisjon" 
   id    = {  type = 12600 id = 7  } 
   Division = 
   {  id    = {  type = 12600 id = 8  } 
    name   = "4. Infanteridivisjon" 
    type   = infantry
	model = 1
    strength = 5
    experience = 0
    } 
   } 
  landunit = 
  {  location = 493
   name   = "5. Divisjon" 
   id    = {  type = 12600 id = 9  } 
   Division = 
   {  id    = {  type = 12600 id = 10  } 
    name   = "5. Infanteridivisjon" 
    type   = infantry
	model = 2
    strength = 10
    experience = 0
    } 
   } 
  landunit = 
  {  location = 497
   name   = "6. Divisjon" 
   id    = {  type = 12600 id = 11  } 
   Division = 
   {  id    = {  type = 12600 id = 12  } 
    name   = "6. Infanteridivisjon" 
    type   = infantry
	model = 1
    strength = 5
    experience = 0
    } 
   } 
   
	navalunit = {
		location = 491 
		base = 491 
		name = "1. Kystvaktdistrikt" 
		id  = { type = 12600 id = 20 } 
		division = {
			id  = { type = 12600 id = 21 }
			name = "1. Undervannsbåteskadre" 
			type = submarine 
			model = 0 
		}
		division = {
			id = { type = 12600 id = 22 } 
			name = "2. Undervannsbåteskadre" 
			type = submarine 
			model = 0 
		} 
	} 
	
	navalunit = {
		location = 495 
		base = 495 
		name = "3. Kystvaktdistrikt" 
		id  = { type = 12600 id = 25 }
		division = {
			id = { type = 12600 id = 26 }
			name = "KNM Norge" 
			type = heavy_cruiser 
			model = 1
		} 
		division = {
			id = { type = 12600 id = 30 }
			name = "KNM Eidsvold" 
			type = heavy_cruiser 
			model = 1
		}
		division = {
			id = { type = 12600 id = 31 }
			name = "KNM Harald Haarfagre"
			type = heavy_cruiser
			model = 1
		}
		division = {
			id = { type = 12600 id = 32 }
			name = "KNM Tordenskjold"
			type = heavy_cruiser
			model = 1
		}
	} 
}  
