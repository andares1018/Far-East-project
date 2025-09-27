    ##############################
    # Country definition for ITA #
    ##############################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = ITA
		ai_settings	= { flags = { ITABuildStandard = yes RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes } }
		manpower               = 3500
		# Resource Reserves
		energy                 = 3600
		metal                  = 1800
		rare_materials         = 1000
		oil                    = 3000
		supplies               = 2000
		money                  = 100
		belligerence           = 20
		capital                = 419
		transports             = 130
		escorts                = 35

 
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHI value = 25 }
    relation = { tag = CHL value = 30 }
    relation =
    { tag        = CRO
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = SLO value = 120 }
    relation = { tag = ENG value = -200 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = U01 value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = HOL value = -200 }
    relation =
    { tag        = HUN
      value      = 200
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = IRQ value = -200 }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = MTN
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 65 }
    relation =
    { tag        = ROM
      value      = 150
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = SAF value = -200 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SCH value = -25 }
    relation =
    { tag        = SER
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = TUR value = 1 }
    relation = { tag = FRA value = 50 }
    relation = { tag = YEM value = -200 }
  }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  87 91 94 343 350 371 378 379 390 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }
                              
       ownedprovinces         = { 430  431  425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 378 
                                  379 754 752 750 757 756 762 761 768 760 766 765 771 769 770 773 755 751 774
                                  776 777 758 759 763 775 764 767 772 403 406 394 395 418 426 427 428 433   
	                          402 413 417 435 432 405 404 753 399
                                  359 360 361 362 334 329 349 350 343 367 368 369 371 372 373 374 375 376 380 381 }

       controlledprovinces    = {  430  431  425  422  424  421  420  416  423  415  414  419  410  412  411  393  408  396  398  407  401  400  434  378 
                                  379  754  752  750  757  756  762  761  768  760  766  771  769  770  773  755  751  774
                                  776 777 758 759 763 775 764 767 772
             403 406  394 395 418 426 427 428 433 402 413 417 435 432 405 404 753 399
             359 360 361 362 334 329 349 350 343 367 368 369 371 372 373 374 375 376 380 381 }
		claimedprovinces =  {   740 741 742 744 745 746 747 748 749 #Tunisia
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya
                                359 360 361 362 334 329 #Albania
								349 #Ljubljana
                                367 368 369 371 372 373 374 375 376 380 381 # Greece
							} 

	# ITA 1941 techs
	# ######################
	techapps = {  
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020 5030
	# Computers
	5310 54010 54020 54030 
	# Cryptography
	5316 5326 5327 5350
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
	1560 1570 1580
	# Paratroopers
	1670
	# Engineers
	1830 1840 1850 1860 1870
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990
	
	# Tanks 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	# Armored Car 
	2860 2870 2880 2020 2150 
	# Artillery
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-tank Artillery
	2400 2410
	# Static Anti-Air Artillery  
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery
	2810 2820 2510 2520

	# Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560 6030 6120 6110 
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
	3010 3020 3030 3040 3050 3060 3070
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Light carrier 
	12100 12110
	# Carrier
	3510 3520
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820 3830

	# Naval Doctrines 
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphibious Warfare
	82300
	# Logistic Support
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940 8950 8960
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210
		
	# Interceptor Fighter
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Multirole Fighter
	4300 4310 4320 4330 4340 4040
	# Escort fighter
	4050
	# Close Air support
    4400 4170
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140 4150
	# Strategic bomber
	4800 4810 4820
	# Naval Bomber 
	4700 4710 4190
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# CAG
	4900 4910
	# Air Transport 
	4290 4250 4260

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 27560 27460 27470 9030 9020 9010  
	9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 9190 9130 9210 9220
	}

	inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 2
         political_left    = 3
         freedom           = 3 #former value was 4
         free_market       = 7
         professional_army = 8
         defense_lobby     = 7
         interventionism   = 8 #former value was 6
        }
       headofstate            = {  type = 9 id = 25001  }
       headofgovernment       = {  type = 9 id = 25002  }
       foreignminister        = {  type = 9 id = 25003  }
       armamentminister       = {  type = 9 id = 25047  }
       ministerofsecurity     = {  type = 9 id = 25005  }
       ministerofintelligence = {  type = 9 id = 25086  }
       chiefofstaff           = {  type = 9 id = 25097  }
       chiefofarmy            = {  type = 9 id = 25110  }
       chiefofnavy            = {  type = 9 id = 25117  }
       chiefofair             = {  type = 9 id = 25126  }
       dormant_ministers      = {  25008  }
       dormant_teams          = {  25008 25016  }
       dormant_leaders        = {  25016 25195  }
       # ######################
       # ITA 1941 LAND OOB

       # SUPREME COMMAND
       landunit =
       {  id       = {  type = 23500 id = 1  }
         location = 419
         name     = "Superesercito"
         division =
         { id       = {  type = 23500 id = 2  }
           name     = "Comando Supremo"
           type     = hq
           model    = 2
           strength = 100
           extra    = anti_air
           brigade_model = 2
          }
         division =
         { id       = {  type = 23500 id = 6934  }
           name     = "136a Divisione 'Giovani Fascisti'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6  }
         location = 378
         name     = "Guarnigione di Leros"
         Division =
         {  id       = {  type = 23500 id = 25  }
           name     = "Guarnigione di Leros"
           type     = garrison
           model    = 4
           strength = 30  #the garrison was 5500 soldiers strong
          }
        }
       # ARMY GROUP WEST
       # 4th Army
       landunit =
       {  id       = {  type = 23500 id = 5  }
         location = 396
         name     = "IV Armata"
         division =
         { id       = {  type = 23500 id = 2500  }
           name     = "4a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 11  }
           name     = "7a Divisione 'Lupi di Toscana'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 9  }
           name     = "16a Divisione 'Pistoia'"
           type     = motorized
           model    = 0
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 12  }
         location = 419
         name     = "II Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 13  }
           name     = "4a Divisione 'Livorno'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 17  }
         location = 421
         name     = "III Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 18  }
           name     = "3a Divisione 'Ravenna'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 20  }
         location = 434
         name     = "XV Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 81  }
           name     = "31a Divisione 'Calabria'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 23  }
           name     = "44a Divisione 'Cremona'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
           extra    = medium_armor
           brigade_model = 0
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 24  }
         location = 417
         name     = "IV Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 26  }
           name     = "11a Divisione 'Brennero'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 27  }
           name     = "58a Divisione 'Legnano'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 28  }
           name     = "2a Divisione Alpina 'Tridentina'"
           type     = bergsjaeger
           model    = 9
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 29  }
         location = 398
         name     = "Corpo d'Armata Alpino"
         division =
         { id       = {  type = 23500 id = 30  }
           name     = "1a Divisione Alpina 'Taurinese'"
           type     = bergsjaeger
           model    = 9
           strength = 100
          }
        }
       # ARMY GROUP EAST
       # 2nd Army
       landunit =
       {  id       = {  type = 23500 id = 40  }
         location = 349
         name     = "II Armata"
         division =
         { id       = {  type = 23500 id = 39  }
           name     = "2a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 103  }
           name     = "21a Divisione 'Granatieri di Sardegna'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 49  }
           name     = "57a Divisione 'Lombardia'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 45  }
         location = 350
         name     = "VI Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 46  }
           name     = "12a Divisione 'Sassari'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 100  }
           name     = "20a Divisione 'Friuli'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 4500  }
         location = 359
         name     = "VI Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 37  }
           name     = "26a Divisione 'Assietta'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
           extra    = artillery
           brigade_model = 7
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 42  }
         location = 352
         name     = "XI Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 43  }
           name     = "13a Divisione 'Re'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 44  }
           name     = "14a Divisione 'Isonzo'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 52  }
         location = 329
         name     = "Corpo d'Armata Celere"
         division =
         { id       = {  type = 23500 id = 53  }
           name     = "1a Divisione 'Eugenio di Savoia'"
           type     = cavalry
           model    = 11
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 6
          }
         division =
         { id       = {  type = 23500 id = 54  }
           name     = "2a Divisione 'Emanuele Filiberto'"
           type     = cavalry
           model    = 11
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 6
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 60  }
         location = 419
         name     = "Corpo d'Armata Autotrasportabile"
         division =
         { id       = {  type = 23500 id = 62  }
           name     = "10a Divisione 'Piave'"
           type     = motorized
           model    = 0
           strength = 100
          }
         division =
         { id       = {  type = 23500 id = 90  }
           name     = "133a Divisione 'Littorio'"
           type     = light_armor
           model    = 1
           strength = 60
          }
        }
       # 9th Army
       landunit =
       {  id       = {  type = 23500 id = 50  }
         location = 359
         name     = "IX Armata"
         division =
         { id       = {  type = 23500 id = 1003  }
           name     = "9a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 70  }
           name     = "18a Divisione 'Messina'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 7  }
           name     = "22a Divisione 'Cacciatori delle Alpi'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 67  }
           name     = "32a Divisione 'Marche'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 95  }
           name     = "47a Divisione 'Bari'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 57  }
           name     = "101a Divisione 'Trieste'"
           type     = motorized
           model    = 0
           strength = 100
          }
         division =
         { id       = {  type = 23500 id = 88  }
           name     = "131a Divisione 'Centauro'"
           type     = light_armor
           model    = 1
           strength = 70
           extra    = armored_car
           brigade_model = 3
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 99  }
         location = 362
         name     = "VII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 86  }
           name     = "53a Divisione 'Arezzo'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 66  }
         location = 362
         name     = "XIV Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 68  }
           name     = "38a Divisione 'Puglie'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       # ARMY GROUP SOUTH
       landunit =
       {  id       = {  type = 23500 id = 31  }
         location = 430
         name     = "I Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 38  }
           name     = "6a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 6936  }
           name     = "80a Divisione 'La Spezia'"
           type     = paratrooper
           model    = 0
           strength = 65
          }
         division =
         { id       = {  type = 23500 id = 32  }
           name     = "1a Divisione 'Superga'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 36  }
           name     = "2a Divisione 'Sforzesca'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 76  }
         location = 433
         name     = "XII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 77  }
           name     = "28a Divisione 'Aosta'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 78  }
           name     = "54a Divisione 'Napoli'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 79  }
         location = 410
         name     = "XIII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 80  }
           name     = "30a Divisione 'Sabauda'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 93  }
         location = 376
         name     = "IX Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 94  }
           name     = "29a Divisione 'Piemonte'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 102  }
         location = 334
         name     = "VIII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 33  }
           name     = "24a Divisione 'Pinerolo'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 105  }
         location = 379
         name     = "Comando Truppe delle Isole Italiane dell'Egeo"
         division =
         { id       = {  type = 23500 id = 106  }
           name     = "50a Divisione 'Regina'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       # AFRICAN SUPREME COMMAND
       # 5th Army
       landunit =
       {  id       = {  type = 23500 id = 1110  }
         location = 750
         name     = "V Armata"
         division =
         { id       = {  type = 23500 id = 110  }
           name     = "5a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 111  }
         location = 767
         name     = "X Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 115  }
           name     = "55a Divisione 'Savona'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 112  }
           name     = "60a Divisione 'Sabratha'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 56  }
         location = 771
         name     = "XX Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 58  }
           name     = "102a Divisione 'Trento'"
           type     = motorized
           model    = 0
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 59  }
           name     = "132a Divisione 'Ariete'"
           type     = light_armor
           model    = 1
           strength = 60
           extra    = armored_car
           brigade_model = 3
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 113  }
         location = 768
         name     = "X Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 114  }
           name     = "25a Divisione 'Bologna'"
           type     = motorized
           model    = 0
           strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 116  }
         location = 769
         name     = "XX Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 117  }
           name     = "17a Divisione 'Pavia'"
           type     = motorized
           model    = 0
           strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 690  }
         location = 367
         name     = "VII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 71  }
           name     = "56a Divisione 'Casale'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 34  }
           name     = "59a Divisione 'Cagliari'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 72  }
         location = 362
         name     = "XXVI Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 73  }
           name     = "49a Divisione 'Parma'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       # MONTENEGRO ARMY COMMAND
       landunit =
       {  id       = {  type = 23500 id = 82  }
         location = 332
         name     = "Comando Truppe d'Montenegro"
         division =
         { id       = {  type = 23500 id = 8  }
           name     = "5a Divisione Alpina 'Pusteria'"
           type     = bergsjaeger
           model    = 9
           strength = 70
          }
         division =
         { id       = {  type = 23500 id = 84  }
           name     = "19a Divisione 'Venezia'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 85  }
           name     = "23a Divisione 'Ferrara'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 101  }
           name     = "41a Divisione 'Firenze'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 96  }
           name     = "48a Divisione 'Taro'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       # ITALIAN EXPEDITIONARY CORPS
       landunit =
       {  id       = {  type = 23500 id = 6900  }
         location = 400
         name     = "Corpo di Spedizione Italiano"
         division =
         { id       = {  type = 23500 id = 55  }
           name     = "3a Divisione 'Principe Amedeo'"
           type     = cavalry
           model    = 11
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 6
          }
         division =
         { id       = {  type = 23500 id = 87  }
           name     = "3a Divisione Alpina 'Julia'"
           type     = bergsjaeger
           model    = 9
           strength = 70
          }
         division =
         { id       = {  type = 23500 id = 21  }
           name     = "5a Divisione 'Cosseria'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 61  }
           name     = "9a Divisione 'Pasubio'"
           type     = motorized
           model    = 0
           strength = 100
          }
         division =
         { id       = {  type = 23500 id = 63  }
           name     = "52a Divisione 'Torino'"
           type     = motorized
           model    = 0
           strength = 100
           extra    = armored_car
           brigade_model = 3
          }
        }
       # 11th Army
       landunit =
       {  id       = {  type = 23500 id = 6901  }
         location = 373
         name     = "VIII Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 104  }
           name     = "51a Divisione 'Siena'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
           extra    = artillery
           brigade_model = 5
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6902  }
         location = 375
         name     = "XXV Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 1004  }
           name     = "11a Armata"
           type     = hq
           model    = 2
           strength = 60
          }
         division =
         { id       = {  type = 23500 id = 15  }
           name     = "36a Divisione 'Forlì'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 22  }
           name     = "37a Divisione 'Modena'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6903  }
         location = 371
         name     = "33a Divisione 'Acqui'"
         division =
         { id       = {  type = 23500 id = 14  }
           name     = "33a Divisione 'Acqui'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6904  }
         location = 350
         name     = "V Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 16  }
           name     = "4a Divisione Alpina 'Cuneense'"
           type     = bergsjaeger
           model    = 9
           strength = 100
          }
         division =
         { id       = {  type = 23500 id = 47  }
           name     = "15a Divisione 'Bergamo'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6905  }
         location = 381
         name     = "6a Divisione 'Cuneo'"
         division =
         { id       = {  type = 23500 id = 19  }
           name     = "6a Divisione 'Cuneo'"
           type     = infantry
           model    = 9
           strength = 70
           max_strength = 70
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 6906  }
         location = 771
         name     = "X Corpo d'Armata"
         division =
         { id       = {  type = 23500 id = 118  }
           name     = "27a Divisione 'Brescia'"
           type     = motorized
           model    = 0
           strength = 70
          }
        }
    ####################################################################
      
	# ROYAL ITALIAN NAVY
	navalunit = { 
		id = { type = 23500 id = 2000 } 
		name = "Regia Marina" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 263 } 
			name = "RN Taranto" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 264 } 
			name = "RN Bari" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 265 } 
			name = "II Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 233 } 
			name = "III Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 216 } 
			name = "IV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 23500 id = 234 } 
			name = "V Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			}  
		division = { 
			id = { type = 23500 id = 282 } 
			name = "Squadrone Giorgio Orsini" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 2830 } 
			name = "Squadrone Porto di Roma" 
			type = transport 
			model = 2 
			} 
		} 
	# 1ST FLEET
	navalunit = { 
		id = { type = 23500 id = 200 } 
		name = "Prima Squadra" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 2001 } 
			name = "RN Giulio Cesare" 
			type = battleship 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 2002 } 
			name = "RN Andrea Doria" 
			type = battleship 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 401 } 
			name = "RN Caio Duilio" 
			type = battleship 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 2320 } 
			name = "RN Vittorio Veneto" 
			type = battleship 
			model = 7 
			}
		division = { 
			id = { type = 23500 id = 2329 } 
			name = "RN Littorio" 
			type = battleship 
			model = 7 
			}
		division = { 
			id = { type = 23500 id = 205 } 
			name = "RN Giuseppe Miraglia" 
			type = escort_carrier 
			} 
		division = { 
			id = { type = 23500 id = 267 } 
			name = "RN Gorizia" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 201 } 
			name = "RN Alberico da Barbiano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 202 } 
			name = "RN Alberto da Giussano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 204 } 
			name = "RN Luigi Cadorna" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 2040 } 
			name = "RN Duca degli Abruzzi" 
			type = light_cruiser 
			model = 4 
			}
		division = { 
			id = { type = 23500 id = 2041 } 
			name = "RN Giuseppe Garibaldi" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 270 } 
			name = "VII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 206 } 
			name = "VIII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 6 
			}
		division = { 
			id = { type = 23500 id = 2060 } 
			name = "IX Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 6 
			}
		division = { 
			id = { type = 23500 id = 269 } 
			name = "XIV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			}
		division = { 
			id = { type = 23500 id = 294 } 
			name = "XV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 293 } 
			name = "XVI Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 2720 } 
			name = "Squadrone Aspromonte" 
			type = transport 
			model = 2 
			}
		division = { 
			id = { type = 23500 id = 2721 } 
			name = "Squadrone Maria" 
			type = transport 
			model = 2 
			}
		}
	# 2TH FLEET
	navalunit = { 
		id = { type = 23500 id = 207 } 
		name = "Seconda Squadra" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 298 } 
			name = "RN Giovanni dalle Bande Nere" 
			type = light_cruiser 
			model = 3 
			}
		division = { 
			id = { type = 23500 id = 209 } 
			name = "RN Trento" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 210 } 
			name = "RN Bolzano" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 211 } 
			name = "RN Trieste" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 212 } 
			name = "RN Duca d'Aosta" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 213 } 
			name = "RN Muzio Attendolo" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 214 } 
			name = "RN Raimondo Montecuccoli" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 2140 } 
			name = "RN Eugenio di Savoia" 
			type = light_cruiser 
			model = 4 
			}
		division = { 
			id = { type = 23500 id = 296 } 
			name = "X Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 222 } 
			name = "XI Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 23500 id = 228 } 
			name = "XII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 2220 } 
			name = "XIII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 3 
			}
		division = { 
			id = { type = 23500 id = 272 } 
			name = "Squadrone Sagittario" 
			type = transport 
			model = 2 
			}
		} 
	# AEGEAN SEA NAVAL COMMAND
	navalunit = { 
		id = { type = 23500 id = 218 } 
		name = "Comando Navale Mar Egeo" 
		location = 378 
		base = 378 
		division = { 
			id = { type = 23500 id = 219 } 
			name = "LI Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 220 } 
			name = "LII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		}
	# LIBYA MARITIME COMMAND
	navalunit = { 
		id = { type = 23500 id = 223 } 
		name = "Comando Navale Libia" 
		location = 761 
		base = 761  
		division = { 
			id = { type = 23500 id = 227 } 
			name = "I Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5 
			}  
		} 
	# 6th Submarine Group
	navalunit = { 
		id = { type = 23500 id = 284 } 
		name = "VI Gruppo Sommergibili" 
		location = 761 
		base = 761 
		division = { 
			id = { type = 23500 id = 285 } 
			name = "LXI Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 286 } 
			name = "LXII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	# SUBMARINE FLEET
	# 1st Submarine Group
	navalunit = { 
		id = { type = 23500 id = 238 } 
		name = "I Gruppo Sommergibili" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 239 } 
			name = "XI Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 240 } 
			name = "XII Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 241 } 
			name = "XIII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 242 } 
			name = "XIV Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 243 } 
			name = "XV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 244 } 
			name = "XVII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		}
	# 2nd Submarine Group
	navalunit = { 
		id = { type = 23500 id = 245 } 
		name = "II Gruppo Sommergibili" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 249 } 
			name = "XXI Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 250 } 
			name = "XXII Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		}  
	# 3rd Submarine Group
	navalunit = { 
		id = { type = 23500 id = 2380 } 
		name = "III Gruppo Sommergibili" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 2390 } 
			name = "XXXI Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			}  
		division = { 
			id = { type = 23500 id = 253 } 
			name = "XXXIII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 251 } 
			name = "XXXIV Squadriglia Sommergibili" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 23500 id = 252 } 
			name = "XXXV Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		}
	# 4th Submarine Group
	navalunit = { 
		id = { type = 23500 id = 254 } 
		name = "IV Gruppo Sommergibili" 
		location = 434 
		base = 434 
		division = { 
			id = { type = 23500 id = 255 } 
			name = "XL Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 230 } 
			name = "XLI Squadra Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 288 } 
			name = "XLVI Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 257 } 
			name = "XLVII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 258 } 
			name = "XLIX Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		}
	# 7th Submarine Group
	navalunit = { 
		id = { type = 23500 id = 229 } 
		name = "VII Gruppo Sommergibili" 
		location = 761 
		base = 761 
		division = { 
			id = { type = 23500 id = 260 } 
			name = "LXXI Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 261 } 
			name = "LXXII Squadriglia Sommergibili" 
			type = submarine 
			model = 2 
			} 
		}  
	navalunit = { 
		id = { type = 23500 id = 271 } 
		name = "I Squadra di Marina Trasporti" 
		location = 419 
		base = 421  
		division = { 
			id = { type = 23500 id = 273 } 
			name = "Squadrone Aventino" 
			type = transport 
			model = 2 
			}  
		division = { 
			id = { type = 23500 id = 292 } 
			name = "VI Squadriglia Torpediniere" 
			type = destroyer 
			model = 3 
			}
		} 
	navalunit = { 
		id = { type = 23500 id = 276 } 
		name = "II Squadra di Marina Trasporti" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 277 } 
			name = "Squadrone Vallelunga" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 278 } 
			name = "Squadrone Asmara" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 283 } 
			name = "Squadrone Tarquinia" 
			type = transport 
			model = 2 
			} 
		}         



    ####################################################################
    
  # 1ST AIR FLEET
  airunit =
  { location = 407
    base     = 407
    id       = { type = 23500 id = 300 }
    name     = "1a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 301 }
      name     = "2a Divisione Caccia 'Borea'"
      strength = 100
      type     = interceptor
      model    = 7
    }
    division =
    { id       = { type = 23500 id = 302 }
      name     = "4a Divisione Bombardieri 'Drago"
      strength = 100
      type     = tactical_bomber
      model    = 6
    }
    division =
    { id       = { type = 23500 id = 303 }
      name     = "6a Divisione Bombardieri 'Falco"
      strength = 100
      type     = tactical_bomber
      model    = 6
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 430
    base     = 430
    id       = { type = 23500 id = 304 }
    name     = "2a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 305 }
      name     = "1a Divisione Caccia 'Aquila'"
      strength = 100
      type     = interceptor
      model    = 7
    }
    division =
    { id       = { type = 23500 id = 306 }
      name     = "3a Divisione Bombardieri 'Centauro'"
      strength = 100
      type     = naval_bomber
      model    = 2
    }
    division =
    { id       = { type = 23500 id = 307 }
      name     = "11a Brigata Bombardieri 'Nibbio'"
      strength = 40
      type     = naval_bomber
      model    = 2
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 419
    base     = 419
    id       = { type = 23500 id = 308 }
    name     = "3a Squadra Aerea"
    division =
    { id       = { type = 23500 id = 309 }
      name     = "5a Divisione Bombardieri 'Eolo'"
      strength = 100
      type     = cas
      model    = 1
    }
    division =
    { id       = { type = 23500 id = 310 }
      name     = "8a Brigata Caccia 'Ibis'"
      strength = 40
      type     = multi_role
      model    = 5
    }
  }
  # 4TH TERRITORIAL AIR FORCE ZONE
  airunit =
  { location = 422
    base     = 422
    id       = { type = 23500 id = 311 }
    name     = "4a Zona Aerea Territoriale"
    division =
    { id       = { type = 23500 id = 312 }
      name     = "9a Divisione Bombardieri 'Leone'"
      strength = 100
      type     = tactical_bomber
      model    = 6
    }
  }
  # SARDINIA AVIATION COMMAND
  airunit =
  { location = 434
    base     = 434
    id       = { type = 23500 id = 313 }
    name     = "Comando Aviazione di Sardegna"
    division =
    { id       = { type = 23500 id = 314 }
      name     = "10a Divisione Caccia 'Marte'"
      strength = 100
      type     = interceptor
      model    = 7
    }
  }
  # LYBIA AIR COMMAND
  airunit =
  { location = 761
    base     = 761
    id       = { type = 23500 id = 315 }
    name     = "Comando Aerea della Libia"
    division =
    { id       = { type = 23500 id = 316 }
      name     = "13a Divisione Bombardieri 'Pegaso'"
      strength = 100
      type     = naval_bomber
      model    = 2
    }
    division =
    { id       = { type = 23500 id = 317 }
      name     = "14a Brigata Caccia 'Rex'"
      strength = 40
      type     = multi_role
      model    = 5
    }
  }
  # ROYAL AIR FORCE
  airunit =
  { location = 419 
    base     = 419
    id       = {  type = 23500 id = 318  }
    name     = "Regia Aeronautica"
    division =
    { id       = {  type = 23500 id = 319  }
      name     = "Comando Servici Aerei Speciali"
      strength = 25
      type     = transport_plane
      model    = 1
    }
  }
	
	division_development = {
		id    = { type = 23500 id = 402 }
		name  = "RN Impero"
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.2
		date  = { year = 1942 month = may day = 29 }
	}
	division_development = {
		id    = { type = 23500 id = 403 }
		name  = "RN Roma"
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.2
		date  = { year = 1942 month = june day = 14 }
	}
	division_development = {
		id    = { type = 23500 id = 420 }
		name  = "RN Conte di Cavour"
		type  = battleship
		model = 5
		new_model = no
		cost  = 0.2
		date  = { year = 1944 month = january day = 1 } # this date is random, since the ship was captured incomplete by the Germans in 10.09.1943
		extra = naval_anti_air_l
	}
	division_development = {
		id    = { type = 23500 id = 404 }
		name  = "RN Attilio Regolo"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1942 month = may day = 14 }
	}
	division_development = {
		id    = { type = 23500 id = 405 }
		name  = "RN Caio Mario"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1942 month = august day = 24 }
	}
	division_development = {
		id    = { type = 23500 id = 408 }
		name  = "RN Cornelio Silla"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1942 month = september day = 7 }
	}
	division_development = {
		id    = { type = 23500 id = 409 }
		name  = "RN Giulio Germanico"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1		
		date  = { year = 1943 month = april day = 5 } # keel laid up 11.05.1940
	}
	division_development = {
		id    = { type = 23500 id = 410 }
		name  = "RN Ottaviano Augusto"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1942 month = august day = 19 }
	}
	division_development = {
		id    = { type = 23500 id = 412 }
		name  = "RN Pompeo Magno"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1943 month = june day = 24 }
	}
	division_development = {
		id    = { type = 23500 id = 413 }
		name  = "RN Scipione Africano"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1943 month = april day = 23 }
	}
	division_development = {
		id    = { type = 23500 id = 414 }
		name  = "RN Ulpio Traiano"
		type  = light_cruiser
		model = 5
		new_model = no
		cost  = 0.1
		date  = { year = 1942 month = august day = 19 }
	}
	division_development = {
		id    = { type = 23500 id = 416 }
		name  = "RN Etna"
		type  = light_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		date  = { year = 1944 month = may day = 28 }
	}
	division_development = {
		id    = { type = 23500 id = 417 }
		name  = "RN Vesuvio"
		type  = light_cruiser
		model = 6
		new_model = no
		cost  = 0.1
		date  = { year = 1944 month = august day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 418 }
		name  = "151a Divisione 'Perugia'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1941 month = august day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 419 }
		name  = "152a Divisione 'Piceno'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1941 month = august day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 421 }
		name  = "153a Divisione 'Macerata'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1941 month = december day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 422 }
		name  = "155a Divisione 'Emilia'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1941 month = december day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 423 }
		name  = "156a Divisione 'Vicenza'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1942 month = january day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 424 }
		name  = "157a Divisione 'Novara'"
		type  = garrison
		model = 4
		cost  = 0.1
		date  = { year = 1942 month = january day = 1 }
	}
	division_development = {
		id    = { type = 23500 id = 1005 }
		name  = "7a Armata"
		type  = hq
		model = 2
		cost  = 0.1
		date  = { year = 1941 month = september day = 29 }
	}
}
