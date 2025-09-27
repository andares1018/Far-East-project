 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai                     = "GER_1939.ai" 
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes } }
	capital                = 163 
	manpower               = 1400 # based on http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm (1.8 million drafts in 1939)
	transports             = 85 
	escorts                = 23 
	# Resource Reserves 
	energy                 = 2500
	metal                  = 2000
	rare_materials         = 3000
	oil                    = 5000 
	supplies               = 5000 
	money                  = 100
	belligerence           = 20
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 125 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = ENG value = -200 }
    relation = { tag = EST value = 10 }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = -200 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 150 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = ITA
      value      = 150
      guaranteed = { day = 25 month = october year = 1936 }
    }
    relation = { tag = JAP value = 75 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POL value = -200 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 120 }
    relation = { tag = SAF value = -200 }
    relation =
    { tag        = SCH
      value      = 50
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SOV value = 20 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1936 }
    }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 10 }
    relation = { tag = YEM value = -200 }
    relation = { tag = YUG value = 50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = -50 }
    relation = {  tag = U05 value = 1  }
  }
   SpyInfo                = {  country = "GER" NumberOfSpies = 7  } 
   
   nationalprovinces      = {  104 105 107 109 110 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 216 221 224 225 261 389 392 
 # Austria 
 143 186 187 188 189 190 191 192 193 194 195 
 # Czechoslovakia
 200 206 205 197 199 207 198 201 196 202 204 203
 # Poland 
 226 230 222
                             } 
   ownedprovinces         = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185
         186 187 188 189 190 191 192 193 194 195 
         200 206 205 197 199 207 198 201 196 202 204
         261
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195
         200 206 205 197 199 207 198 201 196 202 204
         261
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
}
	# Germany 1940 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396 1400
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Engineers
	1830 1840 1850 1860 1870
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130
	# Airborne Infantry
	1670
	# Marine Division
	1560 1570 1580 1590

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Medium Tank
	2070
	# Heavy Tank
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260  
	# Battlecruiser
	3310 3320 3330 3340
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Aircraft Carrier 
	3510 3520 3530
	# Light Carrier 
	12100 12110 12120 12130
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Air Transport 
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040
	# CAS
	4400 4170
	# Strategic bomber
	4800 4810 4820 4220
	# Navalbomber
	4700 4710 4190
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920

	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090
	# Oil Refining
	5190 5200
	# Computers & cryptography
	5310 54010 54020 54030 5320 5316 5326 5327 5350 5360
	# Atomic Research
	5470 5480 5490
	# Exp. Rocket
	5560
	# Agriculture 
	5700 5710 5010 5020 5030
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6900 
	#Great War Hospital System 
	14000 14010 14020 14030

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9190 9200 9230 9240

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300 82310 82320
	# Naval Logistics
	82500 82510
	# Naval Interdiction
	8500 8510 8520 8550 8560 8570 8600 
	# Trade Interdiction Submarine
	8610 8620
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210
	# Rocket Tech
	7550 7560 
	} 
	
