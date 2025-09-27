country = {
    tag = U59
    ai_settings =	{ flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }

	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 7
        freedom = 9
        free_market = 6
        professional_army = 5
        defense_lobby = 9
        interventionism = 4
    }

   headofstate            = {  type = 9 id = 1110001 }  # Emiliano Zapata
   headofgovernment       = {  type = 9 id = 1110002 } # Emiliano Zapata
   foreignminister        = {  type = 9 id = 1110008 }  # Gildardo Magaña Cerda
   #armamentminister       = {  type = 9 id =   }  # Manuel Palafox
   #ministerofsecurity     = {  type = 9 id =   }  # Manuel Palafox 
   ministerofintelligence = {  type = 9 id = 1110039 }  # Emiliano Zapata  
   chiefofstaff           = {  type = 9 id = 1110015 }  # Otilio Edmundo Montano Sanchez
   chiefofarmy            = {  type = 9 id = 1110011 }  # Amador Salazar
   chiefofnavy            = {  type = 9 id = 1110005 }  # Manuel Palafox
   chiefofair             = {  type = 9 id = 1110006 }  # Manuel Palafox
   
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	capital = 1972

	manpower = 50

    ownedprovinces =      {
		1971 1972
	}
    controlledprovinces = {
		1971 1972
	}
    nationalprovinces =   {
		1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982
	}

diplomacy = {
  relation = {  tag = USA value = -100 }
  relation = {  tag = MEX value = -200 }
  relation = {  tag = U57 value = 100 }  
}

techapps = {
		1010 1020 1160 1170 # Infantry
		13060 13070 # Cavalry
		3010 # Naval
		1910 # Aircraft
		5800 #Construction
		5310 #Census tabulating machine
		5600 # medicine up to 1910
		5700 # Agriculture up to 1900
		5810 # Finance up to 1902
		6500 6510 6530 # Land Doctrine
		13080 1310  #Early Mountain Division 
		}
	
	transports = 10
 
 
landunit = { 
        id = { type = 24002 id = 1 } 
        name = "Ejército Libertador del Sur"
        leader = 1110050 # Zapata
        location = 1972
        division = { 
            id = { type = 24002 id = 2 } 
            name = "Emiliano Zapata"
            type = bergsjaeger
			model = 1 
			experience = 20
			strength = 30
        	}
		division = { 
			id = { type = 24002 id = 3 } 
			name = "2nd Division"
			type = militia
			model = 1 
			experience = 10
			strength = 15
        	} 			
   	}		
		
landunit = { 
        id = { type = 24002 id = 4 } 
        name = "3rd Division"
        #leader = 
        location = 1971
		locked = yes
        division = { 
            id = { type = 24002 id = 5 } 
            name = "3rd Division"
            type = militia
			strength = 15
			model = 1 
			experience = 5
        	}		
	}
	
landunit = { 
        id = { type = 24002 id = 6 } 
        name = "4th Division" 
        #leader = 
        location = 1972
		locked = yes
        division = { 
            id = { type = 24002 id = 7 } 
            name = "4th Division"
            type = cavalry
			strength = 15
			model = 1 
			experience = 5
        	}	
	}
	
landunit = { 
        id = { type = 24002 id = 8 } 
        name = "5th Division" 


        location = 1971 

        division = { 
            	id = { type = 24002 id = 9 } 
            	name = "5th Division" 
            	strength = 10 
            	type = cavalry 
				model = 1
				experience = 5
        	} 
    	} 	
	
	
}
