country = {
    tag = U57
    ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 5
        freedom = 8
        free_market = 6
        professional_army = 4
        defense_lobby = 9
        interventionism = 8
    }
	
   headofstate            = {  type = 9 id = 1100001  } # Venustiano Carranza 
   headofgovernment       = {  type = 9 id = 1100002  } # Venustiano Carranza 
   foreignminister        = {  type = 9 id = 1100004  } # Isidro Fabela Alfaro
   armamentminister       = {  type = 9 id = 1100013  } # Pastor Rouaix
   ministerofsecurity     = {  type = 9 id = 1100016  } # Rafael Zubarán Capmany
   #ministerofintelligence = 
   chiefofstaff           = {  type = 9 id = 1100020  } # Jacinto Blas Treviño 
   chiefofarmy            = {  type = 9 id = 1100027  } # Jacinto Blas Treviño
   chiefofnavy            = {  type = 9 id = 1100034  } # Jacinto Blas Treviño
   chiefofair             = {  type = 9 id = 1100040  } # Alberto Salinas Carranza

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	capital = 1976

	manpower = 185

    ownedprovinces =      {
		1979 1976 1975 1967 1980
	}
    controlledprovinces = {
		1979 1976 1975 1967 1980
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
	
	transports = 30

	
landunit = { 
        id = { type = 24004 id = 1 } 
        name = "El Cuerpo de Ejército del Noroeste" 
        #leader = XXXXX # Obregon
        location = 1980
        division = { 
            id = { type = 24004 id = 2 } 
            #name =
            type = infantry
			model = 1 
			experience = 20
			strength = 110
        	}
		division = { 
			id = { type = 24004 id = 3 } 
			#name = 
			type = infantry
			model = 1 
			experience = 20
			strength = 110
        	} 
		division = { 
			id = { type = 24004 id = 4 } 
			#name = 
			type = infantry
			model = 2 
			experience = 20
			strength = 110
        	} 		
   	} 	
	
landunit = { 
        id = { type = 24004 id = 5 } 
        name = "El Cuerpo de Ejército del Noreste" 
        #leader = XXXXX # Garza
        location = 1976
        division = { 
            id = { type = 24004 id = 6 } 
            #name =
            type = infantry
			model = 1 
			experience = 20
			strength = 110
        	}
   	} 		
	
}
