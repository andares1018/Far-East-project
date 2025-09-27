	########################################
    # Country definition for ITA by Cardus #
    ########################################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = ITA
		ai_settings	= { flags = { ITABuildStandard = yes RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes} }
		manpower               = 714 #was 460
		# Resource Reserves
		energy                 = 3600
		metal                  = 1800
		rare_materials         = 1000
		oil                    = 1000
		supplies               = 2000
		money                  = 500
		belligerence           = 0 # to avoid MP problems
		capital                = 419
		transports             = 400
		escorts                = 100

       diplomacy =
       {  relation = {  tag = AFG value = 50  }
         relation =
         {  tag        = ALB
           value      = 10
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = ARG value = 30  }
         relation = {  tag = AST value = 1  }
         relation =
         {  tag        = AUS
           value      = 125
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = BEL value = -5  }
         relation = {  tag = BHU value = 1  }
         relation = {  tag = BUL value = 150  }
         relation = {  tag = CAN value = 1  }
         relation = {  tag = CHL value = 30  }
         relation = {  tag = CZE value = 15  }
         relation = {  tag = ENG value = -50  }
         relation = {  tag = ETH value = -200  }
         relation = {  tag = FIN value = 50  }
         relation = {  tag = FRA value = -50  }
         relation = {  tag = GER value = 50  }
         relation =
         {  tag        = GRE
           value      = -35
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = HOL value = -20  }
         relation =
         {  tag        = HUN
           value      = 125
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = IRE value = 20  }
         relation = {  tag = IRQ value = 25  }
         relation = {  tag = NEP value = 1  }
         relation = {  tag = NZL value = 1  }
         relation = {  tag = OMN value = 50  }
         relation = {  tag = POR value = 65  }
         relation =
         {  tag        = ROM
           value      = 50
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = SAF value = 1  }
         relation = {  tag = SAU value = -25  }
         relation =
         {  tag        = SCH
           value      = 1
           guaranteed = {  day = 16 month = may year = 1935  }
          }
         relation = {  tag = SPR value = -50  }
         relation =
         {  tag        = TUR
           value      = 1
           guaranteed = {  day = 17 month = march year = 1934  }
          }
         relation = {  tag = YEM value = 50  }
         relation = {  tag = YUG value = 75  }
      relation = {  tag = USA value = 90  } #USA ignored the embargo and provided Italy with the oil required
        }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  87 91 94 343 350 371 378 379 390 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }
                              
       ownedprovinces         = { 378 379 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 815 816 817 834 835 836 837 838 }

       controlledprovinces    = {  378 379 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 815 816 817 834 835 836 837 838 }
		claimedprovinces =  {   740 741 742 744 745 746 747 748 749 #Tunisia
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 #Libya
                                359 360 361 362 #Albania
								349 #Ljubljana
							} 

	# Italy 1936 techs
	#######################
	techapps = {  

	# Manufacturing
	5810 5820 5050 5830 5060  
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020
	# Computers
	5310 54010 54020 54030 
	# Cryptography
	5316 5326 5327 
	# Radar
	
	# Oil Refining
	5190
	# Medicine
	5600 5610 5620 5630
	# Exp. Rocket
	5560

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 
	# Motorized Infantry
	1396
	# Naval Infantry
	1560 1570
	# Paratroopers
	
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650
	# Armored Car 
	2860 2870 2880 2020 
	# Artillery
	2290 2300 2310 2900 2910 2920 2930 
	# Anti-tank Artillery
	
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery
	2810 2820 2510 

	# Hospital System 
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560 6030

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Battlecruiser  
	3310 3320 3330
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Destroyer 
	3010 3020 3030 3040 3050 3060 
	# Submarine 
	3610 3620 3630 3640 3650
	# Light Carrier 
	12100 
	# Torpedo & ASW 18
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
	8500 8510 8520 8550 8560
	# Trade Interdiction Submarine
	8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Escort Fighter 
	
	# Close Air Support
    4400
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber 
	4700 4710 
	# Seaplanes
	4740 4750 4760 4770 4780
	# CAG
	
	# Air Transport 
	4290 4250

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	
	}

	inventions = { 3000027 }
       policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 2
         political_left    = 3
         freedom           = 3 #former value was 4
         free_market       = 7
         professional_army = 7 # 6 at peace
         defense_lobby     = 7
         interventionism   = 8 #former value was 6
        }

       headofstate            = {  type = 9 id = 25001  }
       headofgovernment       = {  type = 9 id = 25002  }
       foreignminister        = {  type = 9 id = 25003  }
       armamentminister       = {  type = 9 id = 25054  }
       ministerofsecurity     = {  type = 9 id = 25005  }
       ministerofintelligence = {  type = 9 id = 25006  }
       chiefofstaff           = {  type = 9 id = 25007  }
       chiefofarmy            = {  type = 9 id = 25008  }
       chiefofnavy            = {  type = 9 id = 25009  }
       chiefofair             = {  type = 9 id = 25010  }
       # ######################
       # ITA 1936 LAND OOB
       # ######################
       landunit =
       {  id       = {  type = 23500 id = 1  }
         location = 419
         name     = "Superesercito"
         Division =
         {  id      = {  type = 23500 id = 2  }
           name     = "Comando Supremo"
           type     = hq
		   model    = 2 
           extra    = anti_air
           strength = 100
		    brigade_model    = 2 		   
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 3  }
         location = 398
         name     = "Comando Superiore Truppe Alpini"
         Division =
         {  id      = {  type = 23500 id = 4  }
           name     = "1a Divisione Alpini 'Taurinense'"
           type     = bergsjaeger
		   model    = 8 
           strength = 100
          }
         Division =
         {  id      = {  type = 23500 id = 5  }
           name     = "2a Divisione Alpini 'Tridentina'"
           type     = bergsjaeger
		   model    = 8 
           strength = 100
          }
         Division =
         {  id      = {  type = 23500 id = 6  }
           name     = "3a Divisione Alpini 'Julia'"
           type     = bergsjaeger
		   model    = 8 
           strength = 100
          }
         Division =
         {  id      = {  type = 23500 id = 7  }
           name     = "4a Divisione Alpini 'Cuneense'"
           type     = bergsjaeger
		   model    = 8 
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 8  }
         location = 407
         name     = "Corpo Celere"
         Division =
         {  id      = {  type = 23500 id = 9  }
           name     = "1a Divisione Celere 'Eugenio di Savoia'"
           type     = cavalry
		   model    = 8 
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 3		   
          }
         Division =
         {  id      = {  type = 23500 id = 10  }
           name     = "2a Divisione Celere 'Emanuele Filiberto Testa di Ferro'"
           type     = cavalry
		   model    = 8 
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 3		   
          }
         Division =
         {  id      = {  type = 23500 id = 11  }
           name     = "3a Divisione Celere 'Principe Amedeo Duca d'Aosta'"
           type     = cavalry
		   model    = 8 
           strength = 100
           extra    = light_armor_brigade
	   brigade_model = 3		   
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 12  }
         location = 398 # Torino
         name     = "I Corpo d'Armata"
         # Gen. C. Vecchiarelli#
         Division =
         {  id      = {  type = 23500 id = 13  }
           name     = "1a Divisione 'Superga'"
           type     = infantry
		   model    = 7 
           extra    = artillery
           strength = 100
		    brigade_model    = 2 		   
          }
         Division =
         {  id      = {  type = 23500 id = 14  }
           name     = "2a Divisione 'Sforzesca'"
           type     = infantry
		   model    = 7 
           strength = 100
          }
        }
	landunit =
       	{  id       = {  type = 23500 id = 15  }
         location = 396 
         name     = "II Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 16  }
           name     = "3a Divisione 'Ravenna'"
           type     = infantry
           strength = 100
		   model    = 7 
           extra    = artillery
	   brigade_model    = 2 
          }
         Division =
         {  id       = {  type = 23500 id = 17  }
           name     = "4a Divisione 'Livorno'"
           type     = infantry
           strength = 100
            model    = 7 
          }
		}
		landunit =
       {  id       = {  type = 23500 id = 18  }
        location = 407 # Milano
         name     = "III Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 19  }
           name     = "6a Divisione 'Cuneo'"
           type     = infantry
           strength = 100
	       model    = 7
           extra    = artillery
	   brigade_model    = 2 
          }
         Division =
         {  id       = {  type = 23500 id = 20  }
           name     = "8a Divisione 'Po'"
           type     = infantry
           strength = 100
            model    = 7 
          }
        } 
       landunit =
       {  id       = {  type = 23500 id = 21  }
         location = 400
         name     = "IV Corpo d'Armata"
         Division =
         {  id       = {  type = 23500 id = 22  }
           name     = "7a Divisione 'Lupi di Toscana'"
           type     = infantry
           strength = 100
            model    = 7 
          }
         Division =
         {  id       = {  type = 23500 id = 23  }
           name     = "9a Divisione 'Pasubio'"
           type     = infantry
           strength = 100
	       model    = 7
           extra    = artillery
	   brigade_model    = 2 
          }
         Division =
         {  id       = {  type = 23500 id = 24  }
           name     = "11a Divisione 'Brennero'"
           type     = infantry
           strength = 100
            model    = 7 
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 25  }
         location = 404 
         name     = "V Corpo d'Armata"
         # Gen. R. Balocco#
         Division =
         {  id      = {  type = 23500 id = 26  }
           name     = "12a Divisione 'Sassari'"
           type     = infantry
	       model    = 7
           strength = 100
           extra    = artillery
	   brigade_model    = 2 
          }
         Division =
         {  id       = {  type = 23500 id = 27  }
           name     = "15a Divisione 'Bergamo'"
           type     = infantry
           strength = 100
            model    = 7 
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 28  }
         location = 411 # Bologna
        name     = "VI Corpo d'Armata"
        Division =
         {  id		= {  type = 23500 id = 29  }
           name		= "16a Divisione 'Pistoia'"
           type     = infantry
		   model    = 7
          extra    = artillery
           brigade_model = 2
          strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 30  }
           name     = "17a Divisione 'Pavia'"
           type     = infantry
           strength = 100
            model    = 7 
          }
         Division =
         {  id       = {  type = 23500 id = 31  }
           name     = "18a Divisione 'Messina'"
           type     = infantry
           strength = 100
            model    = 7 
          }
       }
       landunit =
	   {  id       = {  type = 23500 id = 32  }
         location = 410 # Firenze
         name     = "VII Corpo d'Armata"
         Division =
         {  id           = {  type = 23500 id = 33  }
           name          = "20a Divisione 'Friuli'"
           type          = infantry
		   model    = 7 		   
           strength      = 100
          }
        }
       landunit =
	   {  id       = {  type = 23500 id = 34  }
         location = 419 # Roma
         name     = "VIII Corpo d'Armata"
         Division =
         {  id      = {  type = 23500 id = 35  }
           name     = "21a Divisione 'Granatieri di Sardegna'"
           type     = infantry
		   model    = 8 
           strength = 100 
          extra    = artillery
           brigade_model = 3
          }
         Division =
         {  id           = {  type = 23500 id = 36  }
           name          = "22a Divisione 'Cacciatore delle Alpi'"
           type          = infantry
		   model    = 8 		   
           strength      = 100
          }
        }
       landunit =
	   {  id       = {  type = 23500 id = 37  }
         location = 426 # Bari
         name     = "IX Corpo d'Armata"
       Division =
        {  id      = {  type = 23500 id = 38  }
           name     = "23a Divisione 'Ferrara'"
           type     = infantry
		    model   = 7 
          strength = 100
          extra    = artillery
           brigade_model = 2
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 39  }
         location = 421
         name     = "X Corpo d'Armata"
	     Division =
         {  id       = {  type = 23500 id = 40  }
           name     = "25a Divisione 'Bologna'"
           type     = infantry
		   model    = 7 
           strength = 100
          extra    = artillery
           brigade_model = 2
          }
        }
		landunit =
       {  id       = {  type = 23500 id = 41  }
         location = 405 # Udine
         name     = "XI Corpo d'Armata"
         Division =
         {  id           = {  type = 23500 id = 42  }
           name          = "10a Divisione 'Piave'"
           type          = infantry
		   model    = 7 		   
           strength      = 100
          }
         Division =
         {  id            = {  type = 23500 id = 43  }
           name          = "13a Divisione 'Re'"
           type          = infantry
	       model         = 7
          extra         = artillery
           brigade_model = 2
           strength      = 100
         }
         Division =
         {  id           = {  type = 23500 id = 44  }
           name          = "14a Divisione 'Isonzo'"
           type          = infantry
		   model    = 7 		   
           strength      = 100
          }
       }
       landunit =
       { id       = {  type = 23500 id = 45  }
         location = 430 # Palermo
         name     = "XII Corpo d'Armata"
         # Gen. A.Rossi#
         Division =
         {  id       = {  type = 23500 id = 46  }
           name     = "28a Divisione 'Aosta'"
           type     = infantry
		   model    = 7
           strength = 100
          extra         = artillery
           brigade_model = 2
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 47  }
        location = 434
         name     = "XIII Corpo d'Armata"
         # Gen. F Gambelli#
         Division =
         {  id       = {  type = 23500 id = 48  }
           name     = "31a Divisione 'Calabria'"
           type     = infantry
		    model    = 7
          strength = 70
         }
		}  

       landunit =
       {  id       = {  type = 23500 id = 49  }
         location = 765
         name     = "Comando Superiore della Libia" 
         Division =
         {  id       = {  type = 23500 id = 50  }
           name     = "7a Divisione CCNN 'Cirene'"
           type     = infantry
           model    = 7
           strength = 100
          }
       }

       landunit =
       {  id       = {  type = 23500 id = 51  }
         location = 817
         name     = "Comando Superiore dell'AOI"
      #Maresciallo Badoglio#
         Division =
         {  id       = {  type = 23500 id = 52  }
           name     = "Comando Superiore dell'AOI"
           type     = hq
           model    = 2
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 53  }
         location = 817
         name     = "I Corpo d'Armata dell'AOI"
         # Gen. Santini
         Division =
         {  id       = {  type = 23500 id = 54  }
           name     = "26a Divisione 'Assietta'"
	   type     = infantry
           model    = 8
           extra = armored_car
           brigade_model = 2		   
           strength = 70
          }
         Division =
         {  id       = {  type = 23500 id = 55  }
           name     = "30a Divisione 'Sabauda'"
           type     = infantry
           model    = 8
           extra = artillery
           brigade_model = 3		
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 56  }
           name     = "5a Divisione Alpini 'Pusteria'"
           type     = bergsjaeger
           model = 9 
           extra = engineer
		   brigade_model = 3		
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 57  }
           name     = "4a Divisione CCNN '3 Gennaio'"
           type     = militia
           model = 4 
           strength = 100
          }
         Division =
      {  id       = {  type = 23500 id = 58  }
           name     = "X/XV Battaglioni Indigeni"
           type     = militia
		   model = 3  
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 59  }
         location = 817
         name     = "II Corpo d'Armata dell'AOI"
         # Gen. Maravigna
        Division =
        {  id       = {  type = 23500 id = 60  }
          name     = "19a Divisione 'Venezia'"
          type     = infantry
          model    = 8
          extra    = artillery
		   brigade_model = 3 
          strength = 100
        }
        Division =
        {  id       = {  type = 23500 id = 61  }
          name     = "24a Divisione 'Pinerolo'"
          type     = infantry
          model    = 8
          strength = 100
           extra = engineer
		   brigade_model = 3
        }
         Division =
         {  id       = {  type = 23500 id = 62  }
           name     = "3a Divisione CCNN '21 Aprile'"
           type     = militia
           model = 4 
           strength = 100
          }
        } 
       landunit =
       {  id       = {  type = 23500 id = 63  }
         location = 815
         name     = "III Corpo d'Armata dell'AOI"
         # Gen. Bastico
        Division =
        {  id       = {  type = 23500 id = 64  }
          name     = "27a Divisione 'Brescia'"
          type     = infantry
          model    = 8
          strength = 100
         }
        }
       landunit =
       {  id       = {  type = 23500 id = 65  }
         location = 815
         name     = "IV Corpo d'Armata dell'AOI"
         # Gen. Babbini#
         Division =
         {  id       = {  type = 23500 id = 66  }
           name     = "5a Divisione 'Cosseria'"
           type     = infantry
           model    = 8
           strength = 70
          }
         Division =
         {  id       = {  type = 23500 id = 67  }
           name     = "2a Divisione CCNN '28 Ottobre'"
           type     = militia
           model = 4
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 68  }
           name     = "5a Divisione CCNN '1 Febbraio'"
           type     = militia
           model = 4
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 69  }
         location = 816
         name     = "Corpo d'Armata Eritreo"
         # Gen. Pirzio Biroli#
         Division =
         {  id       = {  type = 23500 id = 70  }
           name     = "1a Divisione Indigini"
           type     = infantry
           model    = 6
           extra = artillery
           brigade_model = 3 
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 71  }
           name     = "2a Divisione Indigini"
           type     = infantry
           model    = 6
           extra = light_armor_brigade
           brigade_model = 3 
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 72  }
           name     = "1a Divisione CCNN '23 Marzo'"
           type     = militia
           model = 4 
           strength = 100
          }
         Division =
         {  id       = {  type = 23500 id = 73  }
           name     = "1o Gruppo di Battaglioni CCNN dell'Eritrea"
           type     = militia
           model = 3 
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 74  }
         location = 816
         name     = "Zone di pianura occidentale"
         Division =
         {  id       = {  type = 23500 id = 75  }
           name     = "XXVII/XXVIII Battaglioni Indigeni"
           type     = militia
           model = 3 
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 76  }
         location = 816
         name     = "Zone di pianura orientale"
         Division =
         {  id       = {  type = 23500 id = 77  }
           name     = "XIV/XXVI Battaglioni Indigeni"
           type     = militia
           model = 3 
           extra = artillery
           brigade_model = 3 
           strength = 100
          }
        }

       landunit =
       {  id       = {  type = 23500 id = 78  }
         location = 837
         name     = "Colonna Graziani"
         # Gen. Graziani#
        Division =
        {  id       = {  type = 23500 id = 79  }
			name     = "29a Divisione 'Piemonte'"
			type     = infantry
			model    = 8
			strength = 100
			extra = armored_car
			brigade_model = 2 		 
         }
        Division =
        {  id       = {  type = 23500 id = 80  }
          name     = "Divisione 'Libia'"
          type     = infantry
          model    = 6
         strength = 100
         }
        Division =
        {  id       = {  type = 23500 id = 81  }
          name     = "6a Divisione CCNN 'Tevere'"
          type     = militia
          model    = 4
         strength = 100
         }
		} 
       landunit =
       {  id       = {  type = 23500 id = 82  }
         location = 838
         name     = "1o Gruppo RCTC"
         Division =
         {  id       = {  type = 23500 id = 83  }
           name     = "1o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
          type     = militia
           model    = 3
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 84  }
         location = 835
         name     = "2o Gruppo RCTC"
         # Guglielmo Nasi#
         Division =
         {  id       = {  type = 23500 id = 85  }
           name     = "2o Gruppo di Battaglioni Regio Corpo Truppe Coloniali"
           type     = militia
           model    = 3
		   strength = 100
          }
        }

     
    ####################################################################
       ### Italian Navy OOB ###
       
	navalunit = { 
		id = { type = 23500 id = 178 } 
		name = "Prima Squadra" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 101 } 
			name = "RN Alberico da Barbiano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 102 } 
			name = "RN Alberto da Giussano" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 103 } 
			name = "RN Armando Diaz" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 104 } 
			name = "RN Luigi Cadorna" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 105 } 
			name = "RN Giuseppe Miraglia" 
			type = escort_carrier 
			} 
		division = { 
			id = { type = 23500 id = 106 } 
			name = "VIII Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 5
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 107 } 
		name = "Seconda Squadra" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 108 } 
			name = "RN Pola" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 109 } 
			name = "RN Trento" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 110 } 
			name = "RN Bolzano" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 111 } 
			name = "RN Trieste" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 112 } 
			name = "RN Duca d'Aosta" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 113 } 
			name = "RN Muzio Attendolo" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 114 } 
			name = "RN Raimondo Montecuccoli" 
			type = light_cruiser 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 115 } 
		name = "Comando Navale Mar Egeo" 
		location = 378 
		base = 378 
		division = { 
			id = { type = 23500 id = 116 } 
			name = "IV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 117 } 
			name = "VIII Squadriglia Torpediniere" 
			type = destroyer 
			model = 4
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 118 } 
		name = "V Gruppo Sottomarini" 
		location = 378 
		base = 378 
		division = { 
			id = { type = 23500 id = 119 } 
			name = "LI Squadriglia Sottomarini" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 120 } 
			name = "LII Squadriglia Sottomarini" 
			type = submarine 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 121 } 
		name = "XI Squadriglia Torpediniera" 
		location = 750 
		base = 750 
		division = { 
			id = { type = 23500 id = 122 } 
			name = "XI Squadriglia Torpediniera" 
			type = destroyer 
			model = 4
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 123 } 
		name = "Comando Navale Libia" 
		location = 765 
		base = 765 
		division = { 
			id = { type = 23500 id = 124 } 
			name = "RN San Giorgio" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 125 } 
			name = "RN Libia" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 126 } 
			name = "I Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 23500 id = 127 } 
			name = "XII Squadriglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 128 } 
		name = "VI Gruppo Sommergibili" 
		location = 765 
		base = 765 
		division = { 
			id = { type = 23500 id = 129 } 
			name = "LXI Squadra Sommergibili" 
			type = submarine 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 130 } 
		name = "Comando Navale AOI" 
		location = 815 
		base = 815 
		division = { 
			id = { type = 23500 id = 131 } 
			name = "III Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 132 } 
			name = "V Squadriglia Cacciatorpediere" 
			type = destroyer 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 133 } 
		name = "VIII Gruppo Sottomarini" 
		location = 815 
		base = 815 
		division = { 
			id = { type = 23500 id = 134 } 
			name = "LXXXI Squadra" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 135 } 
			name = "LXXXII Squadra" 
			type = submarine 
			model = 1 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 136 } 
		name = "Comando Flotta Sommergibili-I Gruppo" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 137 } 
			name = "XI Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 138 } 
			name = "XII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 139 } 
			name = "XIII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 140 } 
			name = "XIV Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 141 } 
			name = "XV Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 142 } 
			name = "XVII Squadriglia Sommergibili" 
			type = submarine 
			model = 3 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 143 } 
		name = "Comando Flotta Sommergibili-II Gruppo" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 144 } 
			name = "XXI Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 23500 id = 145 } 
			name = "XXII Squadriglia Sommergibili" 
			type = submarine 
			model = 4 
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 146 } 
		name = "Dip. Mil. Mar. 'Jonio e Basso Adriatico'" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 147 } 
			name = "RN Taranto" 
			type = light_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 148 } 
			name = "RN Bari" 
			type = light_cruiser 
			model = 2 
			} 
		division = { 
			id = { type = 23500 id = 149 } 
			name = "II Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4
			} 
		division = { 
			id = { type = 23500 id = 150 } 
			name = "RN Zara" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 151 } 
			name = "RN Gorizia" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 152 } 
			name = "RN Fiume" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 23500 id = 153 } 
			name = "XIV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 155 } 
		name = "I Squadra di Marina Trasporti" 
		location = 419 
		base = 421 
		division = { 
			id = { type = 23500 id = 156 } 
			name = "Squadrone Sagittario" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 157 } 
			name = "Squadrone Aventino" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 158 } 
			name = "4a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 23500 id = 159 } 
			name = "6a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 160 } 
		name = "II Squadra di Marina Trasporti" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 161 } 
			name = "Squadrone Vallelunga" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 162 } 
			name = "Squadrone Asmara" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 163 } 
			name = "1a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 23500 id = 164 } 
			name = "2a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		}             
	navalunit = { 
		id = { type = 23500 id = 165 } 
		name = "1a Squadra di Marina" 
		location = 421 
		base = 421 
		division = { 
			id = { type = 23500 id = 166 } 
			name = "Squadrone Giorgio Orsini" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 167 } 
			name = "Squadrone Tarquinia" 
			type = transport 
			model = 1 
			} 
		division = { 
			id = { type = 23500 id = 168 } 
			name = "3a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		division = { 
			id = { type = 23500 id = 169 } 
			name = "5a Flottiglia Torpediniere" 
			type = destroyer 
			model = 0
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 170 } 
		name = "3a Squadra di Marina" 
		location = 422 
		base = 422 
		division = { 
			id = { type = 23500 id = 171 } 
			name = "VI Squadriglia Torpediniere" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 172 } 
			name = "XVI Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4
			} 
		division = { 
			id = { type = 23500 id = 173 } 
			name = "XV Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 2
			} 
		} 
	navalunit = { 
		id = { type = 23500 id = 174 } 
		name = "4a Squadra di Marina" 
		location = 396 
		base = 396 
		division = { 
			id = { type = 23500 id = 175 } 
			name = "X Squadriglia Cacciatorpediniere" 
			type = destroyer 
			model = 4
			} 
		division = { 
			id = { type = 23500 id = 176 } 
			name = "RN Bartolomeo Colleoni" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 23500 id = 177 } 
			name = "RN Giovanni dalle Bande Nere" 
			type = light_cruiser 
			model = 3 
			} 
		} 
      ### Italian Air OOB ###
       airunit =
       {  location = 407
         base     = 407
         id       = {  type = 23500 id = 201  }
         name     = "1a Zona Aerea Territoriale"
         Division =
         {  id       = {  type = 23500 id = 202  }
           name     = "2a Divisione Caccia 'Borea'"
           strength = 100
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 203  }
           name     = "4a Divisione Bombardieri 'Drago'"
           strength = 100
           type     = tactical_bomber
           model    = 5
          }
        }
       airunit =
       {  location = 430
         base     = 430
         id       = {  type = 23500 id = 204  }
         name     = "2a Zona Aerea Territoriale"
         Division =
         {  id       = {  type = 23500 id = 205  }
           name     = "1a Divisione Caccia 'Aquila'"
           strength = 100
           type     = interceptor
           model    = 6
          }
         Division =
         {  id       = {  type = 23500 id = 206  }
           name     = "3a Divisione Bombardieri 'Centauro'"
           strength = 100
           type     = naval_bomber
           model    = 1
          }
        }
       airunit =
       {  location = 419 #Roma
         base     = 419
         id       = {  type = 23500 id = 207  }
         name     = "3a Zona Aerea Territoriale"
         Division =
         {  id       = {  type = 23500 id = 208  }
           name     = "8a Divisione Caccia 'Ibis'"
           strength = 80
           type     = multi_role
           model    = 4
          }
        }
       airunit =
       {  location = 419 #Roma
         base     = 419
         id       = {  type = 23500 id = 209  }
         name     = "Regia Aeronautica"
         Division =
         {  id       = {  type = 23500 id = 210  }
           name     = "Comando Servici Aerei Speciali"
           strength = 25
           type     = transport_plane
           model    = 1
          }
        }
       airunit =
       {  location = 434
         base     = 434
         id       = {  type = 23500 id = 211  }
         name     = "Comando Aviazione di Sardegna"
         Division =
         {  id       = {  type = 23500 id = 212  }
           name     = "10a Brigata Caccia 'Marte'"
           strength = 40
           type     = interceptor
           model    = 7
          }
       }

       airunit =
       {  location = 750 #Tripoli
         base     = 750
         id       = {  type = 23500 id = 213  }
         name     = "Comando Aerea della Libia"
         Division =
         {  id       = {  type = 23500 id = 214  }
           name     = "14a Divisione Caccia 'Rex'"
           strength = 80
           type     = multi_role
           model    = 4
          }
        }

       airunit =
       {  location = 815
         base     = 815
         id       = {  type = 23500 id = 215  }
         name     = "Comando Aeronautica dell'AOI"
         Division =
         {  id       = {  type = 23500 id = 216  }
           name     = "5a Divisione Bombardieri 'Eolo'"
           strength = 100
           type     = cas
           model    = 0
          }
         Division =
         {  id       = {  type = 23500 id = 217  }
           name     = "6a Brigata Bombardieri 'Falco'"
           strength = 40
           type     = tactical_bomber
           model    = 4
          }
        }

       airunit =
       {  location = 836 #Mogadiscio/Muqdisho
         base     = 836
         id       = {  type = 23500 id = 218  }
         name     = "7a Brigata Bombardieri"
      #Bgd. Gen. Ferruccio Ranza
         Division =
         {  id       = {  type = 23500 id = 219  }
           name     = "7a Brigata Bombardieri"
           strength = 40
           type     = tactical_bomber
           model    = 4
          }
        }



	division_development = { 
		id    = { type = 23500 id = 301 } 
		name  = "RN Eugenio di Savoia" 
		type  = light_cruiser 
		model = 4 
		cost  = 0.1
		date  = { year = 1936 month = january day = 16 }
		new_model = no
	}
	division_development = { 
		id    = { type = 23500 id = 302 } 
		name  = "RN Duca degli Abruzzi" 
		type  = light_cruiser 
		model = 4 
		cost  = 0.1
		date  = { year = 1937 month = december day = 1 }
		new_model = no
	}	
	division_development = { 
		id    = { type = 23500 id = 303 } 
		name  = "RN Giuseppe Garibaldi" 
		type  = light_cruiser 
		model = 4 
		cost  = 0.1
		date  = { year = 1937 month = december day = 1 }
		new_model = no
	}	
	division_development = { 
		id    = { type = 23500 id = 304 }
		name  = "RN Conte di Cavour"
		type  = battleship
		model = 5
		cost  = 1.1
		unitcost = no
		date  = { year = 1937 month = june day = 1 }
		new_model = no
    }
    division_development = {
		id    = { type = 23500 id = 305 }
		name  = "RN Giulio Cesare"
		type  = battleship
		model = 5
		cost  = 1.1
		unitcost = no
		date  = { year = 1937 month = june day = 1 }
		new_model = no
	}
	division_development = {
		id = { type = 23500 id = 310 }
		name = "7a Flottiglia Torpediniere"
		type = destroyer
		model = 5
		cost = 0.1
		date = { year = 1936 month = june day = 1 }
	}
	
	# Doria and Duilio's completion dates are bogus.  They actually didn't
	# begin their reconstruction until Apr 1937, and finished in Oct 1940.  
	# We can't easily remove them from the OOB and put them into the build
	# queue, so we're starting them early, and will let them finish 1 year 
	# early.
	division_development = {
		id    = { type = 23500 id = 306 }
		name  = "RN Andrea Doria"
		type  = battleship
		model = 5
		cost  = 1.1
		unitcost = no
		date  = { year = 1939 month = june day = 1 }
		new_model = no
	}
	division_development = {
		id    = { type = 23500 id = 307 }
		name  = "RN Caio Duilio"
		type  = battleship
		model = 5
		cost  = 1.1
		unitcost = no
		date  = { year = 1939 month = june day = 1 }
		new_model = no
	}
	division_development = { 
		id = { type = 23500 id = 308 } 
		name = "RN Littorio" 
		type = battleship 
		model = 7 
		cost  = 0.2
		date  = { year = 1940 month = may day = 6 }
		new_model = no
	} 
	division_development = { 
		id    = { type = 23500 id = 309 } 
		name  = "RN Vittorio Veneto" 
		type  = battleship 
		model = 7 
		cost  = 0.2
		date  = { year = 1940 month = april day = 28 }
		new_model = no
	} 


}
