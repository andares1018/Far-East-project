 ############################## 
 # Country definition for ALB # 
 ##############################  

 #####################
 # Country main data #
 #####################  
country = { 
  tag       	 = ALB
  capital   	 = 359
  flag_ext = _14
  manpower  	 = 1 
  dissent = 15
  ai             = "ALB_1914.ai"
  ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  # Resource Reserves 
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500 
  supplies       = 500
  money          = 10
  transports       = 100 
  # Others
  # ######################   
  policy = 
  { date = { year = 0 month = january day = 0 } 
    democratic        = 3
    political_left    = 4
    free_market       = 7 
    freedom           = 5 
    professional_army = 3 
    defense_lobby     = 4 
    interventionism   = 3 
 } 
 
  # ###################### 
   headofstate            = {  type = 9 id = 285159 } # Vidit I
   headofgovernment       = {  type = 9 id = 285181  } # Turhan Përmeti
   foreignminister        = {  type = 9 id = 285194  } # Prênk Bibë Doda
   armamentminister       = {  type = 9 id = 285206  } # Filip Noga
   ministerofsecurity     = {  type = 9 id = 285219 } # Aqif Pashë Elbasani
   ministerofintelligence = {  type = 9 id = 285231  } # Hasan Prishtina
   chiefofstaff           = {  type = 9 id = 285235  } # Aqif Pashë Elbasani
   chiefofarmy            = {  type = 9 id = 285244  } # Ali Shefqeti
   chiefofnavy            = {  type = 9 id = 285248  } # Qazim Koculi
   #chiefofair             = {  type = 9 id = ###  } # ? 
  # ###################### 
  nationalprovinces    = { 329 334 359 360 361 362 367 } 
  ownedprovinces       = { 359 361 362 } 
  controlledprovinces  = { 359 361 362 } 

  # ###################### 
  # Eastern Minor Tech '14 
  # Group D 1914 techs 
  # ###################### 
  techapps = { 
	#Early Infantry Division
	1010  1020 
	#Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160  1170 
	#Early Construction Engineering
	5800
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Basic Construction Engineering 
	
	#Air Doctrines - ww1 techs

	#Landdoctrine ww1 - rest
	6500 6510 # 6530   
	#Census Tabulating Machine
	5310
	#Torpedo Gunboat
	3010		
	3210 3110 # Naval
	8010 8020 # Naval doctrine
        27480 # Air Doctrine
	}
  # ######################    
  diplomacy = 
  { relation = { tag = ITA value = 10 } 
    relation = {   tag = SER value = -100   } 
    relation = {   tag = MTN value = -10   } 
    relation = {   tag = OTT value = 50   } 
    relation = {   tag = GRE value = -50   } 
    relation = {   tag = USA value = 10   }
    relation = {   tag = ENG value = 30   } 
    relation = {   tag = U08 value = -20   }
    relation = {   tag = U09 value = -10   } 
  

 }  
  # ######################    
  SpyInfo        = { country = "ALB" NumberOfSpies = 3 }
  # #################### 
  
   landunit = { #Xhandarmëria
    id       = { type = 27000 id = 1 }
    name     = "Xhandarmëria"
    location = 359
	leader = 285039 #Toptani
	
    division = 
	{ id = { type = 27000 id = 2 }
	  name         = "Xhandarmëria"
	  type         = militia
	  model        = 0
  	  strength     = 40
  	  max_strength = 100
	  experience   = 5
   }	
 }  
# Ushtria Kombëtar Shqiptar - aka the regular army. Was not loyal to the Toptani government, which controlled only the Gendarmerie.
#  landunit = { 
#    id       = { type = 27000 id = 3 }
#    name     = "Ushtria Kombëtar Shqiptar"
#    location = 361
#	leader = 285045 #Curri
#    division = 
#	{ id = { type = 27000 id = 4 }
#	  name         = "I Këmbësori Pjesëtim"
#	  type         = bergsjaeger
#	  model        = 0
#  	  strength     = 100  
#	  experience   = 0
#   }
# }
} 
 