inventions = { 3000027 3000028 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 7 
     defense_lobby     = 10 
     interventionism   = 10 
    }
   headofstate            = {  type = 9 id = 1   } 
   headofgovernment       = {  type = 9 id = 2   } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 70  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 131 } 
   chiefofarmy            = {  type = 9 id = 146 } 
   chiefofnavy            = {  type = 9 id = 9   } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  3 4 5 7 8 14 26 27 32 33 44 56 69 94 109 151 152 } 
   dormant_leaders        = {  576 604 608
							   1007 1008 #Zverev Budyho } 

   #################################################################################### 
   # OOB German Troops - September 1939 by omega20
   # ref: http://niehorster.orbat.com/011_germany/39-oob/_39-oob.html
   # ref: http://niehorster.orbat.com/011_germany/afv-strengths/_afv_39-09-01.htm
   #################################################################################### 

   ##########################################
   ## HEER 
   ##########################################

   ##########################################
   #
   # ARMY HIGH COMMAND
   ##########################################
   landunit = 
   { location = 163 # Berlin
     name     = "OKH"
     leader   = 281 # von Brauchitsch
     id       = {  type = 14500 id = 1  }
     division =
     { id       = {  type = 14503 id = 1  } 
       name     = "Oberkommando des Heeres"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   ##########################################
   #
   # ARMY GROUP C
   ##########################################
   landunit = 
   { location = 138 # Frankfurt am Main
     name     = "OK Heeresgruppe C"
     leader   = 315 # von Leeb
     id       = {  type = 14500 id = 2  }
     division =
     { id       = {  type = 14503 id = 2  }
       name     = "Heeresgruppe C"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 3  } 
       name     = "76. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = artillery
       brigade_model = 8
     }
   }
   # 1st Army
   ##########################################
   landunit = 
   { location = 130 # Wiesbaden
     name     = "AOK I"
     leader   = 353 # von Witzleben
     id       = {  type = 14500 id = 3  }
     division =
     { id       = {  type = 14503 id = 4  }
       name     = "1. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 5  } 
       name     = "75. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 6  } 
       name     = "209. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 7  } 
       name     = "214. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 8  } 
       name     = "223. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 9  } 
       name     = "231. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 10  } 
       name     = "246. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "IX. Armeekorps"
     leader   = 84 # Geyer
     id       = {  type = 14500 id = 4  }
     division = 
     { id       = {  type = 14503 id = 11  } 
       name     = "25. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 12  } 
       name     = "33. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "XII. Armeekorps"
     #leader   = ##### Schroth
     id       = {  type = 14500 id = 5  }
     division = 
     { id       = {  type = 14503 id = 13  } 
       name     = "15. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 14  } 
       name     = "34. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 15  } 
       name     = "52. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 16  } 
       name     = "79. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = engineer
       brigade_model = 4
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "Gen.Kdo.d.Grz.Tr. Saarpfalz"
     leader   = 173 # Kuntze
     id       = {  type = 14500 id = 6  }
     division = 
     { id       = {  type = 14503 id = 17  } 
       name     = "6. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 18  } 
       name     = "9. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 19  } 
       name     = "36. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 20  } 
       name     = "71. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   # 5th Army
   ##########################################
   landunit = 
   { location = 129 # Mayen
     name     = "AOK V"
     leader   = 185 # Liebmann
     id       = {  type = 14500 id = 7  }
     division =
     { id       = {  type = 14503 id = 21  }
       name     = "5. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 22  } 
       name     = "58. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 23  } 
       name     = "87. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   landunit = 
   { location = 131 # Netherlands frontier
     name     = "V. Armeekorps"
     #leader   = ##### Schroth
     id       = {  type = 14500 id = 8  }
     division = 
     { id       = {  type = 14503 id = 24  } 
       name     = "22. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 25  } 
       name     = "225. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
#  landunit = 
#  { location = 128 # Trier
#    name     = "VI. Armeekorps"
#    leader   = 80 # Förster
#    id       = {  type = 14500 id = #  }
#    ### no divisions
#  }
   landunit = 
   { location = 126 # Niederrhein
     name     = "XXVII. Armeekorps"
     leader   = 331 # von Prager
     id       = {  type = 14500 id = 9  }
     division = 
     { id       = {  type = 14503 id = 26  } 
       name     = "16. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 27  } 
       name     = "69. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 28  } 
       name     = "211. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 29  } 
       name     = "216. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
#  landunit = 
#  { location = 126 # Niederrhein
#    name     = "XXX. Armeekorps"
#    leader   = 122 # Hartmann
#    id       = {  type = 14500 id = ##  }
#    ### no divisions
#  }
   landunit = 
   { location = 129 # Eifel
     name     = "Gen.Kdo.d.Grz.Tr. Eiffel"
     #leader   = ##### Raschick
     id       = {  type = 14500 id = 10  }
     division = 
     { id       = {  type = 14503 id = 30  } 
       name     = "26. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 31  } 
       name     = "86. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 32  } 
       name     = "227. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   # 7th Army
   ##########################################
   landunit = 
   { location = 132 # Calw
     name     = "AOK VII"
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 11  }
     division =
     { id       = {  type = 14503 id = 33  }
       name     = "7. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 34  } 
       name     = "78. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 35  } 
       name     = "212. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 36  } 
       name     = "215. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 132 # Calw
     name     = "Gen.Kdo.d.Grz.Tr. Oberrhein"
     #leader   = #### Wäger
     id       = {  type = 14500 id = 12  }
     division = 
     { id       = {  type = 14503 id = 37  } 
       name     = "5. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 38  } 
       name     = "35. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 39  } 
       name     = "14. Landwehr-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   ##########################################
   #
   # ARMY GROUP NORTH
   ##########################################
   landunit = 
   { location = 158 # Bad Polzin
     name     = "OK Heeresgruppe Nord"
     leader   = 278 # von Bock
     id       = {  type = 14500 id = 13  }
     division =
     { id       = {  type = 14503 id = 40  }
       name     = "Heeresgruppe Nord"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 41  } 
       name     = "73. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 42  } 
       name     = "206. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 43  } 
       name     = "208. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   # 3rd Army
   ##########################################
   landunit = 
   { location = 183 # Mohrungen
     name     = "AOK III"
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 14  }
     division =
     { id       = {  type = 14503 id = 44  }
       name     = "3. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 45  } 
       name     = "217. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 46  } 
       name     = "Gruppe 'Danzig'"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "I. Armeekorps"
     leader   = 216 # Petzel
     id       = {  type = 14500 id = 15  }
     division = 
     { id       = {  type = 14503 id = 47  } 
       name     = "11. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 48  } 
       name     = "61. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 49  } 
       name     = "Panzer-Division 'Kempf'"
       type     = armor
       model    = 0
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "XXI. Armeekorps"
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 16  }
     division = 
     { id       = {  type = 14503 id = 50  } 
       name     = "21. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 51  } 
       name     = "228. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "XXVI. Armeekorps"
     leader   = 365 # Wodrig
     id       = {  type = 14500 id = 17  }
     division = 
     { id       = {  type = 14503 id = 52  } 
       name     = "1. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 53  } 
       name     = "12. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   # 4th Army
   ##########################################
   landunit = 
   { location = 161 # Jastrow
     name     = "AOK IV"
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 18  }
     division =
     { id       = {  type = 14503 id = 54  }
       name     = "4. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 55  } 
       name     = "23. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 56  } 
       name     = "218. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 155 # Westpreußen
     name     = "II. Armeekorps"
     leader   = 257 # Strauss
     id       = {  type = 14500 id = 19  }
     division = 
     { id       = {  type = 14503 id = 57  } 
       name     = "3. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 58  } 
       name     = "32. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 161 # Westpreußen
     name     = "III. Armeekorps"
     leader   = 123 # Hasse
     id       = {  type = 14500 id = 20  }
     division = 
     { id       = {  type = 14503 id = 59  } 
       name     = "50. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 50 #raised just before the war, with minimal service units
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 161 # Westpreußen
     name     = "XIX. Armeekorps (mot)"
     leader   = 94 # Guderian
     id       = {  type = 14500 id = 21  }
     division = 
     { id       = {  type = 14503 id = 60  } 
       name     = "2. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 61  } 
       name     = "20. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 62  } 
       name     = "3. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 159 # Westpreußen
     name     = "Grz.Sch.Abschn.Kdo I"
     #leader   = #### Kaupisch
     id       = {  type = 14500 id = 22  }
     division = 
     { id       = {  type = 14503 id = 63  } 
       name     = "207. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
#  landunit = 
#  { location = 159 # Westpreußen
#    name     = "Grz.Sch.Abschn.Kdo II"
#    leader   = ##### Büchs
#    id       = {  type = 14500 id = ##  }
#    ### no divisions
#  }
#  landunit = 
#  { location = 159 # Westpreußen
#    name     = "Grz.Sch.Abschn.Kdo XII"
#    leader   = ##### Metz
#    id       = {  type = 14500 id = ##  }
#    ### no divisions
#  }
   ##########################################
   #
   # ARMY GROUP SOUTH
   ##########################################
   landunit = 
   { location = 166 # Neisse
     name     = "OK Heeresgruppe Süd"
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 23  }
     division =
     { id       = {  type = 14503 id = 64  }
       name     = "Heeresgruppe Süd"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 65  } 
       name     = "252. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 66  } 
       name     = "257. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 67  } 
       name     = "258. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 206 # Reichsgebiet
     name     = "VII. Armeekorps"
     leader   = 340 # von Schobert
     id       = {  type = 14500 id = 24  }
     division = 
     { id       = {  type = 14503 id = 68  } 
       name     = "27. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 69  } 
       name     = "68. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 206 # Reichsgebiet
     name     = "XXII. Armeekorps"
     leader   = 309 # von Kleist
     id       = {  type = 14500 id = 25  }
     division = 
     { id       = {  type = 14503 id = 70  } 
       name     = "62. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 71  } 
       name     = "213. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 72  } 
       name     = "221. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   # 8th Army
   ##########################################
   landunit = 
   { location = 167 # Breslau
     name     = "AOK VIII"
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 26  }
     division =
     { id       = {  type = 14503 id = 73  }
       name     = "8. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 74  } 
       name     = "30. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 164 # Trebnitz
     name     = "X. Armeekorps"
     leader   = 266 # Ulex
     id       = {  type = 14500 id = 27  }
     division = 
     { id       = {  type = 14503 id = 75  } 
       name     = "24. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 164 # Trebnitz
     name     = "XIII. Armeekorps"
     #leader   = ##### Osterkamp
     id       = {  type = 14500 id = 28  }
     division = 
     { id       = {  type = 14503 id = 76  } 
       name     = "10. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 77  } 
       name     = "17. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
#  landunit = 
#  { location = 164 # Trebnitz
#    name     = "Grz.Sch.Abschn.Kdo XIII"
#    leader   = ##### Schenckendorf
#    id       = {  type = 14500 id = ##  }
#    ### no divisions
#  }
#  landunit = 
#  { location = 164 # Trebnitz
#    name     = "Grz.Sch.Abschn.Kdo XIV"
#    leader   = ##### von Gienath
#    id       = {  type = 14500 id = ##  }
#    ### no divisions
#  }
   # 10th Army
   ##########################################
   landunit = 
   { location = 164 # Oppeln
     name     = "AOK X"
     leader   = 333 # von Reichenau
     id       = {  type = 14500 id = 29  }
     division =
     { id       = {  type = 14503 id = 78  }
       name     = "10. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 79  } 
       name     = "1. Leichte-Division"
       type     = light_armor
       model    = 2
       strength = 50
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 80  } 
       name     = "3. Leichte-Division"
       type     = light_armor
       model    = 2
       strength = 50
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 168 # Guttentag
     name     = "IV. Armeekorps"
     #leader   = ##### von Schwedler
     id       = {  type = 14500 id = 30  }
     division = 
     { id       = {  type = 14503 id = 81  } 
       name     = "4. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 82  } 
       name     = "46. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 164 # Oppeln
     name     = "XI. Armeekorps" 
     #leader   = ##### von Schwedler
     id       = {  type = 14500 id = 31  } 
     division = 
     { id       = {  type = 14503 id = 83  } 
       name     = "13. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14503 id = 84  } 
       name     = "29. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 168 # Bankau
     name     = "XIV. Armeekorps (mot)"
     leader   = 351 # von Wietersheim
     id       = {  type = 14500 id = 32  }
     division = 
     { id       = {  type = 14503 id = 85  } 
       name     = "18. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 86  } 
       name     = "19. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 87  } 
       name     = "4. Panzer-Division"
       type     = light_armor
       model    = 0
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 168 # Tost
     name     = "XV. Armeekorps (mot)"
     #leader   = 142 # Hoth
     id       = {  type = 14500 id = 33  }
     division = 
     { id       = {  type = 14503 id = 88  } 
       name     = "2. Leichte-Division"
       type     = light_armor
       model    = 1
       strength = 50
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 168 # Schoffschütz
     name     = "XVI. Armeekorps (mot)"
     leader   = 139 # Höppner
     id       = {  type = 14500 id = 34  }
     division = 
     { id       = {  type = 14503 id = 89  } 
       name     = "14. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 90  } 
       name     = "31. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 91  } 
       name     = "1. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   # 14th Army
   ##########################################
   landunit = 
   { location = 201 # Neu Titschein
     name     = "AOK XIV"
     leader   = 188 # List
     id       = {  type = 14500 id = 35  }
     division =
     { id       = {  type = 14503 id = 92  }
       name     = "14. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 212 # Galizien
     name     = "VIII. Armeekorps"
     leader   = 33 # Busch
     id       = {  type = 14500 id = 36  }
     division = 
     { id       = {  type = 14503 id = 93  } 
       name     = "8. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 94  } 
       name     = "28. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 95  } 
       name     = "239. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 96  } 
       name     = "5. Panzer-Division"
       type     = light_armor
       model    = 0
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 212 # Galizien
     name     = "XVII. Armeekorps"
     leader   = 157 # Kienitz
     id       = {  type = 14500 id = 37  }
     division = 
     { id       = {  type = 14503 id = 97  } 
       name     = "7. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 98  } 
       name     = "44. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 99  } 
       name     = "45. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   landunit = 
   { location = 214 # Galizien
     name     = "XVIII. Armeekorps"
     #leader   = ##### Beyer
     id       = {  type = 14500 id = 38  }
     division = 
     { id       = {  type = 14503 id = 100  } 
       name     = "3. Gebirgs-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 101  } 
       name     = "4. Leichte-Division"
       type     = light_armor
       model    = 0
       strength = 50
       offensive = { year = 1939 month = october day = 0 }
     }
     division = 
     { id       = {  type = 14503 id = 102  } 
       name     = "2. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
       offensive = { year = 1939 month = october day = 0 }
     }
   }
   ##########################################
   #
   # OKH RESERVES
   ##########################################

   # Army Group C Reserves
   ##########################################
   landunit = 
   { location = 145
     name     = "OKH Heeresgruppe C Reserven"
     id       = {  type = 14500 id = 39  }
     division = 
     { id       = {  type = 14503 id = 103  } 
       name     = "251. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 104  } 
       name     = "253. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 105  } 
       name     = "254. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 106  } 
       name     = "255. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
   }
   landunit = 
   { location = 137
     name     = "OKH Heeresgruppe C Reserven"
     id       = {  type = 14500 id = 40  }
     division = 
     { id       = {  type = 14503 id = 107  } 
       name     = "256. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 108  } 
       name     = "260. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 109  } 
       name     = "262. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 110  } 
       name     = "263. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
   }
   landunit = 
   { location = 134
     name     = "OKH Heeresgruppe C Reserven"
     id       = {  type = 14500 id = 41  }
     division = 
     { id       = {  type = 14503 id = 111  } 
       name     = "267. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 112  } 
       name     = "268. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
     division = 
     { id       = {  type = 14503 id = 113  } 
       name     = "269. Infanterie-Division"
       type     = infantry
       model    = 7
       strength = 40
     }
   }
   # Army Group North Reserves
   ##########################################
   landunit = 
   { location = 160
     name     = "OKH Heeresgruppe Nörd Reserven"
     id       = {  type = 14500 id = 42  }
     division = 
     { id       = {  type = 14503 id = 114  } 
       name     = "10. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
     }
   }
   # Army Group South Reserves
   ##########################################
   landunit = 
   { location = 207
     name     = "OKH Heeresgruppe Süd Reserven"
     id       = {  type = 14500 id = 43  }
     division = 
     { id       = {  type = 14503 id = 115  } 
       name     = "56. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 116  } 
       name     = "57. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 117  } 
       name     = "1. Gebirgsjäger-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 118  } 
       name     = "2. Gebirgsjäger-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
     }
   }
   #################################################################################### 
   # OOB Kriegsmarine - September 1939 by omega20
   # ref: http://niehorster.orbat.com/011_germany/39-oob/navy/_okm.html
   #################################################################################### 

   ##########################################
   ## KRIEGSMARINE
   ##########################################

   ##########################################
   #
   # HIGH SEAS FLEET
   ##########################################
   navalunit = 
   { name     = "Hochseeflotte" 
     id       = {  type = 14501 id = 1  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 1  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
     } 
     division = 
     { id    = {  type = 14504 id = 2  } 
       name  = "Scharnhorst" 
       type  = battlecruiser 
       model = 3
     }
     division = 
     { id    = {  type = 14504 id = 3  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
     }
     division = 
     { id    = {  type = 14504 id = 4  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
     }
   } 
   # Exploration Fleet
   ##########################################
   navalunit = 
   { name     = "Erkundungsflotte" 
     id       = {  type = 14501 id = 2  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 5  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
     }
     division = 
     { id    = {  type = 14504 id = 6  } 
       name  = "Königsberg" 
       type  = light_cruiser 
       model = 3 
     } 
     division = 
     { id    = {  type = 14504 id = 7  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
     }
     division = 
     { id    = {  type = 14504 id = 8  } 
       name  = "Karlsruhe" 
       type  = light_cruiser 
       model = 3 
     } 
     division = 
     { id    = {  type = 14504 id = 9  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
     }
     division = 
     { id    = {  type = 14504 id = 10  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
     }
   } 
   # Destroyer Fleet
   ##########################################
   navalunit = 
   { name     = "Zerstörerflottille" 
     id       = {  type = 14501 id = 3  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 11  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     }
     division = 
     { id    = {  type = 14504 id = 12  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     }
     division = 
     { id    = {  type = 14504 id = 13  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     }
   } 
   # Transport Fleet
   ##########################################
   navalunit = 
   { name     = "I. Transportflotte" 
     id       = {  type = 14501 id = 4  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14504 id = 14  } 
       name  = "1. Transportflottille" 
       type  = transport 
       model = 2 
     }
     division = 
     { id    = {  type = 14504 id = 15  } 
       name  = "2. Transportflottille" 
       type  = transport 
       model = 2 
     }
     division = 
     { id    = {  type = 14504 id = 16  } 
       name  = "3. Transportflottille" 
       type  = transport 
       model = 2 
     }	    
   }
   # Baltic Fleet
   ##########################################
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14501 id = 5  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14504 id = 17  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
     }
     division = 
     { id    = {  type = 14504 id = 18  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
     }
     division = 
     { id    = {  type = 14504 id = 19  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     } 
     division = 
     { id    = {  type = 14504 id = 20  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     } 
     division = 
     { id    = {  type = 14504 id = 21  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
     } 
   } 
   navalunit = 
   { name     = "Deutschland" 
     id       = {  type = 14501 id = 6  } 
     location = 2652 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 22  } 
       name  = "Deutschland" 
       type  = heavy_cruiser 
       model = 4
     }
   } 
   navalunit = 
   { name     = "Graf Spee" 
     id       = {  type = 14501 id = 7  } 
     location = 2294 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 23  } 
       name  = "Admiral Graf Spee" 
       type  = heavy_cruiser 
       model = 4
     }
   } 
   # Submarine Fleet
   # ref: http://www.uboat.net/flotillas/
   ##########################################
   navalunit = 
   { name     = "Unterseebootsflotte" 
     id       = {  type = 14501 id = 8  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 24  } 
       name  = "1. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
     division = 
     { id    = {  type = 14504 id = 25  } 
       name  = "5. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }
   navalunit = 
   { name     = "2. Unterseebootsflottille" 
     id       = {  type = 14501 id = 9  } 
     location = 2691 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 26  } 
       name  = "2. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
   }
   navalunit = 
   { name     = "3. Unterseebootsflottille" 
     id       = {  type = 14501 id = 10  } 
     location = 2721 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 27  } 
       name  = "3. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }
   navalunit = 
   { name     = "4. Unterseebootsflottille" 
     id       = {  type = 14501 id = 11  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14504 id = 28  } 
       name  = "4. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
     division = 
     { id    = {  type = 14504 id = 29  } 
       name  = "Unterseebootsschulflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }
   navalunit = 
   { name     = "6. Unterseebootsflottille" 
     id       = {  type = 14501 id = 12  } 
     location = 2284 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 30  } 
       name  = "6. Unterseebootsflottille" 
       type  = submarine 
       model = 6 # Type IX
     }
   }
   navalunit = 
   { name     = "7. Unterseebootsflottille" 
     id       = {  type = 14501 id = 13  } 
     location = 2704 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 31  } 
       name  = "7. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
   }

   #################################################################################### 
   # OOB Luftwaffe - September 1939 by omega20
   # ref: http://www.ww2.dk/misc/ob1939.htm
   #################################################################################### 

   ##########################################
   ## LUFTWAFFE
   ##########################################

   # Air Force Command
   ##########################################
   airunit =
   { location = 163 # Berlin
     base     = 163 # Berlin
     id       = {  type = 14502 id = 1  }
     name     = "Oberbefehlshaber der Luftwaffe"
     division =
     { id       = {  type = 14505 id = 1  }
       name     = "Kampfgeschwader z.b.V. 1"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 100
     }
   }
   # 1st Air Fleet
   ##########################################
   airunit =
   { location = 163 # Stettin
     base     = 163 # Stettin
     id       = {  type = 14502 id = 2  }
     name     = "Luftflotte I"
     division =
     { id       = {  type = 14505 id = 2  }
       name     = "KG 1 'Hindenburg'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 3  }
       name     = "KG 26 'Löwen'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 80
     }
     division =
     { id       = {  type = 14505 id = 4  }
       name     = "Stukageschwader 2 'Immelmann'"
       type     = cas
       model    = 1 # Ju 87B
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 5  }
       name     = "JG 2 'Richthofen'"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 55
     }
     division =
     { id       = {  type = 14505 id = 6  }
       name     = "Zerstörergeschwader 1"
       type     = multi_role
       model    = 5 # Bf 110C
       strength = 85
     }
   }
   airunit =
   { location = 184
     base     = 184
     id       = {  type = 14502 id = 3  }
     name     = "Luftwaffenkommando Ostpreussen"
     division =
     { id       = {  type = 14505 id = 7  }
       name     = "KG 3 'Blitz'"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 90
     }
     division =
     { id       = {  type = 14505 id = 8  }
       name     = "Sturzkampfgeschwader 1"
       type     = cas
       model    = 1 # Ju 87B
       strength = 45
     }
     division =
     { id       = {  type = 14505 id = 9  }
       name     = "JG 1 'Oesau'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
   }
   airunit =
   { location = 167
     base     = 167
     id       = {  type = 14502 id = 4  }
     name     = "Luftwaffen-Lehrdivision"
     division =
     { id       = {  type = 14505 id = 10  }
       name     = "Lehrgeschwader 1"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 11  }
       name     = "KG 2 'Holzhammer'"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 85
     }
     division =
     { id       = {  type = 14505 id = 12  }
       name     = "JG 3 'Udet'"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 13  }
       name     = "Jagdgeschwader 20"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 40
     }
   }
   # 2nd Air Fleet
   ##########################################
   airunit =
   { location = 145
     base     = 145
     id       = {  type = 14502 id = 5  }
     name     = "Luftflotte II"
     division =
     { id       = {  type = 14505 id = 14  }
       name     = "KG 54 'Totenkopf'"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 40
     }
     division =
     { id       = {  type = 14505 id = 15  }
       name     = "Kampfgeschwader 28"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 35
     }
     division =
     { id       = {  type = 14505 id = 16  }
       name     = "Kampfgeschwader 25"
       type     = tactical_bomber
       model    = 7 # Ju 88A
       strength = 15
     }
     division =
     { id       = {  type = 14505 id = 17  }
       name     = "JG 26 'Schlageter'"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 85
     }
     division =
     { id       = {  type = 14505 id = 18  }
       name     = "Lehrgeschwader 2"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 19  }
       name     = "Jagdgeschwader 52"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 50
     }
   }
   airunit =
   { location = 145
     base     = 145
     id       = {  type = 14502 id = 6  }
     name     = "4. Flieger-Division"
     division =
     { id       = {  type = 14505 id = 20  }
       name     = "KG 55 'Greif'"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 70
     }
     division =
     { id       = {  type = 14505 id = 21  }
       name     = "KG 27 'Boelcke'"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 22  }
       name     = "JG 77 'Herz As'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 23  }
       name     = "ZG 26 'Horst Wessel'"
       type     = multi_role
       model    = 5 # Bf 110
       strength = 100
     }
   }
   # 3rd Air Fleet
   ##########################################
   airunit =
   { location = 138
     base     = 138
     id       = {  type = 14502 id = 7  }
     name     = "Luftflotte III"
     division =
     { id       = {  type = 14505 id = 24  }
       name     = "KG 51 'Edelweiß'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 85
     }
     division =
     { id       = {  type = 14505 id = 25  }
       name     = "KG 53 'Legion Condor'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 75
     }
     division =
     { id       = {  type = 14505 id = 26  }
       name     = "Sturzkampfgeschwader 51"
       type     = cas
       model    = 1 # Ju 87B
       strength = 35
     }
   }
   airunit =
   { location = 179
     base     = 179
     id       = {  type = 14502 id = 8  }
     name     = "Luftgau-Kommando VII/XII/XIII"
     division =
     { id       = {  type = 14505 id = 27  }
       name     = "JG 51 'Mölders'"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 28  }
       name     = "JG 53 'Pik As'"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 95
     }
     division =
     { id       = {  type = 14505 id = 29  }
       name     = "Jagdgeschwader 70"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 30  }
       name     = "Jagdgeschwader 71"
       type     = interceptor
       model    = 8 # Bf 109D
       strength = 35
     }
     division =
     { id       = {  type = 14505 id = 31  }
       name     = "Jagdgeschwader 72"
       type     = multi_role
       model    = 4 # Ar 68
       strength = 35
     }
   }
   # 4th Air Fleet
   ##########################################
   airunit =
   { location = 167
     base     = 167
     id       = {  type = 14502 id = 9  }
     name     = "Luftflotte IV"
     division =
     { id       = {  type = 14505 id = 32  }
       name     = "KG 4 'General Wever'"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 33  }
       name     = "Kampfgeschwader 76"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 85
     }
     division =
     { id       = {  type = 14505 id = 34  }
       name     = "Kampfgeschwader 77"
       type     = tactical_bomber
       model    = 5 # Do 17E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 35  }
       name     = "Sturzkampfgeschwader 76"
       type     = cas
       model    = 1 # Ju 87B
       strength = 40
     }
     division =
     { id       = {  type = 14505 id = 36  }
       name     = "Sturzkampfgeschwader 77"
       type     = cas
       model    = 1 # Ju 87B
       strength = 90
    }
    division =
     { id       = {  type = 14505 id = 37  }
       name     = "Jagdgeschwader 76"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
   }

landdivision = { dormant = yes id = { type = 14500 id = 2027 }  name = "1. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2028 }  name = "2. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2029 }  name = "3. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2030 }  name = "4. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2031 }  name = "5. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2032 }  name = "6. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2033 }  name = "7. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2034 }  name = "8. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2035 }  name = "9. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2036 }  name = "10. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2037 }  name = "11. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2038 }  name = "12. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2039 }  name = "13. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2040 }  name = "14. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2041 }  name = "15. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2042 }  name = "16. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2043 }  name = "17. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2044 }  name = "18. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2045 }  name = "19. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }

   #Units under construction
	division_development = {
		name  = "Bismarck" 
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.3 
		id    = {  type = 14504 id = 32  } 
		date  = {  year = 1940 month = august day = 24  } 
	}
	division_development = {
		name  = "Tirpitz" 
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.3 
		id    = {  type = 14504 id = 33  } 
		date  = {  year = 1941 month = february day = 25  } 
	}
	division_development = {
		name  = "Blücher" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14504 id = 34  } 
		date  = {  year = 1939 month = september day = 20  } 
	} 
	division_development = {
		name  = "Prinz Eugen" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14504 id = 35  } 
		date  = {  year = 1940 month = august day = 1  } 
	}
	division_development = {
		name  = "Seydlitz" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14504 id = 36  } 
		date  = {  year = 1940 month = may day = 14  } 
	}
	division_development = {
		name  = "Lützow" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14504 id = 37  } 
		date  = {  year = 1940 month = december day = 16  } 
	}
	division_development = {
		name  = "Graf Zeppelin" 
		type  = carrier
		model = 2
		new_model = no
		cost  = 0.3 
		id    = {  type = 14504 id = 38  } 
		date  = {  year = 1940 month = october day = 1  } 
		extra = cag
                brigade_model = 2
	}
	division_development = {
		name  = "Unterseebootsausbildungsflottille" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14504 id = 39  } 
		date  = {  year = 1939 month = november day = 1  } 
	}
	division_development = {
		name  = "2. Unterseebootsausbildungsflottille" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14504 id = 40  } 
		date  = {  year = 1940 month = april day = 1  } 
	}
	division_development = {
		name  = "Taktische Unterseebootsausbildungsflottille" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14504 id = 41  } 
		date  = {  year = 1940 month = january day = 1  } 
	}
# Mobilizing units - 1939
# Source: http://www.axishistory.com/axis-nations/germany-a-austria/145-germany-heer/heer-unsorted/3420-the-german-mobilization-1939
	division_development = {
		name  = "93. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 119  } 
		date  = {  year = 1939 month = september day = 17  } 
	} 
	division_development = {
		name  = "94. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 120  } 
		date  = {  year = 1939 month = september day = 18  } 
	} 
	division_development = {
		name  = "95. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 121  } 
		date  = {  year = 1939 month = september day = 19  } 
	} 
	division_development = {
		name  = "96. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 122  } 
		date  = {  year = 1939 month = september day = 21  } 
	} 
	division_development = {
		name  = "98. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 123  } 
		date  = {  year = 1939 month = september day = 18  } 
	} 
	division_development = {
		name  = "81. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 124  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "82. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 125  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "83. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 126  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "88. Infanterie-Division" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14503 id = 127  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "SS-Division 'Totenkopf'" 
		type  = motorized
		model = 1
		cost  = 0.1 
		id    = {  type = 14503 id = 128  } 
		date  = {  year = 1939 month = october day = 1  } 
	} 
	division_development = {
		name  = "1. Kavallerie-Division" 
		type  = cavalry
		model = 11
		cost  = 0.1 
		id    = {  type = 14503 id = 129  } 
		date  = {  year = 1939 month = october day = 1  } 
	} 
	division_development = {
		name  = "526. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 130  } 
		date  = {  year = 1939 month = october day = 1  } 
	} 
	division_development = {
		name  = "430. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 131  } 
		date  = {  year = 1939 month = october day = 1  } 
	} 
	division_development = {
		name  = "311. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 132  } 
		date  = {  year = 1939 month = november day = 1  } 
	} 
	division_development = {
		name  = "521. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 133  } 
		date  = {  year = 1939 month = november day = 1  } 
	} 
	division_development = {
		name  = "161. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 134  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "162. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 135  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "163. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 136  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "164. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 137  } 
		date  = {  year = 1939 month = november day = 27  } 
	} 
	division_development = {
		name  = "167. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 138  } 
		date  = {  year = 1939 month = november day = 26  } 
	} 
	division_development = {
		name  = "168. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 139  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "169. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 140  } 
		date  = {  year = 1939 month = november day = 28  } 
	} 
	division_development = {
		name  = "170. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 141  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "181. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 142  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "183. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 143  } 
		date  = {  year = 1939 month = november day = 28  } 
	} 
	division_development = {
		name  = "196. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 146  } 
		date  = {  year = 1939 month = november day = 27  } 
	} 
	division_development = {
		name  = "197. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 147  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "198. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 148  } 
		date  = {  year = 1939 month = december day = 1  } 
	} 
	division_development = {
		name  = "291. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 149  } 
		date  = {  year = 1940 month = february day = 10  } 
	} 
	division_development = {
		name  = "292. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 150  } 
		date  = {  year = 1940 month = february day = 6  } 
	} 
	division_development = {
		name  = "293. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 151  } 
		date  = {  year = 1940 month = february day = 8  } 
	} 
	division_development = {
		name  = "294. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 152  } 
		date  = {  year = 1940 month = february day = 6  } 
	} 
	division_development = {
		name  = "295. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 153  } 
		date  = {  year = 1940 month = february day = 10  } 
	} 
	division_development = {
		name  = "296. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 154  } 
		date  = {  year = 1940 month = february day = 5  } 
	} 
	division_development = {
		name  = "297. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 155  } 
		date  = {  year = 1940 month = january day = 29  } 
	} 
	division_development = {
		name  = "298. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 156  } 
		date  = {  year = 1940 month = february day = 6  } 
	} 
	division_development = {
		name  = "299. Infanterie-Division" 
		type  = infantry
		model = 9
		cost  = 0.1 
		id    = {  type = 14503 id = 157  } 
		date  = {  year = 1940 month = february day = 9  } 
	} 
	division_development = {
		name  = "351. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 158  } 
		date  = {  year = 1940 month = march day = 10  } 
	} 
	division_development = {
		name  = "358. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 159  } 
		date  = {  year = 1940 month = march day = 10  } 
	} 
	division_development = {
		name  = "365. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 160  } 
		date  = {  year = 1940 month = march day = 10  } 
	} 
	division_development = {
		name  = "372. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 161  } 
		date  = {  year = 1940 month = march day = 20  } 
	} 
	division_development = {
		name  = "379. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 162  } 
		date  = {  year = 1940 month = march day = 15  } 
	} 
	division_development = {
		name  = "386. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 163  } 
		date  = {  year = 1940 month = march day = 29  } 
	} 
	division_development = {
		name  = "393. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 164  } 
		date  = {  year = 1940 month = march day = 10  } 
	} 
	division_development = {
		name  = "399. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 165  } 
		date  = {  year = 1940 month = march day = 15  } 
	} 
	division_development = {
		name  = "554. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 166  } 
		date  = {  year = 1940 month = february day = 15  } 
	} 
	division_development = {
		name  = "555. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 167  } 
		date  = {  year = 1940 month = february day = 10  } 
	} 
	division_development = {
		name  = "556. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 168  } 
		date  = {  year = 1940 month = february day = 11  } 
	} 
	division_development = {
		name  = "557. Infanterie-Division" 
		type  = infantry
		model = 8
		cost  = 0.1 
		id    = {  type = 14503 id = 169  } 
		date  = {  year = 1940 month = february day = 15  } 
	} 
} 
