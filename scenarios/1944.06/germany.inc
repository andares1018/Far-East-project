 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	capital                = 163 
	manpower               = 2420 # based on info from http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm
	transports             = 135 
	escorts                = 35 

	# Resource Reserves 
	energy                 = 65000
	metal                  = 25000
	rare_materials         = 5000
	oil                    = 2000 
	supplies               = 5000 
	money                  = 200
	belligerence           = 100
 
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
    relation =
    { tag        = HUN
      value      = 200
      access     = yes
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = IRQ value = -200 }
    relation =
    { tag        = RSI
      value      = 200
      access     = yes
      guaranteed = { day = 27 month = september year = 1940 }
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
    relation = { tag = SOV value = -200 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = SWE value = -50 }
    relation = { tag = TUR value = 10 }
    relation = { tag = USA value = -200 }
    relation = { tag = YEM value = -200 }
    relation = { tag = U02 value = -200 }
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
         109 
         366 370 377 382 383 359 360 361 362 334 329 349 367 368 369 371 372 373 374 375 376 380 381 332 335 378 379
         394 401 402 403 404 405 406
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195 346
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         366 370 377 382 383 359 360 361 362 334 329 349 367 368 369 371 372 373 374 375 376 380 381 332 335 378 379
         37  38  39  40  41  42  44  45  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
         241 242 247 254 255 257 251 248 250 239 256 253 259 262 263 260 258 264 265 266 267 268 269 270 271 272 273 274 275
         564 566 590 591 592 593 594 596 597 599 
         71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  88  89  
         394 401 402 403 404 405 406 86  87  90  91  92  93
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
346 349 # Maribor
227 231 252 223 229 250 253 254 # Poland
377 382 383 365 366 370 # Greece
394 401 402 403 404 405 406 # Trento
332 335 329 334 #Montenegro, Albania, Macedonia (to avoid seceding to Serbia)
}
	# Germany 1944.06 techs 
	# ###################### 
	techapps = { 
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Assembly Line
	5140 5150 5160 5170 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380
	# Agriculture 
	5700 5710 5010 5020 5030
	# Oil Refining
	5190 5200 5210 5220 5230
	# Atomic Research
	5470 5480 5490 5500
	# Exp. Rocket
	5560
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417 5420 5426 5430 5440
	# Specialised Equipment
	5920 5960 5970

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270
	# Airborne Infantry
	1670 1680 1690
	# Marine Division
	1560 1570 1580 1590
	# Motorized Infantry
	1396 1400 1410
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470
	# Engineers
	1830 1840 1850 1860 1870
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140

	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060
	# Medium Tank
	2070 2080 2090
	# Heavy Tank
	2100 2110 2120 2126
	# Armoured Car  
	2860 2870 2880 2020 2150 2160
	# Tank Destroyer
	2170 2180 2850
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340
	# Anti-tank Artillery
	2400 2410 2420 2430
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470 2480
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520 2530
	# Self-Propelled Artillery
	2220 2230 2240
	# Rocket Artillery
	2970 2370
	# SP Anti-Air Artillery Brigade
	22910 22920 22930
	# SP Rocket Artillery
	2980 2260

	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser
	3310 3320 3330 3340 3350
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670 3680
	# Light Carrier 
	12100 12110 12120 12130
	# Aircraft Carrier 
	3510 3520 3530
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070 4100
	# CAS
	4400 4170 4280 4450
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190 4200 4210
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150 4160
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# Escort Fighter
	4050 4080 4110
	# CAG
	4900 4910 4920 4930 4940
	# Air Transport 
	4290 4250 4260 4270 15180

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270
	9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300 82310 82320
	# Naval Logistics
	82500 82510
	# Naval Interdiction
	8500 8510 8520 8550 8560 8570 8600 
	# Trade Interdiction Submarine
	8610 8620 8630
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210

	# Rocket Tech
	7550 7560 7570 7580 7590 7100 7110 7010 7020
	#Goliath Tanks
	7620
	} 
