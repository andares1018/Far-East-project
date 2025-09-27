 
 ############################## 
 # Country definition for SOV # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = SOV 
	regular_id             = RUS 
	intrinsic_gov_type     = leninist 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	#ground_def_eff         = 0.88
	capital                = 572 
	# Resource Reserves 
	energy                 = 50000
	metal                  = 50000
	rare_materials         = 5000
	oil                    = 5000 
	supplies               = 5000 
	money                  = 100 
	belligerence           = 20
	manpower               = 14000 
	transports             = 30 
	escorts                = 15 
    
  diplomacy =
  { relation = { tag = AFG value = 1 }
    relation = { tag = BRA value = -50 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CHI value = 25 }
    relation = { tag = SLO value = -150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FIN value = -100 }
    relation = { tag = U01 value = 100 }
    relation = { tag = GER value = -200 }
    relation =
    { tag        = MON
      value      = 150
      guaranteed = { day = 8 month = april year = 1940 }
      access     = yes
    }
    relation = { tag = PER value = -20 }
    relation = { tag = ROM value = -200 }
    relation =
    { tag        = SIK
      value      = 125
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = SPA value = -100 }
    relation = { tag = TAN value = 200 access = yes }
    relation = { tag = TUR value = 70 }
    relation = { tag = URU value = -100 }
    relation = { tag = USA value = 175 }
  }

   SpyInfo                = {  country = "SOV" NumberOfSpies = 10  } 
    
   nationalprovinces      = {  498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 
         259 260 262 263 264 265 266 267 268 269 270 271 272 273 274 275
         517 519 531 532 530
         300 302 303 304 305 306
                             } 
   ownedprovinces         = {  498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 
         241 242 244 247 254 245 238 255 257 251 240 248 250 239 249 256 253 259 262 263 260 258 264 265 266 267 268 269 270 271 272 273 274 275
         1083 1081 1080
                             } 
   controlledprovinces    = {  1191  1193 1192 1196 1195 1190 1187 1188 1175 1174 1541 1189 1176 1180    1181 1182 1183 1184  
                              1194 1179 1178 1168 1177 1169 1164 1163 1162 1167  1166 1186     1165 1150 1154 507 505 498 1153 
                              1152 1145 1146 1147 1158 1156    1157 1144 1143 1129 1142 1140 1148 685 1155 544 546   545 568 
                              584  500  1138 1139 583 1136 1135     1111 1110 504 1112 1102 1101 
                              1118 502 501 1151 1130 1137 1132 1131 1133 1115 1116 503 1117 1114 1113 690 699 687 689 688 542  
                              686 681 543  547  537  536  534  535  706 702 704 709 708 710 695  
                              700 659  662 661 660 666 1134 665 669 658 668  670 667 675 674 672 664 
                              671 673 684  655  651  650  656  578  683  682  679  571  680  678  677  676  548  556  554  
                              569  572  570  541  559  557  553  561  574  581
                              582  579  657  654  580  
                              652  653  1097 1098 1105 1104 1099 1103 1106 
                              1109 1108 1107 567  573  589  575  577  562  558  563  707  1185 506 1100 
                              711 712 713 1149 1141 499 
               602 604 633 634 642 643 644 645 646 647 648 649 663 691 692 693 696 697 698
               714 576 555 705 703 701 530 549 550 551 552 560 565 238 240 244 245 249 585 586 587 588 595
               598 600 601 603 605 606 607 608 609 610 611 612 613 614 615 616 617 618 622 623 624 627 628 629 630 631 632 635
               636 637 638 639 640 641 694 300 302 303 619 620 621 625 626
         1126 1127 1128 1069 1070 1161 1170 1171 
         1083 1081 1080
                             }
   claimedprovinces    = { 241 242 244 247 254 245 238 255 257 251 240 248 250 239 249 258 256 253 } 

   # Soviet Techs 1944.06
   # ################ 
	techapps = {

	# Manufacturing
	5810 5820 5830 5050 5060 5070 5130
	# Assembly Line
	5140 5160 5180
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers & cryptografi
	5310 54010 54020 54030 5320 5316 5326 5327 5350 5360
	# Agriculture  
	5700 5710 5010 5020 5030
	# Radar
	5410 5416 5417
	# Oil Refining 
	5190 5200
	# Atomics
	5470 5480
	# Medicine
	5600 5610 5620 5630
	# Rocket
	5560
	# Specialised Equipment
	5920
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270
	# Marines
	1560 1570 1580 1590 1600 1610
	# Paratroopers
	1670
	# Motorized Inf
	1396 1400 1410
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530
	# Mechanized Inf
	1470
	# Engineers
	1830 1840 1850 1860 1870
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140

	# Early/Light Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2100 2110
	# Medium Tank
	2070 2080 2090
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340
	# Self-Propelled Artillery
	2220 2230 2240
	# Self-Propelled Rocket
	2980
	# Anti-tank Artillery
	2400 2410
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-air Brig
	2810 2820 2510 2520 2530
	# Tank Destroyer
	2170 2180
	#Rocket Artillery
	2970
 
 	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# Land Doctrines
	6570 6300 6900 6310 6320 6330 6340 6350 6370 6360

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser  
	3310 3320 3330 3340
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Light Carrier
	12100 12110 12120 12130
	# Fleet Carrier
	3510
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Naval Doctrines 
	# Theory
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300
	# Logistics
	82500
	# Naval Interdiction
	8500 8510 8550 8560 8600 8610 8520
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210 8170

	# CAS
	4400 4170 4280 4450
	# Inteceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070
	# Escort Fighter
	4050 4080
	# Strategic bomber
	4800 4810 4820 4220 4230
	# Navalbomber
	4700 4710 4190
	# Transports
	4290 4250
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240
	#Advanced oil extraction
	55010
 	} 

inventions = { 3000027 }
   blueprints             = {   } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     freedom           = 1 
     free_market       = 1 
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 10 
    } 

   headofstate            = {  type = 9 id = 30002  } # Stalin 
   headofgovernment       = {  type = 9 id = 30144  } # Stalin 
   foreignminister        = {  type = 9 id = 30021  } 
   armamentminister       = {  type = 9 id = 30004  } 
   ministerofsecurity     = {  type = 9 id = 30028  } 
   ministerofintelligence = {  type = 9 id = 30035  } 
   chiefofstaff           = {  type = 9 id = 30042  } 
   chiefofarmy            = {  type = 9 id = 30046  } 
   chiefofnavy            = {  type = 9 id = 30049  } 
   chiefofair             = {  type = 9 id = 30055  } #Alexander A. Novikov
   dormant_ministers      = {  30003 30005 30007 30009 30006 30010 30026 30027 30032 30033 30048 30053  }
   dormant_leaders        = {  30050 30040 30042 30044 30085 30095 30097 30101 30108 30111 30127 30131 30135 30152 30156 30170 30175 30192 30194 30207
                               30217 30220 30229 30232 30243 30255 30267 30272 30315 30316 30338 30339 30403 30409 30416 30454 30472 30477 30484 30487
                               30498 30523 30543 30547 30550 30570 30571 30572 30602 30618 30654 30664 30673 30678 30701 30715 30716 30717 30718 30719
                               30721 30722 30723 30650 30437 30512 30007 30374 30238 30276 30681 30353 30687 30407 30697 30499 30004 30008 30028
                               30057 30059 30063 30081 30084 30090 30098 30100 30107 30120 30136 30172 30174 30186 30190 30191 30198 30199 30214 30215
                               30226 30242 30258 30263 30269 30275 30277 30296 30302 30324 30326 30345 30381 30391 30399 30401 30411 30419 30442 30445
                               30447 30491 30494 30509 30521 30548 30552 30576 30614 30658 30660 30720 30473 30778 30076 30216 30744 30266 30322 30463
                               30479 30538 30789 30313 30765 30767 30515 30776 30528 30758 30373 30564
                            }
