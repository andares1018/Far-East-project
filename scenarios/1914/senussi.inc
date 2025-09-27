############################## 
 # Country definition for LBY # 
 ############################## 
  
 country = 
 {   
	tag		= LBY 
	name 	= LBY14
	flag_ext = _senussi
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes revolter_set = yes } }
	# Resource Reserves 
	energy			= 180
	metal			= 90
	rare_materials	= 45
	oil				= 200 
	supplies		= 200 
	money			= 10 
	manpower		= 5 
	dissent			= 20
	capital			= 770 
	
  policy = 
  {   date       = {   year = 0 month = january day = 0   } 
   democratic    = 3 
   political_left  = 4 
   free_market    = 8 
   freedom      = 7 
   professional_army = 2 
   defense_lobby     = 5 
   interventionism  = 2 
    }
	
   headofstate            = {  type = 9 id = 495031  } # Ahmed Sharif es Senussi
   headofgovernment       = {  type = 9 id = 495032  } # Ahmed Sharif es Senussi 
   foreignminister        = {  type = 9 id = 495033  } # Ahmed Sharif es Senussi 
   armamentminister       = {  type = 9 id = 495034  } # Ahmed Sharif es Senussi 
   ministerofsecurity     = {  type = 9 id = 495035  } # Ahmed Sharif es Senussi 
   ministerofintelligence = {  type = 9 id = 495036  } # Ahmed Sharif es Senussi
   #chiefofstaff           = {  type = 9 id = 495037  } # ?
   #chiefofarmy            = {  type = 9 id = 495038  } # ?
   #chiefofnavy            = {  type = 9 id = ###  } # ? 
   #chiefofair             = {  type = 9 id = ###  } # ?
   
   dormant_ministers = {
		495037	#Muhammad Idris al-Senussi
		495038	#Muhammad Idris al-Senussi
		495039	#Muhammad Idris al-Senussi
		495040	#Muhammad Idris al-Senussi
		495041	#Muhammad Idris al-Senussi
		495042	#Muhammad Idris al-Senussi
		495043	#Abdurrahman Nafiz Gürman
		495044	#Nuri Killigil
		495045	#Ishak Ferneli
		495046	#Jafar al-Askari
	}

 	dormant_leaders = {
		#Tripolitanian tribe leaders
		495040	#Muhammad Sayf al-Nasr
		495041	#Ahmad al-Muraid
		495042	#Sughayr al-Muraid
		495043	#Ramadan al-Shitawi al-Suwayhli
		495044	#Abd al-Nabi al-Khayr
		495045	#Abdallah bin Shaban
		495046	#Ali Tantush
		495047	#Umar Muntasir
		495048	#Ahmad al-Murayyid
		495049	#Abd al-Nabi Bilkhayr
		495050	#Abd al-Rahman Azzam
		495051	#Salim Abd al-Nabi al-Zintani
		495052	#Muhammad Suf al-Mahmudi
		495053	#Kalifah bin Askar
		495054	#Belqasem bin Kricha
		495055	#Ahmad Suni 
		495056	#Mahdi Suni
		495057	#Harb al-Naili
		#Ottoman leaders
		495058	#Cafer al-Askeri
		495059	#Nuri Killigil
		495060	#Ishak Ferneli
	}
	
  nationalprovinces   = {  740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 778 779 780 781 782 785 799 801 802 804 922 } 
  ownedprovinces     = { 754 760 766 769 770 772 773 774 775 777 } 
  controlledprovinces  = { 754 760 766 769 770 772 773 774 775 777 } 

  diplomacy = {
	relation = { tag = OTT value = 175 }
	relation = { tag = ITA value = -200 }
}
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010
	#1930 Cavalry Division
	13060 
	#Early Mountain Division
	1160  
	#Early Agriculture
	#Landdoctrine ww1 - rest
	6500
	#Air Doctrines - ww1 techs
	#Engineers
  } 

  SpyInfo        = {   country = "LBY" NumberOfSpies = 1   } 
 # landunit = 

 
 
 
 landunit = {
	id = { type = 25010 id = 1 }
	location = 766
	#name = ""
	division = {
		id = { type = 25010 id = 2 }
		name = "Abid tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 3 }
	location = 760
	#name = ""
	division = {
		id = { type = 25010 id = 4 }
		name = "Awaqir tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 5 }
	location = 772
	leader = 495039 #Umar al-Mukhtar	
	#name = ""
	division = {
		id = { type = 25010 id = 6 }
		name = "Mnifa tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 7 }
	location = 772
	#name = ""
	division = {
		id = { type = 25010 id = 8 }
		name = "Ubaydat tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 9 }
	location = 760
	#name = ""
	division = {
		id = { type = 25010 id = 10 }
		name = "Urfa tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 11 }
	location = 760
	#name = ""
	division = {
		id = { type = 25010 id = 12 }
		name = "Barasa tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
landunit = {
	id = { type = 25010 id = 13 }
	location = 777
	#name = ""
	division = {
		id = { type = 25010 id = 14 }
		name = "Zuwaya tribe"
   		strength = 50
		max_strength = 50
   		type = cavalry
		model = 0
		}
	}
	
### dormant units ###
	
landdivision = {
	id = { type = 25010 id = 15 }
	name = "Mahamid tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 16 }
	name = "Ibadi tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 17 }
	name = "Awlad Busayf tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 18 }
	name = "Warfalla tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 19 }
	name = "Awlad Sulayman tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 20 }
	name = "Jamaat tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 21 }
	name = "Hutman tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 22 }
	name = "Riyah tribe"
   	strength = 35
	max_strength = 35
   	type = garrison
	model = 0
	dormant = yes
	locked = yes
		}
landdivision = {
	id = { type = 25010 id = 23 }
	#name = ""
   	strength = 50
	max_strength = 50
   	type = infantry
	model = 1
	dormant = yes
	}		
landdivision = {
	id = { type = 25010 id = 24 }
	name = "Dar Fur Rebels"
   	strength = 20
	max_strength = 30
   	type = infantry
	model = 0
	dormant = yes
	#locked = yes
	}		
}


 