inventions = { 3000027 3000028 3000031 }
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
   armamentminister       = {  type = 9 id = 65  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 119 } 
   chiefofstaff           = {  type = 9 id = 138 } 
   chiefofarmy            = {  type = 9 id = 149 } 
   chiefofnavy            = {  type = 9 id = 161 } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  2 3 4 7 8 14 26 27 32 33 44 56 94 109 151 152 17 45 55 74 75 131 140 175 146 9 21 28 70 71 84 87 101 147 
                               156 6 167 206 176 
                            } 
   dormant_leaders        = {  604 608 333 116 315 139 472 214 286 41 271 128 54 572 446 193 130 143  } 
   dormant_teams          = {  21  }

   # ARMY HIGH COMMAND
   landunit = 
   { location = 163 
     name     = "Oberkommando des Heeres" 
     leader   = 153 # Keitel W.
     id       = {  type = 14500 id = 1  } 
     division = 
     { id       = {  type = 14500 id = 2  } 
       name     = "Oberkommando des Heeres" 
       type     = hq 
       model    = 4 
       strength = 100 
       extra    = anti_air
       brigade_model = 4
      }
    }
   # ARMY NORWAY
   landunit = 
   { location = 483 
     name     = "Armee Norwegen" 
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 3  } 
     division = 
     { id       = {  type = 14500 id = 4  } 
       name     = "21. Armee" 
       type     = hq 
       model    = 4 
       extra    = police
       brigade_model = 2
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 5  } 
       name     = "89. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
    }
   landunit = 
   { location = 491 
     name     = "XXXIII. Armeekorps" 
     id       = {  type = 14500 id = 6  } 
     division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "196. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
      }
    }
   landunit = 
   { location = 495 
     name     = "XXXIII. Armeekorps" 
     id       = {  type = 14500 id = 6000  } 
     division = 
     { id       = {  type = 14500 id = 9  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "14. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
      }
    }
   landunit = 
   { location = 496 
     name     = "LXXI. Armeekorps" 
     id       = {  type = 14500 id = 11  } 
     division = 
     { id       = {  type = 14500 id = 12  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 13  } 
       name     = "230. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "270. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
    }
   # 20TH MOUNTAIN ARMEE
   landunit = 
   { location = 517 
     name     = "20. Gebirgsarmee" 
     leader   = 49 # Dietl
     id       = {  type = 14500 id = 15  } 
     division = 
     { id       = {  type = 14500 id = 16  } 
       name     = "20. Gebirgsarmee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 50
      }
     division = 
     { id       = {  type = 14500 id = 17  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80 
       experience = 50
      }
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "6. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80
       experience = 50
      }
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "210. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 50
       extra    = armored_car
       brigade_model = 5	   
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 519 
     name     = "XXXVI. Gebirgskorps" 
     id       = {  type = 14500 id = 20  } 
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 22  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 514 
     name     = "XVIII. Gebirgskorps" 
     id       = {  type = 14500 id = 23  } 
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "7. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 25  } 
       name     = "Division 'Kräutler'" 
       type     = infantry 
       model    = 11 
       strength = 70
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
      dig_in = 20.000
    }
   # ARMY GROUP NORTH
   landunit = 
   { location = 264 
     name     = "Heeresgruppe Nord Reserve" 
     leader   = 187 # Lindemann
     id       = {  type = 14500 id = 26  } 
     division = 
     { id       = {  type = 14500 id = 28  } 
       name     = "Feldausbildung-Division 'Nord'" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 29  } 
       name     = "12. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
    }
   # Army Detachment Narva
   landunit = 
   { location = 274 
     name     = "Armee-Abteilung Narwa" 
     leader   = 75 # Friessner
     id       = {  type = 14500 id = 30  } 
     division = 
     { id       = {  type = 14500 id = 31  } 
       name     = "Armee-Abteilung Narwa" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 32  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 274 
     name     = "XXVI. Armeekorps" 
     id       = {  type = 14500 id = 33  } 
     division = 
     { id       = {  type = 14500 id = 34  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 36  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 274 
     name     = "XXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 37  } 
     division = 
     { id       = {  type = 14500 id = 38  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 39  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 40  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 274 
     name     = "III. SS-Panzerkorps" 
     id       = {  type = 14500 id = 41  } 
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "11. SS-Pz.Gr.Freiw.Div. 'Nordland'" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 43  } 
       name     = "20. Estische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 18th Army
   landunit = 
   { location = 566 
     name     = "18. Armee" 
     leader   = 189 # Loch
     id       = {  type = 14500 id = 44  } 
     division = 
     { id       = {  type = 14500 id = 45  } 
       name     = "18. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 46  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 566 
     name     = "XXXVIII. Armeekorps" 
     id       = {  type = 14500 id = 47  } 
     division = 
     { id       = {  type = 14500 id = 48  } 
       name     = "21. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 50  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 566 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 51  } 
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "12. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 54  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 55  } 
       name     = "126. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "300. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 58  } 
       name     = "207. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = police
       brigade_model = 2
       experience = 60
      }
      dig_in = 20.000
    }
   # 16th Army
   landunit = 
   { location = 564 
     name     = "16. Armee" 
     leader   = 117 # Hansen C.
     id       = {  type = 14500 id = 59  } 
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "16. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 61  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 62  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 63  } 
       name     = "281. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 64  } 
       name     = "285. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 564 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 65  } 
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 564 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 68  } 
     division = 
     { id       = {  type = 14500 id = 69  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 70  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 71  } 
       name     = "389. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 564 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 72  } 
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 74  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 75  } 
       name     = "329. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 593 
     name     = "VI. SS-Korps" 
     id       = {  type = 14500 id = 76  } 
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "15. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "19. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 593 
     name     = "L. Armeekorps" 
     id       = {  type = 14500 id = 80  } 
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "83. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 82  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 83  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # ARMY GROUP CENTER
   landunit = 
   { location = 258 
     name     = "Heeresgruppe Mitte Reserve" 
     leader   = 33 # Busch
     id       = {  type = 14500 id = 84  } 
     division = 
     { id       = {  type = 14500 id = 86  } 
       name     = "390. Feldausbildung-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "221. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 88  } 
       name     = "391. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 89  } 
       name     = "14. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "707. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       extra    = artillery
       brigade_model = 10  
       experience = 60
      }
    }
   # 3rd Panzer Army
   landunit = 
   { location = 590 
     name     = "3. Panzerarmee" 
     leader   = 223 # Reinhardt
     id       = {  type = 14500 id = 91  } 
     division = 
     { id       = {  type = 14500 id = 92  } 
       name     = "3. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "201. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 94  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 590 
     name     = "VI. Armeekorps" 
     id       = {  type = 14500 id = 95  } 
     division = 
     { id       = {  type = 14500 id = 96  } 
       name     = "197. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 590 
     name     = "LIII. Armeekorps" 
     id       = {  type = 14500 id = 99  } 
     division = 
     { id       = {  type = 14500 id = 100  } 
       name     = "4. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "6. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 102  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 4th Army
   landunit = 
   { location = 591 
     name     = "4. Armee" 
     leader   = 345 # von Tippelskirch
     id       = {  type = 14500 id = 104  } 
     division = 
     { id       = {  type = 14500 id = 105  } 
       name     = "4. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "286. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 594 
     name     = "XII. Armeekorps" 
     id       = {  type = 14500 id = 107  } 
     division = 
     { id       = {  type = 14500 id = 108  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 109  } 
       name     = "267. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 110  } 
       name     = "18. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 591 
     name     = "XXXIX. Panzerkorps" 
     id       = {  type = 14500 id = 111  } 
     division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "110. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 115  } 
       name     = "337. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 594 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 116  } 
     division = 
     { id       = {  type = 14500 id = 117  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 118  } 
       name     = "25. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "78. Sturm-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2
       experience = 60
      }
      dig_in = 20.000
    }
   # 9th Army
   landunit = 
   { location = 597 
     name     = "9. Armee" 
     leader   = 151 # Jordan
     id       = {  type = 14500 id = 120  } 
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "9. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 123  } 
       name     = "36. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 124  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 597 
     name     = "XXXV. Armeekorps" 
     id       = {  type = 14500 id = 125  } 
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 128  } 
       name     = "134. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 129  } 
       name     = "296. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 130  } 
       name     = "383. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 594 
     name     = "LV. Armeekorps" 
     id       = {  type = 14500 id = 131  } 
     division = 
     { id       = {  type = 14500 id = 132  } 
       name     = "102. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
      dig_in = 20.000
    }
   # 2nd Army
   landunit = 
   { location = 248 
     name     = "2. Armee" 
     leader   = 360 # Weiss
     id       = {  type = 14500 id = 134  } 
     division = 
     { id       = {  type = 14500 id = 135  } 
       name     = "2. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 136  } 
       name     = "5. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 137  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 138  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = anti_air
       brigade_model = 4 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 139  } 
       name     = "203. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 140  } 
       name     = "3. Kavallerie-Division" 
       type     = cavalry 
       model    = 12 
       strength = 60 
       experience = 60
      }
      dig_in = 20.000
    }
   # ARMY GROUP NORTH UKRAINE
   # 4th Panzer Army
   landunit = 
   { location = 246 
     name     = "4. Panzerarmee" 
     leader   = 119 # Harpe
     id       = {  type = 14500 id = 146  } 
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "4. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "28. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "454. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 150  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 246 
     name     = "XIII. Armeekorps" 
     id       = {  type = 14500 id = 152  } 
     division = 
     { id       = {  type = 14500 id = 153  } 
       name     = "340. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "361. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 3931  } 
       name     = "14. Galizische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 246 
     name     = "XXXXII. Armeekorps" 
     id       = {  type = 14500 id = 155  } 
     division = 
     { id       = {  type = 14500 id = 156  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 159  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 247 
     name     = "LVI. Panzerkorps" 
     id       = {  type = 14500 id = 160  } 
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "1. Skijäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 165  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 1st Panzer Army
   landunit = 
   { location = 242 
     name     = "1. Panzerarmee" 
     leader   = 222 # Raus
     id       = {  type = 14500 id = 166  } 
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "1. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "1. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 169  } 
       name     = "7. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 170  } 
       name     = "8. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "17. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 172  } 
       name     = "20. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       extra    = sp_anti_air
       brigade_model = 2
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 241 
     name     = "XXXXVI. Panzerkorps" 
     id       = {  type = 14500 id = 173  } 
     division = 
     { id       = {  type = 14500 id = 174  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 175  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 176  } 
       name     = "367. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 241 
     name     = "LIX. Armeekorps" 
     id       = {  type = 14500 id = 177  } 
     division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 179  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 242 
     name     = "XXIV. Panzerkorps" 
     id       = {  type = 14500 id = 180  } 
     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 182  } 
       name     = "100. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "371. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 242 
     name     = "XXXXVIII. Panzerkorps" 
     id       = {  type = 14500 id = 184  } 
     division = 
     { id       = {  type = 14500 id = 185  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "349. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 187  } 
       name     = "357. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 188  } 
       name     = "359. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 292 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 189  } 
     division = 
     { id       = {  type = 14500 id = 190  } 
       name     = "101. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 213 
     name     = "VII. Hadtest" 
     id       = {  type = 14500 id = 191  } 
     division = 
     { id       = {  type = 14500 id = 192  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # ARMY GROUP SOUTH UKRAINE
   landunit = 
   { location = 311 
     name     = "Heeresgruppe Südukraine Reserve" 
     leader   = 248 # Schörner
     id       = {  type = 14500 id = 193  } 
     division = 
     { id       = {  type = 14500 id = 195  } 
       name     = "153. Feldausbildung-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
    }
   # 17th Army
   landunit = 
   { location = 310 
     name     = "17. Armee" 
     leader   = 2 # Allmendinger
     id       = {  type = 14500 id = 1000  } 
     division = 
     { id       = {  type = 14500 id = 1001  } 
       name     = "17. Armee" 
       type     = hq 
       model    = 4 
       strength = 55 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
    }
   # 3rd Romanian Army
   landunit = 
   { location = 306 
     name     = "XXIX. Armeekorps" 
     id       = {  type = 14500 id = 196  } 
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "9. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 198  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 6th Army
   landunit = 
   { location = 304 
     name     = "6. Armee" 
     leader   = 44 # de Angelis
     id       = {  type = 14500 id = 199  } 
     division = 
     { id       = {  type = 14500 id = 200  } 
       name     = "6. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 201  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       extra    = sp_artillery
       brigade_model = 2
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 202  } 
       name     = "13. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 304 
     name     = "XXX. Armeekorps" 
     id       = {  type = 14500 id = 203  } 
     division = 
     { id       = {  type = 14500 id = 204  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 206  } 
       name     = "302. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 207  } 
       name     = "306. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 208  } 
       name     = "384. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 304 
     name     = "LII. Armeekorps" 
     id       = {  type = 14500 id = 209  } 
     division = 
     { id       = {  type = 14500 id = 210  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 211  } 
       name     = "97. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 212  } 
       name     = "294. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 213  } 
       name     = "320. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 305 
     name     = "XXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 215  } 
     division = 
     { id       = {  type = 14500 id = 216  } 
       name     = "10. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 217  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "282. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 219  } 
       name     = "335. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 305 
     name     = "VII. Armeekorps" 
     id       = {  type = 14500 id = 220  } 
     division = 
     { id       = {  type = 14500 id = 221  } 
       name     = "106. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "370. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 8th Army
   landunit = 
   { location = 297 
     name     = "8. Armee" 
     leader   = 367 # Wöhler
     id       = {  type = 14500 id = 223  } 
     division = 
     { id       = {  type = 14500 id = 224  } 
       name     = "8. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 225  } 
       name     = "23. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 226  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 227  } 
       name     = "376. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 4th Romanian Army
   landunit = 
   { location = 299 
     name     = "LVII. Panzerkorps" 
     id       = {  type = 14500 id = 228  } 
     division = 
     { id       = {  type = 14500 id = 229  } 
       name     = "3. SS-Panzer-Div. 'Totenkopf'" 
       type     = armor 
       model    = 2 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "14. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 231  } 
       name     = "24. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 233  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 234  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 301 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 235  } 
     division = 
     { id       = {  type = 14500 id = 236  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 237  } 
       name     = "8. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4 
       experience = 60
      }
      dig_in = 20.000
    }
   # ARMY GROUP F
   landunit = 
   { location = 338 
     name     = "Heeresgruppe F Reserve" 
     leader   = 350 # von Weichs
     id       = {  type = 14500 id = 238  } 
     division = 
     { id       = {  type = 14500 id = 240  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 241  } 
       name     = "18. SS-Pz.Gr.Div. 'Horst Wessel'" 
       type     = mechanized 
       model    = 0 
       strength = 70 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 242  } 
       name     = "8. SS-Kav.Div. 'Florian Geyer'" 
       type     = cavalry 
       model    = 12 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 243  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
    }
   # 2nd Panzer Army
   landunit = 
   { location = 336 
     name     = "2. Panzerarmee" 
     leader   = 565 # Rendulic
     id       = {  type = 14500 id = 244  } 
     division = 
     { id       = {  type = 14500 id = 245  } 
       name     = "2. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 246  } 
       name     = "1. Kossaken-Kavallerie-Division" 
       type     = cavalry 
       model    = 12 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 247  } 
       name     = "373. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
    }
   landunit = 
   { location = 336 
     name     = "XV. Gebirgskorps" 
     id       = {  type = 14500 id = 248  } 
     division = 
     { id       = {  type = 14500 id = 249  } 
       name     = "264. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 250  } 
       name     = "392. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 251  } 
       name     = "Panzergrenadier-Div. 'Brandenburg'" 
       type     = mechanized 
       model    = 0 
       strength = 70 
       experience = 40
      }
    }
   landunit = 
   { location = 330 
     name     = "V. SS-Gebirgskorps" 
     id       = {  type = 14500 id = 252  } 
     division = 
     { id       = {  type = 14500 id = 253  } 
       name     = "7. SS-Freiw.-Geb.Div. 'Prinz Eugen'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 254  } 
       name     = "13. Waffen-SS Geb.Div. 'Handschar'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 255  } 
       name     = "369. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 256  } 
       name     = "118. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 359 
     name     = "XXI. Gebirgskorps" 
     id       = {  type = 14500 id = 257  } 
     division = 
     { id       = {  type = 14500 id = 258  } 
       name     = "21. SS-Freiw.-Geb.Div. 'Skanderbeg'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 45 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 259  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 260  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 60
      }
    }
   # Heeresgruppe E
   landunit = 
   { location = 377 
     name     = "Heeresgruppe E Reserve" 
     leader   = 560 # Löhr
     id       = {  type = 14500 id = 261  } 
     division = 
     { id       = {  type = 14500 id = 263  } 
       name     = "104. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 372 
     name     = "LXVIII. Armeekorps" 
     id       = {  type = 14500 id = 264  } 
     division = 
     { id       = {  type = 14500 id = 265  } 
       name     = "11. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 266  } 
       name     = "41. Festungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 267  } 
       name     = "117. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 382 
     name     = "Kommandantur v. Kreta" 
     id       = {  type = 14500 id = 268  } 
     division = 
     { id       = {  type = 14500 id = 269  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 270  } 
       name     = "133. Festungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
       experience = 40
      }
    }
   landunit = 
   { location = 379 
     name     = "Sturm-Division Rhodos" 
     id       = {  type = 14500 id = 271  } 
     division = 
     { id       = {  type = 14500 id = 272  } 
       name     = "Sturm-Division Rhodos" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 368 #Larissa 
     name     = "4. SS-Pz.Gr.Div. 'Polizei'" 
     id       = {  type = 14500 id = 273  } 
     division = 
     { id       = {  type = 14500 id = 274  } 
       name     = "4. SS-Pz.Gr.Div. 'Polizei'" 
       type     = mechanized 
       model    = 0 
       strength = 50 
       extra    = armored_car
       brigade_model = 5
       experience = 40
      }
    }
   landunit = 
   { location = 281 
     name     = "Befehlshaber i. op. Ost-Ungarn" 
     id       = {  type = 14500 id = 275  } 
     division = 
     { id       = {  type = 14500 id = 276  } 
       name     = "1. SS-Kavallerie-Division" 
       type     = cavalry 
       model    = 12 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 277  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 40
      }
    }
   # ARMY GROUP C
   landunit = 
   { location = 408 
     name     = "Heeresgruppe C Reserve" 
     leader   = 156 # Kesselring
     id       = {  type = 14500 id = 278  } 
     division = 
     { id       = {  type = 14500 id = 280  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 3940  } 
       name     = "188. Reserve-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 60 
      }
    }
   # 14th Army
   landunit = 
   { location = 413 
     name     = "14. Armee" 
     leader   = 183 # Lemelsen
     id       = {  type = 14500 id = 281  } 
     division = 
     { id       = {  type = 14500 id = 282  } 
       name     = "14. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 283  } 
       name     = "19. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 284  } 
       name     = "65. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 285  } 
       name     = "92. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 286  } 
       name     = "362. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 414 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 287  } 
     division = 
     { id       = {  type = 14500 id = 288  } 
       name     = "20. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 289  } 
       name     = "29. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 290  } 
       name     = "90. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 291  } 
       name     = "162. Infanterie-Div. 'Turkestan'" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 414 
     name     = "I. Fallschirmjägerkorps" 
     id       = {  type = 14500 id = 292  } 
     division = 
     { id       = {  type = 14500 id = 293  } 
       name     = "3. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 294  } 
       name     = "26. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 295  } 
       name     = "4. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 296  } 
       name     = "356. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # 10th Army
   landunit = 
   { location = 412 
     name     = "10. Armee" 
     leader   = 347 # von Vietinghoff-Scheel
     id       = {  type = 14500 id = 297  } 
     division = 
     { id       = {  type = 14500 id = 298  } 
       name     = "10. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 299  } 
       name     = "42. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 300  } 
       name     = "114. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 301  } 
       name     = "16. SS-Pz.Gr.Div. 'Reichsführer SS'" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 60
       extra    = tank_destroyer
       brigade_model = 2
      }
      dig_in = 20.000
    }
   # DENMARK OCCUPATION FORCE
   landunit = 
   { location = 217 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 302  } 
     division = 
     { id       = {  type = 14500 id = 303  } 
       name     = "416. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       experience = 10
      }
    }
   landunit = 
   { location = 294 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 304  } 
     division = 
     { id       = {  type = 14500 id = 305  } 
       name     = "166. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 220 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 306  } 
     division = 
     { id       = {  type = 14500 id = 307  } 
       name     = "160. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 152 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 308  } 
     division = 
     { id       = {  type = 14500 id = 309  } 
       name     = "363. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       experience = 20
      }
    }
   landunit = 
   { location = 153 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 310  } 
     division = 
     { id       = {  type = 14500 id = 311  } 
       name     = "233. Reserve-Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 10 
      }
    }
   # NETHERLANDS OCCUPATION FORCE
   landunit = 
   { location = 122 
     name     = "Wehrm. Befehlshaber Niederlände" 
     id       = {  type = 14500 id = 312  } 
     division = 
     { id       = {  type = 14500 id = 313  } 
       name     = "16. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       max_strength = 70
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 314  } 
       name     = "347. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 315  } 
       name     = "19. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 45 
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 316  } 
       name     = "719. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
    }
   # GERMAN ARMY COMMAND IN THE WEST
   landunit = 
   { location = 55 
     name     = "Oberbefehlshaber West Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 317  } 
     division = 
     { id       = {  type = 14500 id = 318  } 
       name     = "Panzergruppe West" 
       type     = hq 
       model    = 4 
       strength = 60 
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
    }
   # ARMY GROUP B
   landunit = 
   { location = 48 
     name     = "Heeresgruppe B Reserve" 
     leader   = 229 # Rommel
     id       = {  type = 14500 id = 319  } 
     division = 
     { id       = {  type = 14500 id = 144  } 
       name     = "10. SS-Panzer-Div. 'Frundsberg'" 
       type     = armor 
       model    = 2 
       strength = 55 
       experience = 20
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 322  } 
       name     = "116. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 35 
       experience = 20
      }
    }
   # 15th Army
   landunit = 
   { location = 52 
     name     = "15. Armee" 
     leader   = 335 # von Salmuth
     id       = {  type = 14500 id = 323  } 
     division = 
     { id       = {  type = 14500 id = 324  } 
       name     = "15. Armee" 
       type     = hq 
       model    = 4 
       strength = 65 
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 325  } 
       name     = "1. SS-Leibstandarte Adolf Hitler" 
       type     = armor 
       model    = 2 
       strength = 60
       experience = 20
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 326  } 
       name     = "84. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 328  } 
       name     = "326. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 329  } 
       name     = "331. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 330  } 
       name     = "182. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 51 
     name     = "LXIV. Reservekorps" 
     id       = {  type = 14500 id = 399  } 
     division = 
     { id       = {  type = 14500 id = 327  } 
       name     = "85. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
    }
   landunit = 
   { location = 45 
     name     = "LXXXVI. Armeekorps" 
     id       = {  type = 14500 id = 3900  } 
     division = 
     { id       = {  type = 14500 id = 3901  } 
       name     = "91. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 10
       experience = 20
      }
    }
   landunit = 
   { location = 115 
     name     = "LXXXIX. Armeekorps" 
     id       = {  type = 14500 id = 331  } 
     division = 
     { id       = {  type = 14500 id = 332  } 
       name     = "48. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 333  } 
       name     = "165. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
     division = 
     { id       = {  type = 14500 id = 334  } 
       name     = "712. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 114 
     name     = "LXXXII. Armeekorps" 
     id       = {  type = 14500 id = 335  } 
     division = 
     { id       = {  type = 14500 id = 336  } 
       name     = "18. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 337  } 
       name     = "47. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 338  } 
       name     = "49. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 51 
     name     = "LXVII. Armeekorps" 
     id       = {  type = 14500 id = 339  } 
     division = 
     { id       = {  type = 14500 id = 340  } 
       name     = "344. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 49 
     name     = "LXVII. Armeekorps" 
     id       = {  type = 14500 id = 341  } 
     division = 
     { id       = {  type = 14500 id = 342  } 
       name     = "348. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 53 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 343  } 
     division = 
     { id       = {  type = 14500 id = 344  } 
       name     = "17. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 345  } 
       name     = "245. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 45 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 346  } 
     division = 
     { id       = {  type = 14500 id = 347  } 
       name     = "346. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
       extra    = artillery
       brigade_model = 10
      }
     division = 
     { id       = {  type = 14500 id = 348  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   # 7th Army
   landunit = 
   { location = 58 
     name     = "7. Armee" 
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 349  } 
     division = 
     { id       = {  type = 14500 id = 350  } 
       name     = "7. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 351  } 
       name     = "5. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65
       experience = 30
      }
    }
   landunit = 
   { location = 44 
     name     = "I. SS-Panzerkorps" 
     id       = {  type = 14500 id = 353  } 
     division = 
     { id       = {  type = 14500 id = 354  } 
       name     = "12. SS-Panzer-Div. 'Hitlerjugend'" 
       type     = armor 
       model    = 2 
       strength = 65
       experience = 30
       extra    = heavy_armor
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 355  } 
       name     = "21. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 356  } 
       name     = "130. Panzer-Lehr-Division" 
       type     = armor 
       model    = 2 
       strength = 95
       experience = 30
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 357  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 20
       experience = 30
      }
    }
   landunit = 
   { location = 42 
     name     = "II. Fallschirmjägerkorps" 
     id       = {  type = 14500 id = 398  } 
     division = 
     { id       = {  type = 14500 id = 352  } 
       name     = "17. SS-Pz.Gr.Div. 'Götz Berlichingen'" 
       type     = mechanized 
       model    = 0 
       strength = 70
       experience = 30
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 361  } 
       name     = "265. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 2 
       strength = 65
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 362  } 
       name     = "275. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 388  } 
       name     = "277. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 363  } 
       name     = "352. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 2 
       strength = 65
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 321  } 
       name     = "2. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 70 
       experience = 30
       extra    = tank_destroyer
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 360  } 
       name     = "3. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 80
       experience = 30
      }
    }
   landunit = 
   { location = 43 
     name     = "LXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 365  } 
     division = 
     { id       = {  type = 14500 id = 366  } 
       name     = "77. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 30
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 367  } 
       name     = "243. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 2 
       strength = 15
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 368  } 
       name     = "709. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 30
       experience = 30
      }
    }
   # ARMY GROUP G
   landunit = 
   { location = 77 
     name     = "Heeresgruppe G Reserve" 
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 380  } 
     division = 
     { id       = {  type = 14500 id = 364  } 
       name     = "189. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 44 
     name     = "LVIII. Reserve-Panzerkorps" 
     id       = {  type = 14500 id = 397  } 
     division = 
     { id       = {  type = 14500 id = 359  } 
       name     = "2. SS-Panzer-Div. 'Das Reich'" 
       type     = armor 
       model    = 2 
       strength = 65 
       experience = 30
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "9. SS-Panzer-Div. 'Hohenstaufen'" 
       type     = armor 
       model    = 2 
       strength = 40 
       experience = 30
       extra    = sp_artillery
       brigade_model = 2
      }
    }
   # 1st Army
   landunit = 
   { location = 68 
     name     = "1. Armee" 
     leader   = 289 # von der Chevallerie  K.
     id       = {  type = 14500 id = 369  } 
     division = 
     { id       = {  type = 14500 id = 370  } 
       name     = "1. Armee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 371  } 
       name     = "11. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70 
       experience = 20
      }
    }
   landunit = 
   { location = 67 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 372  }
     division = 
     { id       = {  type = 14500 id = 373  } 
       name     = "158. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 69 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 374  }
     division = 
     { id       = {  type = 14500 id = 375  } 
       name     = "708. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       experience = 20
      }
    }
   landunit = 
   { location = 57 
     name     = "LXXXVI. Armeekorps" 
     id       = {  type = 14500 id = 376  }
     division = 
     { id       = {  type = 14500 id = 377  } 
       name     = "159. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }   
   landunit = 
   { location = 61 
     name     = "LXXXVI. Armeekorps" 
     id       = {  type = 14500 id = 378  }
     division = 
     { id       = {  type = 14500 id = 379  } 
       name     = "276. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 20
      }
    }   
   # 19th Army
   landunit = 
   { location = 93 
     name     = "19. Armee" 
     leader   = 342 # von Sodenstern
     id       = {  type = 14500 id = 382  } 
     division = 
     { id       = {  type = 14500 id = 383  } 
       name     = "19. Armee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 384  } 
       name     = "157. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 93 
     name     = "IV. Luftwaffen-Feld-Korps" 
     id       = {  type = 14500 id = 385  } 
     division = 
     { id       = {  type = 14500 id = 386  } 
       name     = "271. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
     division = 
     { id       = {  type = 14500 id = 387  } 
       name     = "272. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       extra    = anti_air
       brigade_model = 4
       experience = 20
      }
    }
   landunit = 
   { location = 86 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 389  } 
     division = 
     { id       = {  type = 14500 id = 390  } 
       name     = "338. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 89 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 391  } 
     division = 
     { id       = {  type = 14500 id = 392  } 
       name     = "244. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 82 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 393  } 
     division = 
     { id       = {  type = 14500 id = 394  } 
       name     = "242. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 20
      }
    }
   landunit = 
   { location = 80 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 395  } 
     division = 
     { id       = {  type = 14500 id = 396  } 
       name     = "148. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   ##########################################
   ## Kriegsmarine
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 400  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 401  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
       experience = 60
      } 
     division = 
     { id    = {  type = 14500 id = 402  } 
       name  = "Prinz Eugen" 
       type  = heavy_cruiser 
       model = 5
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 403  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 404  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 405  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 406  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 407  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 408  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 409  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 410  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 411  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 412  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 413  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 414  } 
       name  = "4. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 415  } 
       name  = "5. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 416  } 
       name  = "6. Truppentransporterflottille" 
       type  = transport 
       model = 2 
       experience = 60
      }
    }
   # ATLANTIC FLEET
   navalunit = 
   { name     = "Atlantische Flotte" 
     id       = {  type = 14500 id = 417  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 418  } 
       name  = "Tirpitz" 
       type  = battleship 
       model = 7
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 419  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
       experience = 60
      }
    } 
   # 1ST DESTROYER SQUADRON
   navalunit = 
   { name     = "1. Zerstörergeschwader" 
     id       = {  type = 14500 id = 420  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 421  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      } 
    }
   # 2ND DESTROYER SQUADRON
   navalunit = 
   { name     = "2. Zerstörergeschwader" 
     id       = {  type = 14500 id = 422  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 423  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      } 
    }
   # 3RD DESTROYER SQUADRON
   navalunit = 
   { name     = "3. Zerstörergeschwader" 
     id       = {  type = 14500 id = 424  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 425  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
       experience = 60
      } 
    }
   # 4TH DESTROYER SQUADRON
   navalunit = 
   { name     = "4. Zerstörergeschwader" 
     id       = {  type = 14500 id = 426  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 427  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      }
    }
   # 5TH DESTROYER SQUADRON
   navalunit = 
   { name     = "5. Zerstörergeschwader" 
     id       = {  type = 14500 id = 428  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 429  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      }
    }
   # 6TH DESTROYER SQUADRON
   navalunit = 
   { name     = "6. Zerstörergeschwader" 
     id       = {  type = 14500 id = 430  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 431  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      }
    }
   # 7TH DESTROYER SQUADRON
   navalunit = 
   { name     = "7. Zerstörergeschwader" 
     id       = {  type = 14500 id = 432  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 433  } 
       name  = "7. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      }
    }
   # 8TH DESTROYER SQUADRON
   navalunit = 
   { name     = "8. Zerstörergeschwader" 
     id       = {  type = 14500 id = 434  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 435  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
       experience = 60
      }
    }
   # 1ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "I. Unterseebootsflottille" 
     id       = {  type = 14500 id = 436  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 437  } 
       name  = "11. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 438  } 
       name  = "12. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 2ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "II. Unterseebootsflottille" 
     id       = {  type = 14500 id = 439  } 
     location = 39 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 440  } 
       name  = "21. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 441  } 
       name  = "22. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 3RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "III. Unterseebootsflottille" 
     id       = {  type = 14500 id = 442  } 
     location = 69 
     base     = 69
     division = 
     { id    = {  type = 14500 id = 443  } 
       name  = "31. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 444  } 
       name  = "32. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 4TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 445  } 
     location = 158 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 446  } 
       name  = "41. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 447  } 
       name  = "42. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "V. Unterseebootsflottille" 
     id       = {  type = 14500 id = 448  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 449  } 
       name  = "51. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 450  } 
       name  = "52. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 6TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 451  } 
     location = 40 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 452  } 
       name  = "61. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 453  } 
       name  = "62. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 454  } 
     location = 40 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 455  } 
       name  = "71. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 456  } 
       name  = "72. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 8TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 457  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 458  } 
       name  = "81. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 459  } 
       name  = "82. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 9TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 460  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 461  } 
       name  = "91. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 462  } 
       name  = "92. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 10TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "X. Unterseebootsflottille" 
     id       = {  type = 14500 id = 463  } 
     location = 39 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 464  } 
       name  = "101. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 465  } 
       name  = "102. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 11TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 466  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 467  } 
       name  = "111. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 468  } 
       name  = "112. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 12TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 469  } 
     location = 40 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 470  } 
       name  = "121. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 13TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 471  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 472  } 
       name  = "131. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 473  } 
       name  = "132. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 19TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XIX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 474  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 475  } 
       name  = "191. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 20TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 476  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 477  } 
       name  = "201. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 478  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 479  } 
       name  = "211. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 480  } 
       name  = "212. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 22ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 481  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 482  } 
       name  = "221. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 483  } 
       name  = "222. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 23TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 484  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 485  } 
       name  = "231. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 486  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 487  } 
       name  = "241. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 488  } 
       name  = "242. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 25TH SUBMARINE FLEET
   navalunit = 
   { name     = "XXV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 489  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 490  } 
       name  = "251. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 26TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 491  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 492  } 
       name  = "261. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 493  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 494  } 
       name  = "271. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 29TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 495  } 
     location = 86 
     base     = 86
     division = 
     { id    = {  type = 14500 id = 496  } 
       name  = "291. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 497  } 
       name  = "292. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 30TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 498  } 
     location = 310 
     base     = 310
     division = 
     { id    = {  type = 14500 id = 499  } 
       name  = "301. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 31ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 4000  } 
     location = 154 
     base     = 154
     division = 
     { id    = {  type = 14500 id = 4001  } 
       name  = "311. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 32ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 4002  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 4003  } 
       name  = "321. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
    }
   # Monsun Gruppe
   navalunit =
   { name     = "Monsun Gruppe"
     id       = {  type = 14500 id = 4004  }
     location = 1647
     base     = 1647
     division =
     { id    = {  type = 14500 id = 4005  }
       name  = "Eisbär Gruppe"
       type  = submarine
       model = 6 # Type IX
       experience = 50
     }
     division =
     { id    = {  type = 14500 id = 4006  }
       name  = "Seehund Gruppe"
       type  = submarine
       model = 6 # Type IX
       experience = 50
     }
   }

   ##########################################
   ## Luftwaffe

  # NATIONAL AIR FLEET
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 500 }
    name     = "Luftflotte Reich"
    division =
    { id         = { type = 14500 id = 501 }
      name       = "Jagdgeschwader 27"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 502 }
      name       = "Zerstörergeschwader 1"
      strength   = 80
      type       = multi_role
      model      = 6 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 503 }
      name       = "Zerstörergeschwader 76"
      strength   = 80
      type       = multi_role
      model      = 7 # Me 410
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 504 }
      name       = "Jagdgeschwader 300"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 505 }
      name       = "KG 1 'Hindenburg'"
      strength   = 80
      type       = tactical_bomber
      model      = 8 # He 177A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 506 }
    name     = "II. Jagdkorps"
    division =
    { id         = { type = 14500 id = 507 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 7 # He 219A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 508 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 100
      type       = multi_role
      model      = 6 # Ju 88
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 509 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 510 }
      name       = "Nachtjagdgeschwader 5"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 511 }
      name       = "Nachtjagdgeschwader 6"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 512 }
      name       = "Nachtjagdgeschwader 7"
      strength   = 25
      type       = multi_role
      model      = 6 # Ju 88
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 513 }
      name       = "Nachtjagdgeschwader 101"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 514 }
      name       = "Nachtjagdgeschwader 102"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
      experience = 60
    }
  }
  # Ruhr Squadron
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 515 }
    name     = "Jagdführer Ruhr"
    division =
    { id         = { type = 14500 id = 516 }
      name       = "Jagdgeschwader 11"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 517 }
      name       = "JG 26 'Schlageter'"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
  }
  # Upper Rhine Squadron
  airunit =
  { location = 130
    base     = 130
    id       = { type = 14500 id = 518 }
    name     = "Jagdführer Oberrhein"
    division =
    { id         = { type = 14500 id = 519 }
      name       = "Jagdgeschwader 76"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 520 }
      name       = "Jagdgeschwader 301"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
  }
  # Austria Squadron
  airunit =
  { location = 195
    base     = 195
    id       = { type = 14500 id = 521 }
    name     = "Jagdführer Österreich"
    division =
    { id         = { type = 14500 id = 522 }
      name       = "Jagdgeschwader 302"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 523 }
      name       = "Nachtjagdgeschwader 4"
      strength   = 100
      type       = multi_role
      model      = 6 # Ju 88
      experience = 60
    }
  }
  # Western Squadron
  airunit =
  { location = 116
    base     = 116
    id       = { type = 14500 id = 525 }
    name     = "Jagdführer West"
    division =
    { id         = { type = 14500 id = 526 }
      name       = "JG 1 'Oesau'"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 527 }
      name       = "JG 3 'Udet'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 528 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 80
      type       = multi_role
      model      = 7 # Me 410
      experience = 60
    }
  }
  # Netherlands Squadron
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 529 }
    name     = "Jagdführer Niederlande"
    division =
    { id         = { type = 14500 id = 530 }
      name       = "Jagdgeschwader 400"
      strength   = 80
      type       = rocket_interceptor
      model      = 0 # Me 163B
      experience = 60
    }
  }
  # Northern Italy Squadron
  airunit =
  { location = 407
    base     = 407
    id       = { type = 14500 id = 531 }
    name     = "Jagdführer Oberitalien"
    division =
    { id         = { type = 14500 id = 532 }
      name       = "Jagdgeschwader 4"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 533 }
      name       = "JG 77 'Herz As'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
  }
  # 1ST AIR FLEET
  airunit =
  { location = 264
    base     = 264
    id       = { type = 14500 id = 534 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 535 }
      name       = "JG 54 'Grünherz'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 536 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 537 }
      name       = "Sturzkampfgeschwader 5"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
      experience = 60
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 55
    base     = 55
    id       = { type = 14500 id = 538 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 539 }
      name       = "JG 2 'Richthofen'"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 540 }
      name       = "KG 2 'Holzhammer'"
      strength   = 80
      type       = naval_bomber
      model      = 2 # Do 217
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 541 }
      name       = "Kampfgeschwader 6"
      strength   = 80
      type       = tactical_bomber
      model      = 8 # Ju 188
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 542 }
      name       = "KG 26 'Löwen'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 543 }
      name       = "Kampfgeschwader 40"
      strength   = 80
      type       = naval_bomber
      model      = 3 # Fw 200
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 544 }
      name       = "Kampfgeschwader 66"
      strength   = 80
      type       = naval_bomber
      model      = 8 # Ju 188
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 545 }
      name       = "KG 51 'Edelweiß'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 546 }
      name       = "KG 54 'Totenkopf'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 547 }
      name       = "Kampfgeschwader 76"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 548 }
      name       = "Kampfgeschwader 77"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 549 }
      name       = "Kampfgeschwader 100"
      strength   = 80
      type       = naval_bomber
      model      = 2 # Do 217
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 550 }
      name       = "Schnellkampfgeschwader 10"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 551 }
      name       = "Transportgeschwader 4"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 235
    base     = 235
    id       = { type = 14500 id = 552 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 553 }
      name       = "Jagdgeschwader 52"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 554 }
      name       = "JG 53 'Pik As'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 555 }
      name       = "KG 27 'Boelcke'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 556 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 557 }
      name       = "Schlachtgeschwader 1"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 558 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 559 }
      name       = "Transportgeschwader 2"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  # 5TH AIR FLEET
  airunit =
  { location = 495
    base     = 495
    id       = { type = 14500 id = 560 }
    name     = "Luftflotte V"
    division =
    { id         = { type = 14500 id = 561 }
      name       = "JG 5 'Eismeer'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 562 }
      name       = "KG 30 'Adler'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  # 6TH AIR FLEET
  airunit =
  { location = 599
    base     = 599
    id       = { type = 14500 id = 563 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 564 }
      name       = "JG 51 'Mölders'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 565 }
      name       = "KG 3 'Blitz'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 566 }
      name       = "KG 4 'General Wever'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 567 }
      name       = "KG 53 'Legion Condor'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 568 }
      name       = "KG 55 'Greif'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 569 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 570 }
      name       = "Transportgeschwader 3"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  # SOUTH EAST AIR FLEET
  airunit =
  { location = 338
    base     = 338
    id       = { type = 14500 id = 571 }
    name     = "Luftwaffenkommando Südost"
    division =
    { id         = { type = 14500 id = 572 }
      name       = "Schlachtgeschwader 2"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 573 }
      name       = "Lehrgeschwader 1"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 574 }
      name       = "Transportgeschwader 1"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 575 }
      name       = "Transportgeschwader 5"
      strength   = 80
      type       = transport_plane
      model      = 3 # Me 323
      extra      = escort
      brigade_model = 2
      experience = 60
    }
  }
  # V1 BATTERIES
  airunit =
  { location = 115
    base     = 115
    id       = { type = 14500 id = 576 }
    name     = "1. V1 Batterie"
    division =
    { id         = { type = 14500 id = 577 }
      name       = "1. V1 Batterie"
      strength   = 100
      type       = flying_bomb
      model      = 0
    }
  }
  airunit =
  { location = 115
    base     = 115
    id       = { type = 14500 id = 578 }
    name     = "2. V1 Batterie"
    division =
    { id         = { type = 14500 id = 579 }
      name       = "2. V1 Batterie"
      strength   = 100
      type       = flying_bomb
      model      = 0
    }
  }
  airunit =
  { location = 52
    base     = 52
    id       = { type = 14500 id = 580 }
    name     = "3. V1 Batterie"
    division =
    { id         = { type = 14500 id = 581 }
      name       = "3. V1 Batterie"
      strength   = 100
      type       = flying_bomb
      model      = 0
    }
  }
  airunit =
  { location = 52
    base     = 52
    id       = { type = 14500 id = 582 }
    name     = "4. V1 Batterie"
    division =
    { id         = { type = 14500 id = 583 }
      name       = "4. V1 Batterie"
      strength   = 100
      type       = flying_bomb
      model      = 0
    }
  }

	division_development = {
		name  = "5. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 600  } 
		date  = {  year = 1944 month = july day = 2  } 
	}
	division_development = {
		name  = "6. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 601  } 
		date  = {  year = 1944 month = july day = 4  } 
	}
	division_development = {
		name  = "7. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 602  } 
		date  = {  year = 1944 month = july day = 6  } 
	}
	division_development = {
		name  = "8. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 603  } 
		date  = {  year = 1944 month = july day = 8  } 
	}
	division_development = {
		name  = "9. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 604  } 
		date  = {  year = 1944 month = july day = 10  } 
	}
	division_development = {
		name  = "10. V1 Batterie" 
		type  = flying_bomb
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 605  } 
		date  = {  year = 1944 month = july day = 12  } 
	}
	division_development = {
		name  = "1. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 606  } 
		date  = {  year = 1944 month = july day = 14  } 
	}
	division_development = {
		name  = "2. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 607  } 
		date  = {  year = 1944 month = july day = 16  } 
	}
	division_development = {
		name  = "3. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 608  } 
		date  = {  year = 1944 month = july day = 18  } 
	}
	division_development = {
		name  = "141. Unterseebootsgeschwader" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 609  } 
		date  = {  year = 1944 month = december day = 1  } 
	}
	division_development = {
		name  = "181. Unterseebootsgeschwader" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 610  } 
		date  = {  year = 1945 month = january day = 1  } 
	}
	division_development = {
		name  = "22. SS-Kav.Div. 'Maria Theresia'" 
		type  = cavalry
		model = 12
		cost  = 0.1 
		id    = {  type = 14500 id = 611  } 
		date  = {  year = 1944 month = july day = 1  } 
	}
	division_development = {
		name  = "25. Waffen-Gr.Div. d. SS 'Hunyadi'" 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 612  } 
		date  = {  year = 1944 month = november day = 1  } 
	}
} 