#1944

   landunit = 
   {  id       = {  type = 10848 id =  1 } 
     name     = "Raboche-Krest'yanskaya Krasnaya Armiya" 
     location = 572 #Moscow 
     Division = 
     {  id       = {  type = 10848 id = 2  } 
       name     = "Generalnyi Shtab RKKA" 
       strength = 100
       type     = HQ
	   model    = 4
	   experience = 40
	   } 
 } 
   landunit = 
   {  id       = {  type = 10848 id =  3 } 
     name     = "Leningradskyi Front" 
     location = 553 
     Division = 
     {  id       = {  type = 10848 id = 4  } 
       name     = "Leningradskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
 } 
   landunit = 
   {  id       = {  type = 10848 id =  5 } 
     name     = "8-ya Armiya" 
     location = 550 
     Division = 
     {  id       = {  type = 10848 id = 6  } 
       name     = "2-ya Belorusskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
	   extra    = artillery
	   brigade_model    = 10	   
      }
     Division = 
     {  id       = {  type = 10848 id = 7  } 
       name     = "11-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 8  } 
       name     = "43-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 9  } 
       name     = "98-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 10  } 
       name     = "120-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 11  } 
       name     = "123-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 12  } 
       name     = "189-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 13  } 
       name     = "196-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 14  } 
       name     = "201-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 15  } 
       name     = "256-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 16  } 
       name     = "374-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 17  } 
       name     = "377-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  18 } 
     name     = "2-ya Udarnaya Armiya" 
     location = 550 
     Division = 
     {  id       = {  type = 10848 id = 19  } 
       name     = "48-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 20  } 
       name     = "131-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 21  } 
       name     = "191-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  22 } 
     name     = "21-ya Armiya" 
     location = 553 
     Division = 
     {  id       = {  type = 10848 id = 23  } 
       name     = "46-ya Dnepropetrovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 24  } 
       name     = "72-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 25  } 
       name     = "90-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 26  } 
       name     = "109-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 27  } 
       name     = "178-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 28  } 
       name     = "286-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 29  } 
       name     = "314-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 30  } 
       name     = "358-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 31  } 
       name     = "372-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  32 } 
     name     = "30-i Strelkovyi Korpus" 
     location = 530 
     Division = 
     {  id       = {  type = 10848 id = 33  } 
       name     = "45-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 34  } 
       name     = "63-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 35  } 
       name     = "64-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  36 } 
     name     = "110-i Strelkovyi Korpus" 
     location = 530 
     Division = 
     {  id       = {  type = 10848 id = 37  } 
       name     = "168-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 38  } 
       name     = "265-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 39  } 
       name     = "268-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  40 } 
     name     = "23-ya Armiya" 
     location = 557 
     Division = 
     {  id       = {  type = 10848 id = 41  } 
       name     = "10-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 42  } 
       name     = "13-ya Dagestanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 43  } 
       name     = "92-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 44  } 
       name     = "142-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 45  } 
       name     = "177-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 46  } 
       name     = "281-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 47  } 
       name     = "381-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 48  } 
       name     = "382-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  49 } 
     name     = "59-ya Armiya" 
     location = 552 
     Division = 
     {  id       = {  type = 10848 id = 50  } 
       name     = "7-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 51  } 
       name     = "80-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 52  } 
       name     = "124-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 53  } 
       name     = "125-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 54  } 
       name     = "224-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 55  } 
       name     = "249-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  56 } 
     name     = "Karelskyi Front" 
     location = 535 
     Division = 
     {  id       = {  type = 10848 id = 57  } 
       name     = "Karelskyi Front" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  58 } 
     name     = "14-ya Armiya" 
     location = 535 
     Division = 
     {  id       = {  type = 10848 id = 59  } 
       name     = "14-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 60  } 
       name     = "126-ya Gornostrelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  61 } 
     name     = "19-ya Armiya" 
     location = 536 
     Division = 
     {  id       = {  type = 10848 id = 62  } 
       name     = "26-ya Zlatoustovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 63  } 
       name     = "127-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 64  } 
       name     = "134-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 65  } 
       name     = "162-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  66 } 
     name     = "34-i Strelkovyi Korpus" 
     location = 530 
     Division = 
     {  id       = {  type = 10848 id = 67  } 
       name     = "129-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 68  } 
       name     = "158-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 69  } 
       name     = "171-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  70 } 
     name     = "7-ya Armiya" 
     location = 541 
     Division = 
     {  id       = {  type = 10848 id = 71  } 
       name     = "18-ya Yaroslavskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 72  } 
       name     = "65-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 73  } 
       name     = "114-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 74  } 
       name     = "272-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 75  } 
       name     = "368-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 76  } 
       name     = "127-ya Gornostrelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  77 } 
     name     = "94-i Strelkovyi Korpus" 
     location = 537 
     Division = 
     {  id       = {  type = 10848 id = 78  } 
       name     = "135-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 79  } 
       name     = "221-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 80  } 
       name     = "327-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 81  } 
       name     = "98-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 82  } 
       name     = "99-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 83  } 
       name     = "100-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  84 } 
     name     = "32-ya Armiya" 
     location = 556 
     Division = 
     {  id       = {  type = 10848 id = 85  } 
       name     = "176-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 86  } 
       name     = "289-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 87  } 
       name     = "313-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  88 } 
     name     = "1-i Pribaltyiskyi Front" 
     location = 577 
     Division = 
     {  id       = {  type = 10848 id = 89  } 
       name     = "1-i Pribaltyiskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  90 } 
     name     = "4-ya Udarnaya Armiya" 
     location = 573 
     Division = 
     {  id       = {  type = 10848 id = 91  } 
       name     = "16-ya Ul'yanovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 92  } 
       name     = "28-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 93  } 
       name     = "119-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 94  } 
       name     = "200-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 95  } 
       name     = "332-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 96  } 
       name     = "360-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 97  } 
       name     = "21-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  98 } 
     name     = "6-ya Gvardyeiskaya Armiya" 
     location = 573 
     Division = 
     {  id       = {  type = 10848 id = 99  } 
       name     = "9-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 100  } 
       name     = "29-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 101  } 
       name     = "46-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 102  } 
       name     = "154-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 103  } 
       name     = "166-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 104  } 
       name     = "270-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  105 } 
     name     = "22-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 565 
     Division = 
     {  id       = {  type = 10848 id = 106  } 
       name     = "47-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 107  } 
       name     = "51-ya Perekopskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 108  } 
       name     = "90-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  109 } 
     name     = "23-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 565 
     Division = 
     {  id       = {  type = 10848 id = 110  } 
       name     = "51-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 111  } 
       name     = "67-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 112  } 
       name     = "71-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  113 } 
     name     = "43-ya Armiya" 
     location = 573 
     Division = 
     {  id       = {  type = 10848 id = 114  } 
       name     = "145-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 115  } 
       name     = "156-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 116  } 
       name     = "179-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 117  } 
       name     = "204-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 118  } 
       name     = "235-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 119  } 
       name     = "306-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 120  } 
       name     = "334-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 121  } 
       name     = "357-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  122 } 
     name     = "2-i Pribaltyiskyi Front" 
     location = 561 
     Division = 
     {  id       = {  type = 10848 id = 123  } 
       name     = "2-i Pribaltyiskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 124  } 
       name     = "43-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 125  } 
       name     = "5-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  126 } 
     name     = "1-ya Udarnaya Armiya" 
     location = 565 
     Division = 
     {  id       = {  type = 10848 id = 127  } 
       name     = "26-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 128  } 
       name     = "33-ya Belorusskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 129  } 
       name     = "37-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 130  } 
       name     = "146-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 131  } 
       name     = "182-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 132  } 
       name     = "208-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 133  } 
       name     = "282-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 134  } 
       name     = "321-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 135  } 
       name     = "52-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 136  } 
       name     = "23-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  137 } 
     name     = "22-ya Armiya" 
     location = 565 
     Division = 
     {  id       = {  type = 10848 id = 138  } 
       name     = "115-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 139  } 
       name     = "319-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 140  } 
       name     = "325-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  141 } 
     name     = "3-ya Udarnaya Armiya" 
     location = 565 
     Division = 
     {  id       = {  type = 10848 id = 142  } 
       name     = "150-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 143  } 
       name     = "207-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 144  } 
       name     = "219-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 145  } 
       name     = "379-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 146  } 
       name     = "391-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  147 } 
     name     = "10-ya Gvardyeiskaya Armiya" 
     location = 573 
     Division = 
     {  id       = {  type = 10848 id = 148  } 
       name     = "7-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 149  } 
       name     = "8-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 150  } 
       name     = "22-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 151  } 
       name     = "29-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 152  } 
       name     = "30-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 153  } 
       name     = "56-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 154  } 
       name     = "65-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 155  } 
       name     = "85-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 156  } 
       name     = "119-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  157 } 
     name     = "3-i Pribaltyiskyi Front" 
     location = 549 
     Division = 
     {  id       = {  type = 10848 id = 158  } 
       name     = "3-i Pribaltyiskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  159 } 
     name     = "67-ya Armiya" 
     location = 552 
     Division = 
     {  id       = {  type = 10848 id = 160  } 
       name     = "56-ya Moskovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 161  } 
       name     = "85-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 162  } 
       name     = "86-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 163  } 
       name     = "198-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 164  } 
       name     = "285-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 165  } 
       name     = "291-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 166  } 
       name     = "326-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 167  } 
       name     = "364-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  168 } 
     name     = "54-ya Armiya" 
     location = 552 
     Division = 
     {  id       = {  type = 10848 id = 169  } 
       name     = "53-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 170  } 
       name     = "44-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 171  } 
       name     = "225-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 172  } 
       name     = "229-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 173  } 
       name     = "288-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  174 } 
     name     = "42-ya Armiya" 
     location = 550 
     Division = 
     {  id       = {  type = 10848 id = 175  } 
       name     = "128-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 176  } 
       name     = "245-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 177  } 
       name     = "376-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  178 } 
     name     = "1-i Belorusskyi Front" 
     location = 587 
     Division = 
     {  id       = {  type = 10848 id = 179  } 
       name     = "1-i Belorusskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 180  } 
       name     = "9-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 181  } 
       name     = "10-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 182  } 
       name     = "30-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 183  } 
       name     = "1-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 184  } 
       name     = "8-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 185  } 
       name     = "9-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 186  } 
       name     = "11-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 187  } 
       name     = "1-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  188 } 
     name     = "7-i Kavaleriiskaya Korpus" 
     location = 249 
     Division = 
     {  id       = {  type = 10848 id = 189  } 
       name     = "14-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 190  } 
       name     = "15-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 191  } 
       name     = "16-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  192 } 
     name     = "3-ya Armiya" 
     location = 601 
     Division = 
     {  id       = {  type = 10848 id = 193  } 
       name     = "5-ya Vitebskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 194  } 
       name     = "82-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 195  } 
       name     = "108-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 196  } 
       name     = "169-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 197  } 
       name     = "186-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 198  } 
       name     = "250-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 199  } 
       name     = "283-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 200  } 
       name     = "323-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 201  } 
       name     = "348-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 202  } 
       name     = "413-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  203 } 
     name     = "8-ya Gvardyeiskaya Armiya" 
     location = 240 
     Division = 
     {  id       = {  type = 10848 id = 204  } 
       name     = "27-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 205  } 
       name     = "35-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 206  } 
       name     = "39-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 207  } 
       name     = "47-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 208  } 
       name     = "57-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 209  } 
       name     = "74-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 210  } 
       name     = "79-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 211  } 
       name     = "82-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 212  } 
       name     = "88-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  213 } 
     name     = "28-ya Gvardyeiskaya Armiya" 
     location = 579 
     Division = 
     {  id       = {  type = 10848 id = 214  } 
       name     = "20-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 215  } 
       name     = "48-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 216  } 
       name     = "50-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 217  } 
       name     = "54-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 218  } 
       name     = "55-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 219  } 
       name     = "61-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 220  } 
       name     = "96-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 221  } 
       name     = "130-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 222  } 
       name     = "152-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  223 } 
     name     = "47-ya Armiya" 
     location = 569 
     Division = 
     {  id       = {  type = 10848 id = 224  } 
       name     = "60-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 225  } 
       name     = "76-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 226  } 
       name     = "132-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 227  } 
       name     = "143-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 228  } 
       name     = "175-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 229  } 
       name     = "185-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 230  } 
       name     = "234-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 231  } 
       name     = "328-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  232 } 
     name     = "129-i Strelkovyi Korpus" 
     location = 551 
     Division = 
     {  id       = {  type = 10848 id = 234  } 
       name     = "165-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 235  } 
       name     = "260-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  236 } 
     name     = "48-ya Armiya" 
     location = 598 
     Division = 
     {  id       = {  type = 10848 id = 237  } 
       name     = "17-ya Gor'kovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 238  } 
       name     = "73-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 239  } 
       name     = "96-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 240  } 
       name     = "102-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 241  } 
       name     = "137-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 242  } 
       name     = "170-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 243  } 
       name     = "194-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 244  } 
       name     = "217-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 245  } 
       name     = "399-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  246 } 
     name     = "65-ya Armiya" 
     location = 601 
     Division = 
     {  id       = {  type = 10848 id = 247  } 
       name     = "15-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 248  } 
       name     = "69-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 249  } 
       name     = "193-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 250  } 
       name     = "354-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 251  } 
       name     = "356-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 252  } 
       name     = "37-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 253  } 
       name     = "44-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 254  } 
       name     = "75-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  255 } 
     name     = "61-ya Armiya" 
     location = 595 
     Division = 
     {  id       = {  type = 10848 id = 256  } 
       name     = "23-ya Har'kovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 257  } 
       name     = "55-ya Kurskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 258  } 
       name     = "212-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 259  } 
       name     = "397-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 260  } 
       name     = "415-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 261  } 
       name     = "12-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  262 } 
     name     = "69-ya Armiya" 
     location = 245 
     Division = 
     {  id       = {  type = 10848 id = 263  } 
       name     = "4-ya Smolenskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 264  } 
       name     = "41-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 265  } 
       name     = "117-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 266  } 
       name     = "247-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 267  } 
       name     = "274-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 268  } 
       name     = "312-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 269  } 
       name     = "370-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 270  } 
       name     = "77-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  271 } 
     name     = "70-ya Armiya" 
     location = 598 
     Division = 
     {  id       = {  type = 10848 id = 272  } 
       name     = "1-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 273  } 
       name     = "38-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  274 } 
     name     = "114-i Strelkovyi Korpus" 
     location = 611 
     Division = 
     {  id       = {  type = 10848 id = 275  } 
       name     = "160-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 276  } 
       name     = "76-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  277 } 
     name     = "2-ya Tankovaya Armiya" 
     location = 595 
     Division = 
     {  id       = {  type = 10848 id = 278  } 
       name     = "3-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 279  } 
       name     = "16-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  280 } 
     name     = "2-i Belorusskyi Front" 
     location = 586 
     Division = 
     {  id       = {  type = 10848 id = 281  } 
       name     = "2-i Belorusskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 282  } 
       name     = "343-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  283 } 
     name     = "33-ya Armiya" 
     location = 600 
     Division = 
     {  id       = {  type = 10848 id = 284  } 
       name     = "49-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 285  } 
       name     = "70-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 286  } 
       name     = "157-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 287  } 
       name     = "222-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 288  } 
       name     = "344-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  289 } 
     name     = "49-ya Armiya" 
     location = 600 
     Division = 
     {  id       = {  type = 10848 id = 290  } 
       name     = "32-ya Saratovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 291  } 
       name     = "42-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 292  } 
       name     = "64-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 293  } 
       name     = "95-ya Moldavskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 294  } 
       name     = "153-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 295  } 
       name     = "199-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 296  } 
       name     = "290-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 297  } 
       name     = "369-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  298 } 
     name     = "50-ya Armiya" 
     location = 600 
     Division = 
     {  id       = {  type = 10848 id = 299  } 
       name     = "110-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 300  } 
       name     = "139-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 301  } 
       name     = "238-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 302  } 
       name     = "307-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 303  } 
       name     = "324-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 304  } 
       name     = "330-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 305  } 
       name     = "362-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 306  } 
       name     = "380-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 307  } 
       name     = "385-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  308 } 
     name     = "3-i Belorusskyi Front" 
     location = 575 
     Division = 
     {  id       = {  type = 10848 id = 309  } 
       name     = "3-i Belorusskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 310  } 
       name     = "5-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 311  } 
       name     = "6-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 312  } 
       name     = "32-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  313 } 
     name     = "5-ya Armiya" 
     location = 589 
     Division = 
     {  id       = {  type = 10848 id = 314  } 
       name     = "63-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 315  } 
       name     = "97-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 316  } 
       name     = "144-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 317  } 
       name     = "159-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 318  } 
       name     = "184-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 319  } 
       name     = "215-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 320  } 
       name     = "277-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 321  } 
       name     = "338-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 322  } 
       name     = "371-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  323 } 
     name     = "11-ya Armiya" 
     location = 589 
     Division = 
     {  id       = {  type = 10848 id = 324  } 
       name     = "1-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 325  } 
       name     = "5-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 326  } 
       name     = "11-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 327  } 
       name     = "16-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 328  } 
       name     = "18-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 329  } 
       name     = "26-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 330  } 
       name     = "31-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 331  } 
       name     = "83-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 332  } 
       name     = "84-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 333  } 
       name     = "2-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  334 } 
     name     = "39-ya Armiya" 
     location = 589 
     Division = 
     {  id       = {  type = 10848 id = 335  } 
       name     = "17-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 336  } 
       name     = "19-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 337  } 
       name     = "91-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 338  } 
       name     = "158-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 339  } 
       name     = "164-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 340  } 
       name     = "251-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 341  } 
       name     = "262-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  342 } 
     name     = "31-ya Armiya" 
     location = 600 
     Division = 
     {  id       = {  type = 10848 id = 343  } 
       name     = "62-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 344  } 
       name     = "88-ya Turkestanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 345  } 
       name     = "173-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 346  } 
       name     = "174-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 347  } 
       name     = "192-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 348  } 
       name     = "220-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 349  } 
       name     = "331-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 350  } 
       name     = "352-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  351 } 
     name     = "5-ya Gvardyeiskaya Tankovaya Armiya" 
     location = 240 
     Division = 
     {  id       = {  type = 10848 id = 352  } 
       name     = "29-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 353  } 
       name     = "31-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  354 } 
     name     = "1-i Ukrainskyi Front" 
     location = 609 
     Division = 
     {  id       = {  type = 10848 id = 355  } 
       name     = "1-i Ukrainskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  356 } 
     name     = "1-i Gvardyeiskaya Kavaleriiskaya Korpus" 
     location = 249 
     Division = 
     {  id       = {  type = 10848 id = 357  } 
       name     = "1-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 358  } 
       name     = "2-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 359  } 
       name     = "7-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  360 } 
     name     = "6-i Gvardyeiskaya Kavaleriiskaya Korpus" 
     location = 249 
     Division = 
     {  id       = {  type = 10848 id = 361  } 
       name     = "8-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 362  } 
       name     = "13-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  363 } 
     name     = "3-ya Gvardyeiskaya Armiya" 
     location = 244 
     Division = 
     {  id       = {  type = 10848 id = 364  } 
       name     = "58-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 365  } 
       name     = "81-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 366  } 
       name     = "106-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 367  } 
       name     = "136-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 368  } 
       name     = "149-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 369  } 
       name     = "181-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 370  } 
       name     = "197-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 371  } 
       name     = "218-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 372  } 
       name     = "253-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 373  } 
       name     = "273-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 374  } 
       name     = "329-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 375  } 
       name     = "389-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  376 } 
     name     = "13-ya Armiya" 
     location = 245 
     Division = 
     {  id       = {  type = 10848 id = 377  } 
       name     = "25-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 378  } 
       name     = "71-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 379  } 
       name     = "112-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 380  } 
       name     = "172-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 381  } 
       name     = "287-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 382  } 
       name     = "350-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 383  } 
       name     = "6-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 384  } 
       name     = "117-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 385  } 
       name     = "121-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  386 } 
     name     = "1-ya Gvardyeiskaya Armiya" 
     location = 240 
     Division = 
     {  id       = {  type = 10848 id = 387  } 
       name     = "151-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 388  } 
       name     = "161-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 389  } 
       name     = "183-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 390  } 
       name     = "237-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 391  } 
       name     = "316-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 392  } 
       name     = "395-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  393 } 
     name     = "30-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 245 
     Division = 
     {  id       = {  type = 10848 id = 394  } 
       name     = "30-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 395  } 
       name     = "141-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 396  } 
       name     = "129-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  397 } 
     name     = "47-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 240 
     Division = 
     {  id       = {  type = 10848 id = 398  } 
       name     = "280-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 399  } 
       name     = "309-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  400 } 
     name     = "74-i Strelkovyi Korpus" 
     location = 249 
     Division = 
     {  id       = {  type = 10848 id = 401  } 
       name     = "147-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 402  } 
       name     = "155-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  403 } 
     name     = "107-i Strelkovyi Korpus" 
     location = 249 
     Division = 
     {  id       = {  type = 10848 id = 404  } 
       name     = "167-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 405  } 
       name     = "304-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 406  } 
       name     = "4-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  407 } 
     name     = "18-ya Armiya" 
     location = 303 
     Division = 
     {  id       = {  type = 10848 id = 408  } 
       name     = "8-ya Minskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 409  } 
       name     = "24-ya Samaro-Ul'yanovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 410  } 
       name     = "138-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 411  } 
       name     = "226-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 412  } 
       name     = "271-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 413  } 
       name     = "317-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 414  } 
       name     = "351-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 415  } 
       name     = "66-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  416 } 
     name     = "38-ya Armiya" 
     location = 598 
     Division = 
     {  id       = {  type = 10848 id = 417  } 
       name     = "121-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 418  } 
       name     = "211-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 419  } 
       name     = "241-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 420  } 
       name     = "305-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 421  } 
       name     = "70-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  422 } 
     name     = "60-ya Armiya" 
     location = 611 
     Division = 
     {  id       = {  type = 10848 id = 423  } 
       name     = "148-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 424  } 
       name     = "322-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 425  } 
       name     = "336-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  426 } 
     name     = "23-i Strelkovyi Korpus" 
     location = 245 
     Division = 
     {  id       = {  type = 10848 id = 427  } 
       name     = "99-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 428  } 
       name     = "359-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 429  } 
       name     = "68-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  430 } 
     name     = "28-i Strelkovyi Korpus" 
     location = 245 
     Division = 
     {  id       = {  type = 10848 id = 431  } 
       name     = "107-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 432  } 
       name     = "140-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 433  } 
       name     = "246-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  434 } 
     name     = "106-i Strelkovyi Korpus" 
     location = 595 
     Division = 
     {  id       = {  type = 10848 id = 435  } 
       name     = "100-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 436  } 
       name     = "302-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 437  } 
       name     = "340-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  438 } 
     name     = "1-ya Gvardyeiskaya Tankovaya Armiya" 
     location = 616 
     Division = 
     {  id       = {  type = 10848 id = 439  } 
       name     = "8-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 440  } 
       name     = "11-i Gvardyeiskaya Tankovaya Korpus" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  441 } 
     name     = "3-ya Gvardyeiskaya Tankovaya Armiya" 
     location = 616 
     Division = 
     {  id       = {  type = 10848 id = 442  } 
       name     = "9-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 443  } 
       name     = "6-i Gvardyeiskaya Tankovaya Korpus" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 444  } 
       name     = "7-i Gvardyeiskaya Tankovaya Korpus" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  445 } 
     name     = "4-ya Tankovaya Armiya" 
     location = 300 
     Division = 
     {  id       = {  type = 10848 id = 446  } 
       name     = "6-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 447  } 
       name     = "10-i Gvardyeiskaya Tankovaya Korpus" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  448 } 
     name     = "2-i Ukrainskyi Front" 
     location = 611 
     Division = 
     {  id       = {  type = 10848 id = 449  } 
       name     = "2-i Ukrainskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 450  } 
       name     = "7-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 451  } 
       name     = "18-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 452  } 
       name     = "23-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  453 } 
     name     = "27-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 300 
     Division = 
     {  id       = {  type = 10848 id = 454  } 
       name     = "214-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 455  } 
       name     = "297-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 456  } 
       name     = "409-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  457 } 
     name     = "57-i Gvardyeiskaya Strelkovyi Korpus" 
     location = 300 
     Division = 
     {  id       = {  type = 10848 id = 458  } 
       name     = "203-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 459  } 
       name     = "228-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 460  } 
       name     = "243-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  461 } 
     name     = "5-i Kavaleriiskaya Korpus" 
     location = 302 
     Division = 
     {  id       = {  type = 10848 id = 462  } 
       name     = "11-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 463  } 
       name     = "12-ya Gvardyeiskaya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 464  } 
       name     = "63-ya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  465 } 
     name     = "4-ya Gvardyeiskaya Armiya" 
     location = 303 
     Division = 
     {  id       = {  type = 10848 id = 466  } 
       name     = "31-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 467  } 
       name     = "84-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 468  } 
       name     = "252-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 469  } 
       name     = "303-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 470  } 
       name     = "41-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 471  } 
       name     = "62-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 472  } 
       name     = "69-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 473  } 
       name     = "80-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  474 } 
     name     = "7-ya Gvardyeiskaya Armiya" 
     location = 621 
     Division = 
     {  id       = {  type = 10848 id = 475  } 
       name     = "6-ya Orlovskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 476  } 
       name     = "53-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 477  } 
       name     = "36-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 478  } 
       name     = "72-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 479  } 
       name     = "81-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  480 } 
     name     = "27-ya Armiya" 
     location = 621 
     Division = 
     {  id       = {  type = 10848 id = 481  } 
       name     = "78-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 482  } 
       name     = "180-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 483  } 
       name     = "202-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 484  } 
       name     = "206-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 485  } 
       name     = "337-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 486  } 
       name     = "93-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  487 } 
     name     = "40-ya Armiya" 
     location = 303 
     Division = 
     {  id       = {  type = 10848 id = 488  } 
       name     = "38-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 489  } 
       name     = "74-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 490  } 
       name     = "133-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 491  } 
       name     = "163-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 492  } 
       name     = "232-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 493  } 
       name     = "240-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 494  } 
       name     = "42-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  495 } 
     name     = "52-ya Armiya" 
     location = 238 
     Division = 
     {  id       = {  type = 10848 id = 496  } 
       name     = "50-ya Tamanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 497  } 
       name     = "111-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 498  } 
       name     = "116-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 499  } 
       name     = "163-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 500  } 
       name     = "213-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 501  } 
       name     = "254-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 502  } 
       name     = "294-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 503  } 
       name     = "373-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  504 } 
     name     = "53-ya Armiya" 
     location = 240 
     Division = 
     {  id       = {  type = 10848 id = 505  } 
       name     = "89-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 506  } 
       name     = "94-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 507  } 
       name     = "233-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 508  } 
       name     = "299-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 509  } 
       name     = "375-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 510  } 
       name     = "25-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  511 } 
     name     = "6-ya Tankovaya Armiya" 
     location = 238 
     Division = 
     {  id       = {  type = 10848 id = 512  } 
       name     = "5-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 513  } 
       name     = "5-i Gvardyeiskaya Tankovaya Korpus" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  514 } 
     name     = "3-i Ukrainskyi Front" 
     location = 625 
     Division = 
     {  id       = {  type = 10848 id = 515  } 
       name     = "3-i Ukrainskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 516  } 
       name     = "4-ya Motostrelkovaya Diviziya" 
       strength = 80 
       type     = motorized 
	   model    = 2
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 517  } 
       name     = "4-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 518  } 
       name     = "34-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 519  } 
       name     = "40-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  520 } 
     name     = "5-ya Udarnaya Armiya" 
     location = 621 
     Division = 
     {  id       = {  type = 10848 id = 521  } 
       name     = "248-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 522  } 
       name     = "266-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 523  } 
       name     = "49-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 524  } 
       name     = "60-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 525  } 
       name     = "86-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 526  } 
       name     = "109-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 527  } 
       name     = "295-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 528  } 
       name     = "416-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  529 } 
     name     = "37-ya Armiya" 
     location = 626 
     Division = 
     {  id       = {  type = 10848 id = 530  } 
       name     = "188-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 531  } 
       name     = "195-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 532  } 
       name     = "244-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 533  } 
       name     = "333-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 534  } 
       name     = "20-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 535  } 
       name     = "28-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 536  } 
       name     = "61-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 537  } 
       name     = "92-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  538 } 
     name     = "46-ya Armiya" 
     location = 626 
     Division = 
     {  id       = {  type = 10848 id = 539  } 
       name     = "236-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 540  } 
       name     = "259-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 541  } 
       name     = "320-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 542  } 
       name     = "353-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 543  } 
       name     = "394-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 544  } 
       name     = "59-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 545  } 
       name     = "108-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  546 } 
     name     = "57-ya Armiya" 
     location = 626 
     Division = 
     {  id       = {  type = 10848 id = 547  } 
       name     = "19-ya Voronezhskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 548  } 
       name     = "52-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 549  } 
       name     = "93-ya Vostochno-Sibirskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 550  } 
       name     = "113-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 551  } 
       name     = "223-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 552  } 
       name     = "230-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 553  } 
       name     = "301-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 554  } 
       name     = "73-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  555 } 
     name     = "4-i Ukrainskyi Front" 
     location = 614 
     Division = 
     {  id       = {  type = 10848 id = 556  } 
       name     = "4-i Ukrainskyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
     Division = 
     {  id       = {  type = 10848 id = 557  } 
       name     = "19-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  558 } 
     name     = "2-ya Gvardyeiskaya Armiya" 
     location = 619 
     Division = 
     {  id       = {  type = 10848 id = 559  } 
       name     = "87-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 560  } 
       name     = "116-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 561  } 
       name     = "126-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 562  } 
       name     = "315-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 563  } 
       name     = "347-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 564  } 
       name     = "387-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 565  } 
       name     = "3-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 566  } 
       name     = "24-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 567  } 
       name     = "87-ya Gvardyeiskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  568 } 
     name     = "51-ya Gvardyeiskaya Armiya" 
     location = 620 
     Division = 
     {  id       = {  type = 10848 id = 569  } 
       name     = "77-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 570  } 
       name     = "91-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 571  } 
       name     = "216-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 572  } 
       name     = "257-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 573  } 
       name     = "267-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 574  } 
       name     = "279-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 575  } 
       name     = "417-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  576 } 
     name     = "Zakavkazskyi Front" 
     location = 644 
     Division = 
     {  id       = {  type = 10848 id = 577  } 
       name     = "Zakavkazskyi Front" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   experience = 40
	   }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  579 } 
     name     = "STAVKA Rezerv" 
     location = 682 
     Division = 
     {  id       = {  type = 10848 id = 580  } 
       name     = "21-ya Permskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 581  } 
       name     = "25-ya Chapaevskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 582  } 
       name     = "27-ya Omskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 583  } 
       name     = "45-ya Volynskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 584  } 
       name     = "69-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 585  } 
       name     = "79-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 586  } 
       name     = "83-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 587  } 
       name     = "101-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 588  } 
       name     = "103-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
     Division = 
     {  id       = {  type = 10848 id = 589  } 
       name     = "123-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  590 } 
     name     = "Dalnevostochnyi Front" 
     location = 1191
     Division = 
     {  id       = {  type = 10848 id = 591  } 
       name     = "Dalnevostochnyi Front" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 2
	   experience = 25
	   }
     Division = 
     {  id       = {  type = 10848 id = 592  } 
       name     = "79-ya Gornostrelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 593  } 
       name     = "100-ya Gornostrelkovaya Diviziya" 
       strength = 80 
       type     = bergsjaeger 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 594  } 
       name     = "101-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 595  } 
       name     = "214-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  596 } 
     name     = "1-ya Krasnaya Znameni Armiya" 
     location = 1185
     Division = 
     {  id       = {  type = 10848 id = 597  } 
       name     = "22-ya Krasnodarskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 598  } 
       name     = "59-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 599  } 
       name     = "66-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 600  } 
       name     = "105-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 601  } 
       name     = "187-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 602  } 
       name     = "231-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 603  } 
       name     = "75-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 604  } 
       name     = "204-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 605  } 
       name     = "209-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  606 } 
     name     = "2-ya Krasnaya Znameni Armiya" 
     location = 1196
     Division = 
     {  id       = {  type = 10848 id = 607  } 
       name     = "3-ya Tihookeanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 608  } 
       name     = "12-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 609  } 
       name     = "259-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 610  } 
       name     = "73-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  611 } 
     name     = "13-ya Diviziya Morskoi Pekhoty" 
     location = 1196
     Division = 
     {  id       = {  type = 10848 id = 612  } 
       name     = "13-ya Diviziya Morskoi Pekhoty" 
       strength = 80 
       type     = marine 
	   model    = 5
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  613 } 
     name     = "15-ya Armiya" 
     location = 1194
     Division = 
     {  id       = {  type = 10848 id = 614  } 
       name     = "37-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 615  } 
       name     = "39-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 616  } 
       name     = "255-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 617  } 
       name     = "260-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 618  } 
       name     = "165-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 619  } 
       name     = "203-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  620 } 
     name     = "16-ya Armiya" 
     location = 1190
     Division = 
     {  id       = {  type = 10848 id = 621  } 
       name     = "53-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  623 } 
     name     = "35-ya Armiya" 
     location = 1194
     Division = 
     {  id       = {  type = 10848 id = 624  } 
       name     = "35-ya Sibirskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 625  } 
       name     = "341-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 626  } 
       name     = "125-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  627 } 
     name     = "18-i Kavaleriiskaya Korpus" 
     location = 1174 
     Division = 
     {  id       = {  type = 10848 id = 628  } 
       name     = "67-ya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 629  } 
       name     = "84-ya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry 
	   model    = 12
	   experience = 25
      }
   dig_in = 20.000
 }
   landunit = 
   {  id       = {  type = 10848 id =  630 } 
     name     = "25-ya Armiya" 
     location = 1175
     Division = 
     {  id       = {  type = 10848 id = 631  } 
       name     = "40-ya Bogucharskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 632  } 
       name     = "190-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 633  } 
       name     = "258-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 634  } 
       name     = "72-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 635  } 
       name     = "218-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 2
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  636 } 
     name     = "Tynda Garnizon" 
     location = 1176
     Division = 
     {  id       = {  type = 10848 id = 637  } 
       name     = "86-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 638  } 
       name     = "112-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 639  } 
       name     = "124-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 640  } 
       name     = "144-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  641 } 
     name     = "39-i Strelkovyi Korpus" 
     location = 1170
     Division = 
     {  id       = {  type = 10848 id = 642  } 
       name     = "156-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 643  } 
       name     = "249-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 644  } 
       name     = "261-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  645 } 
     name     = "Tahe Garnizon" 
     location = 1170
     Division = 
     {  id       = {  type = 10848 id = 646  } 
       name     = "54-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 647  } 
       name     = "67-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 648  } 
       name     = "80-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  649 } 
     name     = "Borzya Garnizon" 
     location = 1168
     Division = 
     {  id       = {  type = 10848 id = 650  } 
       name     = "10-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 651  } 
       name     = "18-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 652  } 
       name     = "38-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  653 } 
     name     = "Stalingradskyi Garnizon" 
     location = 663
     Division = 
     {  id       = {  type = 10848 id = 654  } 
       name     = "13-ya Dagestanskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 655  } 
       name     = "34-ya Srednevolzhskaya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 656  } 
       name     = "99-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 657  } 
       name     = "106-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 658  } 
       name     = "117-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 659  } 
       name     = "133-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 660  } 
       name     = "135-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 661  } 
       name     = "146-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 662  } 
       name     = "148-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  663 } 
     name     = "Uralskyi Voennyi Okrug" 
     location = 1151
     Division = 
     {  id       = {  type = 10848 id = 664  } 
       name     = "Uralskyi Voennyi Okrug" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 2
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  665 } 
     name     = "Sibirskyi Voennyi Okrug" 
     location = 1142
     Division = 
     {  id       = {  type = 10848 id = 666  } 
       name     = "Sibirskyi Voennyi Okrug" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 2
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  667 } 
     name     = "75-ya Strelkovaya Diviziya" 
     location = 1080
     Division = 
     {  id       = {  type = 10848 id = 668  } 
       name     = "75-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 40
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  669 } 
     name     = "Arhangelskyi Voennyi Okrug" 
     location = 542
     Division = 
     {  id       = {  type = 10848 id = 670  } 
       name     = "Arhangelskyi Voennyi Okrug" 
       strength = 70 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  671 } 
     name     = "Privolzhskyi Voennyi Okrug" 
     location = 663
     Division = 
     {  id       = {  type = 10848 id = 672  } 
       name     = "Privolzhskyi Voennyi Okrug" 
       strength = 70 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  673 } 
     name     = "Zabaikalskyi Front" 
     location = 1162
     Division = 
     {  id       = {  type = 10848 id = 674  } 
       name     = "Zabaikalskyi Front" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 2
	   experience = 25
	   }
     Division = 
     {  id       = {  type = 10848 id = 675  } 
       name     = "103-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 676  } 
       name     = "275-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 677  } 
       name     = "292-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 678  } 
       name     = "293-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
      Division = 
     {  id       = {  type = 10848 id = 679  } 
       name     = "59-ya Kavaleriiskaya Diviziya" 
       strength = 80 
       type     = cavalry
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 680  } 
       name     = "111-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 1
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  681 } 
     name     = "17-ya Armiya" 
     location = 1168
     Division = 
     {  id       = {  type = 10848 id = 682  } 
       name     = "36-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 683  } 
       name     = "57-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 684  } 
       name     = "210-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 685  } 
       name     = "284-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 686  } 
       name     = "61-ya Tankovaya Diviziya" 
       strength = 80 
       type     = armor 
	   model    = 1
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  687 } 
     name     = "36-ya Armiya" 
     location = 1169
     Division = 
     {  id       = {  type = 10848 id = 688  } 
       name     = "94-ya Strelkovaya Diviziya" 
       strength = 90 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 689  } 
       name     = "209-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 690  } 
       name     = "278-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 691  } 
       name     = "298-ya Strelkovaya Diviziya" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  692 } 
     name     = "Otdelnye Primorskoyi Armiya" 
     location = 641
     Division = 
     {  id       = {  type = 10848 id = 693  } 
       name     = "Otdelnye Primorskoyi Armiya" 
       strength = 60 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 0
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  694 } 
     name     = "1 Armia Wojska Polskiego" 
     location = 601
     Division = 
     {  id       = {  type = 10848 id = 695  } 
       name     = "1 Dywizja Piechoty" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 696  } 
       name     = "2 Warszawska Dywizja Piechoty" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 697  } 
       name     = "3 Dywizja Piechoty" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
     Division = 
     {  id       = {  type = 10848 id = 698  } 
       name     = "4 Dywizja Piechoty" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  699 } 
     name     = "2 Korpus Wojska Polskiego" 
     location = 240
     Division = 
     {  id       = {  type = 10848 id = 1400  } 
       name     = "5 Lwowska Dywizja Piechoty" 
       strength = 80 
       type     = infantry 
	   model    = 11
	   experience = 25
      }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1402 } 
     name     = "Odesskyi Osobyi Voennyi Okrug" 
     location = 628
     Division = 
     {  id       = {  type = 10848 id = 1403  } 
       name     = "Odesskyi Osobyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1404 } 
     name     = "Kievskyi Voennyi Okrug" 
     location = 617
     Division = 
     {  id       = {  type = 10848 id = 1405  } 
       name     = "Kievskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   }
 }
   landunit = 
   {  id       = {  type = 10848 id =  1406 } 
     name     = "Belorusskyi Voennyi Okrug" 
     location = 589
     Division = 
     {  id       = {  type = 10848 id = 1407  } 
       name     = "Belorusskyi Voennyi Okrug" 
       strength = 80 
       type     = HQ
	   model    = 4
	   extra    = anti_air
	   brigade_model = 4
	   }
 }

# Air OOB
#MVO
airunit = { 
	id = { type = 10848 id = 7000 } 
	name = "4-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7001 } 
		name = "202.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7002 } 
		name = "219.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7003 } 
	name = "5-i Napadenie Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7004 } 
		name = "4.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7005 } 
		name = "264.LSHABR" 
		strength = 100 
		type = cas 
		model = 3 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7006 } 
	name = "8-i Napadenie Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7007 } 
		name = "224.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7008 } 
		name = "226.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7009 } 
	name = "5-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7010 } 
		name = "5.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7011 } 
		name = "256.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7012 } 
	name = "10-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7013 } 
		name = "10.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7014 } 
		name = "235.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7015 } 
	name = "Groupe Expéditionnaire Française" 
	location = 617 # Kiev 
	base = 617 # Kiev 
	control = FRA

	division = { 
	id = { type = 10848 id = 7016 } 
		name = "Groupe de Chasse 'Normandie'" 
		strength = 100 
		type = multi_role 
		model = 7 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7017 } 
	name = "2-ya Vozdushnaya Armiya" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7018 } 
		name = "208.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7019 } 
		name = "326.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7020 } 
	name = "2-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7021 } 
		name = "1.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7022 } 
		name = "8.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7023 } 
		name = "218.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7024 } 
	name = "1-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7025 } 
		name = "8.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7026 } 
		name = "9.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7027 } 
		name = "12.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7028 } 
		name = "312.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7029 } 
	name = "2-i Napadenie Aviatsionnyi Korpus" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7030 } 
		name = "7.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7031 } 
		name = "231.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7032 } 
	name = "4-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7033 } 
		name = "294.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7034 } 
		name = "304.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7035 } 
	name = "7-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 626 # Odessa 
	base = 626 # Odessa 

	division = { 
	id = { type = 10848 id = 7036 } 
		name = "9.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7037 } 
		name = "205.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7038 } 
		name = "304.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7039 } 
	name = "1-i Smeshannyi Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7040 } 
		name = "5.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7041 } 
		name = "6.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7042 } 
		name = "11.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7043 } 
	name = "9-i Smeshannyi Aviatsionnyi Korpus" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7044 } 
		name = "305.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7045 } 
		name = "306.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7046 } 
		name = "295.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7047 } 
	name = "17-ya Vozdushnaya Armiya" 
	location = 617 # Kiev 
	base = 617 # Kiev 

	division = { 
	id = { type = 10848 id = 7131 } 
		name = "236.LBABR" 
		strength = 80 
		type = multi_role 
		model = 6 
			}
	division = { 
	id = { type = 10848 id = 7048 } 
		name = "238.LBABR" 
		strength = 80 
		type = multi_role 
		model = 6 
			}
	division = { 
	id = { type = 10848 id = 7050 } 
		name = "262.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7051 } 
	name = "11-i Smeshannyi Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7052 } 
		name = "225.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7053 } 
		name = "284.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7054 } 
		name = "313.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7055 } 
	name = "14-ya Vozdushnaya Armiya" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7056 } 
		name = "281.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7057 } 
		name = "269.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7058 } 
	name = "13-ya Vozdushnaya Armiya" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7059 } 
		name = "276.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7060 } 
		name = "277.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7061 } 
		name = "275.LBABR" 
		strength = 80 
		type = multi_role 
		model = 6 
			}
	}
airunit = { 
	id = { type = 10848 id = 7062 } 
	name = "12-ya Vozdushnaya Armiya" 
	location = 553 # Leningrad 
	base = 553 # Leningrad 

	division = { 
	id = { type = 10848 id = 7063 } 
		name = "30.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7064 } 
		name = "247.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7065 } 
		name = "248.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7066 } 
		name = "316.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7067 } 
		name = "246.LBABR" 
		strength = 80 
		type = multi_role 
		model = 6 
			}
	}
airunit = { 
	id = { type = 10848 id = 7068 } 
	name = "11-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7069 } 
		name = "5.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7070 } 
		name = "190.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7071 } 
	name = "1-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7072 } 
		name = "4.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7073 } 
		name = "5.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7074 } 
	name = "3-i Napadenie Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7075 } 
		name = "307.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7076 } 
		name = "308.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7077 } 
	name = "3-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7078 } 
		name = "113.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7079 } 
		name = "311.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7080 } 
		name = "240.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7081 } 
		name = "303.LBABR" 
		strength = 80 
		type = multi_role 
		model = 6 
			}
	division = { 
	id = { type = 10848 id = 7082 } 
		name = "213.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7083 } 
	name = "1-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7084 } 
		name = "3.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7085 } 
		name = "4.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7086 } 
	name = "3-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7087 } 
		name = "265.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7088 } 
		name = "278.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7089 } 
	name = "1-ya Vozdushnaya Armiya" 
	location = 589 # Smolensk 
	base = 589 # Smolensk 

	division = { 
	id = { type = 10848 id = 7090 } 
		name = "6.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7091 } 
		name = "1.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7092 } 
		name = "240.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7093 } 
		name = "334.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7094 } 
		name = "311.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7095 } 
		name = "303.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7096 } 
	name = "4-ya Vozdushnaya Armiya" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7097 } 
		name = "230.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7098 } 
		name = "229.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7099 } 
		name = "325.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7100 } 
		name = "233.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7101 } 
		name = "309.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7102 } 
	name = "6-ya Vozdushnaya Armiya" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7103 } 
		name = "3.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7104 } 
		name = "336.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7105 } 
		name = "242.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7106 } 
	name = "3-i Bombardirovochnogo Aviatsionnyi Korpus" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7107 } 
		name = "241.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7108 } 
		name = "301.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7109 } 
	name = "6-i Smeshannyi Aviatsionnyi Korpus" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7110 } 
		name = "132.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7111 } 
		name = "221.TBABR" 
		strength = 100 
		type = tactical_bomber 
		model = 6 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7112 } 
	name = "6-i Perekhvatchik Aviatsionnyi Korpus" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7113 } 
		name = "279.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7114 } 
	name = "16-ya Vozdushnaya Armiya" 
	location = 600 # Mogilev 
	base = 600 # Mogilev 

	division = { 
	id = { type = 10848 id = 7115 } 
		name = "2.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7116 } 
		name = "299.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7132 } 
		name = "1.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7117 } 
		name = "234.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7118 } 
		name = "283.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7119 } 
		name = "286.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7120 } 
		name = "271.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}
airunit = { 
	id = { type = 10848 id = 7121 } 
	name = "Dal'nii Vostok Vozdushnogo Komandovaniya" 
	location = 1191 # Vladivostok 
	base = 1191 # Vladivostok 

	division = { 
	id = { type = 10848 id = 7122 } 
		name = "115.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
			}
	division = { 
	id = { type = 10848 id = 7123 } 
		name = "107.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
			}
	division = { 
	id = { type = 10848 id = 7124 } 
		name = "100.IABR" 
		strength = 100 
		type = interceptor 
		model = 9 
			}
	division = { 
	id = { type = 10848 id = 7125 } 
		name = "95.TBABR" 
		strength = 50 
		type = tactical_bomber 
		model = 6 
			}
	}
airunit = { 
	id = { type = 10848 id = 7126 } 
	name = "3-ya Vozdushnaya Armiya" 
	location = 572 # Moscow 
	base = 572 # Moscow 

	division = { 
	id = { type = 10848 id = 7127 } 
		name = "211.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7128 } 
		name = "335.LSHABR" 
		strength = 100 
		type = cas 
		model = 2 
		experience = 25
			}
	division = { 
	id = { type = 10848 id = 7130 } 
		name = "314.TBABR" 
		strength = 100 
		type = strategic_bomber 
		model = 2 
		experience = 25
			}
	}



# Naval OOB

	navalunit = { # Dushenov K.I.
		id = { type = 10848 id = 5400 } 
		name = "Severnaya Voennaya Flotiliya" 
		location = 535 
		base = 535 
		division = { 
			id = { type = 12700 id = 87 } 
			name = "Arkhangelsk" # former HMS Royal Sovereign
			type = battleship 
			model = 3 
			experience = 30 
			extra1 = floatplane
			brigade_model1 = 6
			}   
		division = { 
			id = { type = 10848 id = 5208 } 
			name = "Murmansk" 
			type = light_cruiser 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5401 } 
			name = "1. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 6009 } 
			name = "2. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5402 } 
			name = "1. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6008 } 
			name = "2. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5153 } 
			name = "3. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			} 
		} 	
	navalunit = { # Galler L.M.
		id = { type = 10848 id = 5100 } 
		name = "Krasnoznamenny Baltijsky Flot" 
		location = 553 
		base = 553 
		division = { 
			id = { type = 10848 id = 5101 } 
			name = "Marat" 
			type = battleship 
			model = 2 
				extra = naval_anti_air_l
				brigade_model = 0	
			experience = 25		
			} 
		division = { 
			id = { type = 10848 id = 5102 } 
			name = "Oktyabrskaya Revolutsiya" 
			type = battleship 
			model = 2 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 6000 } 
			name = "Kirov" 
			type = heavy_cruiser
			model = 5 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 8501 } 
			name = "Maxim Gorky" 
			type = heavy_cruiser
			model = 5 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5103 } 
			name = "3. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5104 } 
			name = "4. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5206 } 
			name = "5. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5500 } 
			name = "10. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5501 } 
			name = "11. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5154 } 
			name = "4. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6003 } 
			name = "5. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5161 } 
			name = "6. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5162 } 
			name = "7. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5163 } 
			name = "8. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5171 } 
			name = "9. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5301 } 
			name = "10. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			} 
		}  						
	navalunit = { # Kozhanov I.K.
		id = { type = 10848 id = 5200 } 
		name = "Chernomorskiy Flot" 
		location = 641 
		base = 641 
		division = { 
			id = { type = 10848 id = 5201 } 
			name = "Parizhskaya Kommuna" 
			type = battleship 
			model = 2 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5202 } 
			name = "Krasnyi Kavkaz" 
			type = heavy_cruiser 
			model = 2 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5203 } 
			name = "Krasnyi Krym" 
			type = light_cruiser 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 8500 } 
			name = "Voroshilov" 
			type = heavy_cruiser
			model = 5 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 8502 } 
			name = "Molotov" 
			type = heavy_cruiser
			model = 5 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5207 } 
			name = "6. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5502 } 
			name = "7. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5503 } 
			name = "12. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5504 } 
			name = "13. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5302 } 
			name = "11. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 6011 } 
			name = "12. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5172 } 
			name = "13. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5173 } 
			name = "14. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6012 } 
			name = "15. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		} 
	navalunit = { # Viktorov M.V.
		id = { type = 10848 id = 5515 } 
		name = "Tikhookeanskiy Flot" 
		location = 1191 
		base = 1191 
		division = { 
			id = { type = 10848 id = 8503 } 
			name = "Kalinin" 
			type = heavy_cruiser 
			model = 5 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 6001 } 
			name = "8. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6015 } 
			name = "9. Divizion Esmintsev" 
			type = destroyer 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6013 } 
			name = "16. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6014 } 
			name = "17. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5551 } 
			name = "18. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5552 } 
			name = "19. Divizion Podlodok" 
			type = submarine 
			model = 2 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 5351 } 
			name = "20. Divizion Podlodok" 
			type = submarine 
			model = 1 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5352 } 
			name = "21. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			} 
		division = { 
			id = { type = 10848 id = 5353 } 
			name = "22. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6006 } 
			name = "23. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6007 } 
			name = "24. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6018 } 
			name = "25. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6019 } 
			name = "26. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}
		division = { 
			id = { type = 10848 id = 6010 } 
			name = "27. Divizion Podlodok" 
			type = submarine 
			model = 3 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6021 } 
			name = "28. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6022 } 
			name = "29. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6023 } 
			name = "30. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6024 } 
			name = "31. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6025 } 
			name = "32. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 6026 } 
			name = "33. Divizion Podlodok" 
			type = submarine 
			model = 4 
			experience = 25
			}  
		division = { 
			id = { type = 10848 id = 5514 } 
			name = "1. Transportnaya Flotiliya" 
			type = transport 
			model = 2 
			experience = 25
			} 
		} 	
	
	# Starting Build Queue 
	division_development = {
		name  = "Kaganovich"
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8504 }
		date  = { year = 1944 month = december day = 6 }
	}
	division_development = {
		name  = "Chapayev"
		type  = heavy_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8505 }
		date  = { year = 1950 month = may day = 16 }
	}
	division_development = {
		name  = "Zheleznyakov"
		type  = heavy_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8506 }
		date  = { year = 1950 month = april day = 19 }
	}
	division_development = {
		name  = "Kuybyshev"
		type  = heavy_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8507 }
		date  = { year = 1950 month = april day = 20 }
	}
	division_development = {
		name  = "Chkalov"
		type  = heavy_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8508 }
		date  = { year = 1950 month = november day = 1 }
	}
	division_development = {
		name  = "Frunze"
		type  = heavy_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		id    = { type = 10848 id = 8509 }
		date  = { year = 1950 month = december day = 15 }
	}

 }	
