    ##############################
    # Country definition for RSI #
    ##############################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = RSI
       puppet                 = GER
       control                = GER
	   ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
       manpower               = 140
       # Resource Reserves
       energy                 = 1000
       metal                  = 1000
       rare_materials         = 500
       oil                    = 500
       supplies               = 400
       money                  = 10
       belligerence           = 20
       capital                = 407

 
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BUL value = -200 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHI value = 25 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CRO value = 200 }
    relation = { tag = ENG value = -200 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = U01 value = -200 }
    relation = { tag = GER value = 200 }
    relation = { tag = HOL value = -200 }
    relation = { tag = HUN value = 200 }
    relation = { tag = IRQ value = -200 }
    relation = { tag = JAP value = 125 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 65 }
    relation = { tag = ROM value = -200 }
    relation = { tag = SAF value = -200 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SCH value = -25 }
    relation = { tag = SPA value = 50 }
    relation = { tag = TUR value = 1 }
    relation = { tag = YEM value = -200 }
  }
       SpyInfo                = {  country = "RSI" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  407  }
       
       ownedprovinces         = {  393 395 396 398 399 400 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435
                                }
       controlledprovinces    = {  411 393 408 396 398 407 400 395 399  } 
       claimedprovinces       = {  393 395 396 398 399 400 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435
                                }

	# ITA 1944.12 techs
	# ######################
	techapps = {  
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Construction Engineering 
	5800 5080 5090 5100
	# Agriculture 
	5700 5710 5010 5020 5030
	# Computers
	5310 54010 54020 54030 5320
	# Cryptography
	5316 5326 5327 5350 5360
	# Radar
	5410
	# Oil Refining
	5190
	# Atomic Research
	5470 
	# Medicine
	5600 5610 5620 5630 5640
	# Exp. Rocket
	5560
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Cavalry
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396 1400
	# Naval Infantry
	1560 1570 1580 1590
	# Paratroopers
	1670
	# Engineers
	1830 1840 1850 1860 1870
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130

	# Tanks 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	# Armored Car 
	2860 2870 2880 2020 2150 
	# Artillery
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-Tank Artillery
	2400 2410
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470
	# Anti-Air Artillery
	2810 2820 2510 2520

	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560 6030 6120 6110 6130
	# Armored Division Formation
	6900

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 12010
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Battlecruiser  
	3310 3320 3330
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Light carrier 
	12100 12110
	# Carrier
	3510 3520 3530
	# Torpedo & ASW
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphibious Warfare
	82300
	# Logistic Support
	82500
	# Naval Interdiction
	8500 8510 8520 8550
	# Trade Interdiction Submarine
	8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940 8950 8960 8970
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210
	# Carrier
	81650

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 
	# Multirole fighter
	4300 4310 4320 4330 4340 4040
	# Escort fighter
	4050
	# Close Air Support
    4400 4170
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140 4150
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710 4190
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# CAG
	4900 4910 4920
	# Air Transport 
	4290 4250 4260

	# Air Doctrines
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	9040 9050 9060 9070 9090 9100 9110 9120 9130 9140 9190 9200 9210 9220 9230 9240
	}

	inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 1
         political_left    = 3
         freedom           = 2
         free_market       = 7
         professional_army = 8
         defense_lobby     = 7
         interventionism   = 8 
        }
       headofstate            = {  type = 9 id = 750001  }
       headofgovernment       = {  type = 9 id = 750002  }
       foreignminister        = {  type = 9 id = 750003  }
       armamentminister       = {  type = 9 id = 750004  }
       ministerofsecurity     = {  type = 9 id = 750005  }
       ministerofintelligence = {  type = 9 id = 750006  }
       chiefofstaff           = {  type = 9 id = 750007  }
       chiefofarmy            = {  type = 9 id = 750008  }
       chiefofnavy            = {  type = 9 id = 750040  }
       chiefofair             = {  type = 9 id = 750043  }

	# NATIONAL REPUBLICAN ARMY
	landunit = {  
		id       = {  type = 23500 id = 1  }
		location = 400
		name     = "Decima Flottiglia MAS"
		leader = 750087 #Borghese
		division = { 
			id       = {  type = 23500 id = 2  }
			name     = "10a Flottiglia 'Mezzi d'Assalto'"
			type     = marine
			model    = 3
			strength = 100
			extra    = artillery
			brigade_model = 9		
		}
	}
	landunit = {  
		id       = {  type = 23500 id = 3  }
		location = 398
		name     = "Armeegruppe Ligurien"
		leader = 750088 #Guzzoni
		division = { 
			id       = {  type = 23500 id = 4  }
			name     = "2a Divisione 'Littorio'"
			type     = infantry
			model    = 10
			strength = 100
		}
	}
	landunit = {  
		id       = {  type = 23500 id = 5  }
		location = 396
		name     = "Corpo d'armata Lombardia"
		leader = 750029 #Graziani
		division = { 
			id       = {  type = 23500 id = 6  }
			name     = "3a Divisione 'San Marco'"
			type     = infantry
			model    = 10
			strength = 100
		}
		division = {
			id       = {  type = 23500 id = 7  }
			name     = "4a Divisione Alpina 'Monterosa'"
			type     = bergsjaeger
			model    = 10
			strength = 100
		}
	}
	landunit = {
		id       = {  type = 23500 id = 8  }
		location = 408
		name     = "XIV. Armee"
		division = { 
			id       = {  type = 23500 id = 9  }
			name     = "1a Divisione 'Italia'"
			type     = infantry
			model    = 10
			strength = 65
		}
	}
	landunit = {  
		id    = {  type = 23500 id = 14  }
		location = 405 #Udine
		name     = "Reggimento alpini 'Tagliamento'"
		leader = 750053 #Zuliani
		division = {
		id = {  type = 23500 id = 15  }
			name     = "Reggimento alpini 'Tagliamento'"
			type     = bergsjaeger
			model    = 10
			strength = 25
		}
		dig_in = 20.000
	}
	landunit = {  
		id    = {  type = 23500 id = 16  }
		location = 404 #Trieste
		name     = "Guardia Nazionale Repubblicana"
		leader = 750048 #Sommavilla
		division = {
			id = {  type = 23500 id = 17  }
			name     = "Milizia Difesa Territoriale"
			type     = militia
			model    = 5
			strength = 100
			extra    = anti_air
			brigade_model = 3 			
		}
		dig_in = 20.000
	}

        # NATIONAL REPUBLICAN NAVY
	navalunit = { 
		id = { type = 23500 id = 10 } 
		name = "Marina Nazionale Repubblicana" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 11 } 
			name = "Motoscafo Armato Silurante" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 23500 id = 12 } 
			name = "XII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		}

	# NATIONAL REPUBLICAN AIR FORCE
	airunit = {
		location = 407
		base     = 407
		id       = { type = 23500 id = 20 }
		name     = "Aeronautica Nazionale Repubblicana"
		division = { 
			id         = { type = 23500 id = 21 }
			name       = "1a Gruppo Caccia 'Asso di Bastoni'"
			strength   = 60 #in redeployment from Germany
			type       = interceptor
			model      = 10
		}
		division =	{ 
			id         = { type = 23500 id = 22 }
			name       = "2a Gruppo Caccia 'Gigi Tre Osei'"
			strength   = 100
			type       = interceptor
			model      = 10
		}
		division = { 
			id         = { type = 23500 id = 23 }
			name       = "Gruppo Aerosiluranti 'Buscaglia Faggioni'"
			strength   = 10
			type       = naval_bomber
			model      = 2
		}
	}
}
