 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai = "ger_1940.ai"
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	capital                = 163 
	manpower               = 5700 # based on http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm 
	transports             = 450 
	escorts                = 23 

	# Resource Reserves 
	energy                 = 9000
	metal                  = 4500
	rare_materials         = 3000
	oil                    = 5000 
	supplies               = 5000 
	money                  = 100
	belligerence           = 20
   diplomacy = 
   {  relation = {  tag = ARG value = 75  } 
     relation = {  tag = AST value = -200  }  
     relation = {  tag = BEL value = -200  } 
     relation = {  tag = BHU value = -200  } 
     relation = {  tag = BOL value = 15  } 
     relation = {  tag = BRA value = 50  } 
     relation = {  tag = BUL value = 125 } 
     relation = {  tag = CAN value = -200  } 
     relation = {  tag = CHL value = 50  } 
     relation = {  tag = COL value = -20  } 
     relation = {  tag = SLO value = 200 access = yes } 
     relation = {  tag = ENG value = -200  }  
     relation = {  tag = EST value = 10  } 
     relation = {  tag = FIN value = 80 } 
     relation = {  tag = FRA value = -200  } 
     relation = {  tag = GRE value = 15  } 
     relation = {  tag = HOL value = -200  } 
     relation = {  tag = HUN value = 150  } 
     relation = {  tag = IRE value = 15  } 
     relation = {  tag = IRQ value = 25  } 
     relation =
     {  tag        = ITA
       value      = 150
       guaranteed = { day = 25 month = october year = 1936 }
     } 
     relation = {  tag = JAP value = 75  } 
     relation = {  tag = LAT value = 10  } 
     relation = {  tag = LIT value = 10  } 
     relation = {  tag = LUX value = -200  } 
     relation = {  tag = MAN value = 20  } 
     relation = {  tag = NEP value = -200  } 
     relation = {  tag = NOR value = -200  }
     relation = {  tag = NZL value = -200  } 
     relation = {  tag = OMN value = -200  }  
     relation = {  tag = POR value = 75  } 
     relation = {  tag = ROM value = 120 } 
     relation = {  tag = SAF value = -200  } 
     relation = 
     {  tag        = SCH 
       value      = 50 
       guaranteed = {  day = 16 month = may year = 1935  } 
      } 
     relation = {  tag = SOV value = 65  } 
     relation =
     {  tag        = SPA
       value      = 50
       guaranteed = { day = 18 month = november year = 1936 }
     }
     relation = { tag = SWE value = 50 }
     relation = { tag = TUR value = 10 } 
     relation = {  tag = USA value = -50  } 
     relation = {  tag = YEM value = 1  } 
     relation = { tag = YUG value = 50 }
     relation = {  tag = U05 value = -200  }
     relation = { tag = URU value = 10 }
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
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 485 487 491 489 492 490 493 494 488 486 484
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
227 231 252 223 # Poland
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
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130
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
	# Tank Destroyer
	2170
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Self-Propelled Artillery
	2220
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
	4300 4310 4320 4330 4340 4040 4070
	# CAS
	4400 4170 4280
	# Strategic bomber
	4800 4810 4820 4220
	# Navalbomber
	4700 4710 4190
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920

	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Construction Engineering 
	5800 5080 5090
	# Oil Refining
	5190 5200
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360
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
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9150 9190 9200 9210 9220 9230 9240

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
	7550 7560 7570
	} 
	
