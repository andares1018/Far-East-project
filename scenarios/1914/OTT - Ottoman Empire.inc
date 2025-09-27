 
############################## 
# Country definition for OTT # 
############################## 
 
##################### 
# Country main data # 
##################### 
 
country = {
	tag            = OTT 
	ai             = "OTT_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	# Resource Reserves 
	energy         = 2100
	metal          = 1050
	rare_materials = 525
	oil            = 500 
	supplies       = 500 
	money          = 20 
	capital        = 409
	manpower       = 38
	transports     = 235 
	escorts        = 10 
	dissent        = 10 
	
	policy = {
		date              = {  year = 0 month = january day = 0  } 
		democratic        = 5 
		political_left    = 3 
		freedom           = 4 
		free_market       = 6 
		professional_army = 5
		defense_lobby     = 6 
		interventionism   = 3 
	} 
   
   headofstate            = {  type = 9 id = 720051  } #Mehmed V
   headofgovernment       = {  type = 9 id = 720062  } #Said Halim
   foreignminister        = {  type = 9 id = 720073  } #Said Halim
   armamentminister       = {  type = 9 id = 720129  } #Mehmed Djavid
   ministerofsecurity     = {  type = 9 id = 720147  } #Mehmed Talat
   ministerofintelligence = {  type = 9 id = 720170  } #Esref Sencer Kushdjubasi
   chiefofstaff           = {  type = 9 id = 720176  } #Ahmet Izzet Furgadj
   chiefofarmy            = {  type = 9 id = 720194  } #Ismail Enver
   chiefofnavy            = {  type = 9 id = 720228  } #Arthur Henry Limpus (British Navy Mission)
   chiefofair             = {  type = 9 id = 720215  } #Süreyya Ilmen

	dormant_ministers = {	#Due to high amount of ministers that were in position for short time historically database have to be reduced.
		720050	#	Abdülhamid II
		720054	#	Avlonyali Mehmed Ferid
		720055	#	Mehmed Said
		720056	#	Hüseyin Hilmi
		720057	#	Ahmed Tevfik Okday
		720058	#	Ibrahim Hakki
		720059	#	Ahmed Muhtar
		720060	#	Kibrisli Mehmed Kamil
		720061	#	Mahmud Shevket
		720068	#	Ahmed Tevfik Okday
		720069	#	Mehmed Rifat
		720070	#	Ibrahim Hakki
		720071	#	Mustafa Asim Turgut
		720072	#	Gabriel Noradunkyan
		720079	#	Damat Mehmed Ferit
		720080	#	Abdüllatif Safa
		720081	#	Ahmed Izzet
		720082	#	Ömer Rüshtü
		720083	#	Recep
		720084	#	Düztaban Ali Riza
		720085	#	Nazim
		720086	#	Ibrahim Edhem
		720088	#	Mahmud Shevket
		720089	#	Hurshit
		720091	#	Djürüksulu Mahmud 
		720095	#	Ömer Yaver
		720096	#	Damat Ferid
		720097	#	Abuk Ahmed
		720098	#	Mehmed Shakir
		720099	#	Shevket Turgut
		720100	#	Nazim
		720101	#	Süleyman Shefik
		720102	#	Mersinli Mehmed Cemal 
		720103	#	Mustafa Fevzi
		720104	#	Hüseyin Hüsnü
		720105	#	Ziya Kutnak
		720106	#	Mehmed Celaleddin
		720107	#	Hasan Rami
		720108	#	Alizoti Ibrahim Halil
		720109	#	Arif Hikmet
		720110	#	Hüseyin Hüsnü
		720111	#	Ali Riza
		720112	#	Emin
		720113	#	Salih Hulusi Kezrak
		720114	#	Mahmut Muhtar
		720115	#	Hurshid
		720116	#	Djürüksulu Mahmud 
		720119	#	Ali Riza
		720120	#	Mehmed Shakir
		720121	#	Ahmed Avni 
		720122	#	Mehmed Esat Bülkat
		720123	#	Kara Mehmed Said 
		720124	#	Djakaci Ahmed Hamdi 
		720125	#	Mehmed Ziya
		720126	#	Mehmed Ragib
		720127	#	Mehmed Rifat
		720128	#	Osman Nuri Bey
		720130	#	Mustafa Nail
		720141	#	Mehmed Faik Memduh
		720142	#	Akif Halil
		720143	#	Reshid Akif 
		720144	#	Ibrahim Hakki 
		720145	#	Hüseyin Hilmi
		720146	#	Avlonyali Mehmed Ferid
		720148	#	Halil 
		720149	#	Mehmed Celal
		720150	#	Haci Mehmed Adil
		720151	#	Mehmed Ziya
		720152	#	Ali Danish
		720153	#	Avlonyali Mehmed Ferid
		720164	#	Ebubekir Hazim Tepeyran
		720165	#	Reshid Mümtaz
		720166	#	Sherif Mehmed Rauf
		720167	#	Ali Riza 
		720168	#	Salih Hulusi Kezrak
		720180	#	Hadi Abdülhadi
		720181	#	Ali Fuat Cebesoy
		720182	#	Shevket Turgut
		720183	#	Nazif
		720184	#	Ömer Rüshtü
		720185	#	Recep
		720186	#	Düztaban Ali Riza
		720187	#	Nazim
		720188	#	Ibrahim Edhem
		720190	#	Mahmud Shevket
		720191	#	Hurshit
		720193	#	Djürüksulu Mahmud 
		720197	#	Ömer Yaver
		720198	#	Damat Ferid
		720199	#	Abuk Ahmed
		720200	#	Mehmed Shakir
		720201	#	Shevket Turgut
		720202	#	Nazim
		720203	#	Süleyman Shefik
		720204	#	Mersinli Mehmed Cemal 
		720205	#	Mustafa Fevzi
		720206	#	Hüseyin Hüsnü
		720207	#	Ziya Kutnak
		720208	#	Hasan Rami 
		720209	#	Tahir Cibalili Mehmed
		720210	#	Sermet Fazil
		720211	#	Selanikli Ramiz Numan 
		
		#German Military Mission
		
		720217	#	Waldemar Pieper
		720218	#	Heinrich August Meißner
		720219	#	Guido von Usedom
		720220	#	Sievert
		720221	#	Etienne Perrinet von Thauvenay
		720222	#	Friedrich Bronsart von Schellendorf
		720223	#	Hans von Seeckt
		720224	#	Wilhelm Souchon
		720225	#	Hubert von Rebeur-Paschwitz
		720226	#	Erich Serno
		720227	#	Konrad Goltz
		}

	dormant_teams = {  
		#German Military Mission
		720031 #Erich Serno
		720032 #Otto von Lossow
		}
		
	dormant_leaders = {
	
	#German commanders that start serving in Ottoman Army in 1914 and later
	720268	#	Back
	720269	#	Böhme
	720271	#	Eggert
	720272	#	Ehrke
	720273	#	Falkenhayn
	720274	#	Frankenberg und Proschlitz
	720275	#	Gleich
	720276	#	Goltz
	720277	#	Guhr
	720278	#	Hammerstein-Gesmold
	720279	#	Havik
	720280	#	Heuck
	720281	#	Hopman
	720282	#	Hunger
	720283	#	Kannengiesser
	720284	#	Kiesling auf Kieslingstein
	720285	#	Kreß von Kressenstein
	720286	#	Langenstraß
	720287	#	Lenthe
	720289	#	Lossow
	720291	#	Oppen
	720293	#	Pötrich
	720295	#	Rohdewald
	720297	#	Schraudenbach
	720298	#	Seeckt
	720299	#	Sodenstern
	720300	#	Tiller
	720301	#	Trommer
	720302	#	Weber
	720304	#	Willmer
	720305	#	Merten
	720306	#	Pieper
	720307	#	Rebeur-Paschwitz
	720308	#	Souchon
	720310	#	Buddecke
	720311	#	Felmy
	720312	#	Goltz
	720313	#	Grone
	720314	#	Langfeld
	720315	#	Liebermann
	720316	#	Preußner
	720317	#	Schueler van Krieken
	720318	#	Serno
	}
	

	  
   
	nationalprovinces = {  
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 
		1067 1071 1054 385 1062 1063 1064 1060 1061 370 384 1077 1072 1073 
		1055 1056 1014 1015 1016 1017 1018 1019 1020 1021 1036 1033 1034 1035 
		1037 1028 1032 1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 
		1011 1010 1024 363 1009 
	} 
	ownedprovinces = {
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 
		1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 
		1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 
		1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 
		1009 
	} 
	controlledprovinces = {  
		409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 
		1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 
		1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 
		1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 
		1009 
	} 
	claimedprovinces = { 
		387 388 379 1004 1005 1007 1006 791 900 1046 1044 1041 1048 1049 1050 
		786 787 790 788 789 783 784 785 780 781 782 778 779 799 800 792 795 
		796 793 801 802 798 797 794  
	}


	# Semi-Major Tech '14 
	# Group C 1914 techs 
	# ###################### 
	techapps = {
		#Medicine
		5600
		#Engineers
		1830  
		#Basic Armoured Car 
		#Great War Heavy Field Artillery 
		2290  
		#Great War Infantry Division  
		1010  1020  1030
		#Great War Cavalry Division  
		13060 13070 13080
		#Early Mountain Division 
		1160  1170  1180
		#Modern Agriculture  
		5700
		#Early Construction Engineering
		5800
		#Scientific Management
		5810
		#Improved Destroyer 
		3010 3020 3030
		#Basic Light Cruiser 
		3110 3120 3130
		#Improved Heavy Cruiser 
		3210 3220 3230  
		#Early Battleship 
		3410 3420 
		#Short Range Submarine 
		3610 3620
		#Great War Battlecruiser  
		3310 3320 
		#Troopships
		3810
		#Landdoctrine ww1 - exp central  germany, turkey, austr, hun, bul, russia
		6500 6510  6530  
		#Naval Doctrines
		8010 8020 8040 8050 8060 8070 8080 8100 8500 81300 81310
		#Great War Hospital System
		#Army Logistics
		1910 1920
	} 
	 blueprints = {

 # Leading by task (from German military mission and Balkan wars experience)
 6590
 
 }
	diplomacy = {
		relation = {  tag = AFG value = 50  } 
		relation = {  tag = BUL value = 25  } 
		relation = {  tag = ENG value = -75  } 
		relation = {  tag = FRA value = -50  } 
		relation = {  tag = U08 value = 50  } 
		relation = {  tag = U09 value = 25  } 
		relation = {
			tag        = GRE 
			value      = -25 
			guaranteed = {  day = 1 month = june year = 1914  } 
		} 
		relation = {  tag = ITA value = -100  } 
		relation = {  tag = OMN value = -35  } 
		relation = {  tag = PER value = -50  } 
		relation = {  tag = SAU value = 50  } 
		relation = {  tag = U50 value = -25 access = yes } 
		relation = {  tag = YEM value = 50 access = yes  } 
		relation = {  tag = U53 value = -15  }
		relation = {  tag = U52 value = 175 access = yes }
	} 
	SpyInfo        = {  country = "OTT" NumberOfSpies = 7  } 
	
	######
	# OOB
	######
	
###First Army
#############
	
## I. Corps

landunit = {										
	id 	= { type = 20111 id = 1 }
		name = "I. Kolordu" 
		location = 409 	#Istanbul 
		leader = 720091 #Ismail Enver (for GHQ)
	division = {
		id 	= { type = 20111 id = 2 }
		name 	= "Ordu Genel Merkez"
		type 	= hq
		model 	= 0
		strength = 50
		experience = 0
		}		
	division = {  
		id = {  type = 20111 id = 3  } 
		name = "1. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 20
		} 

	division = {
		id = {  type = 20111 id = 4  } 
		name = "2. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 20
		} 

	division = {
		id = {  type = 20111 id = 5  } 
		name = "3. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 20
		} 
	division = {
		id = {  type = 20111 id = 6  } 
		name = "52. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 10
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 7  } 
		name = "54. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 5
		experience = 0
		} 
	}

