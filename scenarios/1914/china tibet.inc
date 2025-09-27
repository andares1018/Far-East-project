 
 ############################## 
 # Country definition for TIB # 
 ############################## 

country = 
{
 tag          = TIB 
 ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
 # Resource Reserves 
 energy                 = 100
 metal                  = 125
 rare_materials         = 75
 oil          			= 0
 supplies     			= 250
 money       			= 2
 capital        		= 1289
 manpower        		= 1
 transports       		= 0
 policy = 
  { 
   date      			= {  year = 0 month = january day = 0  } 
   democratic    		= 4 
   political_left  		= 4 
   freedom      		= 1 
   free_market    		= 5 
   professional_army 	= 2 
   defense_lobby     	= 2 
   interventionism  	= 1 
   }
 diplomacy = 
 {  
   relation = {  tag = ENG value = 200  }
   relation = {  tag = U02 value = 50 } 
   relation = {  tag = NEP value = 50  } 
   relation = {  tag = BHU value = 50  } 
   relation = {  tag = UCH value = -150  } 
 } 
 headofstate            = {  type = 9 id = 440075  } # Thubten Gyatsho
 
 nationalprovinces   = {  1294 1286 1287 1288 1289 1295 1290 1278 1285 } 
 ownedprovinces     = { 1286 1287 1288 1289 1295 } 
 controlledprovinces  = { 1286 1287 1288 1289 1295 } 
 claimedprovinces = { 1455 1458 1283 1284 1292 1293 1262}
 techapps               = { 
 #Infantry - Only 1870
 1010

 #Cavalry - Up to 1897
 13060 13070
 
 #Light Infantry Division - Only 1870
 1160

 #Land Doctrines
 6500 6510

 }

 SpyInfo        = {  country = "TIB" NumberOfSpies = 2  } 
 landunit = 
 { location = 1289 #Lhasa
   name   = "Xizhang Difangjun" 
   id    = {  type = 22005 id = 10240  } 
   Division = 
   {  id  = {  type = 22005 id = 10242  } 
    name = "Xizhang Mingbin"
    type = militia 
	model = 0
	experience = 0
	strength = 10
   } 
 } 
}