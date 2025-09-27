 
 ############################## 
 # Country definition for POR # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = POR 
	ai             = "POR_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	# Resource Reserves 
	energy                 = 1020
	metal                  = 510
	rare_materials         = 255
	oil          = 500 
	supplies        = 500 
	money         = 15 
	capital        = 476 
	manpower        = 19
	transports       = 250 
	escorts        = 7 
  # Azores 
  diplomacy = 
  {  relation = {  tag = BEL value = -20  } 
   relation = {  tag = BRA value = 75  } 
   relation = {  tag = ENG value = 100  } 
   relation = {  tag = U08 value = 75  } 
   relation = {  tag = ITA value = 65  } 
   relation = {  tag = SAF value = 125 access = yes  } 
   relation = {  tag = SPR value = -50  } 
   } 
  SpyInfo        = {  country = "POR" NumberOfSpies = 5  } 
  # Cabinda 
  nationalprovinces   = {  481 476 479 477 478 482 480 
  
   } 
  ownedprovinces     = {  481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
   } 
  # Cabinda 
  controlledprovinces  = {  481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 
 480 482 
 994 1513 
   } 
   claimedprovinces       = {  853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617  } #Colonial Empire
   
  # Western Minor Tech '14 
  # Group C 1914 techs 
  # ###################### 
   techapps               = { 
	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060 13070 
	#Early Mountain Division
	1160   

	#Tankette 

	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290 
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 
	#Medicine
	5600
	#Naval Infantry

	#Engineers
	1830
	#Improved Destroyer 
	3010 3020 3030
	#Early Light Cruiser 
	3110 3120 
	#Short Range Submarine 
	3610
	#Early Fighter  

	#Interwar Bomber 

	#Multirole fighter

	#ww1 strategic bomber

	#ww1 navalbomber

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#ASW 18

	#Troopships
	3810

	#Landdoctrine ww1 - rest
	6500 6510 # 6530 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 81300 81310
	#Air Doctrines - ww1 techs
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 3 
   political_left  = 4 
   freedom      = 4 
   free_market    = 5 
   professional_army = 4
   defense_lobby     = 5 
   interventionism  = 3 
   }
   
   headofstate            = {  type = 9 id = 20105  } # Manuel de Arriaga
   headofgovernment       = {  type = 9 id = 20124  } # Bernardino Machado
   #foreignminister        = {  type = 9 id = ###  } # Alfredo Augusto Freire de Andrade
   #armamentminister       = {  type = 9 id = ###  } # António dos Santos Lucas
   #ministerofsecurity     = {  type = 9 id = ###  } # Rodrigo José Rodrigues # not validated
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 20077  } # João José Sinel de Cordes
   chiefofarmy            = {  type = 9 id = 20069  } # João José Sinel de Cordes
   #chiefofnavy            = {  type = 9 id = ###  } # Augusto Eduardo Neuparth # minister of navy
   #chiefofair             = {  type = 9 id = ### } # ?	
   
  landunit = 
  {  id    = {  type = 19600 id = 1000  } 
   location = 476 
   name   = "1a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1001  } 
    name   = "1a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1002  } 
   location = 479 
   name   = "2a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1035  } 
    name   = "2a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1009  } 
   location = 481 
   name   = "3a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1010  } 
    name   = "3a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1011  } 
   location = 480 
   name   = "4a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1012  } 
    name   = "4a Divisão de Infantaria" 
    type   = infantry 
	model = 2
	extra = cavalry_brigade
	brigade_model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1013  } 
   location = 479 
   name   = "5a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1014  } 
    name   = "5a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1015  } 
   location = 481 
   name   = "6a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1016  } 
    name   = "6a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1017  } 
   location = 482 
   name   = "7a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1018  } 
    name   = "7a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1019  } 
   location = 481 
   name   = "8a Região Militar" 
   Division = 
   {  id    = {  type = 19600 id = 1020  } 
    name   = "8a Divisão de Infantaria" 
    type   = infantry 
	model = 2
    strength = 20
	experience = 0
    } 
   } 

  landunit = 
  {  id    = {  type = 19600 id = 1021  } 
   location = 995 
   name   = "Comando Militar dos Açores" 
   Division = 
   {  id    = {  type = 19600 id = 1022  } 
    name   = "Comando Militar dos Açores" 
    type   = garrison
	model = 1
    strength = 10
	max_strength = 40
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1023  } 
   location = 994 
   name   = "Comando Militar da Madeira" 
   Division = 
   {  id    = {  type = 19600 id = 1024  } 
    name   = "Comando Militar da Madeira" 
    type   = garrison
	model = 1
    strength = 5
	max_strength = 20
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1025  } 
   location = 895 
   name   = "Comando Militar de Angola" 
   Division = 
   {  id    = {  type = 19600 id = 1026  } 
    name   = "Comando Militar de Angola" 
    type   = militia
	model = 1
    strength = 50
	max_strength = 100
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1027  } 
   location = 1513 
   name   = "Comando Militar da India" 
   Division = 
   {  id    = {  type = 19600 id = 1028  } 
    name   = "Comando Militar da India" 
    type   = militia
	model = 1
    strength = 10
	max_strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1029  } 
   location = 855 
   name   = "Comando Militar de Moçambique" 
   Division = 
   {  id    = {  type = 19600 id = 1030  } 
    name   = "Comando Militar de Moçambique" 
    type   = militia
	model = 1
    strength = 20
	max_strength = 100
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1031  } 
   location = 1617
   name   = "Comando Militar de Timor Leste" 
   Division = 
   {  id    = {  type = 19600 id = 1032  } 
    name   = "Comando Militar de Timor Leste" 
    type   = militia
	model = 1
    strength = 5
	max_strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 19600 id = 1033  } 
   location = 1372
   name   = "Comando Militar de Macau" 
   Division = 
   {  id    = {  type = 19600 id = 1034  } 
    name   = "Comando Militar de Macau" 
    type   = militia
	model = 1
    strength = 5
	max_strength = 5
	experience = 0
    } 
   } 

  navalunit = 
  {  id    = {  type = 19600 id = 1003  } 
   location = 476 
   base   = 476 
   name   = "Transporte de Navio do Portugal" 
   Division = 
   {  id  = {  type = 19600 id = 1004  } 
    name = "1o Flotilha de Navio de Transporte" 
    type = transport 
    } 
   } 
  navalunit = 
  {  id    = {  type = 19600 id = 1005  } 
   location = 963 
   base   = 963 
   name   = "Transporte de Navio de Colonias" 
   Division = 
   {  id  = {  type = 19600 id = 1006  } 
    name = "2o Flotilha de Navio de Transporte" 
    type = transport 
    } 
   Division = 
   {  id  = {  type = 19600 id = 1007  } 
    name = "Douro Flotilha" 
    type = destroyer 
    model = 1 
    } 
   } 
  navalunit = 
  {  id    = {  type = 19600 id = 9302  } 
   name   = "Marinha do Portugal" 
   location = 476 
   base   = 476 
   division = {
      id = { type = 19600 id = 1008 }
      name = "Vasco da Gama"
      type = heavy_cruiser
      model = 1
   }
   Division = 
   {  id    = {  type = 19600 id = 9303  } 
    name   = "Viana do Castello Flotilha" 
    type   = destroyer 
    model  = 0 
    strength = 100 
    } 
   Division = 
   {  id    = {  type = 19600 id = 9304  } 
    name   = "1o Flotilha de Submarino" 
    type   = submarine 
    model  = 1 
    strength = 100 
    } 
   } 
  airunit = 
  {  id    = {  type = 19600 id = 9300  } 
   name   = "Aéreo do Portugal" 
   location = 476 # Lissabon 
   base   = 476 
   Division = 
   {  id    = {  type = 19600 id = 9301  } 
    name   = "1o Avião de Bombardeiro Tático" 
    type   = tactical_bomber 
    strength = 100 
    model  = 0 
    } 
   } 
  } 
 
