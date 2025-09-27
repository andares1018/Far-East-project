 
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
	manpower               = 4440 # based on data from http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm
	transports             = 250 
	escorts                = 30 

	# Resource Reserves 
	energy                 = 50000
	metal                  = 15000
	rare_materials         = 10000
	oil                    = 10000 
	supplies               = 7500 
	money                  = 150
	belligerence           = 80
 
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
    relation = { tag = ITA value = 50 }
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
    relation = { tag = SOV value = -200 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = SWE value = 50 access = yes }
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
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         365 366 370 377 382 383
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
         71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  88  89 
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
         241 242 244 247 254 245 238 255 257 251 240 248 250 239 249 256 253 259 262 263 260 258 264 265 266 267 268 269 270 271 272 273 274 275
         549 550 551 552 560 564 565 566 585 586 587 588 590 591 592 593 594 595 596 597 598 599 600 601 603 605 606 607 608 609 610 611 612 613 
         614 615 616 617 618 622 623 624 627 628 629 630 631 632 635 636 637 638 639 640 641 694
         71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  88  89  
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
346 # Maribor
227 231 252 223 229 250 253 254 # Poland
377 382 383 365 366 370 # Greece
}
	# Germany 1943.07 techs 
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
	5410 5416 5417 5420 5426 5430
	# Specialised Equipment
	5920 5960 5970

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270
	# Airborne Infantry
	1670 1680
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
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140

	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Medium Tank
	2070 2080 2090
	# Heavy Tank
	2100 2110 2120
	# Armoured Car  
	2860 2870 2880 2020 2150 2160
	# Tank Destroyer
	2170 2180
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
	22910 22920
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
	3610 3620 3630 3640 3650 3660 3670
	# Light Carrier 
	12100 12110 12120 12130
	# Aircraft Carrier 
	3510 3520 3530
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070
	# CAS
	4400 4170 4280 4450
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190 4200
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
	4290 4250 4260 4270

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270
	9280 9350 9360 9290 9300 9310 9370 9390 9400 9380

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
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 138 } 
   chiefofarmy            = {  type = 9 id = 149 } 
   chiefofnavy            = {  type = 9 id = 161 } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  2 3 4 7 8 14 26 27 32 33 44 56 94 109 151 152 17 45 55 74 75 131 140 175 146 70 9 206 176 147 } 
   dormant_leaders        = {  604 608 333 116 315 139 472 214 286 41 271 128 54 572  } 
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
       model    = 3 
       strength = 100 
       extra    = anti_air
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 3930  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
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
       model    = 3 
       extra    = police
       brigade_model = 1
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 5  } 
       name     = "25. Panzer-Division" 
       type     = armor
       model    = 0 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 6  } 
       name     = "196. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
      }
    }
   landunit = 
   { location = 485 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 7  } 
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "280. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
      }
    }
   landunit = 
   { location = 491 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 9  } 
     division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "274. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
      }
    }
   landunit = 
   { location = 493 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 12  } 
     division = 
     { id       = {  type = 14500 id = 13  } 
       name     = "710. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 495 
     name     = "XXXIII. Hoh.Kdo." 
     id       = {  type = 14500 id = 155  } 
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 15  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 16  } 
       name     = "14. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
      }
    }
   landunit = 
   { location = 496 
     name     = "LXXI. Hoh.Kdo." 
     id       = {  type = 14500 id = 17  } 
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "230. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 20  } 
       name     = "270. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
      }
    }
   # 20TH MOUNTAIN ARMEE
   landunit = 
   { location = 517 
     name     = "20. Gebirgsarmee" 
     leader   = 49 # Dietl
     id       = {  type = 14500 id = 21  } 
     division = 
     { id       = {  type = 14500 id = 22  } 
       name     = "20. Gebirgsarmee" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 23  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "6. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 25  } 
       name     = "210. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 519 
     name     = "XXXVI. Gebirgskorps" 
     id       = {  type = 14500 id = 26  } 
     division = 
     { id       = {  type = 14500 id = 27  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 28  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 514 
     name     = "XVIII. Gebirgskorps" 
     id       = {  type = 14500 id = 29  } 
     division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "7. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 31  } 
       name     = "6. SS-Freiw.-Geb.Div. 'Nord'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
      dig_in = 20.000
    }
   # ARMY GROUP NORTH
   landunit = 
   { location = 566 
     name     = "Heeresgruppe Nord Reserve" 
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 32  } 
     division = 
     { id       = {  type = 14500 id = 34  } 
       name     = "388. Feldausbildung-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 38  } 
       name     = "18. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 39  } 
       name     = "223. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
    }
   landunit = 
   { location = 270 
     name     = "Befh.ruckw.Heeresgebiet 101" 
     id       = {  type = 14500 id = 1000  } 
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "207. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   landunit = 
   { location = 264 
     name     = "Befh.ruckw.Heeresgebiet 101" 
     id       = {  type = 14500 id = 1001  } 
     division = 
     { id       = {  type = 14500 id = 36  } 
       name     = "281. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   landunit = 
   { location = 274 
     name     = "Befh.ruckw.Heeresgebiet 101" 
     id       = {  type = 14500 id = 1002  } 
     division = 
     { id       = {  type = 14500 id = 37  } 
       name     = "285. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   # 18th Army
   landunit = 
   { location = 550 
     name     = "18. Armee" 
     leader   = 187 # Lindemann
     id       = {  type = 14500 id = 40  } 
     division = 
     { id       = {  type = 14500 id = 41  } 
       name     = "18. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "28. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 43  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 550 
     name     = "L. Armeekorps" 
     id       = {  type = 14500 id = 44  } 
     division = 
     { id       = {  type = 14500 id = 45  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 46  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 47  } 
       name     = "250. Spanische Infanterie-Div." 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 551 
     name     = "LIV. Armeekorps" 
     id       = {  type = 14500 id = 48  } 
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 50  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 51  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "4. SS-Mot.Polizei-Div. 'Polizei'" 
       type     = motorized 
       model    = 2 
       strength = 100 
       extra    = armored_car
       brigade_model = 4
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 551 
     name     = "XXVI. Armeekorps" 
     id       = {  type = 14500 id = 54  } 
     division = 
     { id       = {  type = 14500 id = 55  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       extra    = super_heavy_artillery
       brigade_model = 3	   
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 58  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 59  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 61  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 560 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 62  } 
     division = 
     { id       = {  type = 14500 id = 63  } 
       name     = "12. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 64  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 65  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 68  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 560 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 69  } 
     division = 
     { id       = {  type = 14500 id = 70  } 
       name     = "13. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 71  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 560 
     name     = "XXXVIII. Armeekorps" 
     id       = {  type = 14500 id = 72  } 
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "1. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 74  } 
       name     = "717. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 560 
     name     = "III. Luftwaffen-Feld-Korps" 
     id       = {  type = 14500 id = 75  } 
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "9. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "10. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
      dig_in = 20.000
    }
   # 16th Army
   landunit = 
   { location = 565 
     name     = "16. Armee" 
     leader   = 33 # Busch
     id       = {  type = 14500 id = 78  } 
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "16. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 80  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 82  } 
       name     = "123. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 83  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 84  } 
       name     = "331. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 565 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 85  } 
     division = 
     { id       = {  type = 14500 id = 86  } 
       name     = "21. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 88  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 564 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 89  } 
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "5. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 91  } 
       name     = "8. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 92  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "126. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 94  } 
       name     = "329. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # ARMY GROUP CENTER
   landunit = 
   { location = 599 
     name     = "Heeresgruppe Mitte Reserve" 
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 95  } 
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "390. Feldausbildung-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "391. Feldausbildung-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "286. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 102  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 95 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 104  } 
       name     = "8. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 105  } 
       name     = "12. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "83. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 107  } 
       name     = "236. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 108  } 
       name     = "10. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 100 
       experience = 40
      }
    }
   landunit = 
   { location = 594 
     name     = "Befh.ruckw.Heeresgebiet 102" 
     id       = {  type = 14500 id = 1003  } 
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "203. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 3931  } 
       name     = "8. SS-Kav.Div. 'Florian Geyer'" 
       type     = cavalry 
       model    = 12 
       strength = 85 
       experience = 40
      }
    }
   landunit = 
   { location = 601 
     name     = "Befh.ruckw.Heeresgebiet 102" 
     id       = {  type = 14500 id = 1004  } 
     division = 
     { id       = {  type = 14500 id = 100  } 
       name     = "221. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   landunit = 
   { location = 251 
     name     = "LXI. Reservekorps" 
     id       = {  type = 14500 id = 109  } 
     division = 
     { id       = {  type = 14500 id = 110  } 
       name     = "141. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 258 
     name     = "LXI. Reservekorps" 
     id       = {  type = 14500 id = 1016  } 
     division = 
     { id       = {  type = 14500 id = 111  } 
       name     = "151. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   # 3rd Panzer Army
   landunit = 
   { location = 590 
     name     = "3. Panzerarmee" 
     leader   = 223 # Reinhardt
     id       = {  type = 14500 id = 112  } 
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "3. Panzerarmee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "201. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 593 
     name     = "VI. Armeekorps" 
     id       = {  type = 14500 id = 115  } 
     division = 
     { id       = {  type = 14500 id = 116  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 117  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 118  } 
       name     = "330. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 593 
     name     = "II. Luftwaffen-Feld-Korps" 
     id       = {  type = 14500 id = 119  } 
     division = 
     { id       = {  type = 14500 id = 120  } 
       name     = "2. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "3. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "4. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 123  } 
       name     = "6. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 593 
     name     = "LIX. Armeekorps" 
     id       = {  type = 14500 id = 124  } 
     division = 
     { id       = {  type = 14500 id = 125  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 590 
     name     = "XXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 127  } 
     division = 
     { id       = {  type = 14500 id = 128  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 129  } 
       name     = "20. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # 4th Army
   landunit = 
   { location = 586 
     name     = "4. Armee" 
     leader   = 335 # von Salmuth
     id       = {  type = 14500 id = 130  } 
     division = 
     { id       = {  type = 14500 id = 131  } 
       name     = "4. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 132  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 600 
     name     = "LVI. Panzerkorps" 
     id       = {  type = 14500 id = 134  } 
     division = 
     { id       = {  type = 14500 id = 135  } 
       name     = "14. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 136  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 137  } 
       name     = "321. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 586 
     name     = "XII. Armeekorps" 
     id       = {  type = 14500 id = 138  } 
     division = 
     { id       = {  type = 14500 id = 139  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 140  } 
       name     = "267. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 141  } 
       name     = "268. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 586 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 142  } 
     division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 144  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 145  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 586 
     name     = "XXXIX. Panzerkorps" 
     id       = {  type = 14500 id = 146  } 
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "337. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 588 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 150  } 
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "52. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 152  } 
       name     = "197. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 153  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # 2nd Panzer Army
   landunit = 
   { location = 587 
     name     = "2. Panzerarmee" 
     leader   = 38 # Clössner
     id       = {  type = 14500 id = 323  } 
     division = 
     { id       = {  type = 14500 id = 156  } 
       name     = "2. Panzerarmee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "112. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "707. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 587 
     name     = "LV. Armeekorps" 
     id       = {  type = 14500 id = 159  } 
     division = 
     { id       = {  type = 14500 id = 160  } 
       name     = "110. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "134. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "296. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "339. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 587 
     name     = "LIII. Armeekorps" 
     id       = {  type = 14500 id = 164  } 
     division = 
     { id       = {  type = 14500 id = 165  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "293. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "25. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 607 
     name     = "XXXV. Armeekorps" 
     id       = {  type = 14500 id = 169  } 
     division = 
     { id       = {  type = 14500 id = 170  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 172  } 
       name     = "262. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # 9th Army
   landunit = 
   { location = 588 
     name     = "9. Armee" 
     leader   = 201 # Model
     id       = {  type = 14500 id = 173  } 
     division = 
     { id       = {  type = 14500 id = 174  } 
       name     = "9. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 175  } 
       name     = "36. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 176  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 1760  } 
       name     = "442. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 588 
     name     = "XXIII. Armeekorps" 
     id       = {  type = 14500 id = 177  } 
     division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "216. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 179  } 
       name     = "383. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 180  } 
       name     = "78. Sturm-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = tank_destroyer
       brigade_model = 1
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 585 
     name     = "XXXXI. Panzerkorps" 
     id       = {  type = 14500 id = 181  } 
     division = 
     { id       = {  type = 14500 id = 182  } 
       name     = "86. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 184  } 
       name     = "18. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 60 
       extra    = tank_destroyer
       brigade_model = 1
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 585 
     name     = "XXXXVII. Panzerkorps" 
     id       = {  type = 14500 id = 185  } 
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 187  } 
       name     = "2. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 65 
       extra    = heavy_armor
       brigade_model = 2
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 188  } 
       name     = "9. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 80 
       extra    = armored_car
       brigade_model = 5
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 189  } 
       name     = "20. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70 
       extra    = tank_destroyer
       brigade_model = 1
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 585 
     name     = "XXXXVI. Panzerkorps" 
     id       = {  type = 14500 id = 190  } 
     division = 
     { id       = {  type = 14500 id = 191  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 192  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 193  } 
       name     = "102. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 194  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 585 
     name     = "XX. Armeekorps" 
     id       = {  type = 14500 id = 195  } 
     division = 
     { id       = {  type = 14500 id = 196  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 198  } 
       name     = "137. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 199  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # 2nd Army
   landunit = 
   { location = 605 
     name     = "2. Armee" 
     leader   = 360 # Weiss
     id       = {  type = 14500 id = 200  } 
     division = 
     { id       = {  type = 14500 id = 201  } 
       name     = "2. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 202  } 
       name     = "82. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 203  } 
       name     = "327. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 204  } 
       name     = "340. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "377. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 605 
     name     = "VII. Armeekorps" 
     id       = {  type = 14500 id = 206  } 
     division = 
     { id       = {  type = 14500 id = 207  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 208  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 209  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 210  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 211  } 
       name     = "323. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # ARMY GROUP SOUTH
   landunit = 
   { location = 617 
     name     = "Heeresgruppe Süd Reserve" 
     leader   = 323 # von Manstein
     id       = {  type = 14500 id = 212  } 
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "213. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   landunit = 
   { location = 635 
     name     = "Gen. Kommando z.b.V." 
     id       = {  type = 14500 id = 1006  } 
     division = 
     { id       = {  type = 14500 id = 215  } 
       name     = "444. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 216  } 
       name     = "454. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = police
       brigade_model = 1
       experience = 40
      }
    }
   landunit = 
   { location = 244 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 217  } 
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "143. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 617 
     name     = "LXII. Reservekorps" 
     id       = {  type = 14500 id = 1017  } 
     division = 
     { id       = {  type = 14500 id = 219  } 
       name     = "147. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   # 4th Panzer Army
   landunit = 
   { location = 606 
     name     = "4. Panzerarmee" 
     leader   = 142 # Hoth
     id       = {  type = 14500 id = 220  } 
     division = 
     { id       = {  type = 14500 id = 221  } 
       name     = "4. Panzerarmee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 223  } 
       name     = "255. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 224  } 
       name     = "332. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 606 
     name     = "XXXXVIII. Panzerkorps" 
     id       = {  type = 14500 id = 225  } 
     division = 
     { id       = {  type = 14500 id = 226  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 1
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 227  } 
       name     = "11. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 60 
       extra    = armored_car
       brigade_model = 5
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 229  } 
       name     = "167. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "Pz.Gren.-Div. 'Großdeutschland'" 
       type     = mechanized 
       model    = 0 
       strength = 75 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 606 
     name     = "II. SS-Panzerkorps" 
     id       = {  type = 14500 id = 231  } 
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "1. Pz.Gr. SS-Leibst. Adolf Hitler" 
       type     = mechanized 
       model    = 0 
       strength = 75 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 233  } 
       name     = "2. SS-Pz.Gr.Div. 'Das Reich'" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 234  } 
       name     = "3. SS-Pz.Gr.Div. 'Totenkopf'" 
       type     = mechanized 
       model    = 0 
       strength = 80 
       experience = 40
      }
      dig_in = 20.000
    }
   # Army Detachment Kempf
   landunit = 
   { location = 603 
     name     = "Armee-Abteilung Kempf" 
     leader   = 154 # Kempf
     id       = {  type = 14500 id = 235  } 
     division = 
     { id       = {  type = 14500 id = 236  } 
       name     = "Armee-Abteilung Kempf" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 237  } 
       name     = "39. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = armored_car
       brigade_model = 5
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 238  } 
       name     = "161. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 239  } 
       name     = "282. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 603 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 240  } 
     division = 
     { id       = {  type = 14500 id = 241  } 
       name     = "106. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 242  } 
       name     = "320. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 603 
     name     = "III. Panzerkorps" 
     id       = {  type = 14500 id = 243  } 
     division = 
     { id       = {  type = 14500 id = 244  } 
       name     = "6. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       extra    = heavy_armor
       brigade_model = 2
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 245  } 
       name     = "7. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 65 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 246  } 
       name     = "19. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 75 
       extra    = armored_car
       brigade_model = 5
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 247  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 90 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
      dig_in = 20.000
    }
   # 1st Panzer Army
   landunit = 
   { location = 636 
     name     = "1. Panzerarmee" 
     leader   = 321 # von Mackensen
     id       = {  type = 14500 id = 248  } 
     division = 
     { id       = {  type = 14500 id = 249  } 
       name     = "1. Panzerarmee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 250  } 
       name     = "5. SS-Panzer-Div. 'Wiking'" 
       type     = armor 
       model    = 1 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 251  } 
       name     = "17. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 252  } 
       name     = "23. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 636 
     name     = "XXX. Armeekorps" 
     id       = {  type = 14500 id = 253  } 
     division = 
     { id       = {  type = 14500 id = 254  } 
       name     = "38. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 255  } 
       name     = "62. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 256  } 
       name     = "387. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 636 
     name     = "XXXX. Panzerkorps" 
     id       = {  type = 14500 id = 257  } 
     division = 
     { id       = {  type = 14500 id = 258  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 259  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 260  } 
       name     = "333. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 635 
     name     = "LVII. Panzerkorps" 
     id       = {  type = 14500 id = 261  } 
     division = 
     { id       = {  type = 14500 id = 262  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 263  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 264  } 
       name     = "328. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # 6th Army
   landunit = 
   { location = 635 
     name     = "6. Armee" 
     leader   = 140 # Hollidt
     id       = {  type = 14500 id = 265  } 
     division = 
     { id       = {  type = 14500 id = 266  } 
       name     = "6. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 267  } 
       name     = "16. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 100 
       extra    = sp_artillery
       brigade_model = 1
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 635 
     name     = "XXIX. Armeekorps" 
     id       = {  type = 14500 id = 268  } 
     division = 
     { id       = {  type = 14500 id = 269  } 
       name     = "15. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 270  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 2710  } 
       name     = "111. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 271  } 
       name     = "336. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 631 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 272  } 
     division = 
     { id       = {  type = 14500 id = 273  } 
       name     = "294. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 274  } 
       name     = "302. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 275  } 
       name     = "306. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 631 
     name     = "IV. Armeekorps" 
     id       = {  type = 14500 id = 276  } 
     division = 
     { id       = {  type = 14500 id = 277  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 278  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 279  } 
       name     = "335. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
      dig_in = 20.000
    }
   # ARMY GROUP A
   landunit = 
   { location = 640 
     name     = "Heeresgruppe A Reserve" 
     leader   = 309 # von Kleist
     id       = {  type = 14500 id = 280  } 
     division = 
     { id       = {  type = 14500 id = 282  } 
       name     = "13. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100 
       experience = 40
      }
    }
   landunit = 
   { location = 641 
     name     = "Befehlshaber der Crimea" 
     id       = {  type = 14500 id = 283  } 
     division = 
     { id       = {  type = 14500 id = 284  } 
       name     = "153. Feldausbildung-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 285  } 
       name     = "355. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 286  } 
       name     = "381. Feldausbildung-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
      }
      dig_in = 20.000
    }
   # 17th Army
   landunit = 
   { location = 694 
     name     = "17. Armee" 
     leader   = 146 # Jänecke
     id       = {  type = 14500 id = 287  } 
     division = 
     { id       = {  type = 14500 id = 288  } 
       name     = "17. Armee" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 289  } 
       name     = "9. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = artillery
       brigade_model = 10
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 290  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 291  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 694 
     name     = "XXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 292  } 
     division = 
     { id       = {  type = 14500 id = 293  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 294  } 
       name     = "97. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 295  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 296  } 
       name     = "101. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 297  } 
       name     = "125. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 40
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 694 
     name     = "XXXXIX. Gebirgskorps" 
     id       = {  type = 14500 id = 298  } 
     division = 
     { id       = {  type = 14500 id = 299  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 300  } 
       name     = "125. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 301  } 
       name     = "370. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 40
      }
      dig_in = 20.000
    }
   # ARMY GROUP E
   landunit = 
   { location = 338 
     name     = "Heeresgruppe E Reserve"
     leader   = 560 # Löhr
     id       = {  type = 14500 id = 302  } 
     division = 
     { id       = {  type = 14500 id = 304  } 
       name     = "Sturm-Division Rhodos" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 305  } 
       name     = "100. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 306  } 
       name     = "114. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 307  } 
       name     = "118. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 308  } 
       name     = "7. SS-Freiw.-Geb.Div. 'Prinz Eugen'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 310  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 311  } 
       name     = "369. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 65 
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 312  } 
       name     = "373. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 65 
       experience = 40
      }
    }
   landunit = 
   { location = 365 
     name     = "Befehlshaber Kroatien" 
     id       = {  type = 14500 id = 1010  } 
     division = 
     { id       = {  type = 14500 id = 309  } 
       name     = "187. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 365 
     name     = "Befehlshaber Saloniki" 
     id       = {  type = 14500 id = 313  } 
     division = 
     { id       = {  type = 14500 id = 314  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 70
      }
    }
   landunit = 
   { location = 377 
     name     = "Befehlshaber Südgriechenland" 
     id       = {  type = 14500 id = 315  }
     division = 
     { id       = {  type = 14500 id = 316  } 
       name     = "11. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      } 
     division = 
     { id       = {  type = 14500 id = 317  } 
       name     = "104. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 365 
     name     = "LXVIII. Armeekorps" 
     id       = {  type = 14500 id = 318  }
     division = 
     { id       = {  type = 14500 id = 319  } 
       name     = "1. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 50
      } 
     division = 
     { id       = {  type = 14500 id = 320  } 
       name     = "117. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       extra    = engineer
       brigade_model = 4
       experience = 40
      }
    }
   landunit = 
   { location = 382 
     name     = "Befehlshaber Kreta" 
     id       = {  type = 14500 id = 321  } 
     division = 
     { id       = {  type = 14500 id = 322  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       extra    = police
       brigade_model = 1
      }
    }
   # GERMAN ARMY COMMAND IN THE SOUTH
   landunit = 
   { location = 431 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 326  } 
     division = 
     { id       = {  type = 14500 id = 327  } 
       name     = "3. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 80
       experience = 40
      }
    }
   landunit = 
   { location = 432 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 328  } 
     division = 
     { id       = {  type = 14500 id = 329  } 
       name     = "15. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 80
       experience = 40
      }
     division = 
     { id       = {  type = 14500 id = 330  } 
       name     = "Fallschirm Pz-Div. 'Hermann Göring'" 
       type     = armor 
       model    = 1 
       strength = 80
       experience = 40
      }
    }
   landunit = 
   { location = 427 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 331  } 
     division = 
     { id       = {  type = 14500 id = 332  } 
       name     = "29. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 80
       experience = 30
      }
     division = 
     { id       = {  type = 14500 id = 333  } 
       name     = "16. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70
       experience = 30
      }
    }
   landunit = 
   { location = 434 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 334  } 
     division = 
     { id       = {  type = 14500 id = 335  } 
       name     = "90. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 70
       experience = 30
      }
    }
   landunit = 
   { location = 232 
     name     = "Militärbefh. Generalgouvernement" 
     id       = {  type = 14500 id = 1009  } 
     division = 
     { id       = {  type = 14500 id = 353  } 
       name     = "148. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 116 
     name     = "LXVII. Reservekorps" 
     id       = {  type = 14500 id = 1011  } 
     division = 
     { id       = {  type = 14500 id = 371  } 
       name     = "171. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 114 
     name     = "LXVII. Reservekorps" 
     id       = {  type = 14500 id = 1012  } 
     division = 
     { id       = {  type = 14500 id = 357  } 
       name     = "182. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   # DENMARK OCCUPATION FORCE
   landunit = 
   { location = 294 
     name     = "Befh. der Truppen Dänemark" 
     id       = {  type = 14500 id = 336  } 
     division = 
     { id       = {  type = 14500 id = 337  } 
       name     = "416. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 220 
     name     = "Befh. der Truppen Dänemark" 
     id       = {  type = 14500 id = 338  } 
     division = 
     { id       = {  type = 14500 id = 339  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 152 
     name     = "Befh. der Truppen Dänemark" 
     id       = {  type = 14500 id = 340  } 
     division = 
     { id       = {  type = 14500 id = 341  } 
       name     = "20. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      }
    }
   # NETHERLANDS OCCUPATION FORCE
   landunit = 
   { location = 122 
     name     = "Kdr.d.Tps. Niederlände" 
     id       = {  type = 14500 id = 342  } 
     division = 
     { id       = {  type = 14500 id = 343  } 
       name     = "16. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       max_strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 344  } 
       name     = "347. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 345  } 
       name     = "376. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 346  } 
       name     = "719. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   # GERMAN ARMY COMMAND IN THE WEST
   landunit = 
   { location = 55 
     name     = "Oberbefehlshaber West Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 347  } 
     division = 
     { id       = {  type = 14500 id = 349  } 
       name     = "21. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 350  } 
       name     = "26. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 351  } 
       name     = "264. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 352  } 
       name     = "325. Sicherungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 80
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 354  } 
       name     = "157. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 65 
     name     = "LXVI. Reservekorps" 
     id       = {  type = 14500 id = 1013  } 
     division = 
     { id       = {  type = 14500 id = 355  } 
       name     = "159. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 95 
     name     = "LXVI. Reservekorps" 
     id       = {  type = 14500 id = 1014  } 
     division = 
     { id       = {  type = 14500 id = 356  } 
       name     = "165. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 71 
     name     = "LXVI. Reservekorpss" 
     id       = {  type = 14500 id = 1015  } 
     division = 
     { id       = {  type = 14500 id = 358  } 
       name     = "189. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 54 
     name     = "XI. Fliegerkorps" 
     id       = {  type = 14500 id = 359  } 
     division = 
     { id       = {  type = 14500 id = 360  } 
       name     = "1. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 1 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 361  } 
       name     = "2. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 1 
       strength = 80
      }
    }
   # 15th Army
   landunit = 
   { location = 52 
     name     = "15. Armee" 
     leader   = 347 # von Vietinghoff-Scheel
     id       = {  type = 14500 id = 362  } 
     division = 
     { id       = {  type = 14500 id = 363  } 
       name     = "15. Armee" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 364  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 365  } 
       name     = "65. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 366  } 
       name     = "305. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 367  } 
       name     = "24. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 368  } 
       name     = "9. SS-Pz.Gr.Div. 'Hohenstaufen'" 
       type     = mechanized 
       model    = 0 
       strength = 60
      }
    }
   landunit = 
   { location = 115 
     name     = "LXXXII. Armeekorps" 
     id       = {  type = 14500 id = 369  } 
     division = 
     { id       = {  type = 14500 id = 370  } 
       name     = "19. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 372  } 
       name     = "712. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 114 
     name     = "LXXXII. Armeekorps" 
     id       = {  type = 14500 id = 373  } 
     division = 
     { id       = {  type = 14500 id = 374  } 
       name     = "18. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       max_strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 375  } 
       name     = "156. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 49 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 1018  } 
     division = 
     { id       = {  type = 14500 id = 376  } 
       name     = "191. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 51 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 377  } 
     division = 
     { id       = {  type = 14500 id = 378  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 49 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 379  } 
     division = 
     { id       = {  type = 14500 id = 380  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 53 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 381  } 
     division = 
     { id       = {  type = 14500 id = 382  } 
       name     = "348. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   # 7th Army
   landunit = 
   { location = 58 
     name     = "7. Armee" 
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 383  } 
     division = 
     { id       = {  type = 14500 id = 384  } 
       name     = "7. Armee" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 385  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 386  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 387  } 
       name     = "113. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 388  } 
       name     = "371. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 389  } 
       name     = "389. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 44 
     name     = "LXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 390  }
     division = 
     { id       = {  type = 14500 id = 391  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 43 
     name     = "LXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 392  }
     division = 
     { id       = {  type = 14500 id = 393  } 
       name     = "709. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 46 
     name     = "LXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 394  }
     division = 
     { id       = {  type = 14500 id = 395  } 
       name     = "319. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 39 
     name     = "LXXXVII. Armeekorps" 
     id       = {  type = 14500 id = 396  }
     division = 
     { id       = {  type = 14500 id = 397  } 
       name     = "343. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 40 
     name     = "LXXXVII. Armeekorps" 
     id       = {  type = 14500 id = 398  }
     division = 
     { id       = {  type = 14500 id = 399  } 
       name     = "346. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 37 
     name     = "XXV. Armeekorps" 
     id       = {  type = 14500 id = 3900  }
     division = 
     { id       = {  type = 14500 id = 3901  } 
       name     = "384. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   # 1st Army
   landunit = 
   { location = 68 
     name     = "1. Armee" 
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 3902  } 
     division = 
     { id       = {  type = 14500 id = 3903  } 
       name     = "1. Armee" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 3904  } 
       name     = "334. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 3905  } 
       name     = "10. SS-Pz.Gr.Div. 'Frundsberg'" 
       type     = mechanized 
       model    = 0 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 3907  } 
       name     = "14. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 70
      }
    }
   landunit = 
   { location = 67 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 3908  }
     division = 
     { id       = {  type = 14500 id = 3909  } 
       name     = "158. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 69 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 3910  }
     division = 
     { id       = {  type = 14500 id = 3911  } 
       name     = "708. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 57 
     name     = "LXXXVI. Armeekorps" 
     id       = {  type = 14500 id = 3912  }
     division = 
     { id       = {  type = 14500 id = 3913  } 
       name     = "344. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }   
   # Army Group Felber
   landunit = 
   { location = 81 
     name     = "Armeegruppe Felber" 
     leader   = 56 # Felber
     id       = {  type = 14500 id = 3914  } 
     division = 
     { id       = {  type = 14500 id = 3916  } 
       name     = "Panzer-Division 'Feldherrnhalle'" 
       type     = armor 
       model    = 1 
       strength = 60
      }
    }
   landunit = 
   { location = 82 
     name     = "LXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 3917  } 
     division = 
     { id       = {  type = 14500 id = 3918  } 
       name     = "326. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 80 
     name     = "LXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 3919  } 
     division = 
     { id       = {  type = 14500 id = 3920  } 
       name     = "388. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 89 
     name     = "LXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 3921  } 
     division = 
     { id       = {  type = 14500 id = 3922  } 
       name     = "356. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 79 
     name     = "LXXXIII. Armeekorps" 
     id       = {  type = 14500 id = 3923  } 
     division = 
     { id       = {  type = 14500 id = 3924  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
      }
    }
   landunit = 
   { location = 488 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 3925  } 
     division = 
     { id       = {  type = 14500 id = 3926  } 
       name     = "265. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
      }
    }
   landunit = 
   { location = 134 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 3927  } 
     division = 
     { id       = {  type = 14500 id = 3928  } 
       name     = "266. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
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
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 405  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 406  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 407  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 408  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 409  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 410  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 411  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 412  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 413  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
    }
   # ATLANTIC FLEET
   navalunit = 
   { name     = "Atlantische Flotte" 
     id       = {  type = 14500 id = 414  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 415  } 
       name  = "Tirpitz" 
       type  = battleship 
       model = 7
      }
     division = 
     { id    = {  type = 14500 id = 416  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 417  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   # 1ST DESTROYER SQUADRON
   navalunit = 
   { name     = "1. Zerstörergeschwader" 
     id       = {  type = 14500 id = 418  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 419  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
    }
   # 2ND DESTROYER SQUADRON
   navalunit = 
   { name     = "2. Zerstörergeschwader" 
     id       = {  type = 14500 id = 420  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 421  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
    }
   # 3RD DESTROYER SQUADRON
   navalunit = 
   { name     = "3. Zerstörergeschwader" 
     id       = {  type = 14500 id = 422  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 423  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
    }
   # 4TH DESTROYER SQUADRON
   navalunit = 
   { name     = "4. Zerstörergeschwader" 
     id       = {  type = 14500 id = 424  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 425  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 5TH DESTROYER SQUADRON
   navalunit = 
   { name     = "5. Zerstörergeschwader" 
     id       = {  type = 14500 id = 426  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 427  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 6TH DESTROYER SQUADRON
   navalunit = 
   { name     = "6. Zerstörergeschwader" 
     id       = {  type = 14500 id = 428  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 429  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 7TH DESTROYER SQUADRON
   navalunit = 
   { name     = "7. Zerstörergeschwader" 
     id       = {  type = 14500 id = 430  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 431  } 
       name  = "7. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 8TH DESTROYER SQUADRON
   navalunit = 
   { name     = "8. Zerstörergeschwader" 
     id       = {  type = 14500 id = 432  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 433  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 1ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "I. Unterseebootsflottille" 
     id       = {  type = 14500 id = 434  } 
     location = 2312 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 435  } 
       name  = "11. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 436  } 
       name  = "12. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 2ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "II. Unterseebootsflottille" 
     id       = {  type = 14500 id = 437  } 
     location = 2711 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 438  } 
       name  = "21. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 439  } 
       name  = "22. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 3RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "III. Unterseebootsflotte" 
     id       = {  type = 14500 id = 440  } 
     location = 2266 
     base     = 69
     division = 
     { id    = {  type = 14500 id = 441  } 
       name  = "31. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 442  } 
       name  = "32. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 4TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 443  } 
     location = 158 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 444  } 
       name  = "41. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 445  } 
       name  = "42. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "V. Unterseebootsflottille" 
     id       = {  type = 14500 id = 446  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 447  } 
       name  = "51. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 448  } 
       name  = "52. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 6TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VI. Unterseebootsflotte" 
     id       = {  type = 14500 id = 449  } 
     location = 2335 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 450  } 
       name  = "61. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 451  } 
       name  = "62. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 452  } 
     location = 2288 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 453  } 
       name  = "71. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 454  } 
       name  = "72. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 8TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 455  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 456  } 
       name  = "81. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 457  } 
       name  = "82. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 9TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 458  } 
     location = 2327 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 459  } 
       name  = "91. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 460  } 
       name  = "92. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 10TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "X. Unterseebootsflottille" 
     id       = {  type = 14500 id = 461  } 
     location = 2629 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 462  } 
       name  = "101. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 463  } 
       name  = "102. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 11TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 464  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 465  } 
       name  = "111. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 466  } 
       name  = "112. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 12TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 467  } 
     location = 2331 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 468  } 
       name  = "121. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 13RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "13. Unterseebootsflottille" 
     id       = {  type = 14500 id = 469  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 470  } 
       name  = "131. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 471  } 
       name  = "132. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 20TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 472  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 473  } 
       name  = "201. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 474  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 475  } 
       name  = "211. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 476  } 
       name  = "212. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 22ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 477  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 478  } 
       name  = "221. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 479  } 
       name  = "222. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 480  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 481  } 
       name  = "241. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 482  } 
       name  = "242. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 25TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 483  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 484  } 
       name  = "251. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 26TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 485  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 486  } 
       name  = "261. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 487  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 488  } 
       name  = "271. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 29TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 489  } 
     location = 2179 
     base     = 396
     division = 
     { id    = {  type = 14500 id = 490  } 
       name  = "291. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 491  } 
       name  = "292. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 30TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 492  } 
     location = 310 
     base     = 310
     division = 
     { id    = {  type = 14500 id = 493  } 
       name  = "301. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
      }
    }

   ##########################################
   ## Luftwaffe

  # 1ST AIR FLEET
  airunit =
  { location = 566
    base     = 566
    id       = { type = 14500 id = 500 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 501 }
      name       = "JG 54 'Grünherz'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 502 }
      name       = "KG 53 'Legion Condor'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 503 }
      name       = "Sturzkampfgeschwader 5"
      strength   = 50
      type       = cas
      model      = 2 # Ju 87D
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 421
    base     = 421
    id       = { type = 14500 id = 504 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 505 }
      name       = "Jagdgeschwader 27"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 506 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 507 }
      name       = "JG 77 'Herz As'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 508 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 509 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 510 }
      name       = "Schlachtgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 6 # Fw 190A
    }
    division =
    { id         = { type = 14500 id = 511 }
      name       = "KG 26 'Löwen'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 512 }
      name       = "KG 54 'Totenkopf'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 513 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 514 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 515 }
      name       = "Transportgeschwader 5"
      strength   = 100
      type       = transport_plane
      model      = 3 # Me 323
    }
  }
  airunit =
  { location = 377
    base     = 377
    id       = { type = 14500 id = 516 }
    name     = "X. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 517 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 518 }
      name       = "Transportgeschwader 1"
      strength   = 100
      type       = transport_plane
      model      = 1 # Ju 52
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
      name       = "Schnellkampfgeschwader 10"
      strength   = 100
      type       = multi_role
      model      = 6 # Fw 190A
    }
    division =
    { id         = { type = 14500 id = 521 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = naval_bomber
      model      = 2 # Do 217K
    }
    division =
    { id         = { type = 14500 id = 522 }
      name       = "Kampfgeschwader 66"
      strength   = 50
      type       = naval_bomber
      model      = 2 # Do 217
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
      type       = naval_bomber
      model      = 2 # Do 217K
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
      type       = multi_role
      model      = 6 # Fw 190A
    }
  }
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 527 }
    name     = "Jagdfliegerführer 3"
    division =
    { id         = { type = 14500 id = 528 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 630
    base     = 630
    id       = { type = 14500 id = 529 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 530 }
      name       = "Jagdgeschwader 52"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 531 }
      name       = "Schlachtgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 6 # Fw 190A
    }
    division =
    { id         = { type = 14500 id = 532 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 533 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 534 }
      name       = "KG 51 'Edelweiß'"
      strength   = 50
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
    division =
    { id         = { type = 14500 id = 536 }
      name       = "Kampfgeschwader 100"
      strength   = 50
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 537 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 100
      type       = cas
      model      = 2 # Ju 87D
    }
    division =
    { id         = { type = 14500 id = 538 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 100
      type       = cas
      model      = 2 # Ju 87D
    }
    division =
    { id         = { type = 14500 id = 539 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 100
      type       = cas
      model      = 2 # Ju 87D
    }
  }
  # 5TH AIR FLEET
  airunit =
  { location = 495
    base     = 495
    id       = { type = 14500 id = 540 }
    name     = "Luftflotte V"
    division =
    { id         = { type = 14500 id = 541 }
      name       = "JG 5 'Eismeer'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 542 }
      name       = "KG 30 'Adler'"
      strength   = 50
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
  }
  # 6TH AIR FLEET
  airunit =
  { location = 600
    base     = 600
    id       = { type = 14500 id = 543 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 544 }
      name       = "JG 51 'Mölders'"
      strength   = 100
      type       = multi_role
      model      = 6 # Fw 190A
    }
    division =
    { id         = { type = 14500 id = 545 }
      name       = "Zerstörergeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 546 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 547 }
      name       = "KG 4 'General Wever'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 548 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 100
      type       = cas
      model      = 2 # Ju 87D
    }
  }
  # AIR FORCE EASTERN COMMAND
  airunit =
  { location = 338
    base     = 338
    id       = { type = 14500 id = 549 }
    name     = "Luftwaffenkommando Süd Ost"
    division =
    { id         = { type = 14500 id = 550 }
      name       = "Jagdgeschwader 4"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
  }
  # AIR FORCE COMMAND CENTER
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 551 }
    name     = "Luftwaffenbefehlshaber Mitte"
    division =
    { id         = { type = 14500 id = 552 }
      name       = "JG 1 'Oesau'"
      strength   = 100
      type       = multi_role
      model      = 6 # Fw 190A
    }
    division =
    { id         = { type = 14500 id = 553 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 554 }
      name       = "Jagdgeschwader 11"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 555 }
      name       = "Kampfgeschwader 6"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 556 }
      name       = "Transportgeschwader 2"
      strength   = 50
      type       = transport_plane
      model      = 1 # Ju 52
    }
    division =
    { id         = { type = 14500 id = 557 }
      name       = "Transportgeschwader 3"
      strength   = 100
      type       = transport_plane
      model      = 1 # Ju 52
    }
    division =
    { id         = { type = 14500 id = 558 }
      name       = "Transportgeschwader 4"
      strength   = 50
      type       = transport_plane
      model      = 1 # Ju 52
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 559 }
    name     = "XII. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 560 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 561 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 562 }
      name       = "Nachtjagdgeschwader 4"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 563 }
      name       = "Nachtjagdgeschwader 5"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
  }

	division_development = {
		name  = "191. Unterseebootsgeschwader" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 600  } 
		date  = {  year = 1943 month = october day = 1  } 
	}
	division_development = {
		name  = "231. Unterseebootsgeschwader" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 601  } 
		date  = {  year = 1943 month = august day = 1  } 
	}
	division_development = {
		name  = "311. Unterseebootsgeschwader" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 602  } 
		date  = {  year = 1943 month = september day = 1  } 
	}
	division_development = {
		name  = "11. SS-Pz.Gr.Freiw.Div. 'Nordland'" 
		type  = mechanized
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 603  } 
		date  = {  year = 1943 month = september day = 1  } 
	}
	division_development = {
		name  = "12. SS-Panzer-Div. 'Hitlerjugend'" 
		type  = armor
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 604  } 
		date  = {  year = 1943 month = october day = 1  } 
	}
	division_development = {
		name  = "13. Waffen-SS Geb.Div. 'Handschar'" 
		type  = bergsjaeger
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 605  } 
		date  = {  year = 1944 month = january day = 1  } 
	}
	division_development = {
		name  = "14. Galizische SS-Freiw.-Div." 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 606  } 
		date  = {  year = 1944 month = january day = 1  } 
	}
	division_development = {
		name  = "15. Lettische SS-Freiw.-Div." 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 607  } 
		date  = {  year = 1944 month = january day = 1  } 
	}
	division_development = {
		name  = "16. SS-Pz.Gr.Div. 'Reichsführer SS'" 
		type  = mechanized
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 608  } 
		date  = {  year = 1943 month = november day = 1  } 
	}
	division_development = {
		name  = "17. SS-Pz.Gr.Div. 'Götz Berlichingen'" 
		type  = mechanized
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 609  } 
		date  = {  year = 1943 month = october day = 1  } 
	}
	division_development = {
		name  = "18. SS-Pz.Gr.Div. 'Horst Wessel'" 
		type  = mechanized
		model = 0
		cost  = 0.1 
		id    = {  type = 14500 id = 610  } 
		date  = {  year = 1944 month = january day = 1  } 
	}
	division_development = {
		name  = "19. Lettische SS-Freiw.-Div." 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 611  } 
		date  = {  year = 1944 month = january day = 1  } 
	}
	division_development = {
		name  = "20. Estische SS-Freiw.-Div." 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 612  } 
		date  = {  year = 1944 month = january day = 24  } 
	}
	division_development = {
		name  = "188. Reserve-Gebirgsjäger-Division" 
		type  = bergsjaeger
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 613  } 
		date  = {  year = 1943 month = august day = 10  } 
	}
} 

