 
 ############################## 
 # Country definition for FRA # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = FRA 
   capital                = 55
   ai 			  = "fra_1940.ai"
   ai_settings	= { flags = { FRABuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
   # Resource Reserves 
   energy                 = 8000
   metal                  = 4000
   rare_materials         = 2000
   oil                    = 1000 
   supplies               = 1000 
   money                  = 100 
   manpower               = 5000
   transports             = 350 
   escorts                = 60     
   
   diplomacy = 
   {  relation = {  tag = AST value = 150  } 
     relation = 
     {  tag        = BEL 
       value      = 120 
       guaranteed = {  day = 29 month = december year = 1935  } 
      } 
     relation = {  tag = BHU value = 150  } 
     relation = {  tag = BUL value = 20  } 
     relation = {  tag = CAN value = 150  } 
     relation = {  tag = SLO value = -200  } 
     relation = {  tag = ENG value = 150  } 
     relation = {  tag = EST value = 65  } 
     relation = {  tag = FIN value = 85  } 
     relation = {  tag = GER value = -200  } 
     relation =
     {  tag        = GRE
       value      = 75
       guaranteed = { day = 13 month = april year = 1939 }
     }
     relation = {  tag = HOL value = 75 } 
     relation = {  tag = HUN value = -70  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = -100  } 
     relation = {  tag = JAP value = -40  } 
     relation = {  tag = LAT value = 65  } 
     relation = {  tag = LIT value = 65  } 
     relation = {  tag = LUX value = 120  } 
     relation = {  tag = NEP value = 150  } 
     relation = {  tag = NOR value = 150 } 
     relation = {  tag = NZL value = 150  } 
     relation = {  tag = OMN value = 150  }  
     relation =
     {  tag        = ROM
       value      = 50
       guaranteed = { day = 13 month = april year = 1939 }
     } 
     relation = {  tag = SAF value = 150  } 
     relation = {  tag = SAU value = 10  } 
     relation = {  tag = SCH value = 1 } 
     relation = {  tag = SIA value = -100  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = SPA value = -65  } 
     relation = {  tag = SWE value = 80 }
     relation = 
     {  tag        = TUR 
       value      = 50 
       guaranteed = {  day = 7 month = january year = 1935  } 
      } 
     relation = {  tag = U03 value = 50 access = yes  }  
     relation = {  tag = U04 value = 50 access = yes  }  
     relation = {  tag = U05 value = 75  }
     relation = {  tag = USA value = 65  } 
     relation = {  tag = YEM value = 150  } 
     relation = 
     {  tag        = YUG 
       value      = 50 
       guaranteed = {  day = 7 month = january year = 1935  } 
      } 
    } 
   SpyInfo                = {  country = "FRA" NumberOfSpies = 9  } 
   # Togoland 
   # Metropolitan France 
   nationalprovinces      = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 
          
                             } 
   # Metropolitan France 
   ownedprovinces         = {  37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 
                             } 
   # Togoland 
   # Metropolitan France 
   controlledprovinces    = {  37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 
                             }
	claimedprovinces = {
                            717 718 719 720 721 722 723 724 725 726 #Morocco 
                            727 728 729 730 731 732 733 734 735 736 737 738 739 743 #Algeria
                            740 741 742 744 745 746 747 748 749 # Tunisia
                            907 908 909 910 911 914 915 917 918 919 #French Congo and Cameroon
                            920 921 922 923 924 925 926 927 928 #Central Africa
                            942 943 944 945 946 947 #Niger
                            948 949 950 951 #Slave Coast
                            957 958 959 #Volta
                            960 961 962 #Ivory Coast
                            965 966 967 968 970 #Guinean Coast
                            971 972 973 974 975 976 977 #Malian Valleys
                            978 980 #Senegambia
                            981 982 983 #Mauretania
                            984 985 986 #Malian Desert
                            833 #Djbouti
                            1001 1002 1003 996 999 1000 #Madagascar + nearby Island
                            
                            2000  #Cayenne 
                            1752 1767 1768 #French West Indies
                            1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 #French Pacific Island
                            2135 #Saint Pierre island near Newfoundland
						}		 
		 
	# FRA 1940 techs 
	# ###################### 
	techapps = { 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	#Heavy Tanks
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-Tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	#Basic Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Motorised Inf
	1396
	# Naval Infantry
	1560 1570 1580 
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990
	
	# Agriculture 
	5700 5710 5010 5020 5030
	# Machine Tools 
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Oil Refining 
	5190 5200
	# Computers 
	5310 54010 54020 54030 5320
	# Cryptography
	5316 5326 5327 5350 5360
	# Radar
	5410 5416
	# Atomic Research 
	5470 5480
	# Medicine
	5600 5610 5620 5630 5640
	# Exp. Rocket
	5560

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Aircraft Carrier 
	3510 3520
	# Light carrier 
	12100 12110 12120
	# Submarine 
	3610 3620 3630 3640 3650 3660
	# Battle Cruiser
	3310 3320 3330 3340
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820 3830

	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# CAS
	4400 4170 4280
	# Tactical Bombers
	4600 4610 4620 4630 4120 4130 4140
	# Multi-role fighter
	4300 4310 4320 4330 4340 4040
	# Escort Fighters
	4050
	# Seaplanes
	4740 4750 4760 4770 4780 4790
	# Strategic Bombers
	4800 4810 4820
	# Naval Bombers
	4700 4710 4190
	# CAG
	4900 4910 4920
	# Air Transports
	4290 4250
	
	#Great War Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6560 6030 6110 6120 6130 6900

	#Naval Doctrines
	# Theories
	8010 8020 8030 8040 8050 8060 8070 8080 
	# Amphibious Warfare
	82300
	# Naval Logistics
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactic (Fleet-in-Being)
	8900 8910 8920 8930 8940 8950 8960
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Carrier Tactics
	81650 81850
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 
	27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 
	} 
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 10 
     free_market       = 8 
     freedom           = 10 
     professional_army = 8 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 5001  } 
   headofgovernment       = {  type = 9 id = 5021  } 
   foreignminister        = {  type = 9 id = 5037  } 
   armamentminister       = {  type = 9 id = 5057  } 
   ministerofsecurity     = {  type = 9 id = 5088  } 
   ministerofintelligence = {  type = 9 id = 5108  } 
   chiefofstaff           = {  type = 9 id = 5007  } 
   chiefofarmy            = {  type = 9 id = 5008  } 
   chiefofnavy            = {  type = 9 id = 5139  } 
   chiefofair             = {  type = 9 id = 5148  }
   dormant_ministers      = {  5002 5016 5019 5003 5031 5035 5004 5072 5005 5098 5006  } 

   #################################################################################### 
   # OOB French Troops - May 1940 by omega20
   # ref: http://france1940.free.fr/oob/oob.html
   # ref: http://niehorster.orbat.com/020_france/40-05-10/afv_40-05-10_original.html
   #################################################################################### 

   ##########################################
   ## FRENCH ARMY
   ##########################################

   ##########################################
   #
   # SUPREME HEADQUARTERS
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 1  } 
     name     = "GQG" 
     leader   = 5076 # Gamelin
     location = 55 # Paris
     division = 
     { id    = {  type = 13503 id = 1  } 
       name  = "Grand Quartier Général" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 2  } 
       name  = "2 Dywizja Strzelców Pieszych" 
       type  = infantry
       model = 9
       strength = 100
     }
   }
   # SHQ Reserves
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 2  } 
     name     = "Réserve de GQG" 
     location = 55 # Paris
     division = 
     { id    = {  type = 13503 id = 3  } 
       name  = "3e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
     division = 
     { id    = {  type = 13503 id = 4  } 
       name  = "10e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 5  } 
       name  = "14e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 6  } 
       name  = "23e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 3  } 
     name     = "Réserve de GQG" 
     location = 66 
     division = 
     { id    = {  type = 13503 id = 7  } 
       name  = "28e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 8  } 
       name  = "29e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 9  } 
       name  = "36e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 10  } 
       name  = "43e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 4  } 
     name     = "Réserve de GQG" 
     location = 66 
     division = 
     { id    = {  type = 13503 id = 11  } 
       name  = "1ère Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 12  } 
       name  = "7e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 13  } 
       name  = "5e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 14  } 
       name  = "7e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   # 1st Armored Group
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 5  } 
     name     = "1ère Groupement Cuirassé" 
     #leader   = ###### Keller
     location = 99 # Reims
     division = 
     { id    = {  type = 13503 id = 15  } 
       name  = "2e Div. Cuirassée de Réserve" 
       type  = light_armor
       model = 2
       strength = 50
       extra = engineer
       brigade_model = 4
     }
     division = 
     { id    = {  type = 13503 id = 16  } 
       name  = "3e Div. Cuirassée de Réserve" 
       type  = light_armor
       model = 2
       strength = 50
     }
   }
   ##########################################
   #
   # NORTH-EASTERN THEATRE OF OPERATIONS
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 6  } 
     name     = "QG Théâtre d'Opérations Nord-Est" 
     location = 54
     division = 
     { id    = {  type = 13503 id = 17  } 
       name  = "Théâtre d'Opérations Nord-Est" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 18  } 
       name  = "68e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
   }
   ##########################################
   #
   # ARMY GROUP 1
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 7  } 
     name     = "QG 1ère Groupe d'Armées" 
     leader   = 5013 # Billote
     location = 50 # Amiens
     division = 
     { id    = {  type = 13503 id = 19  } 
       name  = "1ère Groupe d'Armées" 
       type  = hq 
       model = 2 
       strength = 90 
     }
   }
   # 7th Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 8  } 
     name     = "QG VIIIe Armée" 
     leader   = 5083 # Giraud
     location = 51 # Dunkirk
     division = 
     { id    = {  type = 13503 id = 20  } 
       name  = "VIIIe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 21  } 
       name  = "4e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 22  } 
       name  = "21e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 23  } 
       name  = "60e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 24  } 
       name  = "1ère Division Légère Mécanisée" 
       type  = light_armor
       model = 1
       strength = 85
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 9  } 
     name     = "Ière Corps d'Armée Motorisé" 
     #leader   = ###### Sciard
     location = 51 # Marquise
     division = 
     { id    = {  type = 13503 id = 25  } 
       name  = "25e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 10  } 
     name     = "XVIe Corps d'Armée" 
     leader   = 5069 # Fagalde
     location = 51 # Cassel
     division = 
     { id    = {  type = 13503 id = 26  } 
       name  = "9e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 11  } 
     name     = "Secteur Fortifié des Flandres" 
     location = 51 # Flandres
     division = 
     { id    = {  type = 13503 id = 27  } 
       name  = "Secteur Fortifié des Flandres" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   # 1st Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 12  } 
     name     = "QG Ière Armée" 
     leader   = 5016 # Blanchard
     location = 52 # Lille
     division = 
     { id    = {  type = 13503 id = 28  } 
       name  = "Ière Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 29  } 
       name  = "1ére Div. Cuirassée de Réserve" 
       type  = light_armor
       model = 2
       strength = 50
       extra = heavy_armor 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 30  } 
       name  = "32e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 13  } 
     name     = "Secteur Fortifié de l'Escaut" 
     location = 52 # L'Escaut
     division = 
     { id    = {  type = 13503 id = 31  } 
       name  = "Secteur Fortifié de l'Escaut" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 14  } 
     name     = "Corps de Cavalerie" 
     leader   = 5127 # Prioux
     location = 52 # Mellet
     division = 
     { id    = {  type = 13503 id = 32  } 
       name  = "2e Division Légère Mécanisée" 
       type  = light_armor
       model = 1
       strength = 85
       extra = anti_air 
       brigade_model = 3
     }
     division = 
     { id    = {  type = 13503 id = 33  } 
       name  = "3e Division Légère Mécanisée" 
       type  = light_armor
       model = 1
       strength = 85
       extra = armored_car
       brigade_model = 3
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 15  } 
     name     = "IIIe Corps d'Armée" 
     #leader   = ###### De Fornel de la Laurencie
     location = 52 # Bouchain
     division = 
     { id    = {  type = 13503 id = 34  } 
       name  = "1ère Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
     division = 
     { id    = {  type = 13503 id = 35  } 
       name  = "2e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 16  } 
     name     = "IVe Corps d'Armée" 
     #leader   = ###### Boris
     location = 52 # Lecateau
     division = 
     { id    = {  type = 13503 id = 36  } 
       name  = "15e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
     division = 
     { id    = {  type = 13503 id = 37  } 
       name  = "1ère Division Marocaine" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 17  } 
     name     = "Ve Corps d'Armée" 
     #leader   = ###### Bloch
     location = 52 # Landrecies
     division = 
     { id    = {  type = 13503 id = 38  } 
       name  = "12e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
     division = 
     { id    = {  type = 13503 id = 39  } 
       name  = "5e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
       extra = medium_armor
       brigade_model = 0
     }
     division = 
     { id    = {  type = 13503 id = 40  } 
       name  = "101e Div. d'Inf. de Forteresse" 
       type  = garrison
       model = 4
       strength = 100
     }
   }
   # 9th Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 18  } 
     name     = "QG IXe Armée" 
     leader   = 5037 # Corap
     location = 103 # Hirson
     division = 
     { id    = {  type = 13503 id = 41  } 
       name  = "IXe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 42  } 
       name  = "1ère Div. Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 43  } 
       name  = "4e Div. Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
       extra = armored_car 
       brigade_model = 4
     }
     division = 
     { id    = {  type = 13503 id = 44  } 
       name  = "4e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 45  } 
       name  = "53e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 19  } 
     name     = "IIe Corps d'Armée" 
     #leader   = ###### Bouffet
     location = 103 # Rozou-Sur-Serre
     division = 
     { id    = {  type = 13503 id = 46  } 
       name  = "5e Div. d'Inf. Motorisée" 
       type  = motorized
       model = 0
       strength = 75
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 20  } 
     name     = "XIe Corps d'Armée" 
     leader   = 5118 # Martin
     location = 102 # Etreaupont
     division = 
     { id    = {  type = 13503 id = 47  } 
       name  = "18e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 48  } 
       name  = "22e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 21  } 
     name     = "XLIe Corps d'Armée de Forteresse" 
     #leader   = ###### Libaud
     location = 102 # Signy-L'Abbaye
     division = 
     { id    = {  type = 13503 id = 49  } 
       name  = "61e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 50  } 
       name  = "102e Div. d'Inf. de Forteresse" 
       type  = garrison
       model = 4
       strength = 100
     }
   }
   # 2nd Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 22  } 
     name     = "QG IIe Armée" 
     leader   = 5094 # Huntziger
     location = 96 # Longwy
     division = 
     { id    = {  type = 13503 id = 51  } 
       name  = "IIe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 52  } 
       name  = "2e Div. Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 53  } 
       name  = "5e Div. Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
       extra = armored_car 
       brigade_model = 4
     }
     division = 
     { id    = {  type = 13503 id = 54  } 
       name  = "71e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 23  } 
     name     = "Secteur Fortifié de Montmédy" 
     location = 96 # Montmédy
     division = 
     { id    = {  type = 13503 id = 55  } 
       name  = "Secteur Fortifié de Montmédy" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 24  } 
     name     = "Xe Corps d'Armée" 
     leader   = 5089 # Grandsard
     location = 96 # Buzancy
     division = 
     { id    = {  type = 13503 id = 56  } 
       name  = "3e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 57  } 
       name  = "55e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 25  } 
     name     = "XVIIIe Corps d'Armée" 
     #leader   = ###### Rochard
     location = 96 # Dun-Sur-Meuse
     division = 
     { id    = {  type = 13503 id = 58  } 
       name  = "1ère Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 59  } 
       name  = "3e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 60  } 
       name  = "41e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   ##########################################
   #
   # ARMY GROUP 2
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 26  } 
     name     = "QG 2e Groupe d'Armées" 
     leader   = 5126 # Pretelat
     location = 100 # Verdun
     division = 
     { id    = {  type = 13503 id = 61  } 
       name  = "2e Groupe d'Armées" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 62  } 
       name  = "4e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 63  } 
       name  = "87e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   # 3rd Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 27  } 
     name     = "QG IIIe Armée" 
     leader   = 5036 # Condé
     location = 104 # Metz
     division = 
     { id    = {  type = 13503 id = 64  } 
       name  = "IIIe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 65  } 
       name  = "3e Div. Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 66  } 
       name  = "6e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 67  } 
       name  = "7e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 68  } 
       name  = "8e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 69  } 
       name  = "6e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 70  } 
       name  = "6e Div. d'Inf. Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 28  } 
     name     = "Corps d'Armée Colonial" 
     #leader   = ###### Freydenberg
     location = 104 # Betange
     division = 
     { id    = {  type = 13503 id = 71  } 
       name  = "2e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 72  } 
       name  = "56e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 29  } 
     name     = "Secteur Fortifié de Thionville" 
     location = 104 # Thionville
     division = 
     { id    = {  type = 13503 id = 73  } 
       name  = "Secteur Fortifié de Thionville" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 30  } 
     name     = "VIe Corps d'Armée" 
     #leader   = ###### Loiseau
     location = 104 # Verny
     division = 
     { id    = {  type = 13503 id = 74  } 
       name  = "26e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 75  } 
       name  = "42e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 31  } 
     name     = "Secteur Fortifié de Boulay" 
     location = 104 # Boulay
     division = 
     { id    = {  type = 13503 id = 76  } 
       name  = "Secteur Fortifié de Boulay" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 32  } 
     name     = "XXIVe Corps d'Armée" 
     #leader   = ###### Loiseau
     location = 104 # Etain
     division = 
     { id    = {  type = 13503 id = 77  } 
       name  = "51e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 33  } 
     name     = "XLIIe Corps d'Armée de Forteresse" 
     #leader   = ###### Sivot
     location = 104 # Briey
     division = 
     { id    = {  type = 13503 id = 78  } 
       name  = "20e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 79  } 
       name  = "58e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   # 4th Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 34  } 
     name     = "QG IVe Armée" 
     leader   = 5130 # Requin
     location = 107 # Strasbourg
     division = 
     { id    = {  type = 13503 id = 80  } 
       name  = "IVe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 81  } 
       name  = "1 Dywizja Grenadierów" 
       type  = infantry
       model = 9
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 82  } 
       name  = "45e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 35  } 
     name     = "IXe Corps d'Armée" 
     #leader   = ###### Laure
     location = 107 # Landroff
     division = 
     { id    = {  type = 13503 id = 83  } 
       name  = "11e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
       extra = artillery
       brigade_model = 6
     }
     division = 
     { id    = {  type = 13503 id = 84  } 
       name  = "47e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 36  } 
     name     = "Secteur Fortifié de Faulquemont" 
     location = 107 # Faulquemont
     division = 
     { id    = {  type = 13503 id = 85  } 
       name  = "Secteur Fortifié de Faulquemont" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 37  } 
     name     = "XXe Corps d'Armée" 
     leader   = 5093 # Hubert
     location = 107 # Harskirchen
     division = 
     { id    = {  type = 13503 id = 86  } 
       name  = "52e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 87  } 
       name  = "82e Div. d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 38  } 
     name     = "Secteur Fortifié de Sarre" 
     location = 107 # Sarre
     division = 
     { id    = {  type = 13503 id = 88  } 
       name  = "Secteur Fortifié de Sarre" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   # 5th Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 39  } 
     name     = "QG Ve Armée" 
     leader   = 5745 # Bourret
     location = 107 # Strasbourg
     division = 
     { id    = {  type = 13503 id = 89  } 
       name  = "Ve Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 90  } 
       name  = "44e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 40  } 
     name     = "VIIIe Corps d'Armée" 
     #leader   = ###### Frere
     location = 107 # Meisenthal
     division = 
     { id    = {  type = 13503 id = 91  } 
       name  = "24e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
       extra = light_armor_brigade 
       brigade_model = 1
     }
     division = 
     { id    = {  type = 13503 id = 92  } 
       name  = "31e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 41  } 
     name     = "Secteur Fortifié de Rohrbach" 
     location = 107 # Rohrbach
     division = 
     { id    = {  type = 13503 id = 93  } 
       name  = "Secteur Fortifié de Rohrbach" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 42  } 
     name     = "XIIe Corps d'Armée" 
     leader   = 5059 # Dentz
     location = 107 # Pfaffen Hoffen
     division = 
     { id    = {  type = 13503 id = 94  } 
       name  = "16e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 95  } 
       name  = "35e Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
     }
     division = 
     { id    = {  type = 13503 id = 96  } 
       name  = "70e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 43  } 
     name     = "Secteur Fortifié de Haguenau" 
     location = 107 # Haguenau
     division = 
     { id    = {  type = 13503 id = 97  } 
       name  = "Secteur Fortifié de Haguenau" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 44  } 
     name     = "XVIIe Corps d'Armée" 
     #leader   = ###### Noel
     location = 107 # Molsheim
     division = 
     { id    = {  type = 13503 id = 98  } 
       name  = "62e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 99  } 
       name  = "103e Div. d'Inf. de Forteresse" 
       type  = garrison
       model = 4
       strength = 100
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 45  } 
     name     = "XLIIIe Corps d'Armée de Forteresse" 
     #leader   = ###### Lescanne
     location = 107 # Ingwiller
     division = 
     { id    = {  type = 13503 id = 100  } 
       name  = "30e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 8
       strength = 60
     }
   }
   ##########################################
   #
   # ARMY GROUP 3
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 46  } 
     name     = "QG 3e Groupe d'Armées" 
     #leader   = ###### Besson
     location = 97 # Beufort
     division = 
     { id    = {  type = 13503 id = 101  } 
       name  = "3e Groupe d'Armées" 
       type  = hq 
       model = 2 
       strength = 90 
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 47  } 
     name     = "XLVe Corps d'Armée de Forteresse" 
     #leader   = ###### Daille
     location = 97 # Ornans
     division = 
     { id    = {  type = 13503 id = 102  } 
       name  = "57e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 103  } 
       name  = "63e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 48  } 
     name     = "Secteur Fortifié de Jura Central" 
     location = 97 # Jura Central
     division = 
     { id    = {  type = 13503 id = 104  } 
       name  = "Secteur Fortifié de Jura Central" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   # 8th Army
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 49  } 
     name     = "QG VIIIe Armée" 
     leader   = 5078 # Garchery
     location = 105 # Colmar
     division = 
     { id    = {  type = 13503 id = 105  } 
       name  = "VIIIe Armée" 
       type  = hq 
       model = 2 
       strength = 90 
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 50  } 
     name     = "VIIe Corps d'Armée" 
     #leader   = ###### Champon
     location = 105 # Vieux-Charmont
     division = 
     { id    = {  type = 13503 id = 106  } 
       name  = "13e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 107  } 
       name  = "27e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 9
       strength = 80
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 51  } 
     name     = "XIIIe Corps d'Armée" 
     #leader   = ###### Misserey
     location = 105 # Thann
     division = 
     { id    = {  type = 13503 id = 108  } 
       name  = "19e Division d'Infanterie" 
       type  = infantry
       model = 10
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 109  } 
       name  = "54e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 110  } 
       name  = "104e Div. d'Inf. de Forteresse" 
       type  = garrison
       model = 4
       strength = 100
     }
     division = 
     { id    = {  type = 13503 id = 111  } 
       name  = "105e Div. d'Inf. de Forteresse" 
       type  = garrison
       model = 4
       strength = 100
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 52  } 
     name     = "XLIVe Corps d'Armée de Forteresse" 
     #leader   = ###### Tence
     location = 105 # Dannemarie
     division = 
     { id    = {  type = 13503 id = 112  } 
       name  = "67e Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 53  } 
     name     = "Secteur Fortifié d'Altkirch" 
     location = 105 # Altkirch
     division = 
     { id    = {  type = 13503 id = 113  } 
       name  = "Secteur Fortifié d'Altkirch" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 54  } 
     name     = "Secteur Fortifié de Montbéliard" 
     location = 105 # Montbéliard
     division = 
     { id    = {  type = 13503 id = 114  } 
       name  = "Secteur Fortifié de Montbéliard" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 55  } 
     name     = "Défense de Belfort" 
     location = 106 # Belfort
     division = 
     { id    = {  type = 13503 id = 115  } 
       name  = "Défense de Belfort" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   ##########################################
   #
   # SOUTH-EASTERN THEATRE OF OPERATIONS
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 56  } 
     name     = "QG Théâtre d'Opérations Sud-Est" 
     location = 93
     division = 
     { id    = {  type = 13503 id = 116  } 
       name  = "Théâtre d'Opérations Sud-Est" 
       type  = hq 
       model = 2 
       strength = 90 
     }
   }
   # Army of the Alps
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 57  } 
     name     = "QG Armée des Alpes" 
     #leader   = ###### Olry
     location = 90 # Grenoble
     division = 
     { id    = {  type = 13503 id = 117  } 
       name  = "Armée des Alpes" 
       type  = hq 
       model = 2 
       strength = 90 
     }
     division = 
     { id    = {  type = 13503 id = 118  } 
       name  = "8e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
       extra = light_armor_brigade 
       brigade_model = 1
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 58  } 
     name     = "Secteur Fortifié du Dauphiné" 
     location = 90
     division = 
     { id    = {  type = 13503 id = 119  } 
       name  = "Secteur Fortifié du Dauphiné" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 59  } 
     name     = "XIVe Corps d'Armée" 
     #leader   = ###### Beynet
     location = 91 # Uriage
     division = 
     { id    = {  type = 13503 id = 120  } 
       name  = "64e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 121  } 
       name  = "66e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 60  } 
     name     = "Secteur Fortifié du Rhône" 
     location = 91
     division = 
     { id    = {  type = 13503 id = 122  } 
       name  = "Secteur Fortifié du Rhône" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 61  } 
     name     = "Secteur Fortifié de Savoie" 
     location = 91
     division = 
     { id    = {  type = 13503 id = 123  } 
       name  = "Secteur Fortifié de Savoie" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 62  } 
     name     = "XVe Corps d'Armée" 
     #leader   = ###### Montagne
     location = 87 # Vence
     division = 
     { id    = {  type = 13503 id = 124  } 
       name  = "2e Div. d'Inf. Coloniale" 
       type  = infantry
       model = 8
       strength = 60
     }
     division = 
     { id    = {  type = 13503 id = 125  } 
       name  = "65e Div. d'Inf. Alpine" 
       type  = bergsjaeger
       model = 8
       strength = 60
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 63  } 
     name     = "Secteur Fortifié de Alpes-Maritimes" 
     location = 87
     division = 
     { id    = {  type = 13503 id = 126  } 
       name  = "Secteur Fortifié de Alpes-Maritimes" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 64  } 
     name     = "Secteur Fortifié de Nice" 
     location = 87
     division = 
     { id    = {  type = 13503 id = 127  } 
       name  = "Secteur Fortifié de Nice" 
       type  = garrison
       model = 4
       strength = 50
     }
   }
   ##########################################
   #
   # FRENCH EXPEDITIONARY FORCE TO SCANDINAVIA
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 65  } 
     name     = "CEFS" 
     leader   = 5006 # Audet
     location = 495
     division = 
     { id    = {  type = 13503 id = 128  } 
       name  = "1ère Div. Légère d'Infanterie" 
       type  = infantry
       model = 8
       strength = 15
       extra = armored_car
       brigade_model = 3
     }
     division = 
     { id    = {  type = 13503 id = 129  } 
       name  = "1ère Div. Légère de Chasseurs" 
       type  = bergsjaeger
       model = 8
       strength = 5
     }
     division = 
     { id    = {  type = 13503 id = 130  } 
       name  = "2e Div. Légère de Chasseurs" 
       type  = bergsjaeger
       model = 8
       strength = 5
     }
   }
   ##########################################
   #
   # NORTH AFRICAN THEATRE OF OPERATIONS
   ##########################################

   # Superior Command of Tunisian Troops
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 66  } 
     name     = "CSTT" 
     location = 747
     division = 
     { id    = {  type = 13503 id = 131  } 
       name  = "83e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 132  } 
       name  = "84e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 133  } 
       name  = "88e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 67  } 
     name     = "Front Sud-Tunisien" 
     location = 744 
     division = 
     { id    = {  type = 13503 id = 134  } 
       name  = "81e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 135  } 
       name  = "85e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 136  } 
       name  = "180e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 137  } 
       name  = "6e Div. Légère de Cavalerie" 
       type  = cavalry
       model = 9
       strength = 45
     }
   }
   # 19th Military Region
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 68  } 
     name     = "XIXe Région Militaire" 
     location = 727 
     division = 
     { id    = {  type = 13503 id = 138  } 
       name  = "182e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 69  } 
     name     = "XIXe Région Militaire" 
     location = 728
     division = 
     { id    = {  type = 13503 id = 139  } 
       name  = "181e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
     division = 
     { id    = {  type = 13503 id = 140  } 
       name  = "183e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 70  } 
     name     = "XIXe Région Militaire" 
     location = 734 
     division = 
     { id    = {  type = 13503 id = 141  } 
       name  = "Front Est Saharien" 
       type  = infantry
       model = 8
       strength = 40
     }
   }
   landunit = 
   { id       = {  type = 13500 id = 71  } 
     name     = "Troupes du Maroc" 
     location = 718 
     division = 
     { id    = {  type = 13503 id = 142  } 
       name  = "3e Division Marocaine" 
       type  = infantry
       model = 8
       strength = 50
     }
   }
   ##########################################
   #
   # EASTERN MEDITERRANEAN THEATRE OF OPERATIONS
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 72  } 
     name     = "Troupes du Levant" 
     location = 1016 
     division = 
     { id    = {  type = 13503 id = 143  } 
       name  = "86e Div. d'Inf. d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
     }
   }
   ##########################################
   #
   # COLONIES
   ##########################################
   landunit = 
   { id       = {  type = 13500 id = 73  } 
     name     = "Troupes d'Afrique occidentale" 
     location = 978 
     Division = 
     { id    = {  type = 13503 id = 144 } 
       name  = "Point d'appui de la flotte de Dakar" 
       type  = garrison 
       model = 4
       strength = 40
     }
   } 
   landunit = 
   { id       = {  type = 13500 id = 74  } 
     name     = "1ère Brigade de Tirailleurs Sénégalais" 
     location = 983 
     Division = 
     { id    = {  type = 13503 id = 145  } 
       name  = "1ère Brigade de Tirailleurs Sénégalais" 
       type  = militia 
       model = 4 
     } 
   }
   landunit = 
   { id       = {  type = 13500 id = 75  } 
     name     = "2e Brigade de Tirailleurs Sénégalais" 
     location = 976 
     Division = 
     { id    = {  type = 13503 id = 146  } 
       name  = "2e Brigade de Tirailleurs Sénégalais" 
       type  = militia 
       model = 4 
     } 
   }
   landunit = 
   { id       = {  type = 13500 id = 76  } 
     name     = "3e Brigade de Tirailleurs Sénégalais" 
     location = 962 
     Division = 
     { id    = {  type = 13503 id = 147  } 
       name  = "3e Brigade de Tirailleurs Sénégalais" 
       type  = militia 
       model = 4 
     } 
   }
   landunit = 
   { id       = {  type = 13500 id = 77  } 
     name     = "Troupes d'Afrique équatoriale" 
     location = 920 
     Division = 
     { id    = {  type = 13503 id = 148  } 
       name  = "Tirailleurs du Tchad" 
       type  = militia 
       model = 4 
     } 
   }
   landunit = 
   { id       = {  type = 13500 id = 78  } 
     name     = "Troupes d'Afrique orientale" 
     location = 1001 
     Division = 
     { id    = {  type = 13503 id = 149  } 
       name  = "Tirailleurs Malgaches" 
       type  = militia 
       model = 4 
     } 
   }

	# ############
	# French Navy
	# ############

	# 1ST SQUADRON
	navalunit = { 
		id = { type = 13500 id = 302 } #300
		name = "1ère Escadre" 
		location = 37 
		base = 37 
		division = { 
			id = { type = 13500 id = 301 } 
			name = "Béarn" 
			type = escort_carrier 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 300 } #302
			name = "Dunkerque" 
			type = battlecruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 316 } 
			name = "Strasbourg" 
			type = battlecruiser 
			model = 3 
			}
 		division = { 
			id = { type = 13500 id = 330 } 
			name = "George Leygues" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 331 } 
			name = "Gloire" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 332 } 
			name = "Montcalm" 
			type = light_cruiser 
			model = 4
			}
		division = { 
			id = { type = 13500 id = 335 } 
			name = "6e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 337 } 
			name = "8e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 339 } 
			name = "10e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 309 } 
			name = "1ère Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		} 
	# 2ND SQUADRON
	navalunit = { 
		id = { type = 13500 id = 315 } 
		name = "2e Escadre" 
		location = 728 
		base = 728 
		division = { 
			id = { type = 13500 id = 122 } #311
			name = "Provence" 
			type = battleship 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 142 } #326
			name = "Bretagne" 
			type = battleship 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 310 } 
			name = "Lorraine" 
			type = battleship 
			model = 3 
			extra1 = naval_anti_air_l
			extra2 = floatplane
			brigade_model2 = 4
			} 
		division = { 
			id = { type = 13500 id = 1730 } 
			name = "18e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 1731 } 
			name = "19e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 1732 } 
			name = "20e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 324 } 
			name = "2e Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		} 
	# 3RD SQUADRON
	navalunit = { 
		id = { type = 13500 id = 325 } 
		name = "3e Escadre" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 327 } 
			name = "Algérie" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			}
		division = { 
			id = { type = 13500 id = 333 } 
			name = "Foch" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 334 } 
			name = "Tourville" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 318 } 
			name = "Duquesne" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 312 } 
			name = "Colbert" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 313 } 
			name = "Dupleix" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 314 } 
			name = "Emile Bertin" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 139 } #323
			name = "5e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 336 } 
			name = "7e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 338 } 
			name = "9e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 340 } 
			name = "3e Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		} 
	# 1ST NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3103 } 
		name = "Forces navales de la Ière région" 
		location = 43 
		base = 43 
		division = { 
			id = { type = 13500 id = 150 } 
			name = "Surcouf" 
			type = nuclear_submarine 
			model = 0 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 3104 } 
			name = "16e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 366 } 
			name = "11e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		}
	# 2ND NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3102 } 
		name = "Forces navales de la IIe région" 
		location = 37 
		base = 37 
		division = { 
			id = { type = 13500 id = 3100 } 
			name = "Courbet" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3101 } 
			name = "Paris" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 308 } 
			name = "2e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 343 } 
			name = "2e Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 348 } 
			name = "6e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 350 } 
			name = "8e Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		}
	# 3RD NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3105 } 
		name = "Forces navales de la IIIe région" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 138 } #322
			name = "4e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 1716 } 
			name = "13e Flottille Légère de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 342 } 
			name = "1ère Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 344 } 
			name = "3e Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 346 } 
			name = "5e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 349 } 
			name = "7e Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 356 } 
			name = "13e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 358 } 
			name = "15e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		}
	# 4TH NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3106 } 
		name = "Forces navales de la IVe région" 
		location = 748 
		base = 748 
		division = { 
			id = { type = 13500 id = 328 } 
			name = "Marsellaise" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 329 } 
			name = "Jean de Vienne" 
			type = light_cruiser 
			model = 4
			}
		division = { 
			id = { type = 13500 id = 306 } 
			name = "La Galissonnière" 
			type = light_cruiser 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 307 } 
			name = "1ère Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 321 } 
			name = "3e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 3660 } 
			name = "12e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 360 } 
			name = "4e Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		}
	# 6th Light Squadron
	navalunit = { 
		id = { type = 13500 id = 3107 } 
		name = "6e Escadre Légère" 
		location = 728 
		base = 728 
		division = { 
			id = { type = 13500 id = 3260 } 
			name = "Commandant Teste" 
			type = escort_carrier 
			model = 0 
			extra1 = naval_anti_air_l
			brigade_model1 = 0
			} 
		division = { 
			id = { type = 13500 id = 1729 } 
			name = "17e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 355 } 
			name = "12e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 357 } 
			name = "14e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		} 
	# Bizerte Submarine Base
	navalunit = { 
		id = { type = 13500 id = 347 } 
		name = "Centre de Sous-Marins a Bizerte" 
		location = 748 
		base = 748 
		division = { 
			id = { type = 13500 id = 351 } 
			name = "9e Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 352 } 
			name = "10e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		} 
	# Morocco Naval Forces
	navalunit = { 
		id = { type = 13500 id = 3108 } 
		name = "Marine du Maroc" 
		location = 717 
		base = 717 
		division = { 
			id = { type = 13500 id = 1728 } 
			name = "16e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 0 
			} 
		division = { 
			id = { type = 13500 id = 345 } 
			name = "4e Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		} 
	# 5TH NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3109 } 
		name = "Forces navales de la Ve région" 
		location = 40 
		base = 40 
		division = { 
			id = { type = 13500 id = 1725 } 
			name = "14e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 2 
			} 
		}
	# FAR EAST NAVAL FORCES
	navalunit = { 
		id = { type = 13500 id = 3250 } 
		name = "Forces navales d'Extrême-Orient" 
		location = 1399 
		base = 1399 
		division = { 
			id = { type = 13500 id = 305 } 
			name = "Lamotte-Picquet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 317 } 
			name = "Suffren" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 1726 } 
			name = "15e Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 0 
			} 
		}
	# LEVANT NAVAL STATION
	navalunit = { 
		id = { type = 13500 id = 3110 } 
		name = "Station Navale du Levant" 
		location = 1019 
		base = 1019 
		division = { 
			id = { type = 13500 id = 354 } 
			name = "11e Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		}
	# WEST AFRICA NAVAL STATION
	navalunit = { 
		id = { type = 13500 id = 3111 } 
		name = "C.E.C. des Forces Maritimes Françaises" 
		location = 978 
		base = 978 
		division = { 
			id = { type = 13500 id = 303 } 
			name = "Primauguet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 304 } 
			name = "Duguay-Trouin" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 320 } 
			name = "Jeanne d'Arc" 
			type = light_cruiser 
			model = 3 
			} 
		}
	# TRANSPORT FLEET
	navalunit = { 
		id = { type = 13500 id = 359 } 
		name = "Transport Général" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 364 } 
			name = "5e Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 363 } 
			name = "6e Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		division = { 
			id = { type = 13500 id = 361 } 
			name = "7e Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3610 } 
			name = "8e Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3611 } 
			name = "9e Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		}      

	# ###############
	# French Airforce
	# ###############
   airunit = 
   {  id       = {  type = 13500 id = 500  } 
     name     = "Zone d'Opérations Aériennes Nord" 
     location = 55 
     base     = 55 
     Division = 
     {  id       = {  type = 13500 id = 501  } 
       name     = "Groupe de Chasse 21" 
       strength = 80 
       type     = interceptor 
       model    = 9 # Bloch 152
      }
     Division = 
     {  id       = {  type = 13500 id = 502  } 
       name     = "Groupe de Chasse 23" 
       strength = 80 
       type     = interceptor 
	   model = 8 # Morane 406
      } 
     Division = 
     {  id       = {  type = 13500 id = 503  } 
       name     = "Groupe de Chasse 25" 
       strength = 40 
       type     = interceptor 
	   model = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 504  } 
       name     = "Groupement de Chasse de Nuit" 
       strength = 40 
       type     = multi_role 
	   model = 5 # Potez 631
      }
     Division = 
     {  id       = {  type = 13500 id = 505  } 
       name     = "Groupe de Bombardement 6" 
       strength = 50 
       type     = tactical_bomber 
	   model = 6 # LéO 451
      }
     Division = 
     {  id       = {  type = 13500 id = 506  } 
       name     = "Groupe de Bombardement 9" 
       strength = 60 
       type     = tactical_bomber 
	   model = 4 # Amiot 143
      }
     Division = 
     {  id       = {  type = 13500 id = 507  } 
       name     = "Groupe de Bombardement d'Assaut 18" 
       strength = 30 
       type     = cas 
       model    = 2 # Bréguet 693
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 508  } 
     name     = "Zone d'Opérations Aériennes Est" 
     location = 66 
     base     = 66 
     Division = 
     {  id       = {  type = 13500 id = 509  } 
       name     = "Groupe de Chasse 22" 
       strength = 80 
       type     = interceptor 
       model    = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 510  } 
       name     = "Groupe de Bombardement 10" 
       strength = 50 
       type     = tactical_bomber 
	   model = 4 # Amiot 143
      }
     Division = 
     {  id       = {  type = 13500 id = 511  } 
       name     = "Groupe de Bombardement 15" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Farman F 222
      }
    }
   airunit = 
   {  location = 89 
     base     = 89 
     id       = {  type = 13500 id = 512  } 
     name     = "Zone d'Opérations Aériennes Sud" 
     Division = 
     {  id       = {  type = 13500 id = 513  } 
       name     = "Groupe de Chasse 24" 
       strength = 60 
       type     = interceptor 
       model    = 8 # Morane 406
      }  
     Division = 
     {  id       = {  type = 13500 id = 514  } 
       name     = "Groupe de Bombardement 1" 
       strength = 30 
       type     = tactical_bomber 
	   model = 6 # Glenn-Martin 167 F
      }
     Division = 
     {  id       = {  type = 13500 id = 515  } 
       name     = "Groupe de Bombardement 7" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Bloch 210
      }
     Division = 
     {  id       = {  type = 13500 id = 516  } 
       name     = "Groupe de Bombardement 11" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Bloch 210
      }
     Division = 
     {  id       = {  type = 13500 id = 517  } 
       name     = "Groupe de Bombardement d'Assaut 19" 
       strength = 20 
       type     = cas 
       model    = 1 # Bréguet 691
      }
    }
   airunit = 
   {  location = 89 
     base     = 89 
     id       = {  type = 13500 id = 518  } 
     name     = "Zone d'Opérations Aériennes des Alpes" 
     Division = 
     {  id       = {  type = 13500 id = 519  } 
       name     = "Groupe de Chasse 10" 
       strength = 30 
       type     = interceptor 
       model    = 8 # Morane 406
      }  
     Division = 
     {  id       = {  type = 13500 id = 520  } 
       name     = "Groupement Aérien de Transport" 
       strength = 20 
       type     = transport_plane 
       model    = 1 # Bréguet 691
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 521 } 
     name     = "Zone d'Opérations Africain" 
     location = 747 
     base     = 747 
     Division = 
     {  id       = {  type = 13500 id = 522  } 
       name     = "Groupe de Chasse 1" 
       strength = 50 
       type     = interceptor 
       model    = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 523  } 
       name     = "Groupe de Bombardement 2" 
       strength = 30 
       type     = naval_bomber 
	   model = 2 # Douglas DB-7
      }
     Division = 
     {  id       = {  type = 13500 id = 524  } 
       name     = "Groupe de Bombardement 8" 
       strength = 20 
       type     = tactical_bomber 
	   model = 4 # Bloch 200
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 525  } 
     name     = "Zone d'Opérations Moyen-Orient" 
     location = 1019 
     base     = 1019 
     Division = 
     {  id       = {  type = 13500 id = 526  } 
       name     = "Groupe de Chasse 2" 
       strength = 25 
       type     = interceptor 
       model    = 8 # Morane 406
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 527  } 
     name     = "Zone d'Opérations Indochine" 
     location = 1399 
     base     = 1399 
     Division = 
     {  id       = {  type = 13500 id = 528  } 
       name     = "Groupe de Bombardement 3" 
       strength = 30 
       type     = naval_bomber 
	   model = 2
      }
     Division = 
     {  id       = {  type = 13500 id = 529  } 
       name     = "Groupe Aérien Autonome 41/42" 
       strength = 40 
       type     = multi_role 
       model    = 3 # Potez 25
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 530  } 
     name     = "Zone d'Opérations Afrique Ouest" 
     location = 978 
     base     = 978 
     Division = 
     {  id       = {  type = 13500 id = 531  } 
       name     = "Groupe de Bombardement 4" 
       strength = 20 
       type     = naval_bomber 
	   model = 2
      }
    }
   # ################################# 
   # Naval units under construction 
   # #################################
   division_development = 
   {  name  = "Joffre" 
     type  = carrier 
     model = 1
     new_model = no
     cost  = 0.1
     id    = {  type = 13500 id = 600  } 
     date  = {  year = 1942 month = may day = 24  } 
      extra = cag 
      brigade_model = 2  
    }
   division_development = 
   {  name  = "De Grasse" 
     type  = light_cruiser 
     model = 5
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 601  } 
     date  = {  year = 1942 month = february day = 28  } 
    }
   division_development = 
   {  name  = "Richelieu" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 602  } 
     date  = {  year = 1940 month = june day = 18  } 
    }
   division_development = 
   {  name  = "Jean-Bart" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 603  } 
     date  = {  year = 1941 month = march day = 23  } 
    }
   division_development = 
   {  name  = "Clemenceau" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 604  } 
     date  = {  year = 1943 month = june day = 28  } 
    }
   division_development = 
   {  name  = "4e Division Cuirassée de Réserve" 
     type  = light_armor
     model = 2
     cost  = 0.1 
     id    = {  type = 13503 id = 150  } 
     date  = {  year = 1940 month = may day = 15  } 
    }
} 
 
