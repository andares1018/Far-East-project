############################## 
# Country definition for MTN # 
############################## 

##################### 
# Country main data # 
##################### 
country = 
{
	tag = MTN
	ai             = "MTN_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes revolter_set = yes } }
	flag_ext = _14
	# Resource Reserves 
	energy			= 60
	metal			= 30
	rare_materials		= 15
	oil			= 500 
	supplies		= 500 
	money			= 15 
	transports		= 100 
	capital			= 338 
	manpower		= 3

	diplomacy = {
		relation = { tag = SER value = 150 }
		relation = { tag = ALB value = -100 }
		relation = { tag = BUL value = -100 }
		relation = { tag = FRA value = 25  }
		relation = { tag = U08 value = -15  }
		relation = { tag = ITA value = 75  }
		relation = {
			tag	= GRE
			value	= 100
			guaranteed = { day = 1 month = june year = 1914 }
		}
		relation = {
			tag	= ROM 
			value	= 100 
			guaranteed = { day = 1 month = june year = 1914 }
		}
	}
	
	SpyInfo	= { country = "MTN" NumberOfSpies = 2 }
	nationalprovinces	= { 332 335 361 }
	ownedprovinces		= { 332 335 }
	controlledprovinces	= { 332 335 }
	
	# Eastern Minor Tech '14 
	# Group D 1914 techs 
	# ###################### 
	# GW fighter 
	techapps = { 
		#Interwar Fighter  

		#Interwar Armoured Car  

		#Light Field Artillery  
		2290
		#1916 lgt. Infantry Division  
		1010
		#1916 Cavalry Division  

		#Early Agriculture
		5700 
		#Landdoctrine ww1 - rest
		6500 #6510 6530 
		#Air Doctrines - ww1 techs

		#Engineers
		1830 
	}
	
	policy = {  
		date = { year = 0 month = january day = 0 }
		democratic		= 4
		political_left		= 3
		freedom			= 5
		free_market		= 5
		professional_army	= 5
		defense_lobby		= 3
		interventionism		= 6
	}
	
   headofstate            = {  type = 9 id = 390056  } # Nikola I
   headofgovernment       = {  type = 9 id = 390047  } # Serdar Janko Vukotic
   foreignminister        = {  type = 9 id = 390043  } # Petar Plamenac
   armamentminister       = {  type = 9 id = 390057  } # Risto Popovic  
   ministerofsecurity     = {  type = 9 id = 390061  } # Savo P. Vuletic 
   #ministerofintelligence = {  type = 9 id = ###  } # ?
   chiefofstaff           = {  type = 9 id = 390040  } # Božidar Jankovic
   chiefofarmy            = {  type = 9 id = 390035  } # Janko Vukotic
   #chiefofnavy            = {  type = 9 id = ### } # ?
   #chiefofair             = {  type = 9 id = ###  } # ?
	
	

	# OOB
	landunit = {
		id = { type = 10300 id = 1 }
		name = "Lovcenski Odred"
		leader = 390049 #Mitar Martinovic
		location = 332 #Cetinje
		Division = {
			id = { type = 10300 id = 2 }
			name = "1. Cetinjska divizija" 
			type = infantry
			model = 1
			strength = 15
			experience = 20
		}
		Division = {
			id = { type = 10300 id = 3 }
			name = "2. Podgoricka divizija" 
			type = infantry
			model = 1
			strength = 15
			experience = 20
		}
	}
	landunit = {
		id = { type = 10300 id = 4 }
		name = "Hercegovacki Odred"
		leader = 390048 #Janko Vukotic
		location = 332 #Cetinje
		Division = {
			id = { type = 10300 id = 5 }
			name = "3. Niksicka divizija" 
			type = infantry
			model = 1
			strength = 15
			experience = 20
		}
		Division = {
			id = { type = 10300 id = 6 }
			name = "4. Kolasinska divizija" 
			type = infantry
			model = 0
			strength = 10
			experience = 20
		}
	}
	landunit = {
		id = { type = 10300 id = 7 }
		name = "Pljevljski Odred"
		leader = 390051 #Luka Gojnic
		location = 335
		Division = {
			id = { type = 10300 id = 8 }
			name = "5. Pljevljska divizija" 
			type = infantry
			model = 0
			strength = 10
			experience = 20
		}
	}
	landunit = {
		id = { type = 10300 id = 9 }
		name = "Lovcenski Odred"
		leader = 390052 #Radomir Vesovic
		location = 335
		Division = {
			id = { type = 10300 id = 10 }
			name = "6. Pecka divizija" 
			type = infantry
			model = 1
			strength = 15
			experience = 20
		}
	}
} 