## II. Corps

landunit = {										
	id 	= { type = 20111 id = 8 }
		name = "II. Kolordu" 
		location = 385 	#Edirne 
		#leader = 720113 #Çolak Faik Pasa 
		leader = 720288	#Otto Liman von Sanders (for the 1st Army)
	division = {
		id 	= { type = 20111 id = 9 }
		name 	= "I. Ordu"
		type 	= hq
		model 	= 0
		strength = 50
		experience = 10
		}		
	division = {  
		id = {  type = 20111 id = 10  } 
		name = "4. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 11  } 
		name = "5. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 12  } 
		name = "6. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 13  } 
		name = "19. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 10
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 14  } 
		name = "3. Suvari Tümeni" 
		type = cavalry
		model = 1
		strength = 10
		experience = 0
		} 
	}

## III. Corps

landunit = {										
	id 	= { type = 20111 id = 15 }
		name = "III. Kolordu" 
		location = 1078 #Çanakkale
		leader = 720092 #Esat Pasa (Bülkat)
	division = {  
		id = {  type = 20111 id = 16  } 
		name = "7. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 17  } 
		name = "8. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 18  } 
		name = "9. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 19  } 
		name = "20. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	}

	
###Second Army
#############
	
## IV. Corps

landunit = {										
	id 	= { type = 20111 id = 20 }
		name = "IV. Kolordu" 
		location = 1077 #Izmir
		leader = 720126 #Pertev Pasa (Demirhan)
	division = {  
		id = {  type = 20111 id = 21  } 
		name = "10. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 22  } 
		name = "11. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 23  } 
		name = "12. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	}	

## V. Corps

landunit = {										
	id 	= { type = 20111 id = 24 }
		name = "V. Kolordu" 
		location = 1075  #Ankara
		leader = 720093  #Fevzi Pasa (Çakmak)
	division = {  
		id = {  type = 20111 id = 25  } 
		name = "13. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 26  } 
		name = "14. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 27  } 
		name = "15. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	}		

## VI. Corps

landunit = {										
	id 	= { type = 20111 id = 28 }
		name = "VI. Kolordu" 
		location = 1021	#Aleppo 
		#leader = 720122 #Mustafa Hilmi Pasa 
		leader = 720088	#Cemal Pasa (for the 2nd Army)
	division = {
		id 	= { type = 20111 id = 29 }
		name 	= "II. Ordu"
		type 	= hq
		model 	= 0
		strength = 50
		experience = 0
		}		
	division = {  
		id = {  type = 20111 id = 30  } 
		name = "17. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 31  } 
		name = "18. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 32  } 
		name = "23. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 10
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 33  } 
		name = "41. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	}

## VIII. Corps

landunit = {										
	id 	= { type = 20111 id = 34 }
		name = "VIII. Kolordu" 
		location = 1016 #Damascus 
		leader = 720089 #Cemal Bey (Mersinli) 
	division = {  
		id = {  type = 20111 id = 35  } 
		name = "25. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {  
		id = {  type = 20111 id = 36  } 
		name = "26. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 37  } 
		name = "27. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 38  } 
		name = "24. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 10
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 39  } 
		name = "43. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	}

	
###Third Army
#############

## IX. Corps

landunit = {										
	id 	= { type = 20111 id = 40 }
		name = "IX. Kolordu" 
		location = 1063	#Erzurum 
		leader = 720106 #Ahmet Fevzi Pasa
	division = {  
		id = {  type = 20111 id = 41  } 
		name = "28. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		extra = cavalry_brigade	
		brigade_model = 0
		} 
	division = {
		id = {  type = 20111 id = 42  } 
		name = "29. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 43  } 
		name = "1. Suvari Tümeni" 
		type = cavalry
		model = 1
		strength = 5
		experience = 0
		} 
	}

## X. Corps

landunit = {										
	id 	= { type = 20111 id = 44 }
		name = "X. Kolordu" 
		location = 1067
		#leader = 720134	#Ziya Pasa (Kutnak)
		leader = 720095	#Hasan Izzet Pasa (for the 3rd Army)
	division = {
		id 	= { type = 20111 id = 45 }
		name 	= "III. Ordu"
		type 	= hq
		model 	= 0
		strength = 50
		experience = 0
		}		
	division = {  
		id = {  type = 20111 id = 46  } 
		name = "30. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		extra = cavalry_brigade	
		brigade_model = 0
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 47  } 
		name = "31. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		extra = cavalry_brigade	
		brigade_model = 0
		} 
	division = {
		id = {  type = 20111 id = 48  } 
		name = "32. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 49  } 
		name = "2. Suvari Tümeni" 
		type = cavalry
		model = 2
		strength = 35
		experience = 0
		} 
	}

## XI. Corps

landunit = {										
	id 	= { type = 20111 id = 50 }
		name = "XI. Kolordu" 
		location = 1064
		leader = 720115 #Galip Pasa (Pasinler)
	division = {  
		id = {  type = 20111 id = 51  } 
		name = "33. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		extra = cavalry_brigade
		brigade_model = 0
		} 
	division = {
		id = {  type = 20111 id = 52  } 
		name = "34. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 53  } 
		name = "44. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 54  } 
		name = "45. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 55  } 
		name = "46. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 56  } 
		name = "50. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 5
		experience = 0
		} 
	}	

	
###Fourth Army
#############
	
## XII. Corps

landunit = {										
	id 	= { type = 20111 id = 57 }
		name = "XII. Kolordu" 
		location = 1029 #Mosul 
		#leader = 720155 #Fahrettin Pasa (Türkkan)
		leader = 720151	#Cavit Pasa (for the 4th Army)
	division = {
		id 	= { type = 20111 id = 58 }
		name 	= "IV. Ordu"
		type 	= hq
		model 	= 0
		strength = 50
		experience = 0
		}		
	division = {  
		id = {  type = 20111 id = 59  } 
		name = "35. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 0
		} 
	division = {
		id = {  type = 20111 id = 60  } 
		name = "36. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 0
		} 
	}

## XIII. Corps

landunit = {										
	id 	= { type = 20111 id = 61 }
		name = "XIII. Kolordu" 
		location = 1034 #Baghdad
		leader = 720117 #Hüsamettin Pasa (Karaovyat)
	division = {  
		id = {  type = 20111 id = 62  } 
		name = "37. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 30
		experience = 0
		} 
	division = {  
		id = {  type = 20111 id = 63  } 
		name = "38. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 30
		experience = 0
		} 
	division = {  
		id = {  type = 20111 id = 64  } 
		name = "51. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 10
		experience = 0
		} 
	}
	
	
###Independent Corps
#############	
	
## VII. & XIV. Corps

landunit = {										
	id 	= { type = 20111 id = 65 }
		name = "VII. Kolordu" 
		location = 1049 #Hejaz & Asir
		leader = 720107 #Ahmet Tevfik Pasa (Alpsoy)
	division = {  
		id = {  type = 20111 id = 66  } 
		name = "21. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 5
		} 
	division = {
		id = {  type = 20111 id = 67  } 
		name = "22. Piyade Tümeni" 
		type = infantry 
		model = 2
		strength = 40
		experience = 5
		} 
	}		
	
landunit = {										
	id 	= { type = 20111 id = 68 }
		name = "XIV. Kolordu" 
		location = 1050 #Yemen
		#leader = ?
	division = {
		id = {  type = 20111 id = 69  } 
		name = "39. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 10
		} 
	division = {
		id = {  type = 20111 id = 70  } 
		name = "40. Piyade Tümeni" 
		type = infantry
		model = 2
		strength = 40
		experience = 10
		} 
	}		
	
   # ##### Ottoman Navy `14 ###### 
	navalunit = {
		location = 1076 
		base   = 1076 
		name   = "Türkce Deniz Filosu" 
		leader = 720309 #Arthur Limpus
		id    = {  type = 11700 id = 80 } 
		division = {
			id  = {  type = 11700 id = 81 } 
			name = "Barbaros Hayreddin" 
			type = battleship 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 82 } 
			name = "Turgut Reis" 
			type = battleship 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 83 } 
			name = "Mesudiye" 
			type = battleship 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 84 } 
			name = "Hamidiye" 
			type = light_cruiser 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 87 } 
			name = "Mecidiye" 
			type = light_cruiser 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 88 } 
			name = "1. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 1 
		} 
		division = {
			id  = {  type = 11700 id = 89 } 
			name = "2. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 1
		} 
		division = {
			id  = {  type = 11700 id = 90 } 
			name = "3. Filotilla Torpido Ve Denizalti" 
			type = destroyer 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 6  } 
			name = "1. Filotilla Denizalti Kücük" 
			type = submarine 
			model = 0 
		} 
		division = {
			id  = {  type = 11700 id = 100  } 
			name = "Reschid Pasha Kücük Filotilla" 
			type = transport 
		} 
	} 
	
} 
 