
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag			= U08 
	ai			= "U08_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }	
	capital		= 163 
	manpower	= 308
	transports	= 550 
	escorts		= 23 

	# Resource Reserves 
	energy                 = 9780
	metal                  = 4890
	rare_materials         = 2445
	oil          = 500 
	supplies        = 500 
	money         = 70 
  diplomacy = 
  {   
   relation = {  tag = U09 value   = 150 access = yes } 
   relation = {  tag = BEL value = 20  } 
   relation = {  tag = BUL value   = 100  } 
   relation = {  tag = ENG value = -125  } 
   relation = {  tag = FRA value = -200  } 
   relation = {  tag = GRE value = 50  } 
   relation = {  tag = HOL value = 50  } 
   relation = {  tag = ITA value   = 100  } 
   relation = {  tag = JAP value = 10  } 
   relation = {  tag = LUX value = -50  } 
   relation = {  tag = NZL value = 20  } 
   relation = {  tag    = ROM value   = 50  } 
   relation = {  tag = SAF value = 1  } 
   relation = {  tag = SCH value   = 50  } 
   relation = {  tag = RUS value = -20  } 
   relation = {  tag    = SWE value   = 100  } 
   relation = {  tag    = OTT value   = 100  } 
   relation = {  tag    = SER value   = -50  } 
   } 
  SpyInfo        = {  country = "U08" NumberOfSpies = 7  } 
  
  nationalprovinces   = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154  
 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 104 107 105 109  
 182 155 161 185 165 166 168 133 
 144 160 180 136 139 135 129 128 130 
 216 181 261 225 224 221 149 110 
 150 143 140 
 226 222
 # Poland 226 230 222 
                } 
  ownedprovinces     = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 133 
 182 155 161 185 165 166 168 150 143 
 144 160 180 136 139 135 129 128 130 149 140 
 105 107  104 181 226 224 225 216 221 261 222 1671 
 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 
               1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234 1682
                } 
  controlledprovinces  = {  126 145 127 131 142 147 141 137 174 171 176 146 148 154 151 152 153 156 169 157 163 162 158 183 159 172 170 173 177 138 
               134 132 178 175 179 167 164 184 133 
 182 155 161 185 165 166 168 150 143 1671 
 144 160 180 136 139 135 129 128 130 149 140 
 105 107  104 181 226 224 225 216 221 261 222 
 950 948 955 925 928 911 910 909 883 882 886 885 884 849 850 851 848 846 847 1328 1602 1603 1605 1610 1725 1726 1727 1587 1686 1685 1684 1668 
               1670 1665 1669 1667 1666 1674 1675 1676 1677 1681 1731 1724 110 933 936 924 919 908 1234 1682
                } 
 claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955 # Afrika
                      1605 1602 1668 1667 1727 1726 1724 1725 1665 1587 1675 1674 1681 1677 1603 1610 1234 1666 1669 1670 1671 1676 1684 1685 1686 # Pacific
					  1731 #Apia
					  1328 #Qindao
					  1682 #Nauru
                    }	
  # Germany 1914 techs 
  # ###################### 
   techapps               = { 
	#Infantry Division  
	1010  1020 1030 1040
	#CAVALRY 
	13060 13070 13080 1310  
	#Mountain Division 
	1160 1170 1180
   	#Naval Infantry
	#Engineers
	1830
	#Supply 
	1910 1920
	

	#Tank 
	#Field Artillery 
	2290 2300 
	#Anti-Tank Artillery 
	#Static Anti-Air Artillery 
	#Anti-Air Artillery Brigade 
	#Basic Armoured Car  
	2860

	#Improved Destroyer 
	3010 3020 3030
	#Basic Light Cruiser 
	3110 3120 3130
	#Improved Heavy Cruiser 
	3210 3220 3230  
	#Early Battleship 
	3410 3420 3430 3440 3450
	#Early Battlecruiser
	3310 3320
	#Short Range Submarine 
	3610 3620
	#fleet Carrier 
	#Light carrier 
	#Troopships
	3810
	#ASW
	#Torpedos
	3720
	
	#Interceptors  
	4500
	#Exp.  Bomber 
	4600 4610
	#Basic Air Transport 
	#Multirole fighter
	#strategic bomber
	#navalbomber
	#CAS
	#CAG
	#SEAPLANES
	4740
	
	#Census Tabulating Machine 
	5310
	#Medicine
	5600
	#Agriculture 
	5700
	#Construction Engineering 
	5800 5080
	#MANUFACTURING 
	5810
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 

	#Landdoctrine ww1 - exp central  germany, turkey, austr, hun, bul, russia
	6500 6510  6530 6590 6600
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510
	8520 8550 8900 8910
	#Great War Hospital System 
	14000
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 4 
   political_left  = 3 
   free_market    = 6 
   freedom      = 4 
   professional_army = 6
   defense_lobby     = 9 
   interventionism  = 10 
   } 
   headofstate            = {  type = 9 id = 855001  } # Wilhelm II
   headofgovernment       = {  type = 9 id = 855004  } # Theobald von Bethmann Hollweg
   foreignminister        = {  type = 9 id = 855010  } # Gottlieb von Jagow
   armamentminister       = {  type = 9 id = 855050  } # Hermann Kühn
   ministerofsecurity     = {  type = 9 id = 855056  } # Clemens von Delbrück
   ministerofintelligence = {  type = 9 id = 855067  } # Walter Nicolai
   chiefofstaff           = {  type = 9 id = 855072  } # Helmuth von Moltke
   chiefofarmy 			  = {  type = 9 id = 855080  } # Hermman von Stein
   chiefofnavy            = {  type = 9 id = 855094  } # Hugo von Pohl
   chiefofair             = {  type = 9 id = 855100  } # Walter von Eberhardt
   
  dormant_leaders    = { } 
				
	dormant_ministers = {
	# Weimar Republic
	855200	#Vollzugsrat
	855201	#Zentralrat
	855202	#Friedrich Ebert
	855203	#Friedrich Ebert
	855204	#Philipp Heinrich Scheidemann
	855205	#Gustav Adolf Bauer
	855206	#Hermann Müller
	855207	#Constantin Fehrenbach
	855208	#Joseph Wirth
	855209	#Wilhelm Carl Josef Cuno
	855210	#Gustav Stresemann
	855211	#Wilhelm Marx
	855212	#Hugo Haase
	855213	#Ulrich von Brockdorff-Rantzau
	855214	#Hermann Müller
	855215	#Adolf Köster
	855216	#Walter Simons
	855217	#Friedrich Rosen
	855218	#Karl Joseph Wirth
	855219	#Walther Rathenau
	855220	#Frederic von Rosenberg
	855221	#Gustav Stresemann
	855222	#Philipp Heinrich Scheidemann
	855223	#Eugen Schiffer
	855224	#Bernhard Dernburg
	855225	#Matthias Erzberger
	855226	#Joseph Wirth
	855227	#Andreas Hermes
	855228	#Rudolf Hilferding
	855229	#Hans Luther
	855230	#August Müller
	855231	#Rudolf Wissell
	855232	#Robert Schmidt
	855233	#Ernst Scholz
	855234	#Johann Becker
	855235	#Hans von Raumer
	855236	#Joseph Koeth
	855237	#Eduard Hamm
	855238	#Walther Reinhardt
	855239	#Gustav Noske
	855240	#Otto Geßler
	855241	#Friedrich Ebert
	855242	#Hugo Preuß
	855243	#Eduard David
	855244	#Erich Koch-Weser
	855245	#Georg Gradnauer
	855246	#Adolf Köster
	855247	#Rudolf Oeser
	855248	#Wilhelm Sollmann
	855249	#Karl Jarres
	855250	#Martin Schiele
	855251	#Martin Braune
	855252	#Ferdinand Boehmer
	855253	#Leo Riedel
	855254	#Friedrich Gempp
	855255	#Paul von Hindenburg
	855256	#Hans von Seeckt
	855257	#Wilhelm Heye
	855258	#Otto Hasse
	855259	#Wilhelm Groener
	855260	#Walther Reinhardt
	855261	#Hans von Seeckt
	855262	#Maximilian Rogge
	855263	#Adolf von Trotha
	855264	#William Michaelis
	855265	#Paul Behncke
	855266	#Hans Zenker
	855267	#Hermann von der Lieth-Thomsen
	855268	#Ernst von Hoeppner
	855269	#Wilhelm Haehnelt
	
	# Völkisch Movement
	855300	#Erich Ludendorff
	855301	#Paul von Hindenburg
	855302	#Adolf Hitler
	855303	#Wilhelm II
	855304	#Wilhelm III
	855305	#Walther von Lüttwitz
	855306	#Wolfgang Kapp
	855307	#Gustav Noske
	855308	#Adolf Hitler
	855309	#Gregor Strasser
	855310	#Walther von Lüttwitz
	855311	#Ulrich von Hassell
	855312	#Albrecht von Graefe
	855313	#Franz von Reichenau
	855314	#Heinrich Claß
	855315	#Johann Albrecht zu Mecklenburg
	855316	#Alfred Hugenberg
	855317	#Gottfried Feder
	855318	#Oskar Hergt
	855319	#Hermann Dietrich
	855320	#Max Rötger
	855321	#Hugo Stinnes
	855322	#Ernst von Wrisberg
	855323	#Otto von Lossow
	855324	#Alfred von Tirpitz
	855325	#Wilhelm Kube
	855326	#Wilhelm Frick
	855327	#Christian Roth
	855328	#Hans Heinrich Lammers
	855329	#Kuno von Westarp
	855330	#Traugott von Jagow
	855331	#Hans von Seißer
	855332	#Wilhelm Canaris
	855333	#Hermann Ehrhardt
	855334	#Walter Nicolai
	855335	#Alfred von Tirpitz
	855336	#Magnus Levetzow
	855337	#Adolf von Trotha
	855338	#Max von Grapow
	855339	#Walther von Lüttwitz
	855340	#Rüdiger von der Goltz
	855341	#Erich Ludendorff
	855342	#Paul von Hindenburg
	855343	#Oskar von Hutier
	855344	#August von Mackensen
	855345	#Paul von Lettow-Vorbeck
	855346	#Ludwig von Estorff
	855347	#Burghard von Oven
	855348	#Otto von Lossow
	855349	#Hermann von der Lieth-Thomsen
	855350	#Ernst von Hoeppner
	855351	#Wilhelm Haehnelt
	855352	#Hermann Göring
	855353	#Karl Helfferich
	855354	#Max Wallraf
	855355	#Karl Helfferich
				}

	######
	# OOB
	######