inventions = { 3000027 3000028 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 8 
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
   dormant_ministers      = {  3 4 5 7 8 14 26 27 32 33 44 56 94 109 151 152 } 
   dormant_leaders        = {  576 604 608
							   1007 1008 #Zverev Budyho } 

   #################################################################################### 
   # OOB German Troops - May 1940 by omega20
   # ref: http://niehorster.orbat.com/011_germany/40-05-10_army/_okh.html
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
     name     = "Oberkommando des Heeres" 
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
   # 21ST GROUP
   ##########################################
   landunit = 
   { location = 491 # Bergen (488), but placed in Alesund (491) as it has a beach
     name     = "Befehlshaber Norwegen" 
     #leader   = ##### Tittel
     id       = {  type = 14500 id = 2  }
     division = 
     { id       = {  type = 14503 id = 2  }
       name     = "69. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
   }
   landunit = 
   { location = 483 # Oslo
     name     = "Befehlshaber Norwegen" 
     #leader   = ##### Engelbrecht
     id       = {  type = 14500 id = 3  }
     division = 
     { id       = {  type = 14503 id = 3  }
       name     = "163. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   landunit = 
   { location = 493 # Drontheim
     name     = "Befehlshaber Norwegen" 
     #leader   = ##### Woyras
     id       = {  type = 14500 id = 4  }
     division = 
     { id       = {  type = 14503 id = 4  }
       name     = "181. Infanterie-Division" 
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   landunit = 
   { location = 494 # Narvik area
     name     = "Gruppe XXI"
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 5  }
     division = 
     { id       = {  type = 14503 id = 5  }
       name     = "196. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 6  }
       name     = "2. Gebirgsjäger-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 7  }
       name     = "3. Gebirgsjäger-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 485 # Kristiansand
     name     = "Befehlshaber Norwegen" 
     #leader   = ##### Horn
     id       = {  type = 14500 id = 6  }
     division = 
     { id       = {  type = 14503 id = 8  }
       name     = "214. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   ##########################################
   #
   # ARMY GROUP A
   ##########################################
   landunit = 
   { location = 138 # Frankfurt am Main
     name     = "OK Heeresgruppe A"
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 7  }
     division =
     { id       = {  type = 14503 id = 9  }
       name     = "Heeresgruppe A"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 10  }
       name     = "4. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 11  } 
       name     = "27. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "XXXX. Armeekorps"
     leader   = 260 # Stumme
     id       = {  type = 14500 id = 8  }
     division = 
     { id       = {  type = 14503 id = 12  }
       name     = "6. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 13  }
       name     = "9. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 14  }
       name     = "33. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # 4th Army
   ##########################################
   landunit = 
   { location = 131 # Bonn/Cologne
     name     = "AOK IV"
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 9  }
     division =
     { id       = {  type = 14503 id = 15  }
       name     = "4. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 16  }
       name     = "211. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 131 # Eifel
     name     = "II. Armeekorps"
     leader   = 257 # Strauss
     id       = {  type = 14500 id = 10  }
     division = 
     { id       = {  type = 14503 id = 17  }
       name     = "12. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 18  }
       name     = "32. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 19  }
       name     = "263. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 20  }
       name     = "7. Panzer-Division"
       type     = light_armor
       model    = 2
       strength = 75
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "V. Armeekorps"
     leader   = 230 # Ruoff
     id       = {  type = 14500 id = 11  }
     division = 
     { id       = {  type = 14503 id = 21  }
       name     = "251. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "VIII. Armeekorps"
     leader   = 130 # Heitz
     id       = {  type = 14500 id = 12  }
     division = 
     { id       = {  type = 14503 id = 22  }
       name     = "8. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 23  }
       name     = "28. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 24  }
       name     = "87. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 25  }
       name     = "267. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "XV. Armeekorps (mot)"
     leader   = 142 # Hoth
     id       = {  type = 14500 id = 13  }
     division = 
     { id       = {  type = 14503 id = 26  }
       name     = "62. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 27  }
       name     = "5. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # 12th Army
   ##########################################
   landunit = 
   { location = 129 # Koblenz
     name     = "AOK XII"
     leader   = 188 # List
     id       = {  type = 14500 id = 14  }
     division =
     { id       = {  type = 14503 id = 28  }
       name     = "12. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "III. Armeekorps"
     leader   = 101 # Haase C.
     id       = {  type = 14500 id = 15  }
     division = 
     { id       = {  type = 14503 id = 29  }
       name     = "3. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 30  }
       name     = "23. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "VI. Armeekorps"
     leader   = 80 # Förster
     id       = {  type = 14500 id = 16  }
     division = 
     { id       = {  type = 14503 id = 31  }
       name     = "16. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 32  }
       name     = "24. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Eifel
     name     = "XVIII. Armeekorps"
     #leader   = ##### Beyer
     id       = {  type = 14500 id = 17  }
     division = 
     { id       = {  type = 14503 id = 33  }
       name     = "5. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 34  }
       name     = "21. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 35  }
       name     = "25. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 36  }
       name     = "1. Gebirgsjäger-Division"
       type     = bergsjaeger
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # 16th Army
   ##########################################
   landunit = 
   { location = 128 # Trier
     name     = "AOK XVI"
     leader   = 33 # Busch
     id       = {  type = 14500 id = 18  }
     division =
     { id       = {  type = 14503 id = 37  }
       name     = "16. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 38  }
       name     = "26. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 39  }
       name     = "52. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 40  }
       name     = "71. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 41  }
       name     = "73. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 128 # Trier
     name     = "VII. Armeekorps"
     leader   = 340 # von Schobert
     id       = {  type = 14500 id = 19  }
     division = 
     { id       = {  type = 14503 id = 42  }
       name     = "36. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 43  }
       name     = "68. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 128 # Trier
     name     = "XIII. Armeekorps"
     leader   = 347 # von Vietinghoff-Scheel
     id       = {  type = 14500 id = 20  }
     division = 
     { id       = {  type = 14503 id = 44  }
       name     = "15. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 45  }
       name     = "17. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 128 # Trier
     name     = "XXIII. Armeekorps"
     #leader   = ##### Schubert
     id       = {  type = 14500 id = 21  }
     division = 
     { id       = {  type = 14503 id = 46  }
       name     = "34. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 47  }
       name     = "58. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 48  }
       name     = "76. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # Group von Kleist
   ##########################################
   landunit = 
   { location = 128 # Bilburg
     name     = "OK Panzergruppe Kleist"
     leader   = 309 # von Kleist
     id       = {  type = 14500 id = 22  }
     division =
     { id       = {  type = 14503 id = 49  }
       name     = "Panzergruppe Kleist"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 128 # Trier
     name     = "XIV. Armeekorps (mot)"
     leader   = 351 # von Wietersheim
     id       = {  type = 14500 id = 23  }
     division = 
     { id       = {  type = 14503 id = 50  }
       name     = "13. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 51  }
       name     = "29. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 129 # Trier
     name     = "XIX. Armeekorps (mot)"
     leader   = 94 # Guderian
     id       = {  type = 14500 id = 24  }
     division = 
     { id       = {  type = 14503 id = 52  }
       name     = "1. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 85
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 53  }
       name     = "2. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 90
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 54  }
       name     = "10. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 90
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 128 # Trier
     name     = "XXXXI. Armeekorps (mot)"
     leader   = 223 # Reinhardt
     id       = {  type = 14500 id = 25  }
     division = 
     { id       = {  type = 14503 id = 55  }
       name     = "6. Panzer-Division"
       type     = light_armor
       model    = 2
       strength = 75
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 56  }
       name     = "8. Panzer-Division"
       type     = light_armor
       model    = 2
       strength = 70
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 57  }
       name     = "2. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   ##########################################
   #
   # ARMY GROUP B
   ##########################################
   landunit = 
   { location = 142 # Düsseldorf
     name     = "OK Heeresgruppe B"
     leader   = 278 # von Bock
     id       = {  type = 14500 id = 26  }
     division =
     { id       = {  type = 14503 id = 58  }
       name     = "Heeresgruppe B"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 59  }
       name     = "20. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 60  } 
       name     = "208. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 61  } 
       name     = "225. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 62  } 
       name     = "526. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 126 # Niederrhein
     name     = "I. Armeekorps"
     leader   = 280 # von Both
     id       = {  type = 14500 id = 27  }
     division = 
     { id       = {  type = 14503 id = 63  }
       name     = "1. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 64  }
       name     = "11. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 65  }
       name     = "223. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # 6th Army
   ##########################################
   landunit = 
   { location = 126 # Niederrhein
     name     = "AOK VI"
     leader   = 333 # von Reichenau
     id       = {  type = 14500 id = 28  }
     division =
     { id       = {  type = 14503 id = 66  }
       name     = "6. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 67  }
       name     = "255. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 126 # Eifel
     name     = "IV. Armeekorps"
     #leader   = ##### von Schwedler
     id       = {  type = 14500 id = 29  }
     division = 
     { id       = {  type = 14503 id = 68  }
       name     = "7. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 69  }
       name     = "18. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 70  }
       name     = "35. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 71  }
       name     = "61. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 72  }
       name     = "4. Panzer-Division"
       type     = light_armor
       model    = 0
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 126 # Niederrhein
     name     = "IX. Armeekorps"
     leader   = 84 # Geyer
     id       = {  type = 14500 id = 30  }
     division = 
     { id       = {  type = 14503 id = 73  }
       name     = "30. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 74  }
       name     = "56. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 75  }
       name     = "216. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 126 # Niederrhein
     name     = "XI. Armeekorps"
     #leader   = ##### von Kortzfleisch
     id       = {  type = 14500 id = 31  }
     division = 
     { id       = {  type = 14503 id = 76  }
       name     = "14. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 77  }
       name     = "19. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 78  }
       name     = "31. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 141 # Niederrhein
     name     = "XXVII. Armeekorps"
     #leader   = ##### Wägner
     id       = {  type = 14500 id = 32  }
     division = 
     { id       = {  type = 14503 id = 79  }
       name     = "253. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 80  }
       name     = "269. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 141 # Niederrhein
     name     = "XVI. Armeekorps (mot)"
     leader   = 139 # Höppner
     id       = {  type = 14500 id = 33  }
     division = 
     { id       = {  type = 14503 id = 81  } 
       name     = "3. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   # 18th Army
   ##########################################
   landunit = 
   { location = 141 # Bocholt
     name     = "AOK XVIII"
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 34  }
     division =
     { id       = {  type = 14503 id = 82  }
       name     = "18. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 83  } 
       name     = "SS-Verfügungs-Division"
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 84  } 
       name     = "1. Kavallerie-Division"
       type     = cavalry
       model    = 11
       strength = 100
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 141 # Niederrhein
     name     = "X. Armeekorps"
     leader   = 117 # Hansen C.
     id       = {  type = 14500 id = 35  }
     division = 
     { id       = {  type = 14503 id = 85  }
       name     = "207. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 86  }
       name     = "227. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   landunit = 
   { location = 147 # Niederrhein
     name     = "XXVI. Armeekorps"
     #leader   = ##### Wodrig
     id       = {  type = 14500 id = 36  }
     division = 
     { id       = {  type = 14503 id = 87  }
       name     = "254. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 88  }
       name     = "256. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1940 month = june day = 8 }
     }
     division = 
     { id       = {  type = 14503 id = 89  } 
       name     = "9. Panzer-Division"
       type     = light_armor
       model    = 1
       strength = 50
       offensive = { year = 1940 month = june day = 8 }
     }
   }
   ##########################################
   #
   # ARMY GROUP C
   ##########################################
   landunit = 
   { location = 130 # Mainz
     name     = "OK Heeresgruppe C"
     leader   = 315 # von Leeb
     id       = {  type = 14500 id = 37  }
     division =
     { id       = {  type = 14503 id = 90  }
       name     = "Heeresgruppe C"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 91  } 
       name     = "94. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 92  } 
       name     = "98. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
   }
   # 1st Army
   ##########################################
   landunit = 
   { location = 130 # Bad Kreuznach
     name     = "AOK I"
     leader   = 353 # von Witzleben
     id       = {  type = 14500 id = 38  }
     division =
     { id       = {  type = 14503 id = 93  }
       name     = "1. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "XII. Armeekorps"
     #leader   = ##### Schroth
     id       = {  type = 14500 id = 39  }
     division = 
     { id       = {  type = 14503 id = 94  } 
       name     = "75. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 8
     }
     division = 
     { id       = {  type = 14503 id = 95  } 
       name     = "252. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 96  } 
       name     = "258. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "XXIV. Armeekorps"
     #leader   = ##### von Geyr und Schweppenburg
     id       = {  type = 14500 id = 40  }
     division = 
     { id       = {  type = 14503 id = 97  } 
       name     = "257. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 98  } 
       name     = "262. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 99  } 
       name     = "268. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 127 # Saarpfalz
     name     = "XXX. Armeekorps"
     leader   = 122 # Hartmann
     id       = {  type = 14500 id = 41  }
     division = 
     { id       = {  type = 14503 id = 100  } 
       name     = "79. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 101  } 
       name     = "93. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 102  } 
       name     = "95. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
   }
   landunit = 
   { location = 130 # Bad Kreuznach
     name     = "Höheres Kommando XXXVII"
     leader   = 26 # Boehm-Tettelbach
     id       = {  type = 14500 id = 42  }
     division = 
     { id       = {  type = 14503 id = 103  } 
       name     = "215. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 104  } 
       name     = "246. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   # 7th Army
   ##########################################
   landunit = 
   { location = 132 # Freudenstadt
     name     = "AOK VII"
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 43  }
     division =
     { id       = {  type = 14503 id = 105  }
       name     = "7. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 106  } 
       name     = "96. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
   }
   landunit = 
   { location = 132 # Freudenstadt
     name     = "XXV. Armeekorps"
     leader   = 331 # von Prager
     id       = {  type = 14500 id = 44  }
     division = 
     { id       = {  type = 14503 id = 107  } 
       name     = "555. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 108  } 
       name     = "557. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 132 # Freudenstadt
     name     = "Höheres Kommando XXXIII"
     #leader   = 331 # von Prager
     id       = {  type = 14500 id = 45  }
     division = 
     { id       = {  type = 14503 id = 109  } 
       name     = "554. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 110  } 
       name     = "556. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   ##########################################
   #
   # COMMANDER-IN-CHIEF EAST
   ##########################################
   landunit = 
   { location = 223 # Spala
     name     = "OK Oberost"
     #leader   = ##### von Gienanth
     id       = {  type = 14500 id = 46  }
     division =
     { id       = {  type = 14503 id = 111  }
       name     = "Oberbefehlshaber Ost"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   # Border Command North
   ##########################################
   landunit = 
   { location = 185 # Treuburg
     name     = "Grz.Sch.Abschn.Kdo Nord"
     leader   = 348 # von Vollard-Bockelberg
     id       = {  type = 14500 id = 47  }
     division = 
     { id       = {  type = 14503 id = 112  } 
       name     = "206. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 113  } 
       name     = "311. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 184
     name     = "Höheres Kommando XXXXV"
     #leader   = ##### von Greiff
     id       = {  type = 14500 id = 48  }
     division = 
     { id       = {  type = 14503 id = 114  } 
       name     = "395. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 115  } 
       name     = "399. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   # Border Command Center
   ##########################################
   landunit = 
   { location = 246 # Lublin
     name     = "Höheres Kommando XXXII"
     leader   = 329 # von Pogrell
     id       = {  type = 14500 id = 49  }
     division = 
     { id       = {  type = 14503 id = 116  } 
       name     = "209. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 117  } 
       name     = "379. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 228 # Siennica
     name     = "Höheres Kommando XXXV"
     #leader   = ##### von Schenckendorff
     id       = {  type = 14500 id = 50  }
     division = 
     { id       = {  type = 14503 id = 118  } 
       name     = "213. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 119  } 
       name     = "228. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 120  } 
       name     = "386. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 234 # Radom
     name     = "Höheres Kommando XXXVI"
     #leader   = ##### von Gienanth
     id       = {  type = 14500 id = 51  }
     division = 
     { id       = {  type = 14503 id = 121  } 
       name     = "218. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 122  } 
       name     = "372. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 123  } 
       name     = "393. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   # Border Command South
   ##########################################
   landunit = 
   { location = 243 # Lancut
     name     = "Höheres Kommando XXXIV"
     #leader   = ##### Metz
     id       = {  type = 14500 id = 52  }
     division = 
     { id       = {  type = 14503 id = 124  } 
       name     = "231. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 125  } 
       name     = "239. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 126  } 
       name     = "351. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   landunit = 
   { location = 237 # Lancut
     name     = "Höheres Kommando XXXIV"
     #leader   = ##### Metz
     id       = {  type = 14500 id = 53  }
     division = 
     { id       = {  type = 14503 id = 127  } 
       name     = "358. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 128  } 
       name     = "365. Infanterie-Division"
       type     = infantry
       model    = 8
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 129  } 
       name     = "Division z.b.V. 425"
       type     = infantry
       model    = 8
       strength = 60
     }
   }
   ##########################################
   #
   # OKH RESERVES
   ##########################################

   # 2nd Army
   ##########################################
   landunit = 
   { location = 144
     name     = "AOK II"
     leader   = 350 # von Weichs
     id       = {  type = 14500 id = 54  }
     division =
     { id       = {  type = 14503 id = 130  }
       name     = "2. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 146
     name     = "XVII. Armeekorps"
     #leader   = 157 # Kienitz
     id       = {  type = 14500 id = 55  }
     division = 
     { id       = {  type = 14503 id = 131  } 
       name     = "22. Luft.Inf.Division"
       type     = paratrooper
       model    = 0
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 132  } 
       name     = "44. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 133  } 
       name     = "46. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 134  } 
       name     = "83. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 135  } 
       name     = "197. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 136  } 
       name     = "217. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 137  } 
       name     = "295. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   landunit = 
   { location = 173
     name     = "XXXVIII. Armeekorps"
     leader   = 157 # Kienitz
     id       = {  type = 14500 id = 56  }
     division = 
     { id       = {  type = 14503 id = 138  } 
       name     = "72. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 139  } 
       name     = "81. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 140  } 
       name     = "164. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 141  } 
       name     = "168. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 142  } 
       name     = "291. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 143  } 
       name     = "292. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 144  } 
       name     = "294. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 145  } 
       name     = "298. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
   }
   landunit = 
   { location = 137
     name     = "XXXIX. Armeekorps (mot)"
     leader   = 243 # Schmidt R.
     id       = {  type = 14500 id = 57  }
     division = 
     { id       = {  type = 14503 id = 146  } 
       name     = "10. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 147  } 
       name     = "45. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 148  } 
       name     = "57. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 149  } 
       name     = "86. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 150  } 
       name     = "162. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 151  } 
       name     = "169. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 152  } 
       name     = "290. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 153  } 
       name     = "299. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 154  } 
       name     = "SS-Division 'Totenkopf'"
       type     = motorized
       model    = 1
       strength = 100
     }
   }
   landunit = 
   { location = 134
     name     = "XXXXII. Armeekorps"
     leader   = 173 # Kuntze
     id       = {  type = 14500 id = 58  }
     division = 
     { id       = {  type = 14503 id = 155  } 
       name     = "50. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 156  } 
       name     = "60. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 157  } 
       name     = "78. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 158  } 
       name     = "82. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 159  } 
       name     = "88. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 160  } 
       name     = "161. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 161  } 
       name     = "167. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 162  } 
       name     = "183. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 163  } 
       name     = "205. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 164  } 
       name     = "212. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 165  } 
       name     = "221. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 166  } 
       name     = "260. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 167  } 
       name     = "293. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 168  } 
       name     = "296. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 169  } 
       name     = "297. Infanterie-Division"
       type     = infantry
       model    = 9
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 170  } 
       name     = "SS-Polizei-Division"
       type     = motorized
       model    = 1
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
   }
   # Commander of German Troops in Denmark
   ##########################################
   landunit = 
   { location = 294
     name     = "Befh.Deut.Tr.in Dänemark"
     leader   = 306 # Kaupisch
     id       = {  type = 14500 id = 59  }
     division = 
     { id       = {  type = 14503 id = 171  } 
       name     = "11. Infanterie-Division (mot)"
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
     }
   }
   landunit = 
   { location = 217
     name     = "Befh.Deut.Tr.in Dänemark"
     #leader   = ##### Wittke
     id       = {  type = 14500 id = 60  }
     division = 
     { id       = {  type = 14503 id = 172  } 
       name     = "170. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
   }
   landunit = 
   { location = 220
     name     = "Befh.Deut.Tr.in Dänemark"
     #leader   = ##### Roettig
     id       = {  type = 14500 id = 61  }
     division = 
     { id       = {  type = 14503 id = 173  } 
       name     = "198. Infanterie-Division"
       type     = infantry
       model    = 10
       strength = 100
     }
   }

   ##########################################
   ## KRIEGSMARINE 
   ##########################################

   ##########################################
   #
   # HIGH SEAS FLEET
   ##########################################

   # Warship Group 1
   ##########################################
   navalunit = 
   { name     = "Kriegsschiffgruppe I" 
     id       = {  type = 14501 id = 1  } 
     location = 152 
     base     = 152
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
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     } 
     division = 
     { id    = {  type = 14504 id = 4  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
     } 
     division = 
     { id    = {  type = 14504 id = 5  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     }
   } 
   # Warship Group 2
   ##########################################
   navalunit = 
   { name     = "Kriegsschiffgruppe II" 
     id       = {  type = 14501 id = 2  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 6  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
     }
     division = 
     { id    = {  type = 14504 id = 7  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     } 
   } 
   # Warship Group 3
   ##########################################
   navalunit = 
   { name     = "Kriegsschiffgruppe III" 
     id       = {  type = 14501 id = 3  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 8  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
     }
   }
   # Warship Group 5
   ##########################################
   navalunit = 
   { name     = "Kriegsschiffgruppe V" 
     id       = {  type = 14501 id = 4  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 9  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
     }
     division = 
     { id    = {  type = 14504 id = 10  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
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
     { id    = {  type = 14504 id = 11  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
     }
     division = 
     { id    = {  type = 14504 id = 12  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
     }
   } 
   navalunit = 
   { name     = "Admiral Scheer" 
     id       = {  type = 14501 id = 6  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 13  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
     }
   }
   # Nürnberg Squadron
   ##########################################
   navalunit = 
   { name     = "Nürnberg Geschwader" 
     id       = {  type = 14501 id = 7  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 14  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
     }
     division = 
     { id    = {  type = 14504 id = 15  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
     }
   }
   # Transport Fleet
   ##########################################
   navalunit = 
   { name     = "I. Truppentransporter Flotte" 
     id       = {  type = 14501 id = 8  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 16  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
     }
     division = 
     { id    = {  type = 14504 id = 17  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
     }
     division = 
     { id    = {  type = 14504 id = 18  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
     }
   }
   # Destroyer Fleet
   ##########################################
   navalunit = 
   { name     = "Zerstörerflottille" 
     id       = {  type = 14501 id = 9  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 19  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
     }
   }
   # Submarine Fleet
   # ref: http://www.uboat.net/flotillas/
   ##########################################
   navalunit = 
   { name     = "Unterseebootsflotte" 
     id       = {  type = 14501 id = 10  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 20  } 
       name  = "3. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
     division = 
     { id    = {  type = 14504 id = 21  } 
       name  = "5. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
     division = 
     { id    = {  type = 14504 id = 22  } 
       name  = "6. Unterseebootsflottille" 
       type  = submarine 
       model = 6 # Type IX
     }
   }
   navalunit = 
   { name     = "1. Unterseebootsflottille" 
     id       = {  type = 14501 id = 11  } 
     location = 2688 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 23  } 
       name  = "1. Unterseebootsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }
   navalunit = 
   { name     = "2. Unterseebootsflottille" 
     id       = {  type = 14501 id = 12  } 
     location = 2715 
     base     = 147
     division = 
     { id    = {  type = 14504 id = 24  } 
       name  = "2. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
   }
   navalunit = 
   { name     = "4. Unterseebootsflottille" 
     id       = {  type = 14501 id = 13  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14504 id = 25  } 
       name  = "4. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
     division = 
     { id    = {  type = 14504 id = 26  } 
       name  = "Unterseebootsschulflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }
   navalunit = 
   { name     = "7. Unterseebootsflottille" 
     id       = {  type = 14501 id = 14  } 
     location = 2690 
     base     = 152
     division = 
     { id    = {  type = 14504 id = 27  } 
       name  = "7. Unterseebootsflottille" 
       type  = submarine 
       model = 5 # Type VII
     }
   }
   navalunit = 
   { name     = "Unterseebootsausbildungsflotte" 
     id       = {  type = 14501 id = 15  } 
     location = 181
     base     = 181
     division = 
     { id    = {  type = 14504 id = 28  } 
       name  = "1. Unterseebootsausbildungsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
     division = 
     { id    = {  type = 14504 id = 29  } 
       name  = "2. Unterseebootsausbildungsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
     division = 
     { id    = {  type = 14504 id = 30  } 
       name  = "Taktische Unterseebootsausbildungsflottille" 
       type  = submarine 
       model = 4 # Type II
     }
   }

   #################################################################################### 
   # OOB Luftwaffe - May 1940 by omega20
   # ref: http://niehorster.orbat.com/011_germany/40-05-10_luftwaffe/__okl.html
   #################################################################################### 

   ##########################################
   ## LUFTWAFFE
   ##########################################

   # Air Force Command
   ##########################################
   # 1st Air Fleet
   ##########################################
   airunit =
   { location = 163 # Berlin
     base     = 163 # Berlin
     id       = {  type = 14502 id = 1  }
     name     = "Luftflotte I"
     division =
     { id       = {  type = 14505 id = 1  }
       name     = "Kampfgeschwader 28"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 2  }
       name     = "JG 3 'Udet'"
       strength = 100
       type     = multi_role
       model    = 5 # Bf 109E
     }
   }
   # 2nd Air Fleet
   ##########################################
   airunit =
   { location = 145 # Münster
     base     = 145 # Münster
     id       = {  type = 14502 id = 2  }
     name     = "Jagfliegerführer 1"
     division =
     { id       = {  type = 14505 id = 3  }
       name     = "JG 1 'Oesau'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 4  }
       name     = "Lehrgeschwader 2"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 5  }
       name     = "Fliegergruppe 122"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 70
     }
   }
   airunit =
   { location = 145 # Düsseldorf
     base     = 145 # Düsseldorf
     id       = {  type = 14502 id = 3  }
     name     = "IV. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 6  }
       name     = "Lehrgeschwader 1"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 7  }
       name     = "KG 27 'Boelcke'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 8  }
       name     = "KG 30 'Adler'"
       type     = tactical_bomber
       model    = 7 # Ju 88A
       strength = 100
     }
   }
   airunit =
   { location = 145 # Grevenbroich
     base     = 145 # Grevenbroich
     id       = { type = 14502 id = 4 }
     name     = "VIII. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 9  }
       name     = "Kampfgeschwader 77"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 10  }
       name     = "StG 2 'Immelmann'"
       type     = cas
       model    = 1 # Ju 87B
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 11  }
       name     = "Sturzkampfgeschwader 76"
       type     = cas
       model    = 1 # Ju 87B
       strength = 40
     }
     division =
     { id       = {  type = 14505 id = 12  }
       name     = "Sturzkampfgeschwader 77"
       type     = cas
       model    = 1 # Ju 87B
       strength = 80
     }
     division =
     { id       = {  type = 14505 id = 13  }
       name     = "Jagdgeschwader 21"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 14  }
       name     = "Jagdgeschwader 27"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
   }
   airunit =
   { location = 148 # Bremen
     base     = 148 # Bremen
     id       = { type = 14502 id = 5 }
     name     = "Fliegerkorps z.b.V. 2"
     division =
     { id       = {  type = 14505 id = 15  }
       name     = "KG 4 'General Wever'"
       type     = tactical_bomber
       model    = 6 # He 111H/P
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 16  }
       name     = "KG 54 'Totenkopf'"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 100
     }
   }
   airunit =
   { location = 145 # Münster
     base     = 145 # Münster
     id       = {  type = 14502 id = 6  }
     name     = "Luftlandekorps"
     division =
     { id       = {  type = 14505 id = 17  }
       name     = "Kampfgeschwader z.b.V. 1"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 18  }
       name     = "Kampfgeschwader z.b.V. 2"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 19  }
       name     = "Kampfgruppe z.b.V. 9/172"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 20  }
       name     = "Kampfgruppe z.b.V. 11/12"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 100
     }
   }
   airunit =
   { location = 137 # Dortmund
     base     = 137 # Dortmund
     id       = {  type = 14502 id = 7  }
     name     = "Jagfliegerführer 2"
     division =
     { id       = {  type = 14505 id = 21  }
       name     = "ZG 26 'Horst Wessel'"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 70
     }
     division =
     { id       = {  type = 14505 id = 22  }
       name     = "Zerstörergeschwader 1"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 70
     }
     division =
     { id       = {  type = 14505 id = 23  }
       name     = "JG 26 'Schlageter'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 24  }
       name     = "JG 51 'Mölders'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
     division =
     { id       = {  type = 14505 id = 25  }
       name     = "Jagdgeschwader 20"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
   }
   # 3rd Air Fleet
   ##########################################
   airunit =
   { location = 134 # Bad Orb
     base     = 134 # Bad Orb
     id       = {  type = 14502 id = 8  }
     name     = "Luftflotte III"
     division =
     { id       = {  type = 14505 id = 26  }
       name     = "Fliegergruppe 123"
       type     = tactical_bomber
       model    = 6 # Do 17P & Ju 88A
       strength = 50
     }
   }
   airunit =
   { location = 138 # Cologne
     base     = 138 # Cologne
     id       = {  type = 14502 id = 9  }
     name     = "I. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 27  }
       name     = "KG 1 'Hindenburg'"
       type     = tactical_bomber
       model    = 6 # He 111H & P
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 28  }
       name     = "Kampfgeschwader 76"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 29  }
       name     = "Sturzkampfgeschwader 51"
       type     = cas
       model    = 1 # Ju 87B
       strength = 40
     }
     division =
     { id       = {  type = 14505 id = 30  }
       name     = "Zerstörergeschwader 72"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 35
     }
     division =
     { id       = {  type = 14505 id = 31  }
       name     = "Zerstörergeschwader 76"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 75
     }
     division =
     { id       = {  type = 14505 id = 32  }
       name     = "JG 77 'Herz As'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 95
     }
   }
   airunit =
   { location = 138 # Frankfurt-am-Main
     base     = 138 # Frankfurt-am-Main
     id       = {  type = 14502 id = 10  }
     name     = "II. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 33  }
       name     = "KG 2 'Holzhammer'"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 34  }
       name     = "KG 3 'Blitz'"
       type     = tactical_bomber
       model    = 5 # Do 17Z
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 35  }
       name     = "KG 53 'Legion Condor'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 36  }
       name     = "Sturzkampfgeschwader 1"
       type     = cas
       model    = 1 # Ju 87B
       strength = 90
     }
     division =
     { id       = {  type = 14505 id = 37  }
       name     = "Fliegergruppe 121"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 25
     }
   }
   airunit =
   { location = 179 # Augsburg
     base     = 179 # Augsburg
     id       = {  type = 14502 id = 11  }
     name     = "V. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 38  }
       name     = "KG 51 'Edelweiß'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 39  }
       name     = "Kampfgeschwader 52"
       type     = tactical_bomber
       model    = 6 # He 111P
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 40  }
       name     = "Jagdgeschwader 52"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 95
     }
     division =
     { id       = {  type = 14505 id = 41  }
       name     = "JG 54 'Grünherz'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 90
     }
     division =
     { id       = {  type = 14505 id = 42  }
       name     = "Zerstörergeschwader 52"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 100
     }
   }
   airunit =
   { location = 134 # Wiesbaden
     base     = 134 # Wiesbaden
     id       = {  type = 14502 id = 12  }
     name     = "Jagfliegerführer 3"
     division =
     { id       = {  type = 14505 id = 43  }
       name     = "Zerstörergeschwader 2"
       type     = interceptor
       model    = 8 # Bf 110C & D
       strength = 35
     }
     division =
     { id       = {  type = 14505 id = 44  }
       name     = "JG 2 'Richthofen'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 90
     }
     division =
     { id       = {  type = 14505 id = 45  }
       name     = "JG 53 'Pik As'"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 100
     }
     division =
     { id       = {  type = 14505 id = 46  }
       name     = "Jagdgeschwader 76"
       type     = multi_role
       model    = 5 # Bf 109E
       strength = 50
     }
   }
   # 4th Air Fleet
   ##########################################
   # 5th Air Fleet
   ##########################################
   airunit =
   { location = 483 # Oslo
     base     = 483 # Oslo
     id       = {  type = 14502 id = 13  }
     name     = "X. Fliegerkorps"
     division =
     { id       = {  type = 14505 id = 47  }
       name     = "Kampfgeschwader 40"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 35
     }
     division =
     { id       = {  type = 14505 id = 48  }
       name     = "Kampfgruppe z.b.V. 107/108"
       type     = transport_plane
       model    = 1 # Ju 52
       strength = 50
     }
   }
   airunit =
   { location = 491 # Trondheim
     base     = 491 # Trondheim
     id       = {  type = 14502 id = 14  }
     name     = "Fliegerführer Trondheim"
     division =
     { id       = {  type = 14505 id = 49  }
       name     = "KG 26 'Löwen'"
       type     = tactical_bomber
       model    = 6 # He 111H
       strength = 100
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
		id    = {  type = 14504 id = 31  } 
		date  = {  year = 1940 month = august day = 24  } 
	}
	division_development = {
		name  = "Tirpitz" 
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.3 
		id    = {  type = 14504 id = 32  } 
		date  = {  year = 1941 month = february day = 25  } 
	}
	division_development = {
		name  = "Prinz Eugen" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14504 id = 33  } 
		date  = {  year = 1940 month = august day = 1  } 
	}
	division_development = {
		name  = "Graf Zeppelin" 
		type  = carrier
		model = 2
		new_model = no
		cost  = 0.3 
		id    = {  type = 14504 id = 34  } 
		date  = {  year = 1940 month = october day = 1  } 
		 extra = cag
		 brigade_model = 2
	}
	division_development = {
		name  = "11. Armee" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14503 id = 174  } 
		date  = {  year = 1940 month = october day = 5  } 
		extra = anti_air
		brigade_model = 3
	}
} 
