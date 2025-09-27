 
 ############################## 
 # Country definition for BRA # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = BRA 
	# Resource Reserves 
	energy                 = 2040
	metal                  = 1020
	ai             = "BRA_1914.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	rare_materials         = 510
	oil          = 500 
	supplies        = 500 
	money         = 20 
	manpower        = 27 
	transports       = 100 
	capital        = 2075 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 4 
   free_market    = 7 
   freedom      = 7 
   professional_army = 2 
   defense_lobby     = 6 
   interventionism  = 3 
   } 
   
   headofstate            = {  type = 9 id = 160140  } # Hermes Rodrigues da Fonseca
   headofgovernment       = {  type = 9 id = 160146  } # Venceslau Brás Pereira Gomes
   foreignminister        = {  type = 9 id = 160153  } # Lauro Müller
   armamentminister       = {  type = 9 id = 160162  } # Rivadávia da Cunha Correia
   ministerofsecurity     = {  type = 9 id = 160174  } # Uladislau Herculano de Freitas
   #ministerofintelligence = {  type = 9 id = 860039  } # ?
   chiefofstaff           = {  type = 9 id = 160187  } # Vespasiano Gonçalves d'Albuquerque e Silva
   chiefofarmy            = {  type = 9 id = 160198  } # Vespasiano Gonçalves d'Albuquerque e Silva
   chiefofnavy            = {  type = 9 id = 160203  } # Alexandrino Faria de Alencar
   chiefofair             = {  type = 9 id = 160212  } # Ricardo Kirk
   
  nationalprovinces   = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 
 2075 2074 2073 2072 2070 2006  } 
  ownedprovinces     = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
  controlledprovinces  = {  2001 2002 2003 2004 2005 2006 2057 2058 2059 2060 2061 2062 2065 2066 2067 2068 2069 2070 2071 2072 2073 2074 2075 2076  } 
  # Semi-Major Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Fighter  

	#Interwar Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Naval Infantry

	#Engineers
	1830
	#Basic Armoured Car  

	#Great War Tank 

	#Great War Heavy Field Artillery 

	#Early Static Anti-Air Artillery 
	#Basic Anti-Air Artillery Brigade 

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160  
	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Great War Destroyer 
	3010 3020
	#Early Light Cruiser 
	3110  
	#Early Heavy Cruiser 
	3210  
	#Great War Battleship 
	3410   
	#Short Range Submarine 
	3610 
	#ASW 18

	#Troopships
	3810
	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Air Doctrines - ww1 techs
	#Naval Doctronies
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8900 8910 8500
} 
  diplomacy = 
  {  relation = {  tag = ARG value = -10  } 
   relation = {  tag = BOL value = 10  } 
   relation = {  tag = CHL value = 10  } 
   relation = {  tag = COL value = 10  } 
   relation = {  tag = ECU value = 10  } 
   relation = {  tag = U08 value = -20  } 
   relation = {  tag = PAR value = 10  } 
   relation = {  tag = POR value = 100  } 
   relation = {  tag = PRU value = 10  }  
   relation = {  tag = URU value = 125  } 
   relation = {  tag = USA value = 100  } 
   relation = {  tag = VEN value = 10  } 
   relation = {  tag = ENG value = 30  } 
   } 
  SpyInfo        = {  country = "BRA" NumberOfSpies = 5  } 
landunit = { 
	id = { type = 18000 id = 1 } 
	name = "1a Região Militar" 
	location = 2075 
	division = { 
		id = { type = 18000 id = 2 } 
		name = "1a Brigada Mixta" 
		strength = 25
		type = infantry 
		model = 1
		experience = 0
	extra = cavalry_brigade
	brigade_model = 1
        	} 
    	} 
landunit = { 
	id = { type = 18000 id = 3 } 
	name = "2a Região Militar" 
	location = 2059 
	division = { 
		id = { type = 18000 id = 4 } 
		name = "2a Brigada Mixta" 
		strength = 25
		type = infantry 
		model = 1
		experience = 0
	extra = cavalry_brigade
	brigade_model = 1
        	} 
    	} 
landunit = { 
	id = { type = 18000 id = 5 } 
	name = "3a Região Militar" 
	location = 2058 
	division = { 
		id = { type = 18000 id = 6 } 
		name = "3a Brigada Mixta" 
		strength = 35
		type = infantry 
		model = 1
		experience = 0
	extra = cavalry_brigade
	brigade_model = 1
        	} 
    	} 
landunit = { 
	id = { type = 18000 id = 7 } 
	name = "4a Região Militar" 
	location = 2076 
	division = { 
		id = { type = 18000 id = 8 } 
		name = "4a Brigada Mixta" 
		strength = 25
		type = infantry 
		model = 1
		experience = 0
        	} 
    	} 
landunit = { 
	id = { type = 18000 id = 9 } 
	name = "5/6/7a Região Militar" 
	location = 2071 
	division = { 
		id = { type = 18000 id = 10 } 
		name = "5a Brigada Mixta" 
		strength = 25
		type = infantry 
		model = 1
		experience = 0
        	} 
    	} 




navalunit = { 
        id = { type = 18000 id = 500 } 
        name = "Marinha do Brasil" 
        location = 2075 # Rio de Janeiro
        base = 2075 # Rio de Janeiro

        division = { id = { type = 18000 id = 499 } name = "Rio de Janeiro" type = battleship model = 0	}
        division = { id = { type = 18000 id = 501 } name = "Minas Gerais" type = battleship model = 2 } 
        division = { id = { type = 18000 id = 502 } name = "Sao Paulo" type = battleship model = 2 } 
        division = { id = { type = 18000 id = 503 } name = "Marshal Deodoro" type = heavy_cruiser model = 1 } 
        division = { id = { type = 18000 id = 504 } name = "Marshal Floriano" type = heavy_cruiser model = 1 } 
        division = { id = { type = 18000 id = 505 } name = "Bahia" type = light_cruiser model = 1 } 
        division = { id = { type = 18000 id = 506 } name = "Rio Grande do Sul" type = light_cruiser model = 1 } 
        division = { id = { type = 18000 id = 507 } name = "Almirante Tamandare" type = light_cruiser model = 0 } 
        division = { id = { type = 18000 id = 508 } name = "Benjamin Constant" type = light_cruiser model = 0 } 
        division = { id = { type = 18000 id = 509 } name = "Republica" type = light_cruiser model = 0 } 
        division = { id = { type = 18000 id = 510 } name = "Almirante Barrozo" type = light_cruiser model = 0 } 
        division = { id = { type = 18000 id = 511 } name = "1a Flotilla" type = destroyer model = 1 } 
        division = { id = { type = 18000 id = 512 } name = "2a Flotilla" type = destroyer model = 2 } 
        division = { id = { type = 18000 id = 513 } name = "Flotilla do Transporte" type = transport model = 0 } 
	} 
  } 
 
