country = {
    tag = U69
    ai = "U69_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 9
        freedom = 8
        free_market = 3
        professional_army = 4
        defense_lobby = 9
        interventionism = 8
    }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	capital = 1977

	manpower = 185

    ownedprovinces =      {
		1979 1977 1976 1978 1975 1967 1980
	}
    controlledprovinces = {
		1979 1977 1976 1978 1975 1967 1980
	}
    nationalprovinces =   {
		1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982
	}

diplomacy = {
  relation = {  tag = USA value = -100 }
  relation = {  tag = MEX value = -200 }  
}

techapps = {
		1010 1020 1160 # Infantry
		13060 # Cavalry
		3010 3110 # Naval
		1910 # Aircraft
		5800 #Construction
		5310 #Census tabulating machine
		5600 # medicine up to 1910
		5700 # Agriculture up to 1900
		5810 # Finance up to 1902
		6500 6510 6530 # Land Doctrine
		8010 8050 # Naval Doctrine
		27480 # Air Doctrine
		}
	
	transports = 10

landunit = { 
        id = { type = 24000 id = 1 } 
        name = "Emiliano Zapata" 
        leader = 61001 # Zapata 
        location = 1980
        division = { 
            	id = { type = 24000 id = 2 } 
            	name = "Emiliano Zapata" 
            	strength = 100 
            	type = infantry
		model = 0 
		experience = 20
        	} 
   	} 
landunit = { 
        id = { type = 24000 id = 3 } 
        name = "Venustiano Carranza" 
        leader = 61002 # Carranza 
        location = 1978
        division = { 
            	id = { type = 24000 id = 4 } 
            	name = "Venustiano Carranza" 
            	strength = 100 
            	type = infantry
		model = 0 
	experience = 10
        	} 
    	} 
landunit = { 
        id = { type = 24000 id = 5 } 
        name = "Francisco 'Pancho' Villa" 
        leader = 61003 # Villa 
        location = 1975
        division = { 
            	id = { type = 24000 id = 6 } 
            	name = "Francisco 'Pancho' Villa" 
            	strength = 100 
            	type = infantry
		model = 0 
	experience = 15
        	} 
    	} 
landunit = { 
        id = { type = 24000 id = 7 } 
        name = "Alvaro Obregón" 
        leader = 61004 # Obregón 
        location = 1967
        division = { 
            	id = { type = 24000 id = 8 } 
            	name = "Alvaro Obregón" 
            	strength = 100 
            	type = infantry 
		model = 0
	experience = 5
        	} 
    	} 
landunit = { 
        id = { type = 24000 id = 9 } 
        name = "Pablo Gonzáles" 
        leader = 61005 # Gonzáles 
        location = 1977
        division = { 
            	id = { type = 24000 id = 10 } 
            	name = "Pablo Gonzáles" 
            	strength = 100 
            	type = infantry
		model = 0 
	experience = 5
        	} 
    	} 

}
