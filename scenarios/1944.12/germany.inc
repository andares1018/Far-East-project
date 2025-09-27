 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes MOB9 = yes RES = yes } }
	capital                = 163 
	manpower               = 650 # relatively low MP in order to show Germany's MP shortage at this point of the war
	transports             = 135 
	escorts                = 35 

	# Resource Reserves 
	energy                 = 35000
	metal                  = 10000
	rare_materials         = 3000
	oil                    = 1000 
	supplies               = 1000 
	money                  = 200
	belligerence           = 120
 
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation =
    { tag        = CRO
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = -200 }
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
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = -200 }
    relation = { tag = SCH value = 50 }
    relation = { tag = SOV value = -200 }
    relation = { tag = SPA value = 50 }
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
         186 187 188 189 190 191 192 193 194 195
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109  
         394 401 402 403 404 405 406
         208 211 212 214
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195 346
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 230 231 232 233 234 235  
         216 217 218 219 294 220 483 485 487 491 489 492 490 493 494 497 488 486 484 495
         125 122 119 124 120 
         349 378 379 380 382
         39  51  69  105 
         268 269
         394 401 402 403 404 405 406 
         212 211 208 
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
346 349 # Maribor
227 231 252 223 229 250 253 254 # Poland
394 401 402 403 404 405 406 # Trento
208 211 212 214 # For gameplay purposes
}
	# Germany 1944.12 techs 
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
	6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910
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

	# Turbojet Engine
	15500
	# Rocket Tech
	7550 7560 7570 7580 7590 7100 7110 7120 7010 7020
	#Goliath Tanks
	7620
	} 
