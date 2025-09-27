 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai = "ger_1941.ai"
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	capital                = 163 
	manpower               = 7200 # based on http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm 
	transports             = 450 
	escorts                = 23 

	# Resource Reserves 
	energy                 = 10000
	metal                  = 5000
	rare_materials         = 15000
	oil                    = 20000 
	supplies               = 10000 
	money                  = 100
	belligerence           = 40
 
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation =
    { tag        = CRO
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = SLO value = 200 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 125 access = yes }
    relation = { tag = U01 value = -200 }
    relation = { tag = HOL value = -200 }
    relation =
    { tag        = HUN
      value      = 200
      access     = yes
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = IRQ value = -200 }
    relation =
    { tag        = ITA
      value      = 200
      access     = yes
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = MTN
      value      = 200
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation =
    { tag        = JAP
      value      = 135
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 75 }
    relation =
    { tag        = ROM
      value      = 200
      access     = yes
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = SAF value = -200 }
    relation = { tag = SCH value = 50 }
    relation =
    { tag        = SER
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = SOV value = -200 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = SWE value = 50 access = yes }
    relation = { tag = TUR value = 10 }
    relation = { tag = USA value = -125 }
    relation = { tag = FRA value = 75 guaranteed = { day = 1 month = january year = 1941 } }
    relation = { tag = YEM value = -200 }
    relation = { tag = U02 value = -200 }
    relation = { tag = U05 value = -200 }
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
         186 187 188 189 190 191 192 193 194 195 346 
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         365 366 370 377 382 383
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195 346 
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         365 366 370 377 382 383
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
346 # Maribor
227 231 252 223 # Poland
377 382 383 365 366 370 # Greece
}
	# Germany 1941 techs 
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
	1670 1680
	# Marine Division
	1560 1570 1580 1590

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Medium Tank
	2070 2080
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
	# Rocket Artillery
	2970
	# SP Anti-Air Artillery Brigade
	22910

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Battlecruiser
	3310 3320 3330 3340 3350
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
	4700 4710 4190 4200
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920 4930

	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Construction Engineering 
	5800 5080 5090 5100
	# Oil Refining
	5190 5200 5210
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360 5370
	# Atomic Research
	5470 5480 5490 5500
	# Exp. Rocket
	5560
	# Agriculture 
	5700 5710 5010 5020 5030
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417 5420
	# Assembly Line
	5140 5160 5180
	# Specialised Equipment
	5960 5970

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6900 
	#Great War Hospital System 
	14000 14010 14020 14030

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9270
	9280

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
	7550 7560 7570 7580 7100 7010
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
   headofgovernment       = {  type = 9 id = 23  } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 70  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 131 } #Franz Halder
   chiefofarmy            = {  type = 9 id = 146 } 
   chiefofnavy            = {  type = 9 id = 9   } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  2 3 4 7 8 14 26 27 32 33 44 56 94 109 151 152 17 45 55 74 75 140 175 } 
   dormant_leaders        = {  576 604 608
							   1007 1008 #Zverev Budyho } 

   #################################################################################### 
   # OOB German Troops - June 1941 by omega20
   # ref: http://niehorster.orbat.com/011_germany/41-oob/_41-oob.html
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
   # ARMY GROUP D
   ##########################################
   landunit = 
   { location = 55 # Paris
     name     = "OK Heeresgruppe D"
     leader   = 353 # von Witzleben
     id       = {  type = 14500 id = 2  }
     division =
     { id       = {  type = 14503 id = 2  }
       name     = "Heeresgruppe D"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 3  } 
       name     = "82. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14503 id = 4  } 
       name     = "719. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
      }
   }
   # 1st Army
   ##########################################
   landunit = 
   { location = 66 # Ostfrankreich
     name     = "AOK I"
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 3  }
     division =
     { id       = {  type = 14503 id = 5  }
       name     = "1. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 95 # Ostfrankreich
     name     = "XXVII. Armeekorps"
     #leader   = ##### Wagner
     id       = {  type = 14500 id = 4  }
     division = 
     { id       = {  type = 14503 id = 6  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14503 id = 7  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14503 id = 8  } 
       name     = "327. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
     division = 
     { id       = {  type = 14503 id = 9  } 
       name     = "335. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
     division = 
     { id       = {  type = 14503 id = 10  } 
       name     = "337. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
   }
   landunit = 
   { location = 65 # Ostfrankreich
     name     = "Höheres Kommando XXXXV"
     #leader   = ##### von Greiff
     id       = {  type = 14500 id = 5  }
     division = 
     { id       = {  type = 14503 id = 11  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 12  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 13  } 
       name     = "339. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 14  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
   }
   # 7th Army
   ##########################################
   landunit = 
   { location = 68 # Pyla-sur-Mer
     name     = "AOK VII"
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 6  }
     division =
     { id       = {  type = 14503 id = 15  }
       name     = "1. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 39 # Auray
     name     = "XXV. Armeekorps"
     #leader   = ##### Richter
     id       = {  type = 14500 id = 7  }
     division = 
     { id       = {  type = 14503 id = 16  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 37 # Treboul
     name     = "XXV. Armeekorps"
     #leader   = ##### Renner
     id       = {  type = 14500 id = 8  }
     division = 
     { id       = {  type = 14503 id = 17  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 59 # Dinard & Angers
     name     = "XXV. Armeekorps"
     leader   = 331 # von Prager
     id       = {  type = 14500 id = 9  }
     division = 
     { id       = {  type = 14503 id = 18  } 
       name     = "709. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 19  } 
       name     = "712. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 67 # Dax & Biarritz
     name     = "Höheres Kommando XXXI"
     leader   = 306 # Kaupisch
     id       = {  type = 14500 id = 10  }
     division = 
     { id       = {  type = 14503 id = 20  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 21  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 68 # Bordeaux
     name     = "Höheres Kommando XXXI"
     #leader   = ##### Kaupisch
     id       = {  type = 14500 id = 11  }
     division = 
     { id       = {  type = 14503 id = 22  } 
       name     = "223. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 23  } 
       name     = "333. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 24  } 
       name     = "708. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 69 # Niort & Royan
     name     = "Höheres Kommando LIX"
     #leader   = ##### Schwandner
     id       = {  type = 14500 id = 12  }
     division = 
     { id       = {  type = 14503 id = 25  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 26  } 
       name     = "305. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 62 # Poitiers
     name     = "Höheres Kommando LIX"
     #leader   = ##### Schwandner
     id       = {  type = 14500 id = 13  }
     division = 
     { id       = {  type = 14503 id = 27  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 28  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   # 15th Army
   ##########################################
   landunit = 
   { location = 52 # Nordfrankreich
     name     = "AOK XV"
     leader   = 101 # Haase C.
     id       = {  type = 14500 id = 14  }
     division =
     { id       = {  type = 14503 id = 29  }
       name     = "15. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
     division = 
     { id       = {  type = 14503 id = 30  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 31  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 49 # Kanalküste
     name     = "Höheres Kommando XXXII"
     leader   = 329 # von Pogrell
     id       = {  type = 14500 id = 15  }
     division = 
     { id       = {  type = 14503 id = 32  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 33  } 
       name     = "332. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 53 # Kanalküste
     name     = "Höheres Kommando XXXII"
     #leader   = ##### von Pogrell
     id       = {  type = 14500 id = 16  }
     division = 
     { id       = {  type = 14503 id = 34  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 35  } 
       name     = "302. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 51 # Kanalküste
     name     = "Höheres Kommando XXXII"
     #leader   = ##### von Pogrell
     id       = {  type = 14500 id = 17  }
     division = 
     { id       = {  type = 14503 id = 36  } 
       name     = "336. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 37  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 122 # Niederlande & Nordfrankreich
     name     = "Höheres Kommando XXXVII"
     #leader   = ##### Neumann
     id       = {  type = 14500 id = 18  }
     division = 
     { id       = {  type = 14503 id = 38  } 
       name     = "320. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 125 # Niederlande & Nordfrankreich
     name     = "Höheres Kommando XXXVII"
     #leader   = ##### Löweneck
     id       = {  type = 14500 id = 19  }
     division = 
     { id       = {  type = 14503 id = 39  } 
       name     = "321. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 115 # Niederlande & Nordfrankreich
     name     = "Höheres Kommando XXXVII"
     #leader   = ##### Boehm-Tettelbach
     id       = {  type = 14500 id = 20  }
     division = 
     { id       = {  type = 14503 id = 40  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 41  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 42  } 
       name     = "340. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 114 # Niederlande & Nordfrankreich
     name     = "Höheres Kommando XXXVII"
     #leader   = ##### Boehm-Tettelbach
     id       = {  type = 14500 id = 21  }
     division = 
     { id       = {  type = 14503 id = 43  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 44  } 
       name     = "306. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 44 # St.Lo
     name     = "Höheres Kommando z.b.V. LX"
     #leader   = ##### von Viebahn
     id       = {  type = 14500 id = 22  }
     division = 
     { id       = {  type = 14503 id = 45  } 
       name     = "83. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 46  } 
       name     = "319. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   landunit = 
   { location = 46 # St.Lo
     name     = "Höheres Kommando z.b.V. LX"
     #leader   = ##### von Viebahn
     id       = {  type = 14500 id = 23  }
     division = 
     { id       = {  type = 14503 id = 47  } 
       name     = "216. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 48  } 
       name     = "323. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
     }
   }
   ##########################################
   #
   # ARMY OF NORWAY
   ##########################################
   landunit = 
   { location = 483 # Oslo
     name     = "AOK Norwegen"
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 24  }
     division =
     { id       = {  type = 14503 id = 49  }
       name     = "Armee Norwegen"
       type     = hq
       model    = 3
       strength = 100
       extra    = police
       brigade_model = 1
     }
   }
   landunit = 
   { location = 493 # Drontheim
     name     = "Höheres Kommando XXXIII"
     #leader   = ##### Brandt
     id       = {  type = 14500 id = 25  }
     division = 
     { id       = {  type = 14503 id = 50  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = police
       brigade_model = 1
     }
     division = 
     { id       = {  type = 14503 id = 51  } 
       name     = "196. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 491 # Bergen
     name     = "Höheres Kommando LXX"
     #leader   = ##### Feurstein
     id       = {  type = 14500 id = 26  }
     division = 
     { id       = {  type = 14503 id = 52  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 53  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 485 # Kristiansand
     name     = "Höheres Kommando LXX"
     #leader   = ##### Feurstein
     id       = {  type = 14500 id = 27  }
     division = 
     { id       = {  type = 14503 id = 54  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 55  } 
       name     = "710. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 495 # Narvik
     name     = "Geb.Korps.Norwegen (Terr.)"
     #leader   = ##### Dietl
     id       = {  type = 14500 id = 28  }
     division = 
     { id       = {  type = 14503 id = 56  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 57  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   # Forward Headquarters in Finland
   ##########################################
   landunit = 
   { location = 514 # Finland
     name     = "Höheres Kommando XXXVI"
     #leader   = ##### Feige
     id       = {  type = 14500 id = 29  }
     division = 
     { id       = {  type = 14503 id = 58  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 59  } 
       name     = "SS-Division 'Nord'" 
       type     = motorized
       model    = 1 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
     }
   }
   landunit = 
   { location = 517 # Finland
     name     = "Gebirgskorps Norwegen"
     leader   = 49 # Dietl
     id       = {  type = 14500 id = 30  }
     division = 
     { id       = {  type = 14503 id = 60  } 
       name     = "2. Gebirgs-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 61  } 
       name     = "3. Gebirgs-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
     }
   }
   ##########################################
   #
   # ARMED FORCES COMMANDER SOUTH EAST
   ##########################################

   # 12th Army
   ##########################################
   landunit = 
   { location = 377 # Athens
     name     = "AOK XII"
     leader   = 188 # List
     id       = {  type = 14500 id = 31  }
     division =
     { id       = {  type = 14503 id = 62  }
       name     = "12. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 377 # Athens
     name     = "XVIII. Gebirgskorps"
     #leader   = ##### Böhme
     id       = {  type = 14500 id = 32  }
     division = 
     { id       = {  type = 14503 id = 63  } 
       name     = "6. Gebirgs-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = police
       brigade_model = 1
     }
     division = 
     { id       = {  type = 14503 id = 64  } 
       name     = "125. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
     }
     division = 
     { id       = {  type = 14503 id = 65  } 
       name     = "164. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 338 # Belgrade
     name     = "Höheres Kommando z.b.V. LXV"
     leader   = 8 # Bader
     id       = {  type = 14500 id = 33  }
     division = 
     { id       = {  type = 14503 id = 66  } 
       name     = "704. Infanterie-Division" 
       type     = infantry 
       model    = 9
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 67  } 
       name     = "714. Infanterie-Division" 
       type     = infantry 
       model    = 9
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 68  } 
       name     = "717. Infanterie-Division" 
       type     = infantry 
       model    = 9
       strength = 60
     }
     division = 
     { id       = {  type = 14503 id = 69  } 
       name     = "718. Infanterie-Division" 
       type     = infantry 
       model    = 9
       strength = 60
     }
   }
   landunit = 
   { location = 382 # Crete
     name     = "Festungs-Kommandant Kreta"
     #leader   = ##### Andrae
     id       = {  type = 14500 id = 34  }
     division = 
     { id       = {  type = 14503 id = 70  } 
       name     = "5. Gebirgs-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = police
       brigade_model = 1
     }
   }
   landunit = 
   { location = 177 # WK III; enroute to Greece
     name     = "OKH Reserven"
     #leader   = ##### Andrae
     id       = {  type = 14500 id = 35  }
     division = 
     { id       = {  type = 14503 id = 71  } 
       name     = "713. Infanterie-Division" 
       type     = infantry 
       model    = 9
       strength = 60
     }
   }
   ##########################################
   #
   # ARMY GROUP NORTH
   ##########################################
   landunit = 
   { location = 183 # Elbing
     name     = "OK Heeresgruppe Nord"
     leader   = 315 # von Leeb
     id       = {  type = 14500 id = 36  }
     division =
     { id       = {  type = 14503 id = 72  }
       name     = "Heeresgruppe Nord"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 183 # Elbing
     name     = "XXIII. Armeekorps"
     #leader   = ##### Schubert
     id       = {  type = 14500 id = 37  }
     division = 
     { id       = {  type = 14503 id = 73  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 74  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 75  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 183 # Elbing
     name     = "Befh.rückw.Heeresgebiet 101"
     #leader   = ##### von Roques
     id       = {  type = 14500 id = 38  }
     division = 
     { id       = {  type = 14503 id = 76  } 
       name     = "207. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 77  } 
       name     = "281. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 78  } 
       name     = "285. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 16th Army
   ##########################################
   landunit = 
   { location = 185 # Ostpreußen
     name     = "AOK XVI"
     leader   = 33 # Busch
     id       = {  type = 14500 id = 39  }
     division =
     { id       = {  type = 14503 id = 79  }
       name     = "16. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 80  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "II. Armeekorps"
     #leader   = ##### von Brockdorff-Ahlefeldt
     id       = {  type = 14500 id = 40  }
     division = 
     { id       = {  type = 14503 id = 81  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 82  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 83  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "X. Armeekorps"
     leader   = 117 # Hansen C.
     id       = {  type = 14500 id = 41  }
     division = 
     { id       = {  type = 14503 id = 84  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 85  } 
       name     = "126. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 185 # Ostpreußen
     name     = "XXVIII. Armeekorps"
     #leader   = ##### von Wiktorin
     id       = {  type = 14500 id = 42  }
     division = 
     { id       = {  type = 14503 id = 86  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 87  } 
       name     = "123. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 18th Army
   ##########################################
   landunit = 
   { location = 261 # Ostpreußen
     name     = "AOK XVIII"
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 43  }
     division =
     { id       = {  type = 14503 id = 88  }
       name     = "18. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 89  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 261 # Ostpreußen
     name     = "I. Armeekorps"
     leader   = 280 # von Both
     id       = {  type = 14500 id = 44  }
     division = 
     { id       = {  type = 14503 id = 90  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 91  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 92  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 261 # Ostpreußen
     name     = "XXVI. Armeekorps"
     #leader   = ##### Wodrig
     id       = {  type = 14500 id = 45  }
     division = 
     { id       = {  type = 14503 id = 93  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 94  } 
       name     = "217. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 261 # Ostpreußen
     name     = "XXXVIII. Armeekorps"
     #leader   = ##### von Chappuis
     id       = {  type = 14500 id = 46  }
     division = 
     { id       = {  type = 14503 id = 95  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 4th Panzer Group
   ##########################################
   landunit = 
   { location = 182 # Ostpreußen
     name     = "OK Pz.Gr. IV"
     leader   = 139 # Höppner
     id       = {  type = 14500 id = 47  }
     division =
     { id       = {  type = 14503 id = 96  }
       name     = "Panzergruppe 4"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 97  } 
       name     = "SS-Division 'Totenkopf'" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 182 # Ostpreußen
     name     = "XXXXI. Armeekorps (mot)"
     #leader   = ##### von Chappuis
     id       = {  type = 14500 id = 48  }
     division = 
     { id       = {  type = 14503 id = 98  } 
       name     = "1. Panzer-Division" 
       type     = armor
       model    = 0
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 99  } 
       name     = "6. Panzer-Division" 
       type     = light_armor
       model    = 2
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 100  } 
       name     = "36. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 101  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 182 # Ostpreußen
     name     = "LVI. Armeekorps (mot)"
     leader   = 323 # von Manstein
     id       = {  type = 14500 id = 49  }
     division = 
     { id       = {  type = 14503 id = 102  } 
       name     = "8. Panzer-Division" 
       type     = light_armor
       model    = 2
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 103  } 
       name     = "3. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 104  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   ##########################################
   #
   # ARMY GROUP CENTER
   ##########################################
   landunit = 
   { location = 232 # Warsaw
     name     = "OK Heeresgruppe Mitte"
     leader   = 278 # von Bock
     id       = {  type = 14500 id = 50  }
     division =
     { id       = {  type = 14503 id = 105  }
       name     = "Heeresgruppe Mitte"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 232 # Warsaw
     name     = "LIII. Armeekorps"
     #leader   = ##### Weisenberger
     id       = {  type = 14500 id = 51  }
     division = 
     { id       = {  type = 14503 id = 106  } 
       name     = "293. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 232 # Warsaw
     name     = "Befh.rückw.Heeresgebiet 102"
     #leader   = ##### Schenckendorff
     id       = {  type = 14500 id = 52  }
     division = 
     { id       = {  type = 14503 id = 107  } 
       name     = "221. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 108  } 
       name     = "286. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 109  } 
       name     = "403. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 4th Army
   ##########################################
   landunit = 
   { location = 228 # Poland
     name     = "AOK IV"
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 53  }
     division =
     { id       = {  type = 14503 id = 110  }
       name     = "4. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "VII. Armeekorps"
     leader   = 55 # Fahrmbacher
     id       = {  type = 14500 id = 54  }
     division = 
     { id       = {  type = 14503 id = 111  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 112  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 113  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 114  } 
       name     = "268. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 228 # Poland
     name     = "IX. Armeekorps"
     leader   = 84 # Geyer
     id       = {  type = 14500 id = 55  }
     division = 
     { id       = {  type = 14503 id = 115  } 
       name     = "137. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 116  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 117  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 228 # Poland
     name     = "XIII. Armeekorps"
     leader   = 56 # Felber
     id       = {  type = 14500 id = 56  }
     division = 
     { id       = {  type = 14503 id = 118  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 119  } 
       name     = "78. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "XXXXIII. Armeekorps"
     leader   = 129 # Heinrici
     id       = {  type = 14500 id = 57  }
     division = 
     { id       = {  type = 14503 id = 120  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 121  } 
       name     = "134. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 122  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 9th Army
   ##########################################
   landunit = 
   { location = 252 # Ostpreußen
     name     = "AOK IX"
     leader   = 257 # Strauss
     id       = {  type = 14500 id = 58  }
     division =
     { id       = {  type = 14503 id = 123  }
       name     = "9. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 252 # Ostpreußen
     name     = "V. Armeekorps"
     leader   = 230 # Ruoff
     id       = {  type = 14500 id = 59  }
     division = 
     { id       = {  type = 14503 id = 124  } 
       name     = "5. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 125  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 252 # Ostpreußen
     name     = "VI. Armeekorps"
     leader   = 80 # Förster
     id       = {  type = 14500 id = 60  }
     division = 
     { id       = {  type = 14503 id = 126  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 127  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 252 # Ostpreußen
     name     = "VIII. Armeekorps"
     leader   = 130 # Heitz
     id       = {  type = 14500 id = 61  }
     division = 
     { id       = {  type = 14503 id = 128  } 
       name     = "8. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 129  } 
       name     = "28. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 130  } 
       name     = "161. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 252 # Ostpreußen
     name     = "XX. Armeekorps"
     #leader   = ##### Materna
     id       = {  type = 14500 id = 62  }
     division = 
     { id       = {  type = 14503 id = 131  } 
       name     = "162. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 132  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 2nd Panzer Group
   ##########################################
   landunit = 
   { location = 229 # Poland
     name     = "OK Pz.Gr. II"
     leader   = 94 # Guderian
     id       = {  type = 14500 id = 63  }
     division =
     { id       = {  type = 14503 id = 133  }
       name     = "Panzergruppe 2"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 229 # Poland
     name     = "XII. Armeekorps"
     #leader   = ##### Schroth
     id       = {  type = 14500 id = 64  }
     division = 
     { id       = {  type = 14503 id = 134  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 135  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 136  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 229 # Poland
     name     = "XXIV. Armeekorps (mot)"
     #leader   = ##### von Schweppenburg
     id       = {  type = 14500 id = 65  }
     division = 
     { id       = {  type = 14503 id = 137  } 
       name     = "10. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 138  } 
       name     = "1. Kavallerie-Division" 
       type     = cavalry 
       model    = 11
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 139  } 
       name     = "255. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 229 # Poland
     name     = "XXXXVI. Armeekorps (mot)"
     leader   = 347 # von Vietinghoff-Scheel
     id       = {  type = 14500 id = 66  }
     division = 
     { id       = {  type = 14503 id = 140  } 
       name     = "10. Panzer-Division" 
       type     = armor
       model    = 0
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 141  } 
       name     = "SS-Division 'Reich'" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 228 # Poland
     name     = "XXXXVII. Armeekorps (mot)"
     leader   = 183 # Lemelsen
     id       = {  type = 14500 id = 67  }
     division = 
     { id       = {  type = 14503 id = 142  } 
       name     = "17. Panzer-Division" 
       type     = armor
       model    = 0
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 143  } 
       name     = "18. Panzer-Division" 
       type     = armor
       model    = 0
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 144  } 
       name     = "29. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 145  } 
       name     = "167. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 3rd Panzer Group
   ##########################################
   landunit = 
   { location = 230 # Poland
     name     = "OK Pz.Gr. III"
     leader   = 142 # Hoth
     id       = {  type = 14500 id = 68  }
     division =
     { id       = {  type = 14503 id = 148  }
       name     = "Panzergruppe 3"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 230 # Poland
     name     = "XXXIX. Armeekorps (mot)"
     leader   = 243 # Schmidt R.
     id       = {  type = 14500 id = 69  }
     division = 
     { id       = {  type = 14503 id = 149  } 
       name     = "7. Panzer-Division" 
       type     = light_armor
       model    = 2
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 150  } 
       name     = "20. Panzer-Division" 
       type     = light_armor
       model    = 2
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 151  } 
       name     = "14. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 152  } 
       name     = "20. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 230 # Poland
     name     = "LVII. Armeekorps (mot)"
     leader   = 174 # Kuntzen
     id       = {  type = 14500 id = 70  }
     division = 
     { id       = {  type = 14503 id = 153  } 
       name     = "12. Panzer-Division" 
       type     = light_armor
       model    = 2
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 154  } 
       name     = "19. Panzer-Division" 
       type     = light_armor
       model    = 2
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 155  } 
       name     = "18. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   ##########################################
   #
   # ARMY GROUP SOUTH
   ##########################################
   landunit = 
   { location = 235 # Krakow
     name     = "OK Heeresgruppe Süd"
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 71  }
     division =
     { id       = {  type = 14503 id = 156  }
       name     = "Heeresgruppe Süd"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "99. lei. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 50
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 235 # Krakow
     name     = "Befh.rückw.Heeresgebiet 103"
     #leader   = ##### von Roques
     id       = {  type = 14500 id = 72  }
     division = 
     { id       = {  type = 14503 id = 158  } 
       name     = "213. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 159  } 
       name     = "444. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 160  } 
       name     = "454. Sicherüngs-Division" 
       type     = infantry # should be GAR, but made INF for gameplay reasons
       model    = 10
       strength = 100
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 6th Army
   ##########################################
   landunit = 
   { location = 243 # Poland
     name     = "AOK VI"
     leader   = 333 # von Reichenau
     id       = {  type = 14500 id = 73  }
     division =
     { id       = {  type = 14503 id = 161  }
       name     = "6. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 162  } 
       name     = "298. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "XVII. Armeekorps"
     #leader   = ##### Kientz
     id       = {  type = 14500 id = 74  }
     division = 
     { id       = {  type = 14503 id = 163  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 164  } 
       name     = "62. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 243 # Poland
     name     = "XXIX. Armeekorps"
     leader   = 326 # von Obstfelder
     id       = {  type = 14500 id = 75  }
     division = 
     { id       = {  type = 14503 id = 165  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 166  } 
       name     = "111. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 167  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "XXXXIV. Armeekorps"
     #leader   = ##### von Koch
     id       = {  type = 14500 id = 76  }
     division = 
     { id       = {  type = 14503 id = 168  } 
       name     = "9. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 169  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "LV. Armeekorps"
     #leader   = ##### Vierow
     id       = {  type = 14500 id = 77  }
     division = 
     { id       = {  type = 14503 id = 170  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 171  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 11th Army
   ##########################################
   landunit = 
   { location = 297 # Romania
     name     = "AOK XI"
     leader   = 340 # von Schobert
     id       = {  type = 14500 id = 78  }
     division =
     { id       = {  type = 14503 id = 172  }
       name     = "11. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 173  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 301 # Romania
     name     = "XI. Armeekorps"
     #leader   = ##### Kortzfleisch
     id       = {  type = 14500 id = 79  }
     division = 
     { id       = {  type = 14503 id = 174  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 175  } 
       name     = "239. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 298 # Romania
     name     = "XXX. Armeekorps"
     leader   = 335 # von Salmuth
     id       = {  type = 14500 id = 80  } 
     division = 
     { id       = {  type = 14503 id = 176  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 297 # Romania
     name     = "LIV. Armeekorps"
     #leader   = ##### Hansen E.
     id       = {  type = 14500 id = 81  } 
     division = 
     { id       = {  type = 14503 id = 177  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 178  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 316 # Romania
     name     = "Deut.Heer.Mis.in Rumänien"
     leader   = 126 # Hauffe
     id       = {  type = 14500 id = 82  } 
     division = 
     { id       = {  type = 14503 id = 179  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   # 17th Army
   ##########################################
   landunit = 
   { location = 236 # Poland
     name     = "AOK XVII"
     leader   = 343 # von Stülpnagel
     id       = {  type = 14500 id = 83  }
     division =
     { id       = {  type = 14503 id = 180  }
       name     = "17. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "97. lei. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 50
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14500 id = 182  } 
       name     = "100. lei. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 50
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 237 # Poland
     name     = "IV. Armeekorps"
     #leader   = ##### Schwedler
     id       = {  type = 14500 id = 84  }
     division = 
     { id       = {  type = 14503 id = 183  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 184  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 185  } 
       name     = "262. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 186  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 187  } 
       name     = "296. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 213 # Hungary
     name     = "XXXXIX. Gebirgskorps"
     leader   = 175 # Kübler
     id       = {  type = 14500 id = 85  }
     division = 
     { id       = {  type = 14503 id = 188  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 189  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 190  } 
       name     = "1. Gebirgs-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 236 # Poland
     name     = "LII. Armeekorps"
     leader   = 282 # von Briesen
     id       = {  type = 14500 id = 86  }
     division = 
     { id       = {  type = 14500 id = 191  } 
       name     = "101. lei. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 50
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   # 1st Panzer Group
   ##########################################
   landunit = 
   { location = 246 # Poland
     name     = "OK Pz.Gr. I"
     leader   = 309 # von Kleist
     id       = {  type = 14500 id = 87  }
     division =
     { id       = {  type = 14503 id = 192  }
       name     = "Panzergruppe 1"
       type     = hq
       model    = 3
       strength = 100
       extra    = sp_anti_air
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 193  } 
       name     = "16. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_anti_air
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 194  } 
       name     = "25. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 195  } 
       name     = "SS 'Leibstandarte Adolf Hitler'" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "III. Armeekorps (mot)"
     leader   = 321 # von Mackensen
     id       = {  type = 14500 id = 88  }
     division = 
     { id       = {  type = 14503 id = 196  } 
       name     = "13. Panzer-Division" 
       type     = armor
       model    = 0
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 197  } 
       name     = "14. Panzer-Division" 
       type     = armor
       model    = 0
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "XIV. Armeekorps (mot)"
     leader   = 351 # von Wietersheim
     id       = {  type = 14500 id = 89  }
     division = 
     { id       = {  type = 14503 id = 198  } 
       name     = "9. Panzer-Division" 
       type     = armor
       model    = 0
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 199  } 
       name     = "SS-Division 'Wiking'" 
       type     = motorized
       model    = 1
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   landunit = 
   { location = 246 # Poland
     name     = "XXXXVIII. Armeekorps (mot)"
     leader   = 154 # Kempf
     id       = {  type = 14500 id = 90  }
     division = 
     { id       = {  type = 14503 id = 200  } 
       name     = "11. Panzer-Division" 
       type     = armor
       model    = 0
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 201  } 
       name     = "16. Panzer-Division" 
       type     = armor
       model    = 0
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
     }
     division = 
     { id       = {  type = 14503 id = 202  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = cavalry_brigade
       brigade_model = 11
       offensive = { year = 1941 month = august day = 15 }
     }
   }
   ##########################################
   #
   # OKH RESERVES
   ##########################################

   # Behind Heeresgruppe Nord
   ##########################################
   landunit = 
   { location = 170 # WK III; enroute to the East
     name     = "L. Armeekorps"
     leader   = 187 # Lindemann
     id       = {  type = 14500 id = 91  }
     division = 
     { id       = {  type = 14503 id = 203  } 
       name     = "86. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 204  } 
       name     = "SS-Polizei-Division"
       type     = motorized
       model    = 1
       strength = 100
       extra    = armored_car
       brigade_model = 4
     }
   }
   # Behind Heeresgruppe Mitte
   ##########################################
   landunit = 
   { location = 224 # Poznan
     name     = "AOK II"
     leader   = 350 # von Weichs
     id       = {  type = 14500 id = 92  }
     division =
     { id       = {  type = 14503 id = 205  }
       name     = "2. Armee"
       type     = hq
       model    = 3
       strength = 100
       extra    = anti_air
       brigade_model = 3
     }
   }
   landunit = 
   { location = 138 # WK XII; enroute to the East
     name     = "Höheres Kommando XXXV"
     #leader   = ##### Kaempfe
     id       = {  type = 14500 id = 93  }
     division = 
     { id       = {  type = 14503 id = 206  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
     }
     division = 
     { id       = {  type = 14503 id = 207  } 
       name     = "112. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 208  } 
       name     = "197. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
   }
   landunit = 
   { location = 224 # behind HG Mitte, enroute to the East
     name     = "Höheres Kommando XXXXII"
     leader   = 173 # Kuntze
     id       = {  type = 14500 id = 94  }
     division = 
     { id       = {  type = 14503 id = 209  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = engineer
       brigade_model = 4
     }
     division = 
     { id       = {  type = 14503 id = 210  } 
       name     = "102. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 211  } 
       name     = "106. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 212  } 
       name     = "110. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
     division = 
     { id       = {  type = 14503 id = 213  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
   }
   landunit = 
   { location = 231 # behind LIII. AK, enroute to the East
     name     = "OKH Reserven"
     #leader   = ##### Rendulic
     id       = {  type = 14500 id = 95  }
     division = 
     { id       = {  type = 14503 id = 214  } 
       name     = "52. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
   }
   # Behind Heeresgruppe Süd
   ##########################################
   landunit = 
   { location = 201 # behind HG Süd, enroute to the East
     name     = "Höheres Kommando XXXIV"
     #leader   = ##### Metz
     id       = {  type = 14500 id = 96  }
     division = 
     { id       = {  type = 14503 id = 215  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
   }
   landunit = 
   { location = 207 # WK III, XIII & XVIII; enroute to the East
     name     = "LI. Armeekorps"
     #leader   = ##### Reinhard
     id       = {  type = 14500 id = 97  }
     division = 
     { id       = {  type = 14503 id = 216  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
     }
     division = 
     { id       = {  type = 14503 id = 217  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "113. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
   }
   landunit = 
   { location = 168 # behind AOK 17, enroute to the East
     name     = "OKH Reserven"
     #leader   = #####
     id       = {  type = 14500 id = 98  }
     division = 
     { id       = {  type = 14503 id = 219  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = bergsjaeger
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
     }
     division = 
     { id       = {  type = 14503 id = 220  } 
       name     = "125. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 80
     }
   }
   landunit = 
   { location = 201 # behind HG Süd, enroute to the East
     name     = "OKH Reserven"
     #leader   = #####
     id       = {  type = 14500 id = 99  }
     division = 
     { id       = {  type = 14503 id = 221  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 222  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 223  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 224  } 
       name     = "294. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
     }
   }
   ##########################################
   #
   # GERMAN AFRICA CORPS
   ##########################################
   landunit = 
   { location = 771 # North Africa
     name     = "Deutsche Afrikakorps" 
     leader   = 229 # Rommel
     id       = {  type = 14500 id = 100  } 
     division = 
     { id       = {  type = 14503 id = 225  } 
       name     = "15. Panzer-Division" 
       type     = light_armor 
       model    = 1 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
     }
     division = 
     { id       = {  type = 14503 id = 226  } 
       name     = "5. Leichte-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = armored_car
       brigade_model = 4
     }
   }
   landunit = 
   { location = 217 # Viborg
     name     = "Gen.der deut.Truppen in Dänemark" 
     id       = {  type = 14500 id = 101  } 
     division = 
     { id       = {  type = 14500 id = 227  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
     }
   }
   landunit = 
   { location = 195 # Wien
     name     = "OKH Reserven" 
     id       = {  type = 14500 id = 102  } 
     division = 
     { id       = {  type = 14503 id = 228  } 
       name     = "60. Infanterie-Division (mot)" 
       type     = motorized
       model    = 1 
       strength = 100
     }
   }
   landunit = 
   { location = 179 # München
     name     = "OKH Reserven" 
     id       = {  type = 14500 id = 103  } 
     division = 
     { id       = {  type = 14503 id = 229  } 
       name     = "2. Panzer-Division" 
       type     = light_armor 
       model    = 1 
       strength = 100
     }
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "707. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60
     }
   }
   landunit = 
   { location = 163 # Berlin
     name     = "OKH Reserven" 
     id       = {  type = 14500 id = 104  } 
     division = 
     { id       = {  type = 14503 id = 231  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
     }
     division = 
     { id       = {  type = 14503 id = 232  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 25
     }
   }
   landunit = 
   { location = 184 # Königsberg
     name     = "OKH Reserven" 
     id       = {  type = 14500 id = 105  } 
     division = 
     { id       = {  type = 14503 id = 233  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 75
     }
   }
   ##########################################
   #
   # GERMAN REPLACEMENT ARMY
   ##########################################

   ##########################################
   ## Kriegsmarine

   # ATLANTIC FLEET
   navalunit = 
   { name     = "Atlantische Flotte" 
     id       = {  type = 14500 id = 400  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 401  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
      } 
     division = 
     { id    = {  type = 14500 id = 402  } 
       name  = "Scharnhorst" 
       type  = battlecruiser 
       model = 3
      }
     division = 
     { id    = {  type = 14500 id = 403  } 
       name  = "Prinz Eugen" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 404  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 405  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 406  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
    } 
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 407  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 408  } 
       name  = "Tirpitz" 
       type  = battleship 
       model = 7
      }
     division = 
     { id    = {  type = 14500 id = 409  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 410  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 411  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
     division = 
     { id    = {  type = 14500 id = 412  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 413  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 414  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
    }
   # LÜTZOW SQUADRON
   navalunit = 
   { name     = "Lützow Geschwader" 
     id       = {  type = 14500 id = 415  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 416  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 417  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   # 5TH DESTROYER SQUADRON
   navalunit = 
   { name     = "5. Zerstörergeschwader" 
     id       = {  type = 14500 id = 418  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 419  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 8TH DESTROYER SQUADRON
   navalunit = 
   { name     = "8. Zerstörergeschwader" 
     id       = {  type = 14500 id = 420  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 421  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # KRIEGSMARINE RESERVE
   navalunit = 
   { name     = "Kriegsmarine Reserve" 
     id       = {  type = 14500 id = 422  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 423  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 424  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 425  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 426  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 427  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 428  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    } 
   # 1ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "I. Unterseebootsflottille" 
     id       = {  type = 14500 id = 429  } 
     location = 2657 
     base     = 69
     division = 
     { id    = {  type = 14500 id = 430  } 
       name  = "11. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 431  } 
       name  = "12. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 2ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "II. Unterseebootsflottille" 
     id       = {  type = 14500 id = 432  } 
     location = 2657 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 433  } 
       name  = "21. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 434  } 
       name  = "22. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 3RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "III. Unterseebootsflottille" 
     id       = {  type = 14500 id = 435  } 
     location = 2659 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 436  } 
       name  = "31. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 437  } 
       name  = "32. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 4TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 438  } 
     location = 158 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 439  } 
       name  = "41. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 440  } 
       name  = "42. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "V. Unterseebootsflottille" 
     id       = {  type = 14500 id = 441  } 
     location = 2659 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 442  } 
       name  = "51. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 443  } 
       name  = "52. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 6TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 444  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 445  } 
       name  = "61. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 446  } 
       name  = "62. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 447  } 
     location = 2670 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 448  } 
       name  = "71. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 449  } 
       name  = "72. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 450  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 451  } 
       name  = "211. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 452  } 
       name  = "212. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 22ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 453  } 
     location = 2721 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 454  } 
       name  = "221. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 455  } 
       name  = "222. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 456  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 457  } 
       name  = "241. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 458  } 
       name  = "242. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 25TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 459  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 460  } 
       name  = "251. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 26TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 461  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 462  } 
       name  = "261. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 463  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 464  } 
       name  = "271. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }

   ##########################################
   ## Luftwaffe
  # 1ST AIR FLEET
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 500 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 501 }
      name       = "JG 54 'Grünherz'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 502 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 503 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 504 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 505 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 506 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 507 }
    name     = "II. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 508 }
      name       = "JG 51 'Mölders'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 509 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 510 }
      name       = "KG 53 'Legion Condor'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 511 }
      name       = "Schnellkampfgeschwader 210"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 512 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
  }
  airunit =
  { location = 228
    base     = 228
    id       = { type = 14500 id = 513 }
    name     = "VIII. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 514 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 515 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 516 }
      name       = "Jagdgeschwader 27"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110E
    }
    division =
    { id         = { type = 14500 id = 517 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110C
    }
    division =
    { id         = { type = 14500 id = 518 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17Z
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 55
    base     = 55
    id       = { type = 14500 id = 519 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 520 }
      name       = "Kampfgeschwader 28"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 521 }
      name       = "KG 4 'General Wever'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 522 }
      name       = "KG 30 'Adler'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
  }
  airunit =
  { location = 37
    base     = 37
    id       = { type = 14500 id = 523 }
    name     = "Fliegerführer Atlantik"
    division =
    { id         = { type = 14500 id = 524 }
      name       = "Kampfgeschwader 40"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  airunit =
  { location = 52
    base     = 52
    id       = { type = 14500 id = 525 }
    name     = "Jagdfliegerführer 2"
    division =
    { id         = { type = 14500 id = 526 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 527 }
      name       = "Jagdgeschwader 52"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 528 }
    name     = "Jagdfliegerführer 3"
    division =
    { id         = { type = 14500 id = 529 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 227
    base     = 227
    id       = { type = 14500 id = 530 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 531 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 532 }
      name       = "Lehrgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 533 }
      name       = "KG 51 'Edelweiß'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 534 }
      name       = "KG 54 'Totenkopf'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 535 }
      name       = "KG 55 'Greif'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  airunit =
  { location = 316
    base     = 316
    id       = { type = 14500 id = 536 }
    name     = "IV. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 537 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 538 }
      name       = "JG 77 'Herz As'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 109E
    }
  }
  # 10TH AIR CORPS
  airunit =
  { location = 377
    base     = 377
    id       = { type = 14500 id = 539 }
    name     = "X. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 540 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 541 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 50
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 542 }
      name       = "Kampfgeschwader z.b.V. 1"
      strength   = 100
      type       = transport_plane
      model      = 1 # Ju 52
    }
    division =
    { id         = { type = 14500 id = 543 }
      name       = "KG 26 'Löwen'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  # AIR FORCE COMMAND CENTER
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 548 }
    name     = "Luftwaffenbefehlshaber Mitte"
    division =
    { id         = { type = 14500 id = 549 }
      name       = "JG 1 'Oesau'"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 550 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 551 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 552 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
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
landdivision = { dormant = yes id = { type = 14500 id = 2046 }  name = "20. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }

   #Units under construction
	division_development = {
		name  = "250. Infanterie-Division 'Azul' (spanische)" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 600  } 
		date  = {  year = 1941 month = july day = 29  } 
	}
	division_development = {
		name  = "81. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 601  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "82. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 602  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "91. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 603  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "92. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 604  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "101. Unterseeboots-Division" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 605  } 
		date  = {  year = 1942 month = january day = 1  } 
	}
	division_development = {
		name  = "102. Unterseeboots-Division" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 606  } 
		date  = {  year = 1942 month = january day = 1  } 
	}
	division_development = {
		name  = "111. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 607  } 
		date  = {  year = 1941 month = december day = 1  } 
	}
	division_development = {
		name  = "112. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 608  } 
		date  = {  year = 1941 month = december day = 1  } 
	}
} 

