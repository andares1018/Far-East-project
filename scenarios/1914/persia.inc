  
 ##############################  
 # Country definition for PER #  
 ##############################  

 #####################  
 # Country main data #  
 #####################  
   
 country =  
 {  tag          = PER 
	ai             = "PER_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	name = PER14
	# Resource Reserves  
	energy                 = 540
	metal                  = 270
	rare_materials         = 135 
	oil          = 500  
	supplies        = 500  
	money         = 10  
	transports       = 100 
	capital        = 1085  
	manpower        = 29
policy =  
  {  date       = {  year = 0 month = january day = 0  }  
   democratic    = 3  
   political_left  = 4  
   freedom      = 3  
   free_market    = 5  
   professional_army = 4  
   defense_lobby     = 8  
   interventionism  = 5  
    }
	
  nationalprovinces   = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095 2172 }  
  ownedprovinces     = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  }  
  controlledprovinces  = {  1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095  }  
  # ROTW Minor Tech '14  
  # Group E 1914 techs  
  # ######################  
  # GW fighter  
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160   

	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 6510 
	#Air Doctrines - ww1 techs
  }  
  diplomacy =  
  {  relation = {  tag = AFG value = 25  }  
   relation = {  tag = ENG value = 50 }  
   relation = {  tag = RUS value = 50  }  
   relation = {  tag = SWE value = 15  }  
   relation = {  tag = OTT value = -50  }  
    }  
  SpyInfo        = {  country = "PER" NumberOfSpies = 3  }  
  landunit =  
  {  location = 1085  
   name   = "Lasgar Parsi"  
   id    = {  type = 16600 id = 1  }  
   Division =  
   {  id  = {  type = 16600 id = 2  }  
    name = "1. Dastebandi Sarbaze Piyade"  
    type = infantry  
	model = 0
    extra = artillery  
	brigade_model = 0
	experience = 0
	strength = 100
     }  
   Division =  
   {  id  = {  type = 16600 id = 3  }  
    name = "1. Dastebandi Savareh"  
    type = cavalry  
	model = 0
	experience = 0
	strength = 100
     }  
   Division =  
   {  id  = {  type = 16600 id = 4  }  
    name = "2. Dastebandi Savareh"  
    type = cavalry  
	model = 0
	experience = 0
	strength = 100
     }  
   Division =  
   {  id  = {  type = 16600 id = 5  }  
    name = "3. Dastebandi Savareh"  
    type = cavalry  
	model = 0
	experience = 0
	strength = 100
     }  
   Division =  
   {  id  = {  type = 16600 id = 6  }  
    name = "4. Dastebandi Savareh"  
    type = cavalry  
	model = 0
	experience = 0
	strength = 100
     }  
   Division =  
   {  id  = {  type = 16600 id = 7  }  
    name = "'Swedish Gendarmerie'"  
    type = infantry
	model = 1
	experience = 0
	strength = 35
	extra = cavalry_brigade
	brigade_model = 1
     }  
   Division =  
   {  id  = {  type = 16600 id = 8  }  
    name = "'Persian Cossack Brigade'"  
    type = cavalry  
	model = 1
	experience = 0
	strength = 35
	max_strength = 50
     }  
    }  
   }  
 