###Western Front
#################

landunit = {   
	location = 163
	name   = "Oberste Heeresleitung" 
	id = {  type = 10100 id = 195  }
	leader = 855020 #Helmuth von Moltke 'the Young'

	Division = 
	{   
		id    = {  type = 10100 id = 196  } 
		name   = "Grosser Generalstab" 
		type   = hq
		model = 1
		strength = 35
		experience = 0
	} 
} 

##1. AOK

landunit = {										
	id 	= { type = 10100 id = 1 }
	name 	= "1. Armee"
	location = 126   #Grevenbroich [Aachen]
	leader 	= 855008 #Generaloberst Alexander von Kluck
		
	division = {
		id 	= { type = 10100 id = 2 }
		name 	= "A.O.K. 1"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}
				
	#II. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 3 }
		name 	= "3. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	division = {
		id 	= { type = 10100 id = 4 }
		name 	= "4. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	#III. Armeekorps

	division = {
		id 	= { type = 10100 id = 5 }
		name 	= "5. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0		
		}
				
	division = {
		id 	= { type = 10100 id = 6 }
		name 	= "6. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#IV. Armeekorps

	division = {
		id 	= { type = 10100 id = 7 }
		name 	= "7. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}
				
	division = {
		id 	= { type = 10100 id = 8 }
		name 	= "8. Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	#III. Reservekorps
	
	division = {
		id 	= { type = 10100 id = 11 }
		name 	= "5. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
				
	division = {
		id 	= { type = 10100 id = 12 }
		name 	= "6. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}				

	#IV. Reservekorps
	
	division = {
		id 	= { type = 10100 id = 13 }
		name 	= "7. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
				
	division = {
		id 	= { type = 10100 id = 14 }
		name 	= "22. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}									
	}	


##2. AOK

landunit = {										
	id 	= { type = 10100 id = 15 }
	name 	= "2. Armee"
	location = 110   #Monschau [Eupen]
	leader 	= 855311 #Generaloberst Karl von Bülow
		
	division = {
		id 	= { type = 10100 id = 16 }
		name 	= "A.O.K. 2"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}

	#Gardekorps
			
	division = {
		id 	= { type = 10100 id = 17 }
		name 	= "1. Garde-Infanterie-Division"
		type 	= infantry
		model 	= 3
		strength = 90
		extra 	= artillery
		brigade_model = 1
		experience = 0
		}			
			
	division = {
		id 	= { type = 10100 id = 18 }
		name 	= "2. Garde-Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		extra 	= artillery
		brigade_model = 1
		experience = 0
		}			
			
	#VII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 19 }
		name 	= "13. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= super_heavy_artillery
		brigade_model = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 20 }
		name 	= "14. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}		

	#X. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 21 }
		name 	= "19. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 22 }
		name 	= "20. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}				

	#X. Garde-Reservekorps
			
	division = {
		id 	= { type = 10100 id = 23 }
		name 	= "3. Garde-Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
				
	division = {
		id 	= { type = 10100 id = 24 }
		name 	= "1. Garde-Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}					
			
	#VII. Reservekorps

	division = {
		id 	= { type = 10100 id = 25 }
		name 	= "13. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
				
	division = {
		id 	= { type = 10100 id = 26 }
		name 	= "14. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
				
	#X. Reservekorps	
			
	division = {
		id 	= { type = 10100 id = 27 }
		name 	= "19. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	

	division = {
		id 	= { type = 10100 id = 28 }
		name 	= "2. Reserve-Garde-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}



##3. AOK

landunit = {										
	id 	= { type = 10100 id = 29 }
	name 	= "3. Armee"
	location = 129   #Prüm 
	leader 	= 855009 #Generaloberst Max Klemens Frh von Hausen
		
	division = {
		id 	= { type = 10100 id = 30 }
		name 	= "A.O.K. 3"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}	

	#XI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 31 }
		name 	= "22. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 32 }
		name 	= "38. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}

	#XII. (I. Sächsisches) Armeekorps
			
	division = {
		id 	= { type = 10100 id = 33 }
		name 	= "23. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 34 }
		name 	= "32. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	

	#XIX. (II. Sächsisches) Armeekorps
			
	division = {
		id 	= { type = 10100 id = 35 }
		name 	= "24. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 36 }
		name 	= "40. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
	
	#XII. (Sächsisches) Reservekorps
			
	division = {
		id 	= { type = 10100 id = 37 }
		name 	= "23. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 38 }
		name 	= "24. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
	}

##4. AOK

landunit = {										
	id 	= { type = 10100 id = 39 }
	name 	= "4. Armee"
	location = 128   #Trier
	leader 	= 855010 #Generaloberst Albrecht Herzog von Württemberg
		
	division = {
		id 	= { type = 10100 id = 40 }
		name 	= "A.O.K. 4"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}	
				
	#VI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 41 }
		name 	= "11. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 42 }
		name 	= "12. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}				

	#VIII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 43 }
		name 	= "15. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 44 }
		name 	= "16. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}				

	#XVIII. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 45 }
		name 	= "21. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 46 }
		name 	= "25. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}				

	#VIII. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 47 }
		name 	= "15. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 48 }
		name 	= "16. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}			

	#XVIII. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 49 }
		name 	= "21. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 50 }
		name 	= "25. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	

	#4. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 51 }
		name 	= "4. Ersatz-Division" 
		type 	= infantry
		model 	= 0
		strength = 5
		experience = 0
		}		

	#8. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 52 }
		name 	= "8. Ersatz-Division" 
		type 	= infantry
		model 	= 0
		strength = 5
		experience = 0
		}	
				
	}
				
				
##5. AOK

landunit = {										
	id 	= { type = 10100 id = 53 }
	name 	= "5. Armee"
	location = 127   #Saarbrücken
	leader 	= 855011 #Generalleutnant Wilhelm Kronprinz von Preußen
		
	division = {
		id 	= { type = 10100 id = 54 }
		name 	= "A.O.K. 5"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}		
				
	#V. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 55 }
		name 	= "9. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 56 }
		name 	= "10. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}

	#XIII. (Württembergisches) Armeekorps
			
	division = {
		id 	= { type = 10100 id = 57 }
		name 	= "26. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 58 }
		name 	= "27. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#XVI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 59 }
		name 	= "33. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 60 }
		name 	= "34. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}

	#V. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 61 }
		name 	= "9. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 62 }
		name 	= "10. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	

	#VI. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 63 }
		name 	= "11. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 64 }
		name 	= "12. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
				
	#2. Landwehrdivision	
			
	division = {
		id 	= { type = 10100 id = 65 }
		name 	= "2. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	}

			
##6. AOK

landunit = {										
	id 	= { type = 10100 id = 66 }
	name 	= "6. Armee"
	location = 104   #Saint-Avold [Metz]
	leader 	= 855012 #Generaloberst Rupprecht Kronprinz von Bayern
		
	division = {
		id 	= { type = 10100 id = 67 }
		name 	= "A.O.K. 6"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}

	#XXI. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 68 }
		name 	= "31. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= engineer
		brigade_model = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 69 }
		name 	= "42. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#I. Bayerisches Armeekorps
			
	division = {
		id 	= { type = 10100 id = 70 }
		name 	= "1. bayerische Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 71 }
		name 	= "2. bayerische Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#II. Bayerisches Armeekorps
			
	division = {
		id 	= { type = 10100 id = 72 }
		name 	= "3. bayerische Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 73 }
		name 	= "4. bayerische Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#III. Bayerisches Armeekorps
			
	division = {
		id 	= { type = 10100 id = 74 }
		name 	= "5. bayerische Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 75 }
		name 	= "6. bayerische Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}				

	#I. Bayerisches Reservekorps
			
	division = {
		id 	= { type = 10100 id = 76 }
		name 	= "1. bayerische Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 77 }
		name 	= "5. bayerische Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	

	#Garde-Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 78 }
		name 	= "Garde-Ersatz-Division"
		type 	= infantry
		model 	= 1
		strength = 10
		experience = 0
		}	

	#10. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 79 }
		name 	= "10. Ersatz-Division"
		type 	= infantry
		model 	= 0
		strength = 10
		experience = 0
		}	

	#19. Ersatz-Division	
				
	division = {
		id 	= { type = 10100 id = 80 }
		name 	= "19. Ersatz-Division"
		type 	= infantry
		model 	= 0
		strength = 10
		experience = 0
		}	
	}
  
##7. AOK

landunit = {										
	id 	= { type = 10100 id = 81 }
	name 	= "7. Armee"
	location = 107   #Straßburg
	leader 	= 855013 #Generaloberst Josias von Heeringen
		
	division = {
		id 	= { type = 10100 id = 82 }
		name 	= "A.O.K. 7"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}   
	
	#XIV. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 83 }
		name 	= "28. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 84 }
		name 	= "29. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}

	#XV. Armeekorps
			
	division = {
		id 	= { type = 10100 id = 85 }
		name 	= "30. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 86 }
		name 	= "39. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra 	= artillery
		brigade_model = 1
		}				

	#XIV. Reservekorps
			
	division = {
		id 	= { type = 10100 id = 87 }
		name 	= "26. Reserve-Division" 
		type 	= infantry
		model = 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 88 }
		name 	= "28. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	

	#Bayerische Ersatz-Division

	division = {
		id 	= { type = 10100 id = 108 }
		name 	= "Bayerische Ersatz-Division"  
		type 	= infantry
		model 	= 0
		strength = 5
		experience = 0
		}
	}
 

##8. AOK

landunit = {										
	id 	= { type = 10100 id = 92 }
	name 	= "8. Armee"
	location = 181   #Marienburg [Danzig]
	leader 	= 855015 #Generaloberst Max von Prittwitz und Gaffron
		
	division = {
		id 	= { type = 10100 id = 93 }
		name 	= "A.O.K. 8"
		type 	= hq
		model 	= 1
		strength = 40
		experience = 0
		}   	
	}
	
	#I. Armeekorps
	
landunit = {										
	id 	= { type = 10100 id = 94 }
	name 	= "I. Armeekorps"
	location = 184   #Königsberg
	leader 	= 855016 #Generalleutnant Hermann von Francois
			
	division = {
		id 	= { type = 10100 id = 95 }
		name 	= "1. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 96 }
		name 	= "2. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
	}

	#XVII. Armeekorps
	
landunit = {										
	id 	= { type = 10100 id = 99 }
	name 	= "XVII. Armeekorps"
	location = 181   #Danzig
	leader 	= 855464 #General der Kavallerie August von Mackensen
			
	division = {
		id 	= { type = 10100 id = 100 }
		name 	= "35. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra	= artillery
		brigade_model = 1
		}	
			
	division = {
		id 	= { type = 10100 id = 101 }
		name 	= "36. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		extra	= artillery
		brigade_model = 1
		}	
	}
 
	#XX. Armeekorps
	
landunit = {										
	id 	= { type = 10100 id = 102 }
	name 	= "XX. Armeekorps"
	location = 185   #Allenstein
	leader 	= 855103 #General der Infanterie Friedrich von Scholtz
			
	division = {
		id 	= { type = 10100 id = 103 }
		name 	= "37. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 104 }
		name 	= "41. Infanterie-Division" 
		type 	= infantry
		model 	= 3
		strength = 90
		experience = 0
		}	
	}

	#I. Reservekorps
	
landunit = {										
	id 	= { type = 10100 id = 105 }
	name 	= "I. Reservekorps"
	location = 185   #Königsberg
	leader 	= 855053 #General der Infanterie Otto von Below
			
	division = {
		id 	= { type = 10100 id = 106 }
		name 	= "1. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 107 }
		name 	= "36. Reserve-Division" 
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}

	#Landwehr-Korps
	
landunit = {										
	id 	= { type = 10100 id = 109 }
	name 	= "Landwehr-Korps"
	location = 224   #Posen
	leader 	= 855018 #General der Infanterie Remus von Woyrsch
			
	division = {
		id 	= { type = 10100 id = 110 }
		name 	= "3. Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 111 }
		name 	= "4. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
	}

	#3. Reserve Division
	
landunit = {										
	id 	= { type = 10100 id = 112 }
	name 	= "3. Reserve-Division"
	location = 158   #Stettin
	leader 	= 855180 #Generalleutnant Kurt von Morgen
			
	division = {
		id 	= { type = 10100 id = 113 }
		name 	= "3. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
	}
  
	#1. Landwehr-Division "Goltz""
	
landunit = {										
	id 	= { type = 10100 id = 114 }
	name 	= "1. Landwehr-Division"
	location = 152   #Schleswig-Holstein
	#leader = 855087 #Generalleutnant Georg Frh von der Goltz (not in db)
			
	division = {
		id 	= { type = 10100 id = 115 }
		name 	= "1. Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
	}
			
	#1. Kavallerie-Division
	
landunit = {										
	id 	= { type = 10100 id = 116 }
	name 	= "1. Kavallerie-Division"
	location = 185   #Königsberg
	leader 	= 855181 #Generalleutnant Hermann Brecht
			
	division = {
		id 	= { type = 10100 id = 117 }
		name 	= "1. Kavallerie-Division"  
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
	}			

	#Höhere Kavallerie-Kommandeur Nr. 1
	
landunit = {										
	id 	= { type = 10100 id = 120 }
	name 	= "Höhere Kavallerie-Kommandeur Nr. 1"
	location = 129   #Prüm 
	leader 	= 855499 #General der Kavallerie Manfred FH von Richthofen
			
	division = {
		id 	= { type = 10100 id = 121 }
		name 	= "Garde-Kavallerie Division"  
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 122 }
		name 	= "5. Kavallerie-Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
	}			
			
	#Höhere Kavallerie-Kommandeur Nr. 2
	
landunit = {										
	id 	= { type = 10100 id = 123 }
	name 	= "Höhere Kavallerie-Kommandeur Nr. 2"
	location = 110   #Monschau [Eupen]
	leader 	= 855027 #General der Kavallerie Georg von der Marwitz
			
	division = {
		id 	= { type = 10100 id = 124 }
		name 	= "2. Kavallerie-Division"  
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 125 }
		name 	= "4. Kavallerie-Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
				
	division = {
		id 	= { type = 10100 id = 126 }
		name 	= "9. Kavallerie-Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
	}			

	#Höhere Kavallerie-Kommandeur Nr. 3
	
landunit = {										
	id 	= { type = 10100 id = 127 }
	name 	= "Höhere Kavallerie-Kommandeur Nr. 3"
	location = 104   #Saint-Avold [Metz]
	leader 	= 855075 #General der Kavallerie Rudolf Ritter von Frommel
			
	division = {
		id 	= { type = 10100 id = 128 }
		name 	= "7. Kavallerie Division"  
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 129 }
		name 	= "8. (sächs.) Kavallerie-Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
				
	division = {
		id 	= { type = 10100 id = 130 }
		name 	= "Bayerische Kavallerie-Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
	}

	#Höhere Kavallerie-Kommandeur Nr. 4
	
landunit = {										
	id 	= { type = 10100 id = 131 }
	name 	= "Höhere Kavallerie-Kommandeur Nr. 4"
	location = 127   #Saarbrücken
	leader 	= 855167 #General der Kavallerie Gustav FH von Hollen
			
	division = {
		id 	= { type = 10100 id = 132 }
		name 	= "3. Kavallerie Division"  
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 133 }
		name 	= "6. Kavallerie Division" 
		type 	= cavalry
		model 	= 2
		strength = 50
		experience = 0
		}	
	}			

	#Festungstruppen Straßburg
	
landunit = {										
	id 	= { type = 10100 id = 134 }
	name 	= "Festung Straßburg"
	location = 107   #Straßburg
	leader 	= 855190 #Karl Albert von Knoerzer
			
	division = {
		id 	= { type = 10100 id = 135 }
		name 	= "30. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}			

	#Festungstruppen Metz
	
landunit = {										
	id 	= { type = 10100 id = 136 }
	name 	= "Festung Metz"
	location = 104   #Metz
	#leader = 855087 #Viktor Karl Wilhelm Bausch (not in db)
			
	division = {
		id 	= { type = 10100 id = 137 }
		name 	= "33. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}

	#Festungstruppen Thorn
	
landunit = {										
	id 	= { type = 10100 id = 138 }
	name 	= "Festung Thorn"
	location = 222   #Thorn
	#leader = 855087 #Max Philipp von Schmettau (not in db)
			
	division = {
		id 	= { type = 10100 id = 139 }
		name 	= "35. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}
			
	#IX. Armeekorps
landunit = {										
	id 	= { type = 10100 id = 140 }
	name 	= "IX. Reservekorps"
	location = 152   #Kiel
	leader 	= 855056 #Max von Boehn			
	
	division = {
		id 	= { type = 10100 id = 141 }
		name 	= "17. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}
				
	division = {
		id 	= { type = 10100 id = 142 }
		name 	= "18. Reserve-Division"
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}			
	}

#Additional divisions by Eric
		
landunit = {										
	id 	= { type = 10100 id = 89 }
	name 	= "I. Landwehr-Gruppe"
	location = 163
	#leader = ?	#?		 

	division = {
		id 	= { type = 10100 id = 90 }
		name 	= "18. Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
			
	division = {
		id 	= { type = 10100 id = 91 }
		name 	= "5. Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 97 }
		name 	= "11. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	division = {
		id 	= { type = 10100 id = 98 }
		name 	= "16. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	division = {
		id 	= { type = 10100 id = 143 }
		name 	= "7. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	division = {
		id 	= { type = 10100 id = 144 }
		name 	= "8. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	division = {
		id 	= { type = 10100 id = 145 }
		name 	= "9. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	division = {
		id 	= { type = 10100 id = 146 }
		name 	= "10. Landwehr-Division" 
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}
	}
	
landunit = {										
	id 	= { type = 10100 id = 147 }
	name 	= "I. bayerische Gruppe"
	location = 179
			
	division = {
		id 	= { type = 10100 id = 148 }
		name 	= "1. bayerische Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 149 }
		name 	= "6. bayerische Landwehr-Division"  
		type 	= infantry
		model 	= 1
		strength = 5
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 150 }
		name 	= "6. bayerische Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 151 }
		name 	= "8. bayerische Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 200 }
		name 	= "Alpenkorps"  
		type 	= bergsjaeger
		model 	= 2
		strength = 10
		experience = 0
		}	
	}	
landunit = {										
	id 	= { type = 10100 id = 152 }
	name 	= "I. Reserve-Gruppe"
	location = 163
			
	division = {
		id 	= { type = 10100 id = 153 }
		name 	= "39. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 154 }
		name 	= "43. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 155 }
		name 	= "44. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 156 }
		name 	= "45. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 157 }
		name 	= "46. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 158 }
		name 	= "47. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 159 }
		name 	= "48. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 160 }
		name 	= "49. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 161 }
		name 	= "50. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 162 }
		name 	= "51. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 163 }
		name 	= "52. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 164 }
		name 	= "53. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 165 }
		name 	= "54. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}						
landunit = {										
	id 	= { type = 10100 id = 166 }
	name 	= "II. Reserve-Gruppe"
	location = 163
			
	division = {
		id 	= { type = 10100 id = 167 }
		name 	= "75. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 168 }
		name 	= "76. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 171 }
		name 	= "77. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 172 }
		name 	= "78. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 173 }
		name 	= "79. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 174 }
		name 	= "80. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 175 }
		name 	= "81. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 176 }
		name 	= "82. Reserve-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}					
landunit = {										
	id 	= { type = 10100 id = 177 }
	name 	= "I. Infanterie-Gruppe"
	location = 163
			
	division = {
		id 	= { type = 10100 id = 178 }
		name 	= "83. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 181 }
		name 	= "84. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 182 }
		name 	= "85. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 183 }
		name 	= "86. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 184 }
		name 	= "87. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 185 }
		name 	= "88. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 186 }
		name 	= "89. Infanterie-Division"  
		type 	= infantry
		model 	= 3
		strength = 10
		experience = 0
		}	
	}
landunit = {										
	id 	= { type = 10100 id = 197 }
	name 	= "I. Marine-Gruppe"
	location = 147
			
	division = {
		id 	= { type = 10100 id = 198 }
		name 	= "1. Marine-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	division = {
		id 	= { type = 10100 id = 199 }
		name 	= "2. Marine-Division"  
		type 	= infantry
		model 	= 2
		strength = 10
		experience = 0
		}	
	}		
					
########################################
#
# colonial troops 
#
########################################

 landunit = {   
 location = 850
 name   = "Schutztruppe für Deutsch-Ostafrika" 
 id = {  type = 10100 id = 169  }
 leader = 855031 # Paul von Lettow-Vorbeck

   Division = 
   {   
 id    = {  type = 10100 id = 170  } 
 name   = "Ostafrikanische Schutztruppe" 
 type   = militia
  model = 1 
    strength = 40
	experience = 5
max_strength = 100
    } 
   }

 landunit = {   
 location = 883
 name   = "Schutztruppe für Deutsch-Südwestafrika" 
 id = {  type = 10100 id = 187  }
   Division = 
   {   
 id    = {  type = 10100 id = 188  } 
 name   = "Südwestafrikanische Schutztruppe" 
 type   = militia
  model = 1 
    strength = 25
	experience = 5
max_strength = 25
    } 
   }

 landunit = {   
 location = 911
 name   = "Schutztruppe für Kamerun" 
 id = {  type = 10100 id = 189  }
   Division = 
   {   
 id    = {  type = 10100 id = 190  } 
 name   = "Kamerunische Schutztruppe" 
 type   = militia
  model = 1 
    strength = 30
	experience = 5
max_strength = 30
    } 
   }

 landunit = {   
 location = 950
 name   = "Schutztruppe für Togo" 
 id = {  type = 10100 id = 191  }
   Division = 
   {   
 id    = {  type = 10100 id = 192  } 
 name   = "Togo Schutztruppe" 
 type   = militia
  model = 1 
    strength = 5
	experience = 5
max_strength = 5
    } 
   }

 landunit = {   
 location = 1726
 name   = "Schutztruppe für Südsee" 
 id = {  type = 10100 id = 193  }
   Division = 
   {   
 id    = {  type = 10100 id = 194  } 
 name   = "Südsee Schutztruppe" 
 type   = militia
  model = 1 
    strength = 10
	experience = 5
max_strength = 10
    } 
   }

 landunit = {   
 location = 1328
 name   = "Garnison Kiautschou" 
 id = {  type = 10100 id = 179  }
  leader = 855497 # Admiral Meyer-Waldeck
 
   Division = 
   {   
 id    = {  type = 10100 id = 180  } 
 name   = " III. Seebataillon" 
 type   = militia
  model = 1
    strength = 20
    max_strength = 20
    locked = yes
	experience = 0
    } 
   } 


#### Kaiserliche Marine 1914 ######################
#
#
# http://www.gwpda.org/naval/hsfbsco.htm
# http://de.wikipedia.org/wiki/Kaiserliche_Marine#Hochseeflotte
#
#
###################################################

 navalunit = {   
 id = {  type = 10100 id = 503  }  
 name = "Ostasiengeschwader"  
 location = 1328 # Tsingtao   
  base = 1328
 leader = 855033 # Maximilan von Spee
 
	 Division = {  id = {  type = 10100 id = 504  } name = "SMS Scharnhorst" type = heavy_cruiser model = 1 experience = 30  }  
     Division = {  id = {  type = 10100 id = 505  } name = "SMS Gneisenau" type = heavy_cruiser model = 1 experience = 30  }  
     Division = {  id = {  type = 10100 id = 506  } name = "SMS Nürnberg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 507  } name = "SMS Leipzig" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 508  } name = "SMS Emden" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 509  } name = "S90" strength = 10 max_strength = 10 type = destroyer model = 0  } 
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 510  }  
     name = "SMS Dresden"  
     location = 2317 # at sea in the Caribbean 
     base = 152 # Kiel
  
     Division = {  id = {  type = 10100 id = 511  } name = "SMS Dresden" type = light_cruiser model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 512  }  
     name = "SMS Karlsruhe"  
     location = 2248 # at sea in the Atlantic 
     base = 909 # Yaounde
  
     Division = {  id = {  type = 10100 id = 513  } name = "SMS Karlsruhe" type = light_cruiser model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 514  }  
     name = "SMS Königsberg"  
     location = 850 # Dar es Salaam  
     base = 850 # Dar es Salaam  
  
     Division = {  id = {  type = 10100 id = 515  } name = "SMS Königsberg" type = light_cruiser model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 516  }  
     name = "Küstenverteidigungsgruppe Ostsee"  
     location = 153 # Rostock  
     base = 153 # Rostock  
	 leader = 855121 #Robert Mischke
  
     Division = {  id = {  type = 10100 id = 517  } name = "SMS Friedrich Karl" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 518  } name = "SMS Augsburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 519  } name = "SMS Magdeburg" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 10100 id = 520  } name = "SMS Lübeck" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 521  } name = "SMS Amazone" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 522  } name = "SMS Undine" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 523  } name = "SMS Thetis" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 524  } name = "SMS Gazelle" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 525  } name = "G 39" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 526  } name = "G 88" type = destroyer model = 0  } 
  }  
  
 navalunit = {   
     id = {  type = 10100 id = 527  }  
     name = "1. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
	 leader = 855034 #Franz Hipper
  
     Division = {  id = {  type = 10100 id = 528  } name = "SMS Seydlitz" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 529  } name = "SMS Von der Tann" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 530  } name = "SMS Moltke" type = battlecruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 531  } name = "SMS Blücher" type = heavy_cruiser model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 532  }  
     name = "2. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
     leader = 855129 #Leberecht Maass	 
  
     Division = {  id = {  type = 10100 id = 533  } name = "SMS Straßburg" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 10100 id = 534  } name = "SMS Stralsund" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 10100 id = 536  } name = "SMS Kolberg" type = light_cruiser model = 1  } 
     Division = {  id = {  type = 10100 id = 650  } name = "SMS Mainz" type = light_cruiser model = 1  } 
     Division = {  id = {  type = 10100 id = 651  } name = "SMS Cöln" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 537  } name = "V 26" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 538  } name = "Vulkan" type = destroyer model = 2  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 539  }  
     name = "3. Aufklärungsschwadron"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 540  } name = "SMS München" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 541  } name = "SMS Danzig" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 542  } name = "SMS Stuttgart" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 543  } name = "SMS Hela" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 544  } name = "SMS Frauenlob" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 652  } name = "SMS Rostock" type = light_cruiser model = 2  }
    }  

 navalunit = {   
     id = {  type = 10100 id = 545  }  
     name = "4. Aufklärungsschwadron"  
     location = 152 # Kiel  
     base = 152 # Kiel  
     leader = 855125 #Hubert von Rebeur-Paschwitz
  
     Division = {  id = {  type = 10100 id = 546  } name = "SMS Roon" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 547  } name = "SMS Yorck" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 548  } name = "SMS Prinz Adalbert" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 549  } name = "SMS Prinz Heinrich" type = heavy_cruiser model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 550  }  
     name = "5. Aufklärungsschwadron"  
     location = 153 # Rostock  
     base = 153 # Rostock  
  
     Division = {  id = {  type = 10100 id = 551  } name = "SMS Hansa" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 552  } name = "SMS Victoria Luise" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 553  } name = "SMS Hertha" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 554  } name = "SMS Vineta" type = light_cruiser model = 0  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 555  }  
     name = "Küstenverteidigungsschwadron Weser"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 556  } name = "SMS Berlin" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 557  } name = "SMS Ariadne" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 558  } name = "SMS Niobe" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 559  } name = "V 14" type = destroyer model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 560  }  
     name = "Küstenverteidigungsschwadron Elbe"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
  
     Division = {  id = {  type = 10100 id = 561  } name = "SMS Nymphe" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 562  } name = "SMS Medusa" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 563  } name = "7. Flottille" type = destroyer model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 564  }  
     name = "Flottenflaggschiff"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen
	 leader = 855035 #Friedrich von Ingenohl
  
     Division = {  id = {  type = 10100 id = 565  } name = "SMS Friedrich der Große" type = battleship model = 2  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 566  }  
     name = "I. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     leader = 855219 # Wilhelm von Lans
  
     Division = {  id = {  type = 10100 id = 572  } name = "SMS Ostfriesland" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 571  } name = "SMS Helgoland" type = battleship model = 2  }   
     Division = {  id = {  type = 10100 id = 573  } name = "SMS Thüringen" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 574  } name = "SMS Oldenburg" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 567  } name = "SMS Nassau" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 568  } name = "SMS Westfalen" type = battleship model = 2  } 
     Division = {  id = {  type = 10100 id = 569  } name = "SMS Rheinland" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 570  } name = "SMS Posen" type = battleship model = 2  }      
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 575  }  
     name = "II. Geschwader"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
     leader = 855032 # Reinhard Scheer
  
     Division = {  id = {  type = 10100 id = 616  } name = "SMS Preußen" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 576  } name = "SMS Deutschland" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 578  } name = "SMS Hannover" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 653  } name = "SMS Pommern" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 580  } name = "SMS Schleswig-Holstein" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 579  } name = "SMS Schlesien" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 577  } name = "SMS Hessen" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 583  } name = "SMS Lothringen" type = battleship model = 1  } 
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 584  }  
     name = "III. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     # leader = Konteradmiral Felix Funke -> Ehrhardt Schmidt
  
     Division = {  id = {  type = 10100 id = 588  } name = "SMS Prinzregent Luitpold" type = battleship model = 2  }
     Division = {  id = {  type = 10100 id = 585  } name = "SMS Kaiser" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 586  } name = "SMS Kaiserin" type = battleship model = 2  }  
     Division = {  id = {  type = 10100 id = 587  } name = "SMS König Albert" type = battleship model = 2  }    
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 589  }  
     name = "IV. Geschwader"  
     location = 147 # Wilhelmshafen  
     base = 147 # Wilhelmshafen 
     leader = 855514 # Erhard Schmidt
  
     Division = {  id = {  type = 10100 id = 590  } name = "SMS Wittelsbach" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 591  } name = "SMS Wettin" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 594  } name = "SMS Zähringen" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 593  } name = "SMS Schwaben" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 592  } name = "SMS Mecklenburg" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 581  } name = "SMS Braunschweig" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 582  } name = "SMS Elsaß" type = battleship model = 1  }     
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 595  }  
     name = "V. Geschwader"  
     location = 147 # Wilhelmshafen 
     base = 147 # Wilhelmshafen 
     # CO unknown
     leader = 855119 # Max von Grapow, from August
   
     Division = {  id = {  type = 10100 id = 598  } name = "SMS Kaiser Wilhelm II" type = battleship model = 1  }
     Division = {  id = {  type = 10100 id = 600  } name = "SMS Kaiser Wilhelm der Große" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 599  } name = "SMS Kaiser Barbarossa" type = battleship model = 1  } 
     Division = {  id = {  type = 10100 id = 597  } name = "SMS Kaiser Friedrich III" type = battleship model = 1  }    
     Division = {  id = {  type = 10100 id = 601  } name = "SMS Kaiser Karl der Große" type = battleship model = 1  }  
     Division = {  id = {  type = 10100 id = 596  } name = "SMS Wörth" type = battleship model = 0  }  
     Division = {  id = {  type = 10100 id = 602  } name = "SMS Brandenburg" type = battleship model = 0  }  
    } 
  
 navalunit = {   
     id = {  type = 10100 id = 603  }  
     name = "VI. Geschwader"  
     location = 152 # Kiel  
     base = 152
     leader = 855120 # Richard Eckermann
  
     Division = {  id = {  type = 10100 id = 611  } name = "SMS Hildebrand" type = heavy_cruiser model = 0  }
     Division = {  id = {  type = 10100 id = 604  } name = "SMS Beowulf" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 605  } name = "SMS Odin" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 606  } name = "SMS Ägir" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 607  } name = "SMS Frithjof" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 608  } name = "SMS Siegfried" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 609  } name = "SMS Hagen" type = heavy_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 610  } name = "SMS Heimdall" type = heavy_cruiser model = 0  }    
     Division = {  id = {  type = 10100 id = 612  } name = "3. Flottille" type = destroyer model = 0  }  
     Division = {  id = {  type = 10100 id = 613  } name = "8. Flottille" type = destroyer model = 0  }  
     Division = {  id = {  type = 10100 id = 614  } name = "9. Flottille" type = destroyer model = 0  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 615  }  
     name = "7. Schlachtschwadron"  
     location = 152 # Kiel  
     base = 152
     
     Division = {  id = {  type = 10100 id = 617  } name = "SMS Regensburg" type = light_cruiser model = 2  }  
     Division = {  id = {  type = 10100 id = 619  } name = "SMS Stettin" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 620  } name = "SMS Hamburg" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 621  } name = "SMS Fürst Bismarck" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 622  } name = "SMS Freya" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 623  } name = "SMS Albatros" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 624  } name = "SMS Nautilus" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 625  } name = "SMS Gefion" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 626  } name = "SMS Bremen" type = light_cruiser model = 1  }  
     Division = {  id = {  type = 10100 id = 627  } name = "SMS Kaiserin Augusta" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 628  } name = "SMS Arcona" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10100 id = 629  } name = "10. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 630  } name = "11. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 631  } name = "12. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 632  } name = "13. Flottille" type = destroyer model = 2  }  
     Division = {  id = {  type = 10100 id = 633  } name = "14. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 634  } name = "15. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 635  } name = "16. Flottille" type = destroyer model = 1  }  
     Division = {  id = {  type = 10100 id = 636  } name = "17. Flottille" type = destroyer model = 0  }  
    }  
  
 navalunit = {   
     id = {  type = 10100 id = 637  }  
     name = "U-bootdivision"  
     location = 154 # Hamburg  
     base = 154
  
     Division = {  id = {  type = 10100 id = 638  } name = "1. Flottille" type = submarine model = 0  }  
     Division = {  id = {  type = 10100 id = 639  } name = "2. Flottille" type = submarine model = 0  }  
     Division = {  id = {  type = 10100 id = 640  } name = "3. Flottille" type = submarine model = 0  }  
    }  
  
  navalunit = {   
     id = {  type = 10100 id = 641  }  
     name = "Mittelmeer-Division"  
     location = 406 # Pola # 2736 # Eastern Adriatic Sea  
     base = 406 # Pola
	 
    Division = {  id = {  type = 10100 id = 642  } name = "SMS Goeben" type = battlecruiser model = 0  }  
	 Division = {  id = {  type = 10100 id = 643  } name = "SMS Breslau" type = light_cruiser model = 2  } 
   }  

 ### Luftwaffe 2752 
 airunit = {   
 id = {  type = 10100 id = 800  }  
 name = "Luftschifftruppe"  
 base = 142 # Duesseldorf
 location = 142 # Duesseldorf
 leader = 855208 # Strasser

 Division = {  id = {  type = 10100 id = 801  } name = "Luftschiff-Abteilung 1"  
 strength = 15 type = tactical_bomber model = 1  } 
 Division = {  id = {  type = 10100 id = 802  } name = "Luftschiff-Abteilung 2"  
 strength = 15 type = tactical_bomber model = 0  } 
  } 

 airunit = {   
 id = {  type = 10100 id = 806  }  
 name = "Fliegertruppe - West"  
 base = 131 # Cologne
 location = 131 # Cologne
 
 Division = {  id = {  type = 10100 id = 807  } name = "Feldflieger-Abteilung 1"  
 strength = 8 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10100 id = 808  }  
 name = "Fliegertruppe - Ost"  
 base = 224 # Poznan
 location = 224 # Poznan
 
 Division = {  id = {  type = 10100 id = 809  } name = "Feldflieger-Abteilung 2"  
 strength = 6 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10100 id = 810  }  
 name = "Seefliegertruppe"  
 base =  152 # Kiel
 location =  152 # Kiel
 
 Division = {  id = {  type = 10100 id = 811  } name = "I. Seeflieger-Abteilung"  
 strength = 5 type = interceptor model = 0  } 
 Division = {  id = {  type = 10100 id = 812  } name = "II. Seeflieger-Abteilung"  
 strength = 5 type = interceptor model = 0  } 
  }  
   
   
   
  # ####under developement ##### 
 division_development = {   
     id = {  type = 10100 id = 644  }  
     name = "SMS Großer Kurfürst"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = july day = 29  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 645  }  
     name = "SMS König"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = august day = 10  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 646  }  
     name = "SMS Markgraf"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = october day = 1  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 647  }  
     name = "SMS Kronprinz"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1914 month = november day = 8  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 648  }  
     name = "SMS Derfflinger"  
     type = battlecruiser  
     model = 1  
     cost = 0.4  
     date = {  year = 1914 month = september day = 1  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 649  }  
     name = "SMS Lützow"  
     type = battlecruiser  
     model = 1 
     cost = 0.4  
     date = {  year = 1916 month = march day = 1 }  
    } 
 division_development = {   
     id = {  type = 10100 id = 1649  }  
     name = "SMS Hindenburg"  
     type = battlecruiser  
     model = 1 
     cost = 0.4  
     date = {  year = 1917 month = may day = 10 }  
    } 
 division_development = {   
     id = {  type = 10100 id = 6147  }  
     name = "SMS Bayern"  
     type = battleship  
     model = 4
     cost = 0.4  
     date = {  year = 1916 month = july day = 15  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 6148  }  
     name = "SMS Baden"  
     type = battleship  
     model = 4
     cost = 0.4  
     date = {  year = 1917 month = march day = 14  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 6149  }  
     name = "SMS Sachsen"  
     type = battleship  
     model = 4
     cost = 0.4  
     date = {  year = 1917 month = april day = 14  }  
    }  
 division_development = {   
     id = {  type = 10100 id = 654  }  
     name = "SMS Pillau"  
     type = light_cruiser 
     model = 2  
     cost = 0.2  
     date = {  year = 1914 month = december day = 1  }  
    } 
 division_development = {   
     id = {  type = 10100 id = 655  }  
     name = "SMS Graudenz"  
     type = light_cruiser 
     model = 2  
     cost = 0.2  
     date = {  year = 1914 month = august day = 1  }  
    }  

} 