inventions = { 3000027 3000028 3000031 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 1 
     professional_army = 9 
     defense_lobby     = 10 
     interventionism   = 10 
    }
   headofstate            = {  type = 9 id = 1   } 
   headofgovernment       = {  type = 9 id = 23  } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 65  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 119 } 
   chiefofstaff           = {  type = 9 id = 133 } 
   chiefofarmy            = {  type = 9 id = 149 } 
   chiefofnavy            = {  type = 9 id = 161 } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  2 3 4 7 8 14 26 27 32 33 44 56 94 109 151 152 17 45 55 74 131 140 175 146 70 9 21 28 71 84 87 101 147 
                               156 167 206 176 16 48 78 117 125 154 155 193 
                               12 
							   15 29 49 75 103 124 99 6 210 209 136 111 97 123 80 139 273 100 104 81 105 137 #20 July plot
                            }
   dormant_leaders        = {  604 608 333 116 315 139 472 214 286 41 271 128 54 572 446 193 130 143 218 267 270 291 353 562 564 50 
                               53 88 137 163 310 418 352 67 52
							   211 692 78 814 828 229 343 537 354#20 July plot
                            }
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
   # ARMY OF NORWAY
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
    }
   # 20TH MOUNTAIN ARMEE
   landunit = 
   { location = 497 
     name     = "20. Gebirgsarmee" 
     leader   = 565 # Rendulic
     id       = {  type = 14500 id = 5  } 
     division = 
     { id       = {  type = 14500 id = 6  } 
       name     = "20. Gebirgsarmee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "6. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "7. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 100 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 9  } 
       name     = "230. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
       extra    = armored_car
       brigade_model = 5	   
      }
     division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "140. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "270. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 12  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 497 
     name     = "LXXI. Armeekorps" 
     id       = {  type = 14500 id = 13  } 
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 15  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 16  } 
       name     = "210. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 60
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 495 
     name     = "XXXIII. Armeekorps" 
     id       = {  type = 14500 id = 17  } 
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "14. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       max_strength = 70
      }
    }
   landunit = 
   { location = 493 
     name     = "XXXIII. Armeekorps" 
     id       = {  type = 14500 id = 20  } 
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
      }
    }
   landunit = 
   { location = 491 
     name     = "LXX. Armeekorps" 
     id       = {  type = 14500 id = 22  } 
     division = 
     { id       = {  type = 14500 id = 23  } 
       name     = "274. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
       extra    = artillery
       brigade_model = 10
      }
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "280. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 100 
      }
    }
   # ARMY GROUP NORTH
   landunit = 
   { location = 268 
     name     = "Heeresgruppe Nord Reserve" 
     leader   = 248 # Schörner
     id       = {  type = 14500 id = 25  } 
     division = 
     { id       = {  type = 14500 id = 27  } 
       name     = "Feldausbildung-Division 'Nord'" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
      dig_in = 20.000
    }
   # 18th Army
   landunit = 
   { location = 268 
     name     = "18. Armee" 
     leader   = 189 # Loch
     id       = {  type = 14500 id = 28  } 
     division = 
     { id       = {  type = 14500 id = 29  } 
       name     = "18. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "52. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = police
       brigade_model = 2
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 268 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 31  } 
     division = 
     { id       = {  type = 14500 id = 32  } 
       name     = "563. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 33  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 34  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 36  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 268 
     name     = "III. SS-Panzerkorps" 
     id       = {  type = 14500 id = 37  } 
     division = 
     { id       = {  type = 14500 id = 38  } 
       name     = "4. SS-Pz.Gr.Brig. 'Nederland'" 
       type     = mechanized 
       model    = 0 
       strength = 50 
       max_strength = 50
       extra    = armored_car
       brigade_model = 5
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 39  } 
       name     = "11. SS-Pz.Gr.Freiw.Div. 'Nordland'" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 40  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 268 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 41  } 
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 43  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 44  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 269 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 45  } 
     division = 
     { id       = {  type = 14500 id = 46  } 
       name     = "14. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 47  } 
       name     = "31. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 48  } 
       name     = "126. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 16th Army
   landunit = 
   { location = 269 
     name     = "16. Armee" 
     leader   = 136 # Hilpert
     id       = {  type = 14500 id = 50  } 
     division = 
     { id       = {  type = 14500 id = 51  } 
       name     = "16. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "201. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "207. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = police
       brigade_model = 2
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 269 
     name     = "XXXVIII. Armeekorps" 
     id       = {  type = 14500 id = 54  } 
     division = 
     { id       = {  type = 14500 id = 55  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "329. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 269 
     name     = "L. Armeekorps" 
     id       = {  type = 14500 id = 58  } 
     division = 
     { id       = {  type = 14500 id = 59  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 61  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 62  } 
       name     = "389. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 269 
     name     = "VI. SS-Korps" 
     id       = {  type = 14500 id = 63  } 
     division = 
     { id       = {  type = 14500 id = 64  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 65  } 
       name     = "19. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "12. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       max_strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 68  } 
       name     = "12. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 69  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 269 
     name     = "XVI. Armeekorps" 
     id       = {  type = 14500 id = 70  } 
     division = 
     { id       = {  type = 14500 id = 71  } 
       name     = "21. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       max_strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 72  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "281. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # ARMY GROUP CENTER
   landunit = 
   { location = 184 
     name     = "Heeresgruppe Mitte Reserve" 
     leader   = 223 # Reinhardt
     id       = {  type = 14500 id = 74  } 
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "7. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "18. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "605. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "20. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 70 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 3932  } 
       name     = "15. Lettische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 45 
       experience = 80
      }
    }
   # 3rd Panzer Army
   landunit = 
   { location = 182 
     name     = "3. Panzerarmee" 
     leader   = 222 # Raus
     id       = {  type = 14500 id = 80  } 
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "3. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 82  } 
       name     = "349. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 83  } 
       name     = "549. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 84  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 85  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 182 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 86  } 
     division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 88  } 
       name     = "548. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 89  } 
       name     = "551. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "561. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 91  } 
       name     = "286. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 182 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 92  } 
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "607. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 94  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 95  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 4th Army
   landunit = 
   { location = 185 
     name     = "4. Armee" 
     leader   = 141 # Hossbach
     id       = {  type = 14500 id = 96  } 
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "4. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "Fallschirm Pz-Div. 'Hermann Göring'" 
       type     = armor 
       model    = 2 
       strength = 70 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 185 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 100  } 
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "547. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 102  } 
       name     = "562. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "203. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 185 
     name     = "VI. Armeekorps" 
     id       = {  type = 14500 id = 104  } 
     division = 
     { id       = {  type = 14500 id = 105  } 
       name     = "541. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "558. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 107  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 185 
     name     = "XXXXI. Panzerkorps" 
     id       = {  type = 14500 id = 109  } 
     division = 
     { id       = {  type = 14500 id = 110  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 111  } 
       name     = "28. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "367. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 185 
     name     = "Panzerkorps 'Hermann Göring'" 
     id       = {  type = 14500 id = 115  } 
     division = 
     { id       = {  type = 14500 id = 116  } 
       name     = "Panzergrenadier-Div. 'Hermann Göring'" 
       type     = mechanized 
       model    = 0 
       strength = 70 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 117  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 2nd Army
   landunit = 
   { location = 230 
     name     = "2. Armee" 
     leader   = 360 # Weiss
     id       = {  type = 14500 id = 118  } 
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "2. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 120  } 
       name     = "14. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "102. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 230 
     name     = "XXIII. Armeekorps" 
     id       = {  type = 14500 id = 123  } 
     division = 
     { id       = {  type = 14500 id = 124  } 
       name     = "5. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 125  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 230 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 128  } 
     division = 
     { id       = {  type = 14500 id = 129  } 
       name     = "542. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 130  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 131  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 9th Army
   landunit = 
   { location = 232 
     name     = "9. Armee" 
     leader   = 319 # von Lüttwitz
     id       = {  type = 14500 id = 132  } 
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "9. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 134  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 135  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 232 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 136  } 
     division = 
     { id       = {  type = 14500 id = 137  } 
       name     = "6. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = artillery
       brigade_model = 10 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 138  } 
       name     = "45. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 139  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 232 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 140  } 
     division = 
     { id       = {  type = 14500 id = 141  } 
       name     = "337. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 142  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "Festungs-Kdr. Warschau" 
       type     = garrison 
       model    = 5 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # ARMY GROUP A
   landunit = 
   { location = 234 
     name     = "XXIV. Panzerkorps" 
     id       = {  type = 14500 id = 146  } 
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "601. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "603. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "391. Sicherungs-Division" 
       type     = infantry 
       model    = 11 
       strength = 40 
       extra    = police
       brigade_model = 2
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 150  } 
       name     = "16. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 35 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "17. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 152  } 
       name     = "20. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       extra    = sp_anti_air
       brigade_model = 2
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 211 
     name     = "XXXX. Panzerkorps" 
     id       = {  type = 14500 id = 153  } 
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "602. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 155  } 
       name     = "608. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 156  } 
       name     = "344. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "19. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 45 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "25. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 159  } 
       name     = "10. SS-Panzer-Div. 'Frundsberg'" 
       type     = armor 
       model    = 2 
       strength = 55 
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
      }
      dig_in = 20.000
    }
   # 4th Panzer Army
   landunit = 
   { location = 234 
     name     = "4. Panzerarmee" 
     leader   = 89 # Gräser F.H.
     id       = {  type = 14500 id = 160  } 
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "4. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 234 
     name     = "XXXXII. Armeekorps" 
     id       = {  type = 14500 id = 165  } 
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 169  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 17th Army
   landunit = 
   { location = 233 
     name     = "17. Armee" 
     leader   = 247 # Schulz F.
     id       = {  type = 14500 id = 170  } 
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "17. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 172  } 
       name     = "78. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = tank_destroyer
       brigade_model = 2
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 173  } 
       name     = "320. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 174  } 
       name     = "545. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 233 
     name     = "LIX. Armeekorps" 
     id       = {  type = 14500 id = 175  } 
     division = 
     { id       = {  type = 14500 id = 176  } 
       name     = "544. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 177  } 
       name     = "359. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "371. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 1st Panzer Army
   landunit = 
   { location = 235 
     name     = "1. Panzerarmee" 
     leader   = 129 # Heinrici
     id       = {  type = 14500 id = 179  } 
     division = 
     { id       = {  type = 14500 id = 180  } 
       name     = "1. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "154. Feldausbildung-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 235 
     name     = "XXXXIX. Gebirgskorps" 
     id       = {  type = 14500 id = 182  } 
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "1. Skijäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 184  } 
       name     = "97. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 185  } 
       name     = "101. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 235 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 187  } 
     division = 
     { id       = {  type = 14500 id = 188  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 189  } 
       name     = "100. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 190  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 212 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 191  } 
     division = 
     { id       = {  type = 14500 id = 192  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 193  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 194  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # ARMY GROUP SOUTH
   landunit = 
   { location = 195 
     name     = "Heeresgruppe Süd Reserve" 
     leader   = 75 # Friessner
     id       = {  type = 14500 id = 195  } 
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "153. Feldausbildung-Division" 
       type     = infantry 
       model    = 11 
       strength = 50 
       extra    = police
       brigade_model = 2
      }
    }
   # 3rd Hungarian Army
   landunit = 
   { location = 276 
     name     = "III. Hadsereg" 
     id       = {  type = 14500 id = 198  } 
     division = 
     { id       = {  type = 14500 id = 199  } 
       name     = "Panzer-Division 'Tatra'" 
       type     = armor 
       model    = 1 
       strength = 60 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 200  } 
       name     = "3. SS-Panzer-Div. 'Totenkopf'" 
       type     = armor 
       model    = 2 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 201  } 
       name     = "5. SS-Panzer-Div. 'Wiking'" 
       type     = armor 
       model    = 2 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 202  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 203  } 
       name     = "118. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 204  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = anti_air
       brigade_model = 4 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
    }
   # 8th Army
   landunit = 
   { location = 278 
     name     = "8. Armee" 
     leader   = 367 # Wöhler
     id       = {  type = 14500 id = 206  } 
     division = 
     { id       = {  type = 14500 id = 207  } 
       name     = "8. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 208  } 
       name     = "8. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 209  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 210  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 278 
     name     = "IV. Panzerkorps" 
     id       = {  type = 14500 id = 211  } 
     division = 
     { id       = {  type = 14500 id = 212  } 
       name     = "4. SS-Pz.Gr.Div. 'Polizei'" 
       type     = mechanized 
       model    = 0 
       strength = 50 
       extra    = armored_car
       brigade_model = 5
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 213  } 
       name     = "24. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 80 
       extra    = heavy_armor
       brigade_model = 3 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 215  } 
       name     = "18. SS-Pz.Gr.Div. 'Horst Wessel'" 
       type     = mechanized 
       model    = 0 
       strength = 70 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 3931  } 
       name     = "14. Galizische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 70
       experience = 80
      }
      dig_in = 20.000
    }
   # 6th Army
   landunit = 
   { location = 284 
     name     = "6. Armee" 
     leader   = 73 # Fretter-Pico
     id       = {  type = 14500 id = 216  } 
     division = 
     { id       = {  type = 14500 id = 217  } 
       name     = "6. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "1. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 219  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       extra    = sp_artillery
       brigade_model = 2
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 220  } 
       name     = "6. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 221  } 
       name     = "8. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "23. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 223  } 
       name     = "4. Kavallerie-Brigade" 
       type     = cavalry 
       model    = 12 
       strength = 40
       max_strength = 40 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 224  } 
       name     = "271. Volksgrenadier Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 225  } 
       name     = "357. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 35 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 226  } 
       name     = "8. SS-Kav.Div. 'Florian Geyer'" 
       type     = cavalry 
       model    = 12 
       strength = 75 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 3937  } 
       name     = "22. SS-Kav.Div. 'Maria Theresia'" 
       type     = cavalry 
       model    = 12 
       strength = 70 
       experience = 80
      }
      dig_in = 20.000
    }
   # ARMY GROUP F
   # 2nd Panzer Army
   landunit = 
   { location = 345 
     name     = "2. Panzerarmee" 
     leader   = 44 # de Angelis
     id       = {  type = 14500 id = 229  } 
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "2. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 231  } 
       name     = "13. Waffen-SS Geb.Div. 'Handschar'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 35 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 233  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 439  } 
       name     = "31. SS-Freiwilligen-Grenadier-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 345 
     name     = "XXII. Gebirgskorps" 
     id       = {  type = 14500 id = 234  } 
     division = 
     { id       = {  type = 14500 id = 235  } 
       name     = "3. Kavallerie-Brigade" 
       type     = cavalry 
       model    = 12 
       strength = 40
       max_strength = 40 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 237  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 238  } 
       name     = "92. Grenadier-Brigade (mot)" 
       type     = motorized 
       model    = 2 
       strength = 40
       max_strength = 40 
       extra    = sp_artillery
       brigade_model = 2
       experience = 80
      }
      dig_in = 20.000
    }
   # Heeresgruppe E
   landunit = 
   { location = 344 
     name     = "Heeresgruppe E Reserve" 
     leader   = 1005 # Löhr
     id       = {  type = 14500 id = 239  } 
     division = 
     { id       = {  type = 14500 id = 245  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 246  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 247  } 
       name     = "369. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 3936  } 
       name     = "21. Waffen-SS Geb.Div. 'Skanderbeg'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 45 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 354 
     name     = "XXI. Gebirgskorps" 
     id       = {  type = 14500 id = 248  } 
     division = 
     { id       = {  type = 14500 id = 251  } 
       name     = "41. Festungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 252  } 
       name     = "104. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 253  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 355 
     name     = "XXXIV. z.b.V. Korps" 
     id       = {  type = 14500 id = 254  } 
     division = 
     { id       = {  type = 14500 id = 255  } 
       name     = "7. SS-Freiw.-Geb.Div. 'Prinz Eugen'" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 256  } 
       name     = "21. Albanische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 257  } 
       name     = "11. Luftwaffen-Feld-Division" 
       type     = infantry 
       model    = 11 
       strength = 60 
       max_strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 258  } 
       name     = "117. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 259  } 
       name     = "264. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 75 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 358 
     name     = "XV. Gebirgskorps" 
     id       = {  type = 14500 id = 260  } 
     division = 
     { id       = {  type = 14500 id = 261  } 
       name     = "373. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 262  } 
       name     = "392. Kroatische Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 55 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 382 
     name     = "Kommandantur d. Festung Kreta" 
     id       = {  type = 14500 id = 263  } 
     division = 
     { id       = {  type = 14500 id = 264  } 
       name     = "133. Festungs-Division" 
       type     = garrison 
       model    = 5 
       strength = 35 
       experience = 40
      }
    }
   landunit = 
   { location = 379 
     name     = "Kommandantur d. Ost Ägäis" 
     id       = {  type = 14500 id = 265  } 
     division = 
     { id       = {  type = 14500 id = 266  } 
       name     = "Kommandantur d. Ost Ägäis" 
       type     = garrison 
       model    = 5 
       strength = 25 
       experience = 40
      }
    }
   # ARMY GROUP C
   landunit = 
   { location = 396 
     name     = "Armeegruppe Ligurien" 
     id       = {  type = 14500 id = 271  } 
     division = 
     { id       = {  type = 14500 id = 272  } 
       name     = "162. Infanterie-Div. 'Turkestan'" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 398 
     name     = "LXXV. Armeekorps" 
     id       = {  type = 14500 id = 273  } 
     division = 
     { id       = {  type = 14500 id = 274  } 
       name     = "5. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 275  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 396 
     name     = "Korps Lombardei" 
     id       = {  type = 14500 id = 276  } 
     division = 
     { id       = {  type = 14500 id = 277  } 
       name     = "148. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
      dig_in = 20.000
    }
   # 14th Army
   landunit = 
   { location = 408 
     name     = "14. Armee" 
     leader   = 345 # von Tippelskirch
     id       = {  type = 14500 id = 278  } 
     division = 
     { id       = {  type = 14500 id = 279  } 
       name     = "14. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 280  } 
       name     = "232. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # 10th Army
   landunit = 
   { location = 411 
     name     = "10. Armee" 
     leader   = 183 # Lemelsen
     id       = {  type = 14500 id = 281  } 
     division = 
     { id       = {  type = 14500 id = 282  } 
       name     = "10. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 283  } 
       name     = "26. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 50 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 284  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 285  } 
       name     = "157. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 408 
     name     = "I. Fallschirmjägerkorps" 
     id       = {  type = 14500 id = 286  } 
     division = 
     { id       = {  type = 14500 id = 287  } 
       name     = "4. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 288  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 411 
     name     = "XIV. Panzerkorps" 
     id       = {  type = 14500 id = 289  } 
     division = 
     { id       = {  type = 14500 id = 290  } 
       name     = "1. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 291  } 
       name     = "42. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 292  } 
       name     = "65. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 293  } 
       name     = "334. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 294  } 
       name     = "362. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 411 
     name     = "LXXVI. Panzerkorps" 
     id       = {  type = 14500 id = 295  } 
     division = 
     { id       = {  type = 14500 id = 296  } 
       name     = "29. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 297  } 
       name     = "90. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 298  } 
       name     = "278. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 299  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 411 
     name     = "LXXIII. z.b.V. Korps" 
     id       = {  type = 14500 id = 300  } 
     division = 
     { id       = {  type = 14500 id = 301  } 
       name     = "16. SS-Pz.Gr.Div. 'Reichsführer SS'" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
       extra    = tank_destroyer
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 302  } 
       name     = "114. Jäger-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = engineer
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 303  } 
       name     = "356. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 408 
     name     = "XCVII. z.b.V. Korps" 
     id       = {  type = 14500 id = 304  } 
     division = 
     { id       = {  type = 14500 id = 305  } 
       name     = "188. Reserve-Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 10
      }
     division = 
     { id       = {  type = 14500 id = 306  } 
       name     = "237. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 307  } 
       name     = "710. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   # DENMARK OCCUPATION FORCE
   landunit = 
   { location = 294 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 308  } 
     division = 
     { id       = {  type = 14500 id = 309  } 
       name     = "166. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 220 
     name     = "Wehrm. Befehlshaber Dänemark" 
     id       = {  type = 14500 id = 310  } 
     division = 
     { id       = {  type = 14500 id = 311  } 
       name     = "160. Reserve-Division" 
       type     = infantry 
       model    = 10 
       strength = 10
      }
    }
   landunit = 
   { location = 153 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 312  } 
     division = 
     { id       = {  type = 14500 id = 313  } 
       name     = "233. Reserve-Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 10
      }
    }
   landunit = 
   { location = 152 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 314  } 
     division = 
     { id       = {  type = 14500 id = 315  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 11 
       strength = 80 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 316  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = artillery
       brigade_model = 10
       experience = 60
      }
    }
   landunit = 
   { location = 167 
     name     = "Befehlshaber des Ersatzheer" 
     id       = {  type = 14500 id = 3935  } 
     division = 
     { id       = {  type = 14500 id = 3933  } 
       name     = "20. Estische SS-Freiw.-Div." 
       type     = motorized 
       model    = 2 
       strength = 55 
       experience = 60
      }
     division = 
     { id       = {  type = 14500 id = 3934  } 
       name     = "25. Waffen-Gr.Div. d. SS 'Hunyadi'" 
       type     = motorized 
       model    = 2 
       strength = 65 
       experience = 20
      }
    }
   # GERMAN ARMY COMMAND IN THE WEST
   landunit = 
   { location = 138 
     name     = "Oberbefehlshaber West Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 317  } 
     division = 
     { id       = {  type = 14500 id = 319  } 
       name     = "70. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 321  } 
       name     = "604. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
    }
   # ARMY GROUP H
   # 25th Army
   landunit = 
   { location = 120 
     name     = "25. Armee" 
     leader   = 612 # Christiansen
     id       = {  type = 14500 id = 322  } 
     division = 
     { id       = {  type = 14500 id = 323  } 
       name     = "25. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 324  } 
       name     = "2. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 325  } 
       name     = "6. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 326  } 
       name     = "346. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
       extra    = artillery
       brigade_model = 10
      }
     division = 
     { id       = {  type = 14500 id = 327  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
      dig_in = 20.000
    }
   # 1st Parachute Army
   landunit = 
   { location = 120 
     name     = "1. Fallschirm-Armee" 
     leader   = 239 # Schlemm
     id       = {  type = 14500 id = 328  } 
     division = 
     { id       = {  type = 14500 id = 329  } 
       name     = "1. Fallschirm-Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 330  } 
       name     = "7. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 331  } 
       name     = "606. z.b.V. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 332  } 
       name     = "84. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 333  } 
       name     = "180. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 334  } 
       name     = "190. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 60
       experience = 80
      }
      dig_in = 20.000
    }
   # ARMY GROUP B
   # 15th Army
   landunit = 
   { location = 131 
     name     = "15. Armee" 
     leader   = 355 # von Zangen
     id       = {  type = 14500 id = 337  } 
     division = 
     { id       = {  type = 14500 id = 338  } 
       name     = "15. Armee" 
       type     = hq 
       model    = 4 
       strength = 65 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 339  } 
       name     = "10. SS-Panzer-Div. 'Frundsberg'" 
       type     = armor 
       model    = 2 
       strength = 55 
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 131 
     name     = "XII. SS-Korps" 
     id       = {  type = 14500 id = 340  } 
     division = 
     { id       = {  type = 14500 id = 341  } 
       name     = "59. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 342  } 
       name     = "176. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 343  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 131 
     name     = "LXXXI. Armeekorps" 
     id       = {  type = 14500 id = 344  } 
     division = 
     { id       = {  type = 14500 id = 345  } 
       name     = "47. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 346  } 
       name     = "353. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 347  } 
       name     = "363. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 131 
     name     = "LXXIV. Armeekorps" 
     id       = {  type = 14500 id = 348  } 
     division = 
     { id       = {  type = 14500 id = 349  } 
       name     = "85. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 350  } 
       name     = "272. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 351  } 
       name     = "326. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
      dig_in = 20.000
    }
   # 6th Panzer Army
   landunit = 
   { location = 126 
     name     = "VI. Panzerarmee" 
     leader   = 495 # Dietrich
     id       = {  type = 14500 id = 352  } 
     division = 
     { id       = {  type = 14500 id = 353  } 
       name     = "6. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 354  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 126 
     name     = "LXVII. Armeekorps" 
     id       = {  type = 14500 id = 355  } 
     division = 
     { id       = {  type = 14500 id = 356  } 
       name     = "3. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 80
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 357  } 
       name     = "89. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80 
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 358  } 
       name     = "246. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 359  } 
       name     = "277. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 126 
     name     = "LXVI. Armeekorps" 
     id       = {  type = 14500 id = 360  } 
     division = 
     { id       = {  type = 14500 id = 361  } 
       name     = "18. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       extra    = artillery
       brigade_model = 10
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 362  } 
       name     = "62. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       extra    = artillery
       brigade_model = 10
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 126 
     name     = "II. SS-Panzerkorps" 
     id       = {  type = 14500 id = 363  } 
     division = 
     { id       = {  type = 14500 id = 364  } 
       name     = "2. SS-Panzer-Div. 'Das Reich'" 
       type     = armor 
       model    = 2 
       strength = 65 
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 365  } 
       name     = "9. SS-Panzer-Div. 'Hohenstaufen'" 
       type     = armor 
       model    = 2 
       strength = 40 
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 366  } 
       name     = "560. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   # 5th Panzer Army
   landunit = 
   { location = 129 
     name     = "5. Panzerarmee" 
     leader   = 322 # von Manteuffel
     id       = {  type = 14500 id = 367  } 
     division = 
     { id       = {  type = 14500 id = 368  } 
       name     = "5. Panzerarmee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 369  } 
       name     = "12. SS-Panzer-Div. 'Hitlerjugend'" 
       type     = armor 
       model    = 2 
       strength = 65
       experience = 80
       extra    = heavy_armor
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 370  } 
       name     = "340. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 129 
     name     = "LVIII. Panzerkorps" 
     id       = {  type = 14500 id = 371  } 
     division = 
     { id       = {  type = 14500 id = 372  } 
       name     = "2. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 70 
       experience = 80
       extra    = tank_destroyer
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 373  } 
       name     = "9. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 70 
       experience = 80
       extra    = heavy_armor
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 374  } 
       name     = "116. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 65 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 129 
     name     = "XXXIX. Panzerkorps" 
     id       = {  type = 14500 id = 375  } 
     division = 
     { id       = {  type = 14500 id = 376  } 
       name     = "1. SS-Leibstandarte Adolf Hitler" 
       type     = armor 
       model    = 2 
       strength = 80
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 377  } 
       name     = "3. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 378  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 129 
     name     = "XXXXVII. Panzerkorps" 
     id       = {  type = 14500 id = 379  } 
     division = 
     { id       = {  type = 14500 id = 380  } 
       name     = "130. Panzer-Lehr-Division" 
       type     = armor 
       model    = 2 
       strength = 75
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 381  } 
       name     = "Panzer-Führerbegleitdivision" 
       type     = armor 
       model    = 2 
       strength = 75
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 382  } 
       name     = "15. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   # 7th Army
   landunit = 
   { location = 128 
     name     = "7. Armee" 
     leader   = 27 # Brandenberger
     id       = {  type = 14500 id = 383  } 
     division = 
     { id       = {  type = 14500 id = 384  } 
       name     = "7. Armee" 
       type     = hq 
       model    = 4 
       strength = 75 
       extra    = anti_air
       brigade_model = 4
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 385  } 
       name     = "11. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 70 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 128 
     name     = "LXXXV. Armeekorps" 
     id       = {  type = 14500 id = 386  } 
     division = 
     { id       = {  type = 14500 id = 387  } 
       name     = "79. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 388  } 
       name     = "352. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 128 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 389  } 
     division = 
     { id       = {  type = 14500 id = 390  } 
       name     = "212. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 391  } 
       name     = "276. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 128 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 392  } 
     division = 
     { id       = {  type = 14500 id = 393  } 
       name     = "5. Fallschirmjäger-Division" 
       type     = paratrooper 
       model    = 2 
       strength = 65
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 394  } 
       name     = "9. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 395  } 
       name     = "Führer-Grenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 75 
       experience = 80
       offensive = { year = 1945 month = january day = 15 }
      }
      dig_in = 20.000
    }
   # ARMY GROUP G
   # 1st Army
   landunit = 
   { location = 127 
     name     = "1. Armee" 
     leader   = 326 # von Obstfelder
     id       = {  type = 14500 id = 400  } 
     division = 
     { id       = {  type = 14500 id = 401  } 
       name     = "1. Armee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 402  } 
       name     = "526. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 403  } 
       name     = "36. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
       extra    = artillery
       brigade_model = 10
      }
     division = 
     { id       = {  type = 14500 id = 404  } 
       name     = "559. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 405  } 
       name     = "17. SS-Pz.Gr.Div. 'Götz Berlichingen'" 
       type     = mechanized 
       model    = 0 
       strength = 70
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 406  } 
       name     = "25. Panzergrenadier-Division" 
       type     = mechanized 
       model    = 0 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 407  } 
       name     = "21. Panzer-Division" 
       type     = armor 
       model    = 2 
       strength = 50
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 127 
     name     = "LXXX. Armeekorps" 
     id       = {  type = 14500 id = 408  } 
     division = 
     { id       = {  type = 14500 id = 409  } 
       name     = "257. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 130 
     name     = "XIII. SS-Korps" 
     id       = {  type = 14500 id = 410  } 
     division = 
     { id       = {  type = 14500 id = 411  } 
       name     = "19. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 412  } 
       name     = "347. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 130 
     name     = "LXXXIX. Armeekorps" 
     id       = {  type = 14500 id = 413  } 
     division = 
     { id       = {  type = 14500 id = 414  } 
       name     = "245. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 415  } 
       name     = "256. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 416  } 
       name     = "361. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       extra    = tank_destroyer
       brigade_model = 2 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 51 
     name     = "Marineoberkommando West" 
     id       = {  type = 14500 id = 417  } 
     division = 
     { id       = {  type = 14500 id = 418  } 
       name     = "226. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 69 
     name     = "Marineoberkommando West" 
     id       = {  type = 14500 id = 419  } 
     division = 
     { id       = {  type = 14500 id = 420  } 
       name     = "265. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 2 
       strength = 45
       experience = 50
      }
      dig_in = 20.000
    }
   # Navy High Command West
   landunit = 
   { location = 39 
     name     = "Marine Oberkommando West" 
     id       = {  type = 14500 id = 421  } 
     division = 
     { id       = {  type = 14500 id = 422  } 
       name     = "319. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 35
       experience = 50
      }
     division = 
     { id       = {  type = 14500 id = 440  } 
       name     = "Festungs Lorient" 
       type     = garrison 
       model    = 5 
       strength = 65 
       experience = 60
      }
      dig_in = 20.000
    }
   # UPPER RHINE HIGH COMMAND
   # 19th Army
   landunit = 
   { location = 105 
     name     = "19. Armee" 
     leader   = 221 # Rasp
     id       = {  type = 14500 id = 425  } 
     division = 
     { id       = {  type = 14500 id = 426  } 
       name     = "19. Armee" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 427  } 
       name     = "106. Panzer-Brigade" 
       type     = armor 
       model    = 2 
       strength = 40
       max_strength = 40
       experience = 80
       extra    = sp_artillery
       brigade_model = 2
      }
     division = 
     { id       = {  type = 14500 id = 428  } 
       name     = "16. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 429  } 
       name     = "189. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 430  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 431  } 
       name     = "708. Volksgrenadier-Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       max_strength = 70 # 6 infantry battalions instead of the 9 of an infantry division
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 432  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 20
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 132 
     name     = "XVIII. SS-Korps" 
     id       = {  type = 14500 id = 433  } 
     division = 
     { id       = {  type = 14500 id = 434  } 
       name     = "405. Division" 
       type     = infantry 
       model    = 11 
       strength = 65 
       experience = 80
      }
      dig_in = 20.000
    }
   landunit = 
   { location = 132 
     name     = "LXIII. Armeekorps" 
     id       = {  type = 14500 id = 435  } 
     division = 
     { id       = {  type = 14500 id = 436  } 
       name     = "159. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 70
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 437  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 65
       experience = 80
      }
     division = 
     { id       = {  type = 14500 id = 438  } 
       name     = "338. Infanterie-Division" 
       type     = infantry 
       model    = 11 
       strength = 80
       experience = 80
      }
      dig_in = 20.000
    }
   ##########################################
   ## Kriegsmarine
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 500  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 501  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
      } 
     division = 
     { id    = {  type = 14500 id = 502  } 
       name  = "Prinz Eugen" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 503  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 504  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 505  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 506  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 507  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 508  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 509  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 510  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 511  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
       strength = 30 # heavily damaged after being rammed by Prinz Eugen and nearly cut in half
      }
     division = 
     { id    = {  type = 14500 id = 512  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 513  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 514  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
    }
   # 1ST DESTROYER SQUADRON
   navalunit = 
   { name     = "1. Zerstörergeschwader" 
     id       = {  type = 14500 id = 515  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 516  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
    }
   # 2ND DESTROYER SQUADRON
   navalunit = 
   { name     = "2. Zerstörergeschwader" 
     id       = {  type = 14500 id = 517  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 518  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
    }
   # 3RD DESTROYER SQUADRON
   navalunit = 
   { name     = "3. Zerstörergeschwader" 
     id       = {  type = 14500 id = 519  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 520  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
    }
   # 4TH DESTROYER SQUADRON
   navalunit = 
   { name     = "4. Zerstörergeschwader" 
     id       = {  type = 14500 id = 521  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 522  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 5TH DESTROYER SQUADRON
   navalunit = 
   { name     = "5. Zerstörergeschwader" 
     id       = {  type = 14500 id = 523  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 524  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 6TH DESTROYER SQUADRON
   navalunit = 
   { name     = "6. Zerstörergeschwader" 
     id       = {  type = 14500 id = 525  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 526  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 7TH DESTROYER SQUADRON
   navalunit = 
   { name     = "7. Zerstörergeschwader" 
     id       = {  type = 14500 id = 527  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 528  } 
       name  = "7. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 8TH DESTROYER SQUADRON
   navalunit = 
   { name     = "8. Zerstörergeschwader" 
     id       = {  type = 14500 id = 529  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 530  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 4TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 531  } 
     location = 158 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 532  } 
       name  = "41. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 533  } 
       name  = "42. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "V. Unterseebootsflottille" 
     id       = {  type = 14500 id = 534  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 535  } 
       name  = "51. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 536  } 
       name  = "52. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 537  } 
     location = 39 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 538  } 
       name  = "71. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 8TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 539  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 540  } 
       name  = "81. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 541  } 
       name  = "82. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 11TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 542  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 543  } 
       name  = "111. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 544  } 
       name  = "112. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 545  } 
       name  = "113. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 546  } 
       name  = "114. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 547  } 
       name  = "115. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 548  } 
       name  = "116. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
    }
   # 13TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 549  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 550  } 
       name  = "131. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 551  } 
       name  = "132. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 552  } 
       name  = "133. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 553  } 
       name  = "134. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 554  } 
       name  = "135. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 555  } 
       name  = "136. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 19TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XIX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 556  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 557  } 
       name  = "191. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 20TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 558  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 559  } 
       name  = "201. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 560  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 561  } 
       name  = "211. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 562  } 
       name  = "212. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 22ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 563  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 564  } 
       name  = "221. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 565  } 
       name  = "222. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 23TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 566  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 567  } 
       name  = "231. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 568  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 569  } 
       name  = "241. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
     division = 
     { id    = {  type = 14500 id = 570  } 
       name  = "242. Unterseebootsgeschwader" 
       type  = submarine 
       model = 5 # Type VII
       experience = 60
      }
    }
   # 25TH SUBMARINE FLEET
   navalunit = 
   { name     = "XXV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 571  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 572  } 
       name  = "251. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 26TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 573  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 574  } 
       name  = "261. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 575  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 576  } 
       name  = "271. Unterseebootsgeschwader" 
       type  = submarine 
       model = 4 # Type II
       experience = 60
      }
    }
   # 31ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 577  } 
     location = 154 
     base     = 154
     division = 
     { id    = {  type = 14500 id = 578  } 
       name  = "311. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # 32ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 579  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 580  } 
       name  = "321. Unterseebootsgeschwader" 
       type  = submarine 
       model = 7 # Type XXI
       experience = 60
      }
    }
   # 33TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXX. Unterseebootsflottille" 
     id       = {  type = 14500 id = 581  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 582  } 
       name  = "331. Unterseebootsgeschwader" 
       type  = submarine 
       model = 6 # Type IX
       experience = 60
      }
    }
   # Monsun Gruppe
   navalunit =
   { name     = "Monsun Gruppe"
     id       = {  type = 14500 id = 583  }
     location = 1647
     base = 1647
     division =
     { id    = {  type = 14500 id = 584  }
       name  = "Eisbär Gruppe"
       type  = submarine
       model = 6 # Type IX
       experience = 60
     }
     division =
     { id    = {  type = 14500 id = 585  }
       name  = "Seehund Gruppe"
       type  = submarine
       model = 6 # Type IX
       experience = 60
     }
   }

   ##########################################
   ## Luftwaffe

  # NATIONAL AIR FLEET
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 600 }
    name     = "Luftflotte Reich"
    division =
    { id         = { type = 14500 id = 601 }
      name       = "Jagdgeschwader 300"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 602 }
      name       = "Jagdgeschwader 301"
      strength   = 80
      type       = multi_role
      model      = 7 # Fw 190
    }
    division =
    { id         = { type = 14500 id = 603 }
      name       = "Jagdgeschwader 400"
      strength   = 80
      type       = rocket_interceptor
      model      = 0 # Me 163A
    }
    division =
    { id         = { type = 14500 id = 604 }
      name       = "Kampfgeschwader 100"
      strength   = 80
      type       = tactical_bomber
      model      = 8 # He 177A
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 605 }
      name       = "Kampfgeschwader 200"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Various
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 606 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 7 # He 219A
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 607 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 100
      type       = multi_role
      model      = 6 # Ju 88
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 608 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 609 }
      name       = "Nachtjagdgeschwader 4"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 610 }
      name       = "Nachtjagdgeschwader 5"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 611 }
      name       = "Nachtjagdgeschwader 6"
      strength   = 25
      type       = multi_role
      model      = 5 # Bf 110G
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 612 }
      name       = "Nachtjagdgeschwader 11"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
      experience = 60
    }
    division =
    { id         = { type = 14500 id = 613 }
      name       = "Nachtjagdgeschwader 100"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
      experience = 60
    }
  }
  # 1ST AIR FLEET
  airunit =
  { location = 269
    base     = 269
    id       = { type = 14500 id = 614 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 615 }
      name       = "JG 54 'Grünherz'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 616 }
      name       = "Transportgeschwader 1"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 407
    base     = 407
    id       = { type = 14500 id = 617 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 618 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 80
      type       = cas
      model      = 3
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 619 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 620 }
      name       = "KG 51 'Edelweiß'"
      strength   = 40
      type       = multi_role
      model      = 8 # Me 262
    }
    division =
    { id         = { type = 14500 id = 621 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 622 }
      name       = "KG 53 'Legion Condor'"
      strength   = 65
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
    }
  }
  airunit =
  { location = 138
    base     = 138
    id       = { type = 14500 id = 623 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 624 }
      name       = "JG 1 'Oesau'"
      strength   = 80
      type       = multi_role
      model      = 6 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 625 }
      name       = "Jagdgeschwader 4"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 626 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 627 }
      name       = "JG 77 'Herz As'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 628 }
      name       = "KG 2 'Holzhammer'"
      strength   = 45
      type       = tactical_bomber
      model      = 8 # Ju 188
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 629 }
      name       = "Kampfgeschwader 66"
      strength   = 80
      type       = tactical_bomber
      model      = 8 # Ju 188
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 630 }
      name       = "Kampfgeschwader 76"
      strength   = 40
      type       = tactical_bomber
      model      = 9 # Ar 234A
      extra      = escort
      brigade_model = 2
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 631 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 632 }
      name       = "Jagdgeschwader 11"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109
    }
    division =
    { id         = { type = 14500 id = 633 }
      name       = "Sturzkampfgeschwader 4"
      strength   = 100
      type       = cas
      model      = 3 # Hs 129
    }
    division =
    { id         = { type = 14500 id = 634 }
      name       = "Transportgeschwader 4"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
    }
  }
  airunit =
  { location = 134
    base     = 134
    id       = { type = 14500 id = 635 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 636 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = multi_role
      model      = 7 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 637 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 10 # Bf 109
    }
    division =
    { id         = { type = 14500 id = 638 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = multi_role
      model      = 7 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 639 }
      name       = "Jagdgeschwader 27"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 195
    base     = 195
    id       = { type = 14500 id = 640 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 641 }
      name       = "Jagdgeschwader 76"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 642 }
      name       = "KG 4 'General Wever'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111H
      extra      = escort
      brigade_model = 2
    }
    division =
    { id         = { type = 14500 id = 643 }
      name       = "Schlachtgeschwader 2"
      strength   = 80
      type       = multi_role
      model      = 7 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 644 }
      name       = "Schnellkampfgeschwader 10"
      strength   = 80
      type       = multi_role
      model      = 7 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 645 }
      name       = "Transportgeschwader 2"
      strength   = 80
      type       = transport_plane
      model      = 1 # Ju 52
      extra      = escort
      brigade_model = 2
    }
  }
  # 5TH AIR FLEET
  airunit =
  { location = 495
    base     = 495
    id       = { type = 14500 id = 646 }
    name     = "Luftflotte V"
    division =
    { id         = { type = 14500 id = 647 }
      name       = "JG 5 'Eismeer'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 648 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 80
      type       = multi_role
      model      = 7 # Me 410
    }
    division =
    { id         = { type = 14500 id = 649 }
      name       = "KG 26 'Löwen'"
      strength   = 80
      type       = tactical_bomber
      model      = 7 # Ju 88A
      extra      = escort
      brigade_model = 2
    }
  }
  # 6TH AIR FLEET
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 650 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 651 }
      name       = "JG 51 'Mölders'"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 652 }
      name       = "Jagdgeschwader 52"
      strength   = 80
      type       = interceptor
      model      = 10 # Bf 109G
    }
    division =
    { id         = { type = 14500 id = 653 }
      name       = "Schlachtgeschwader 1"
      strength   = 80
      type       = multi_role
      model      = 7 # Fw 190D
    }
  }
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 654 }
    name     = "Luftflotte VI"
    division =
    { id         = { type = 14500 id = 655 }
      name       = "Schlachtgeschwader 3"
      strength   = 80
      type       = multi_role
      model      = 7 # Fw 190D
    }
    division =
    { id         = { type = 14500 id = 656 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 80
      type       = cas
      model      = 2 # Ju 87G
    }
  }
  # V2 BATTERIES
  airunit =
  { location = 138
    base     = 138
    id       = { type = 14500 id = 657 }
    name     = "1. V2 Batterie"
    division =
    { id         = { type = 14500 id = 658 }
      name       = "1. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 147
    base     = 147
    id       = { type = 14500 id = 659 }
    name     = "2. V2 Batterie"
    division =
    { id         = { type = 14500 id = 660 }
      name       = "2. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 661 }
    name     = "3. V2 Batterie"
    division =
    { id         = { type = 14500 id = 662 }
      name       = "3. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 663 }
    name     = "4. V2 Batterie"
    division =
    { id         = { type = 14500 id = 664 }
      name       = "4. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }
  airunit =
  { location = 122
    base     = 122
    id       = { type = 14500 id = 665 }
    name     = "5. V2 Batterie"
    division =
    { id         = { type = 14500 id = 666 }
      name       = "5. V2 Batterie"
      strength   = 100
      type       = flying_rocket
      model      = 0
    }
  }

	division_development = {
		name  = "23. Infanterie-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 700  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "300. z.b.V. Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 701  } 
		date  = {  year = 1945 month = january day = 1  } 
	}
	division_development = {
		name  = "275. Volksgrenadier-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 702  } 
		date  = {  year = 1945 month = march day = 1  } 
	}
	division_development = {
		name  = "83. Infanterie-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 703  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "48. Volksgrenadier-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 704  } 
		date  = {  year = 1945 month = may day = 1  } 
	}
	division_development = {
		name  = "182. Reserve-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 705  } 
		date  = {  year = 1945 month = april day = 1  } 
	}
	division_development = {
		name  = "167. Volksgrenadier-Division" 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 706  } 
		date  = {  year = 1945 month = january day = 1  } 
	}
	division_development = {
		name  = "26. Waffen-Gr.Div. d. SS 'Hungaria'" 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 707  } 
		date  = {  year = 1945 month = march day = 1  } 
	}
	division_development = {
		name  = "27. SS-Freiw.-Div. 'Langemark'" 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 710  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "28. SS-Freiw.-Div. 'Wallonien'" 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 711  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "32. SS-Freiw.Div. '30. Januar'" 
		type  = motorized
		model = 2
		cost  = 0.1 
		id    = {  type = 14500 id = 712  } 
		date  = {  year = 1945 month = january day = 29  } 
	}
	division_development = {
		name  = "600. Russische Infanterie-Div." 
		type  = infantry
		model = 11
		cost  = 0.1 
		id    = {  type = 14500 id = 714  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "1. Kossaken-Kavallerie-Division" 
		type  = cavalry
		model = 12
		cost  = 0.2 
		id    = {  type = 14500 id = 715  } 
		date  = {  year = 1945 month = february day = 1  } 
	}
	division_development = {
		name  = "2. Kossaken-Kavallerie-Division" 
		type  = cavalry
		model = 12
		cost  = 0.2 
		id    = {  type = 14500 id = 716  } 
		date  = {  year = 1945 month = march day = 1  } 
	}
	division_development = {
		name  = "6. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 717  } 
		date  = {  year = 1944 month = december day = 20  } 
	}
	division_development = {
		name  = "7. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 718  } 
		date  = {  year = 1944 month = december day = 22  } 
	}
	division_development = {
		name  = "8. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 719  } 
		date  = {  year = 1944 month = december day = 24  } 
	}
	division_development = {
		name  = "9. V2 Batterie" 
		type  = flying_rocket
		model = 0
		cost  = 0.2 
		id    = {  type = 14500 id = 720  } 
		date  = {  year = 1944 month = december day = 26  } 
	}
	division_development = {
		name  = "10. V2 Batterie" 
		type  = flying_rocket
		model = 1
		cost  = 0.2 
		id    = {  type = 14500 id = 721  } 
		date  = {  year = 1944 month = december day = 28  } 
	}
	division_development = {
		name  = "11. V2 Batterie" 
		type  = flying_rocket
		model = 1
		cost  = 0.2 
		id    = {  type = 14500 id = 722  } 
		date  = {  year = 1945 month = january day = 0  } 
	}
	division_development = {
		name  = "12. V2 Batterie" 
		type  = flying_rocket
		model = 1
		cost  = 0.2 
		id    = {  type = 14500 id = 723  } 
		date  = {  year = 1945 month = january day = 2  } 
	}
	division_development = {
		name  = "13. V2 Batterie" 
		type  = flying_rocket
		model = 1
		cost  = 0.2 
		id    = {  type = 14500 id = 724  } 
		date  = {  year = 1945 month = january day = 4  } 
	}
	division_development = {
		name  = "181. Unterseebootsgeschwader" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 725  } 
		date  = {  year = 1945 month = january day = 1  } 
	}
} 

