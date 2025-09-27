 
 ############################## 
 # Country definition for FRA # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = FRA 
	#flag_ext               = _Vic
	ai                     = "vic_1941.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	capital                = 74 
	# Resource Reserves 
	energy                 = 200
	metal                  = 200
	rare_materials         = 200
	oil                    = 200 
	supplies               = 200 
	money                  = 50 
	manpower               = 66
	transports             = 130 
	escorts                = 30 
       
  diplomacy =
  { relation = { tag = GER value = 75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 50 }
    relation = { tag = U03 value = 50 }
  }
   SpyInfo                = {  country = "FRA" NumberOfSpies = 9  } 
   # Togoland 
   # Metropolitan France 
   nationalprovinces      = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 
          
                             } 
   # Metropolitan France 
   ownedprovinces         = {  85  90  86  94  89  81  82  80  84  79  77  71  78  74  75    
                              72  73  93  2000  1767  1768  724  726  725  721  717  718  722     738 731  734  735  732  736  
                              733  727  744  737  728   729  741  740  742  745  746  747  748  749 833 981  
                              982    943 944 942  984  985  974  978  980  966    965  975  971  972  973  976  959  957  949 951 967  960  
                              962  1001 1002 996     
                              950 948 92 91 87
         83 88
         1003  946 947 945 958 961 968 970 977 983 986 720 723 730 743 
           719 999 1000 
         1730 1752 739 76  
                             } 
   # Togoland 
   # Metropolitan France 
   controlledprovinces    = {  85  90  86  94  89  81  82  80  84  79  77  71  78  74  75   
                              72  73  93  2000  1767  1768  724  726  725  721  717  718  722     738 731  734  735  732  736  
                              733  727  744  737  728    729  741  740  742  745  746  747  748  749 833 981  
                              982    943 944 942  984  985  974  978  980  966    965  975  971  972  973  976  959  957  949 951 967  960  
                              962  1001 1002 996     
                              950 948 92 76 91 87
         83 88 
        1003  946 947 945 958 961 968 970 977 983 986 720 723 730 743 
          999 1000 719 
         1730 1752 739  
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
		 
	# FRA 1941 techs 
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
     democratic        = 3 
     political_left    = 4 
     free_market       = 3 
     freedom           = 3 
     professional_army = 3 
     defense_lobby     = 8 
     interventionism   = 1 
    } 

   headofstate            = {  type = 9 id = 5188  } 
   headofgovernment       = {  type = 9 id = 5189  } 
   foreignminister        = {  type = 9 id = 5198  } 
   armamentminister       = {  type = 9 id = 5205  } 
   ministerofsecurity     = {  type = 9 id = 5212  } 
   ministerofintelligence = {  type = 9 id = 5193  } 
   chiefofstaff           = {  type = 9 id = 5219  } 
   chiefofarmy            = {  type = 9 id = 5221  } 
   chiefofnavy            = {  type = 9 id = 5009  } 
   chiefofair             = {  type = 9 id = 5196  } 
   dormant_ministers      = {  5001 5002 5003 5004 5005 5006 5007 5008 5010 5011 5012 5014 5015 5016 5017 5018 5019 5020 5021 5022 5024 5027
                               5028 5029 5031 5032 5033 5034 5036 5037 5038 5041 5042 5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 5054
                               5055 5056 5057 5058 5060 5062 5065 5067 5068 5069 5070 5071 5073 5074 5075 5076 5077 5078 5080 5081 5083 5084
                               5086 5087 5089 5091 5094 5095 5096 5099 5100 5102 5104 5105 5106 5110 5113 5114 5115 5116 5117 5118 5120 5121
                               5122 5123 5125 5126 5127 5128 5129 5130 5131 5132 5133 5134 5135 5136 5137 5139 5141 5142 5143 5146 5147 5150 
                               5151 5152 5153 5154 5155 5156 5157 5158 5159 5160 5161 5162 5163 5165 5166 5167 5168 5172 5173 5174 5176 5178
                               5180 5181 5182 5185 5187 5194
                            }
   dormant_leaders        = {  5001 5004 5005 5007 5011 5013 5014 5016 5017 5020 5024 5027 5030 5031 5033 5034 5035 5039 5041 5042 5043 5044
                               5045 5047 5048 5051 5052 5057 5058 5061 5064 5065 5072 5071 5077 5079 5083 5086 5088 5090 5092 5097 5100 5101 
                               5103 5106 5107 5108 5109 5111 5115 5118 5128 5133 5135 5136 5138 5143 5146 5149 5151 5153 5165 5167 5170 5172
                               5174 5176 5177 5178 5179 5180 5185 5187 5189 5191 5192 5193 5194 5196 5199 5200 5205 5208 5209 5210 5211 5214
                               5216 5219 5220 5221 5223 5225 5226 5227 5228 5094
                            }
   dormant_teams          = {  5006 5016 5017 5019 5021 5022 }
   # #################
   # ###FRENCH OOB####
   # #################

	# ############
	# French Navy
	# ############
   landunit = 
   { id       = {  type = 13500 id = 1  } 
     name     = "Armée Métropolitaine" 
     location = 74 
     division = 
     { id       = {  type = 13500 id = 2  } 
       name     = "Armée Métropolitaine" 
       type     = hq 
       model    = 2 
       strength = 30 
      } 
     division = 
     { id       = {  type = 13500 id = 3  } 
       name     = "1ème Division d'Infanterie" 
       type     = infantry 
       model    = 10 
       strength = 60 
      } 
     division = 
     { id       = {  type = 13500 id = 4  } 
       name     = "3ème Division d'Infanterie" 
       type     = infantry 
       model    = 8 
       strength = 60 
      } 
     division = 
     { id       = {  type = 13500 id = 5  } 
       name     = "8ème Division d'Infanterie" 
       type     = infantry 
       model    = 9 
       strength = 60 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 6  } 
     name     = "Troupes de France Metropolitan" 
     location = 85 
     division = 
     { id       = {  type = 13500 id = 7  } 
       name     = "2ème Division d'Infanterie" 
       type     = infantry 
       model    = 10 
       strength = 60 
       extra    = artillery
       brigade_model = 7
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 8  } 
     name     = "Troupes de France Metropolitan" 
     location = 89 
     division = 
     { id       = {  type = 13500 id = 9  } 
       name     = "4ème Division d'Infanterie" 
       type     = infantry 
       model    = 9 
       strength = 60 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 10  } 
     name     = "Troupes de France Metropolitan" 
     location = 75 
     division = 
     { id       = {  type = 13500 id = 11  } 
       name     = "6ème Division d'Infanterie" 
       type     = infantry 
       model    = 9 
       strength = 60 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 12  } 
     name     = "Troupes de France Metropolitan" 
     location = 90 
     division = 
     { id       = {  type = 13500 id = 13  } 
       name     = "7ème Division d'Infanterie" 
       type     = infantry 
       model    = 9 
       strength = 60 
       extra    = anti_air
       brigade_model = 2
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 14  } 
     name     = "Troupes de France Metropolitan" 
     location = 77 
     division = 
     { id       = {  type = 13500 id = 15  } 
       name     = "1ère Division d'Infanterie Motorisée" 
       type     = motorized 
       model    = 1 
       strength = 40 
       extra    = medium_armor
       brigade_model = 0
      } 
     division = 
     { id       = {  type = 13500 id = 16  } 
       name     = "3ème Division d'Infanterie Motorisée" 
       type     = motorized 
       model    = 1 
       strength = 40 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 19  } 
     name     = "Troupes de Maroc" 
     location = 718 
     division = 
     { id       = {  type = 13500 id = 20  } 
       name     = "Division de Casablanca" 
       type     = infantry 
       model    = 8 
       strength = 40 
       extra    = medium_armor
       brigade_model = 0
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 21  } 
     name     = "Troupes de Maroc" 
     location = 717 
     division = 
     { id       = {  type = 13500 id = 22  } 
       name     = "Division de Fez" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 23  } 
     name     = "Troupes de Maroc" 
     location = 722 
     division = 
     { id       = {  type = 13500 id = 24  } 
       name     = "Division de Marrakech" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 25  } 
     name     = "Troupes de Maroc" 
     location = 724 
     division = 
     { id       = {  type = 13500 id = 26  } 
       name     = "Division de Meknès" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 27  } 
     name     = "XIX. Région Militaire" 
     location = 727
     division = 
     { id       = {  type = 13500 id = 28  } 
       name     = "Division Territoriale d'Alger" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
     division = 
     { id       = {  type = 13500 id = 29  } 
       name     = "Groupement d'Alger" 
       type     = cavalry 
       model    = 9 
       strength = 30 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 30  } 
     name     = "XIX. Région Militaire" 
     location = 728
     division = 
     { id       = {  type = 13500 id = 31  } 
       name     = "Division Territoriale d'Oran" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
     division = 
     { id       = {  type = 13500 id = 32  } 
       name     = "Groupement d'Oran" 
       type     = cavalry 
       model    = 9 
       strength = 30 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 33  } 
     name     = "XIX. Région Militaire" 
     location = 735
     division = 
     { id       = {  type = 13500 id = 34  } 
       name     = "Division Territoriale de Constantine" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
     division = 
     { id       = {  type = 13500 id = 35  } 
       name     = "Groupement de Constantine" 
       type     = cavalry 
       model    = 9 
       strength = 30 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 36  } 
     name     = "Commandement Supérieur des Troupes de Tunisie" 
     location = 747
     division = 
     { id       = {  type = 13500 id = 37  } 
       name     = "Division Territoriale de Tunis" 
       type     = infantry 
       model    = 8 
       strength = 40 
      } 
     division = 
     { id       = {  type = 13500 id = 38  } 
       name     = "Groupement de Tunis" 
       type     = cavalry 
       model    = 9 
       strength = 30 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 39  } 
     name     = "Troupes de Djibouti" 
     location = 833
     division = 
     { id       = {  type = 13500 id = 40  } 
       name     = "Troupes de Djibouti" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 41  } 
     name     = "Troupes de Guyanne" 
     location = 2000
     division = 
     { id       = {  type = 13500 id = 42  } 
       name     = "Troupes de Guyanne" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 43  } 
     name     = "Troupes de Gabon" 
     location = 966
     division = 
     { id       = {  type = 13500 id = 44  } 
       name     = "Troupes de Gabon" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 45  } 
     name     = "Troupes de Afrique" 
     location = 978
     division = 
     { id       = {  type = 13500 id = 46  } 
       name     = "1ére Division d'Infanterie Coloniale" 
       type     = infantry 
       model    = 7 
       strength = 25 
      } 
     division = 
     { id       = {  type = 13500 id = 47  } 
       name     = "2éme Division d'Infanterie Coloniale" 
       type     = infantry 
       model    = 7 
       strength = 25 
      } 
     division = 
     { id       = {  type = 13500 id = 48  } 
       name     = "3éme Division d'Infanterie Coloniale" 
       type     = infantry 
       model    = 7 
       strength = 25 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 49  } 
     name     = "Troupes de Madagascar" 
     location = 1002
     division = 
     { id       = {  type = 13500 id = 50  } 
       name     = "1ère Division d'Infanterie de Réserve" 
       type     = militia 
       model    = 4 
       strength = 55 
      } 
    } 
   landunit = 
   { id       = {  type = 13500 id = 51  } 
     name     = "Troupes de Fort de France" 
     location = 1768
     division = 
     { id       = {  type = 13500 id = 52  } 
       name     = "Troupes de Fort de France" 
       type     = militia 
       model    = 4 
       strength = 35 
      } 
    } 

	navalunit = { 
		id = { type = 13500 id = 300 } 
		name = "1ère Flotte de France" 
		location = 728 
		base = 728 
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
			id = { type = 13500 id = 320 } 
			name = "Jeanne d'Arc" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 305 } 
			name = "Lamotte-Picquet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 303 } 
			name = "Primauguet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 327 } 
			name = "Algérie" 
			type = heavy_cruiser 
			model = 4 
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
			id = { type = 13500 id = 306 } 
			name = "La Galissonnière" 
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
			id = { type = 13500 id = 328 } 
			name = "Marsellaise" 
			type = light_cruiser 
			model = 4
			}
		division = { 
			id = { type = 13500 id = 307 } 
			name = "1ère Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 308 } 
			name = "2ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 321 } 
			name = "3ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 13500 id = 309 } 
			name = "1ère Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		}
	navalunit = { 
		id = { type = 13500 id = 3000 } 
		name = "2ème Flotte de France" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 3010 } 
			name = "Commandant Teste" 
			type = escort_carrier 
			model = 0 
			extra1 = naval_anti_air_l
			brigade_model1 = 0
			}
		division = { 
			id = { type = 13500 id = 311 } 
			name = "Provence" 
			type = battleship 
			model = 3 
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
			id = { type = 13500 id = 322 } 
			name = "4ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 323 } 
			name = "5ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			}
		}
	navalunit = { 
		id = { type = 13500 id = 3001 } 
		name = "3ème Flotte de France" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 335 } 
			name = "6ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 13500 id = 324 } 
			name = "2ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		}
	navalunit = { 
		id = { type = 13500 id = 3002 } 
		name = "Dunkerque" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 302 } 
			name = "Dunkerque" 
			type = battlecruiser 
			model = 3 
			} 
		}
	navalunit = { 
		id = { type = 13500 id = 3003 } 
		name = "Strasbourg" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 316 } 
			name = "Strasbourg" 
			type = battlecruiser 
			model = 3 
			}  
		}
	navalunit = { 
		id = { type = 13500 id = 341 } 
		name = "1ère Flotte de Sous-Marins" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 342 } 
			name = "1ère Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 343 } 
			name = "2ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 344 } 
			name = "3ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 345 } 
			name = "4ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 346 } 
			name = "5ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 3460 } 
			name = "6ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 13500 id = 3004 } 
		name = "Escadre de Afrique" 
		location = 978 
		base = 978 
		division = { 
			id = { type = 13500 id = 301 } 
			name = "Béarn" 
			type = escort_carrier 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 3110 } 
			name = "Richelieu" 
			type = battleship 
			model = 7 
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
			id = { type = 13500 id = 336 } 
			name = "7ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 337 } 
			name = "8ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 340 } 
			name = "3ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 360 } 
			name = "4ème Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 364 } 
			name = "5ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 363 } 
			name = "6ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		division = { 
			id = { type = 13500 id = 361 } 
			name = "7ème Flottille de Convoi" 
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
     location = 77 
     base     = 77 
     Division = 
     {  id       = {  type = 13500 id = 501  } 
       name     = "Groupe de Chasse 21" 
       strength = 80 
       type     = interceptor 
       model    = 6 
      }
     Division = 
     {  id       = {  type = 13500 id = 502  } 
       name     = "Groupe de Chasse 23" 
       strength = 80 
       type     = interceptor 
	   model = 7
      } 
     Division = 
     {  id       = {  type = 13500 id = 503  } 
       name     = "Groupe de Bombardement Tactique 1" 
       strength = 50 
       type     = tactical_bomber 
	   model = 4
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 504  } 
     name     = "Zone d'Opérations Afrique du Nord" 
     location = 747 
     base     = 747 
     Division = 
     {  id       = {  type = 13500 id = 505  } 
       name     = "Groupe de Chasse 24" 
       strength = 60 
       type     = interceptor 
       model    = 7
      }  
     Division = 
     {  id       = {  type = 13500 id = 506  } 
       name     = "Groupe de Bombardement Tactique 2" 
       strength = 30 
       type     = tactical_bomber 
	   model = 4
      }
     Division = 
     {  id       = {  type = 13500 id = 507  } 
       name     = "Groupe de Bombardement d'Assaut 18" 
       strength = 30 
       type     = cas 
       model    = 1
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 508  } 
     name     = "Commande Aérienne Afrique Ouest" 
     location = 978 
     base     = 978 
     Division = 
     {  id       = {  type = 13500 id = 510  } 
       name     = "Groupe de Bombardement Naval 2" 
       strength = 20 
       type     = naval_bomber 
	   model = 2
      }
    }
} 
 
