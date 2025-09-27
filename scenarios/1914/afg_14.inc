 ############################## 
 # Country definition for AFG # 
 ############################## 
  
 #####################
 # Country main data #
 #####################  

country = { 
  tag       	  = AFG 
  capital   	  = 2171 
  flag_ext = _14
  manpower  	  = 20 
  ai             = "AFG_1914.ai"
  ai_settings	= {	flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  # Resource Reserves 
  energy          = 360
  metal           = 180
  rare_materials  = 90
  oil             = 500 
  supplies        = 500 
  money           = 10 
  transports       = 100 

  # Others
  # ######################   
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 3 
    political_left    = 4 
    free_market       = 4 
    freedom           = 2 
    professional_army = 5 
    defense_lobby     = 5 
    interventionism   = 2 
 }
	
  # ######################   
  nationalprovinces    = { 2168 2169 2170 2171 2172 2173 
1529 1537 1538 #Pashktunistan
 1104 #Wakhan
 } 
  ownedprovinces       = { 2168 2169 2170 2171 2172 2173 } 
  controlledprovinces  = { 2168 2169 2170 2171 2172 2173 } 
  # ######################     
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  techapps = { 
	#1870 Cav
	13060
#Interwar Armoured Car  
	
	#Light Field Artillery  

	#Early Infantry Division
	1010  
	#1930 Cavalry Division

	#Early Mountain Division
	1160  1170 
	#Early Agriculture

	#land doctrine
	6500 6510 # 6530
	#Air Doctrines - ww1 techs
 }
  # ######################    
  diplomacy = 
  { relation = { tag = ENG value = 20 } 
    relation = { tag = PER value = 100  } 
    relation = { tag = SAU value = 15  } 
    relation = { tag = RUS value = -50   } 
    relation = { tag = OTT value = 75  } 
    relation = { tag = U02 value = 50  } 
    relation = { tag = TIB value = 20  } 
    relation = { tag = USA value = 5  } 
    relation = { tag = U08 value = 30  } 
    relation = { tag = UCH value = 35  } 
 } 
  # ######################    
  SpyInfo        = { country = "AFG" NumberOfSpies = 5 } 
  # #################### 
  # Afghan OBB
  landunit   = { # Kabul Corps
 	id       = { type = 10400 id = 1 }
 	location = 2171
 	name     = "Kabul Corps"
	division = 
	{ id = { type = 10400 id = 2 }
   	  name       = "Royal Afghan Household Division"
   	  type       = infantry
	  model      = 1	  
   	  strength   = 100
	  experience = 0	
	extra = cavalry_brigade
	brigade_model = 1
   }
	division = 
	{ id         = { type = 10400 id = 3 }
   	  name       = "1st Division"
   	  type       = infantry
	  model      = 0
   	  strength   = 60
	  experience = 0		  
             	}
	division = 
	{ id         = { type = 10400 id = 4 }
   	  name       = "2nd Division"
   	  type   = infantry
	  model      = 0
      strength   = 60
	  experience = 0		  
   }
 }
  landunit   = { # 3rd 'Kandahar' Division
 	id       = { type = 10400 id = 5 }	
 	location = 2169
 	name     = "3rd 'Kandahar' Division"
	division = 
	{ id = { type = 10400 id = 6 }
   	  name       = "3rd 'Kandahar' Division"
   	  type   = infantry
	  model      = 0	  
   	  strength   = 60
	  experience = 0	
   }
 }
  landunit   = { # 4th Herat Division
  	id       = { type = 10400 id = 7 }
  	location = 2172 
  	name     = "4th 'Herat' Division"
	division = 
	{ id = { type = 10400 id = 8 }
   	  name       = "4th 'Herat' Division"
   	  type   = infantry
	  model      = 0
  	  strength   = 60
      experience = 0		  
   }
 }
  landunit   = { # 5th Mazar-i-Sharif Brigade
 	id       = { type = 10400 id = 9 }
 	location = 2168
 	name     = "5th 'Mazar-i-Sharif' Brigade"
 	division = 
	{ id = { type = 10400 id = 10 }
  	  name         = "5th 'Mazar-i-Sharif' Brigade"
  	  type   = infantry
	  model        = 0
  	  strength     = 15
      max_strength = 50
      experience   = 0	  
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 11 }
 	location = 2171
	name     = "Ghazni Military District"
	division = 
	{ id = { type = 10400 id = 12 }
  	  name         = "Ghazni Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 13 }
 	location = 2169
	name     = "Kandahar Military District"
	division = 
	{ id = { type = 10400 id = 14 }
  	  name         = "Kandahar Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 15 }
 	location = 2172
	name     = "Herat Military District"
	division = 
	{ id = { type = 10400 id = 16 }
  	  name         = "Herat Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 17 }
 	location = 2168
	name     = "Turkestan Military District"
	division = 
	{ id = { type = 10400 id = 18 }
  	  name         = "Turkestan Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 19 }
 	location = 2170
	name     = "Kadagan & Badakhchan Military District"
	division = 
	{ id = { type = 10400 id = 20 }
  	  name         = "Kadagan & Badakhchan Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 21 }
 	location = 2172
	name     = "Maymeneh Military District"
	division = 
	{ id = { type = 10400 id = 22 }
  	  name         = "Maymeneh Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 23 }
 	location = 2170
	name     = "The East Military District"
	division = 
	{ id = { type = 10400 id = 24 }
  	  name         = "The East Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
  landunit   = { 
 	id       = { type = 10400 id = 25 }
 	location = 2172
	name     = "Farah Military District"
	division = 
	{ id = { type = 10400 id = 26 }
  	  name         = "Farah Militia"
  	  type         = militia
	  model        = 1
  	  strength     = 10
  	  max_strength = 100
      experience   = 10			
	}
 }
} 
 