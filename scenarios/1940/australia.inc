 
 ############################## 
 # Country definition for AST # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = AST 
	ai = "ast_1940.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	manpower               = 0 
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	capital                = 1707 
    
   # 1st Transport Flotilla# 
   transports             = 60 
   escorts                = 2 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 2 
     free_market       = 8 
     freedom           = 10 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 6 
    } 
   nationalprovinces      = {  1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717  } 
   ownedprovinces         = {  1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682
                             } 
   controlledprovinces    = {  1234 1587 1602 1603 1604 1605 1606 1607 1608 1609 1610 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1724 1725 1726 1727 1682
                             } 
   claimedprovinces    = {	1682 }
   
	# Commonwealth Tech '40 
	# AST 1940 techs 
	# ###################### 
	techapps = { 
	
	# Manufacturing
	5810 5820 5050 5830 5060
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326 5327
	# Oil Refining 
	5190 
	# Medicine
	5600 5610 5620 5630

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Motorized Infantry
	1396
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Naval Infantry
	1560 1570
	# Engineers
	1830 1840 1850 1860
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940
	# Anti-tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Hospital System 
	14000 14010 14020 14030

	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# Armor Division formation
	6900
	# Defensive Focus Grand Battleplan Path (FRA / UK)
	6560 6030 6110 6120

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250
	# Battlecruiser  
	3310 3320 3330
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Submarines
	3610 3620 3630 3640 3650
	# Torpedo & ASW 
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8550 8560 8600 8900 8910 8920 8930 8940 8950 8960	

	# Interceptor
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Multi-role fighter
	4300 4310 4320 4330 4340
	# strategic bomber
	4800 4810 4820
	# Seaplanes
	4740 4750 4760 4770 4780
	# Naval Bombers
	4700 4710

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 
	27460 27470 9010 9140 9040 9050 9090 9100 9110 9120 9190
	} 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = BEL value = 75  } 
     relation = {  tag = BHU value = 200  } 
     relation = {  tag = CAN value = 200  } # was access = yes 
     relation = {  tag = ENG value = 200  } # was access = yes 
     relation = {  tag = FIN value = 65  } 
     relation = {  tag = FRA value = 150  } 
     relation = {  tag = GER value = -200  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = -100  }
     relation = {  tag = JAP value = -25  }
     relation = {  tag = NEP value = 200  } 
     relation = {  tag = NZL value = 200  } # was access = yes 
     relation = {  tag = OMN value = 150  } 
     relation = {  tag = PHI value = 40  } 
     relation = {  tag = SAF value = 200  } # was access = yes 
     relation = {  tag = SAU value = 50  } 
     relation = {  tag = USA value = 125  } 
     relation = {  tag = YEM value = 150  } 
    } 
   SpyInfo                = {  country = "AST" NumberOfSpies = 6  } 
   headofstate            = {  type = 9 id = 225011  } 
   headofgovernment       = {  type = 9 id = 225015  } 
   foreignminister        = {  type = 9 id = 225023  } 
   armamentminister       = {  type = 9 id = 225035  } 
   ministerofsecurity     = {  type = 9 id = 225057  } 
   ministerofintelligence = {  type = 9 id = 225071  } 
   chiefofstaff           = {  type = 9 id = 225081  } 
   chiefofarmy            = {  type = 9 id = 225088  } 
   chiefofnavy            = {  type = 9 id = 225095  } 
   chiefofair             = {  type = 9 id = 225101  }
   dormant_ministers      = {  225001 225002 225003 255022 225004 225061 225005 225007  }
   # ## 1932:  The total Militia was only 28,000 men strong 
   # ## Regular Army had about 1500 men (mostly coastal artillery) 
   # ## This was brought upto 46,000 by 1906 
   # ## The Militia was used in New Guinea against Japan 
   # ######### Australian Army ############## 
   landunit = 
   {  id       = {  type = 30001 id = 1  } 
     name     = "1st Military District" 
     location = 1701 
     Division = 
     {  id       = {  type = 30001 id = 2  } 
       name     = "1st Military District" 
       strength = 20 
       type     = militia 
	   model    = 3
       extra    = artillery 
	   brigade_model = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 3  } 
     name     = "6th Military District" 
     location = 1710 
     Division = 
     {  id       = {  type = 30001 id = 4  } 
       name     = "6th Military District" 
       strength = 20 
       type     = militia 
	   model    = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 5  } 
     name     = "2nd Military District" 
     location = 1707 
     Division = 
     {  id       = {  type = 30001 id = 6  } 
       name     = "1st Australian Infantry Div." 
       strength = 10 
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 30001 id = 195  } 
       name     = "2nd Australian Infantry Div." 
       strength = 10 
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 30001 id = 226  } 
       name     = "1st Australian Cavalry Div." 
       strength = 10 
       type     = cavalry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 7  } 
     name     = "4th Military District" 
     location = 1713 
     Division = 
     {  id       = {  type = 30001 id = 8  } 
       name     = "4th Military District" 
       strength = 20 
       type     = militia 
	   model    = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 9  } 
     name     = "5th Military District" 
     location = 1694 
     Division = 
     {  id       = {  type = 30001 id = 10  } 
       name     = "5th Military District" 
       strength = 20 
       type     = militia 
	   model    = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 11  } 
     name     = "7th Military District" 
     location = 1697 
     Division = 
     {  id       = {  type = 30001 id = 12  } 
       name     = "Darwin Garrison" 
       strength = 20 
       type     = militia 
	   model    = 3
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 13  } 
     name     = "Port Moresby Garrison" 
     location = 1607 
     Division = 
     {  id       = {  type = 30001 id = 14  } 
       name     = "Port Moresby Garrison" 
       strength = 20 
       type     = militia 
	   model    = 1
       extra    = anti_air 
	   brigade_model = 2
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 205  } 
     name     = "2nd Military District" 
     location = 1708 
     Division = 
     {  id       = {  type = 30001 id = 206  } 
       name     = "3rd Australian Infantry Div." 
       strength = 10 
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 30001 id = 2060  } 
       name     = "4th Australian Infantry Div." 
       strength = 10 
       type     = infantry 
	   model    = 8
       extra    = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id       = {  type = 30001 id = 207  } 
       name     = "2nd Australian Cavalry Div." 
       strength = 10 
       type     = cavalry 
       model    = 6
      } 
    } 
   landunit = 
   {  id       = {  type = 30001 id = 2061  } 
     name     = "I Australian Corps" 
     location = 1172 
     Division = 
     {  id       = {  type = 30001 id = 2062  } 
       name     = "6th Australian Infantry Div." 
       strength = 45 
       type     = infantry 
	   model    = 9
       extra    = artillery 
	   brigade_model = 7
      } 
     Division = 
     {  id       = {  type = 30001 id = 2063  } 
       name     = "7th Australian Infantry Div." 
       strength = 45 
       type     = infantry 
	   model    = 9
       extra    = anti_air 
	   brigade_model = 1
      } 
    } 
   # ######### Australian Navy ############## 
	navalunit = { 
		id = { type = 10500 id = 17 } 
		name = "HM Australian Fleet" 
		location = 1707 
		base = 1707 
		division = { 
			id = { type = 10500 id = 18 } 
			name = "HMAS Australia" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 10500 id = 19 } 
			name = "HMAS Canberra" 
			type = heavy_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 10500 id = 20 } 
			name = "HMAS Sydney" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 10500 id = 25 } 
			name = "HMAS Adelaide" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 10500 id = 2500 } 
			name = "HMAS Perth" 
			type = light_cruiser 
			model = 4 
			}
		division = { 
			id = { type = 10500 id = 2501 } 
			name = "HMAS Hobart" 
			type = light_cruiser 
			model = 4 
			}
		} 
	navalunit = { 
		id = { type = 10500 id = 22 } 
		name = "Transport Flotilla" 
		location = 1707 
		base = 1707 
		division = { 
			id = { type = 10500 id = 23 } 
			name = "HMAS Kanimbla Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10500 id = 29 } 
			name = "1st Transport Flotilla" 
			type = transport  model = 1 
			} 
		division = { 
			id = { type = 10500 id = 30 } 
			name = "2nd Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10500 id = 34 } 
			name = "6th Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10500 id = 2290 } 
			name = "1st Destroyer Flotilla" 
			type = destroyer 
			model = 3
			} 
		} 
	navalunit = { 
		id = { type = 10500 id = 24 } 
		name = "HM Australian Reserve Fleet" 
		location = 1707 
		base = 1707 
		division = { 
			id = { type = 10500 id = 31 } 
			name = "3rd Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10500 id = 32 } 
			name = "4th Transport Flotilla" 
			type = transport model = 1 
			} 
		division = { 
			id = { type = 10500 id = 2294 } 
			name = "2nd Destroyer Flotilla" 
			type = destroyer
			model = 3
			} 
		division = { 
			id = { type = 10500 id = 33 } 
			name = "5th Transport Flotilla" 
			type = transport model = 1 
			} 
		} 
   # ################## Australian Air Force ####################### 
   # ## An approximation of the 13 squadron airforce in 1936.### 
   airunit = 
   {  location = 1707 
     base     = 1707 
     id       = {  type = 10500 id = 15  } 
     name     = "No.1 RAAF Tactical Bomber Group" 
     Division = 
     {  id       = {  type = 10500 id = 16  } 
       name     = "No.1 RAAF Tactical Bomber Group" 
       strength = 100 
       type     = tactical_bomber 
       model    = 4
      } 
    } 

   division_development = 
   {  name  = "8th Australian Infantry Div." 
     type  = infantry 
     model = 9
     cost  = 0.1
     id    = {  type = 10500 id = 700  } 
     date  = {  year = 1940 month = july day = 1  } 
    }
   division_development = 
   {  name  = "9th Australian Infantry Div." 
     type  = infantry 
     model = 9
     cost  = 0.1
     id    = {  type = 10500 id = 701  } 
     date  = {  year = 1940 month = october day = 1  } 
    }
  } 
 
