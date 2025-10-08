##############################
# Country definition for ENG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  ai                 = "ENG_1936.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 29 # London
  dissent            = 10
  manpower           = 20
  peacetime_ic_mod       = 0.4
  # Resource Reserves
  energy         = 8040
  metal          = 4020
  rare_materials = 2010
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 2180
  escorts        = 150

  diplomacy = {
    relation = {
      tag        = AFG
      value      = -75
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 200 }
    relation = {
      tag        = AUS
      value      = 75
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 access = yes }
    relation = { tag = BUL value = 20 }
    relation = { tag = CAN value = 200 }
    relation = { tag = CUB value = 30 }
    relation = { tag = CZE value = 125 }
    relation = {
      tag        = DEN
      value      = 100
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = EGY value = 200 }
    relation = { tag = EST value = 65 }
    relation = { tag = ETH value = 50 }
    relation = { tag = FIN value = 85 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = {
      tag        = GRE
      value      = 50
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = GUA value = 50 }
    relation = { tag = HOL value = 125 }
    relation = { tag = HON value = 50 }
    relation = { tag = HUN value = -50 }
    relation = {
      tag        = IRE
      value      = 25
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = {
      tag        = IRQ
      value      = 100
      access     = yes
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = ITA value = -50 }
    relation = { tag = JAP value = -25 }
    relation = { tag = LAT value = 65 }
    relation = { tag = LIT value = 65 }
    relation = { tag = MEX value = 50 }
    relation = { tag = NEP value = 200 access = yes }
    relation = {
      tag        = NOR
      value      = 90
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = NZL value = 200 }
    relation = {
      tag        = OMN
      value      = 150
      access     = yes
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = {
      tag        = PER
      value      = 25
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = POL value = 50 }
    relation = {
      tag        = POR
      value      = 100
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 200 }
    relation = {
      tag        = SAU
      value      = 100
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = {
      tag        = SCH
      value      = 50
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = SIA value = 70 }
    relation = { tag = SPR value = -10 }
    relation = { tag = SOV value = -25 }
    relation = {
      tag        = SWE
      value      = 80
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = {
      tag        = TUR
      value      = 75
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = { tag = USA value = 150 }
    relation = { tag = VEN value = -10 }
    relation = {
      tag        = YEM
      value      = 150
      access     = yes
      guaranteed = { year = 1932 month = december day = 29 }
    }
    relation = {
      tag        = UPE
      value      = 100
      guaranteed = { year = 1936 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 12 }

  nationalprovinces      = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 }
  ownedprovinces         = { 4 5 6 7 11 10 13 15 17 18 24 22 28 25 29 26 27 19 20 36 35 429 348 1011 1010 1024 387 388 1773 1760 1772 1774 1753 1754 1755 1771 1038 2086 1757 1770 1763 1764 1769 1758 2045 1998 1997 1782 1766 1759 900 874 979 964 937 952 955 956 939 929 940 941 930 931 803 804 813 814 805 832 811 812 843 841 842 848 844 807 810 806 808 809 932 859 860 871 869 870 866 867 933 861 863 864 997 849 850 851 938 993 896 23 16 9 12 1371 1435 1436 1437 1438 1432 21 1039 1510 1511 1433 1434 1509 1678 1679 1680 1728 1687 1729 1588 1590 1593 1624 1625 1626 1589 1591 1592 1749 1750 1746 1022 1172 1008 1009 1025 1026 1053 1051 840 998 1611 877 1041 1013 1023 1613 1614 14 8 845 852 839 865 862 936 934 935 954 953 868 }
  controlledprovinces    = { 4 5 6 7 11 10 13 15 17 18 24 22 28 25 29 26 27 19 20 36 35 429 348 1011 1010 1024 387 388 1773 1760 1772 1774 1753 1754 1755 1771 1038 2086 1757 1770 1763 1764 1769 1758 2045 1998 1997 1782 1766 1759 900 874 979 964 937 952 955 956 939 929 940 941 930 931 803 804 813 814 805 832 811 812 843 841 842 848 844 807 810 806 808 809 932 859 860 871 869 870 866 867 933 861 863 864 997 849 850 851 938 993 896 23 16 9 12 1371 1435 1436 1437 1438 1432 21 1039 1510 1511 1433 1434 1509 1678 1679 1680 1728 1687 1729 1588 1590 1593 1624 1625 1626 1589 1591 1592 1749 1750 1746 1022 1172 1008 1009 1025 1026 1053 1051 840 998 1611 877 1041 1013 1023 1613 1614 14 8 845 852 839 865 862 936 934 935 954 953 868 }
  claimedprovinces       = { 348 387 388 429 900 1371 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1172 1038 1039 1041 1051 1053 1432 1433 1434 1435 1436 1437 1438 1624 1625 1626 1997 1998 2045 2086 896 993 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 803 804 805 806 807 808 809 810 811 812 813 814 832 839 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 874 877 840 997 998 1509 1510 1511 1611 1613 1614 1588 1589 1590 1591 1592 1593 1678 1679 1680 1687 1728 1729 1746 1749 1750 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1160 1170 1180 1190 1200 1210 1220 1230 1240 1560 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2646 2290 2300 2310 2900 2910 2920 2800 2450 21180 21190 2810 2820 2510 3610 3620 3630 3640 3650 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3210 3220 3230 3240 3250 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 12100 12110 12120 12130 3510 3520 3720 3730 3736 3740 3750 3900 3810 3820 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4300 4310 4320 4330 4340 4290 4700 4710 4900 4910 4800 4810 4820 4740 4750 4760 5700 5710 5010 5020 5810 5820 5050 5830 5060 5800 5080 5090 5190 5310 54010 54020 54030 5316 5326 5327 5560 5600 5610 5620 5630 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8100 8110 8120 8150 8160 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 8
    free_market       = 9
    professional_army = 2
    defense_lobby     = 3
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 10001 } # George V
  headofgovernment       = { type = 9 id = 10217 } # Ramsay MacDonald
  foreignminister        = { type = 9 id = 10323 } # John Simon
  armamentminister       = { type = 9 id = 10004 } # Neville Chamberlain
  ministerofsecurity     = { type = 9 id = 10329 } # John Gilmour
  ministerofintelligence = { type = 9 id = 10006 } # Hugh Sinclair
  chiefofstaff           = { type = 9 id = 10007 } # A. Montgomery-Massingberd
  chiefofarmy            = { type = 9 id = 10008 } # A. Montgomery-Massingberd
  chiefofnavy            = { type = 9 id = 10009 } # Ernle Chatfield
  chiefofair             = { type = 9 id = 10308 } # John Salmond

  landunit = {
    id       = { type = 12700 id = 1 }
    name     = "Aldershot Command"
    location = 27
    division = {
      id             = { type = 12700 id = 63 }
      name           = "British Army HQ"
      type           = hq
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 12700 id = 2 }
      name           = "1st Infantry Division"
      type           = infantry
      model          = 7
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 3 }
      name           = "2nd Infantry Division"
      type           = infantry
      model          = 7
      extra          = anti_air
      brigade_model  = 1
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 12700 id = 4 }
    name     = "Northern Command"
    location = 18
    division = {
      id             = { type = 12700 id = 5 }
      name           = "5th Infantry Division"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 1501 }
      name           = "49th (West Riding) Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 1502 }
      name           = "50th (Northumbrian) Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 1503 }
      name           = "23rd (Northumbrian) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 1504 }
      name           = "46th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 6 }
    name     = "Southern Command"
    location = 19
    division = {
      id             = { type = 12700 id = 7 }
      name           = "3rd Infantry Division"
      type           = infantry
      model          = 7
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 505 }
      name           = "43rd (Wessex) Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 506 }
      name           = "48th (South Midland) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 507 }
      name           = "45th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 508 }
      name           = "61st Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 509 }
    name     = "Scottish Command"
    location = 12
    division = {
      id             = { type = 12700 id = 510 }
      name           = "51st (Highland) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 511 }
      name           = "52nd (Lowland) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 512 }
      name           = "9th (Highland) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 513 }
      name           = "15th (Scottish) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 514 }
    name     = "Western Command"
    location = 17
    division = {
      id             = { type = 12700 id = 515 }
      name           = "42nd (East Lancashire) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 516 }
      name           = "53rd (Welsh) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 517 }
      name           = "55th (West Lancashire) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 518 }
      name           = "38th (Welsh) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 519 }
      name           = "59th (Staffordshire) Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
    division = {
      id             = { type = 12700 id = 520 }
      name           = "66th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 521 }
    name     = "Eastern Command"
    location = 25
    division = {
      id             = { type = 12700 id = 522 }
      name           = "4th Infantry Division"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 2
      strength       = 90
    }
    division = {
      id             = { type = 12700 id = 523 }
      name           = "44th (Home Counties) Division"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 524 }
      name           = "54th (East Anglian) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 525 }
      name           = "12th (Eastern) Division"
      type           = infantry
      model          = 6
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 526 }
      name           = "18th Division"
      type           = infantry
      model          = 5
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 12700 id = 527 }
    name     = "London District"
    location = 29
    division = {
      id             = { type = 12700 id = 528 }
      name           = "1st (London) Division"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 10
    }
    division = {
      id             = { type = 12700 id = 529 }
      name           = "2nd (London) Division"
      type           = infantry
      model          = 6
      extra          = anti_air
      brigade_model  = 0
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12700 id = 8 }
    name     = "China Command"
    location = 1371
    division = {
      id             = { type = 12700 id = 9 }
      name           = "Hong Kong Defence Force"
      type           = garrison
      model          = 3
      strength       = 75
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 10 }
    name     = "Malaya Command"
    location = 1432
    division = {
      id             = { type = 12700 id = 11 }
      name           = "Singapore Fortress"
      type           = garrison
      model          = 3
      strength       = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 282 }
    name     = "Royal West African Frontier Force"
    location = 929
    division = {
      id             = { type = 12700 id = 283 }
      name           = "The Nigeria Regiment"
      type           = militia
      model          = 3
      strength       = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 12 }
    name     = "British Troops on Gibraltar"
    location = 348
    division = {
      id             = { type = 12700 id = 13 }
      name           = "Gibraltar Defence Force"
      type           = garrison
      model          = 3
      strength       = 25
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 14 }
    name     = "Ceylon Command"
    location = 1511
    division = {
      id             = { type = 12700 id = 15 }
      name           = "Ceylon Defence Force"
      type           = militia
      model          = 3
      strength       = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 16 }
    name     = "Malta Command"
    location = 429
    division = {
      id             = { type = 12700 id = 17 }
      name           = "Malta Defence Force"
      type           = garrison
      model          = 3
      strength       = 35
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 18 }
    name     = "Middle East Command"
    location = 789
    division = {
      id             = { type = 12700 id = 19 }
      name           = "7th Infantry Division"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 1
      strength       = 85
    }
  }
  landunit = {
    id       = { type = 12700 id = 530 }
    name     = "British Forces in Palestine and Transjordan"
    location = 1172
    division = {
      id             = { type = 12700 id = 531 }
      name           = "8th Infantry Division"
      type           = infantry
      model          = 7
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 12700 id = 43 }
    name     = "Gold Coast Defence Force"
    location = 956
    division = {
      id             = { type = 12700 id = 44 }
      name           = "The Gold Coast Regiment"
      type           = militia
      model          = 3
      strength       = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 45 }
    name     = "British troops in the Sudan"
    location = 810
    division = {
      id             = { type = 12700 id = 46 }
      name           = "Sudan Defence Force"
      type           = militia
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 12700 id = 47 }
    name     = "Southern Rhodesia Defence Force"
    location = 867
    division = {
      id             = { type = 12700 id = 48 }
      name           = "Southern Rhodesia Defence Force"
      type           = militia
      model          = 3
      strength       = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 55 }
    name     = "East Africa Force"
    location = 841
    division = {
      id             = { type = 12700 id = 56 }
      name           = "King's African Rifles"
      type           = militia
      model          = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 12700 id = 532 }
    name     = "British Troops on Jamaica"
    location = 1782
    division = {
      id             = { type = 12700 id = 533 }
      name           = "Jamaica Defence Force"
      type           = militia
      model          = 3
      strength       = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 534 }
    name     = "British Colony of Bermuda"
    location = 1773
    division = {
      id             = { type = 12700 id = 535 }
      name           = "Bermuda Volunteer Rifle Corps"
      type           = militia
      model          = 3
      strength       = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 536 }
    name     = "British Troops in Somaliland"
    location = 832
    division = {
      id             = { type = 12700 id = 537 }
      name           = "Somaliland Camel Corps"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 12700 id = 538 }
    name     = "British Troops in Sierra Leone"
    location = 964
    division = {
      id             = { type = 12700 id = 539 }
      name           = "The Sierra Leone Battalion"
      type           = militia
      model          = 3
      strength       = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 540 }
    name     = "British Troops in Fiji"
    location = 1728
    division = {
      id             = { type = 12700 id = 541 }
      name           = "Fiji Defence Force"
      type           = militia
      model          = 3
      strength       = 10
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 12700 id = 84 }
    name     = "Home Fleet"
    location = 5
    base     = 5
    division = {
      id             = { type = 12700 id = 85 }
      name           = "HMS Nelson"
      type           = battleship
      model          = 6
      extra1         = floatplane
      brigade_model1 = 5
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 86 }
      name           = "HMS Rodney"
      type           = battleship
      model          = 6
      extra1         = floatplane
      brigade_model1 = 5
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 87 }
      name           = "HMS Royal Sovereign"
      type           = battleship
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 89 }
      name           = "HMS Resolution"
      type           = battleship
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 90 }
      name           = "HMS Ramillies"
      type           = battleship
      model          = 4
      extra1         = naval_anti_air_l
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 150 }
      name           = "HMS Valiant"
      type           = battleship
      model          = 4
      extra1         = floatplane
      extra2         = naval_anti_air_l
      extra3         = naval_improved_hull_l
      brigade_model1 = 5
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 152 }
      name           = "HMS Warspite"
      type           = battleship
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 91 }
      name           = "HMS Hood"
      type           = battlecruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 5
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 92 }
      name           = "HMS Renown"
      type           = battlecruiser
      model          = 1
      extra1         = naval_anti_air_l
      extra2         = naval_improved_hull_l
      extra3         = naval_fire_controll_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 94 }
      name           = "HMS Repulse"
      type           = battlecruiser
      model          = 1
      extra1         = naval_improved_hull_l
      extra2         = naval_fire_controll_l
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 93 }
      name           = "HMS Furious"
      type           = carrier
      model          = 0
      extra1         = cag
      extra2         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 154 }
      name           = "HMS Courageous"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 105 }
      name           = "HMS Argus"
      type           = escort_carrier
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 255 }
      name           = "HMS Pegasus"
      type           = escort_carrier
      model          = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 160 }
      name           = "HMS Exeter"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      extra2         = naval_improved_hull_s
      brigade_model1 = 4
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 178 }
      name           = "HMS Dragon"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 96 }
      name           = "HMS Cairo"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 213 }
      name           = "HMS Caledon"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 214 }
      name           = "HMS Calypso"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 215 }
      name           = "HMS Caradoc"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 216 }
      name           = "HMS Calcutta"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 220 }
      name           = "HMS Curacoa"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2223 }
      name           = "Destroyer Division 11"
      type           = destroyer
      model          = 3
      extra1         = naval_asw
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2224 }
      name           = "Destroyer Division 12"
      type           = destroyer
      model          = 3
      extra1         = naval_asw
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2227 }
      name           = "Destroyer Division 15"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2228 }
      name           = "Destroyer Division 16"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 225 }
      name           = "Destroyer Division 21"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 224 }
      name           = "Destroyer Division 22"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 144 }
      name           = "Destroyer Division 33"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 145 }
      name           = "Destroyer Division 34"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 146 }
      name           = "Destroyer Division 25"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 107 }
      name           = "6th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 108 }
      name           = "I/2nd Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 109 }
      name           = "II/2nd Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 110 }
      name           = "III/2nd Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 116 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 117 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 122 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 104 }
    name     = "Rosyth Command"
    location = 12
    base     = 5
    division = {
      id             = { type = 12700 id = 2221 }
      name           = "Destroyer Division 29"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 2222 }
      name           = "Destroyer Division 30"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 114 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 119 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 106 }
    name     = "Nore Command"
    location = 26
    base     = 26
    division = {
      id             = { type = 12700 id = 131 }
      name           = "Destroyer Division 37"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 132 }
      name           = "Destroyer Division 38"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 120 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 121 }
      name           = "7th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 124 }
      name           = "8th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 125 }
      name           = "9th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 112 }
    name     = "Portsmouth Command"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 135 }
      name           = "Destroyer Division 35"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 136 }
      name           = "Destroyer Division 36"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 138 }
      name           = "Destroyer Division 31"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 139 }
      name           = "Destroyer Division 32"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 111 }
      name           = "I/5th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 175 }
      name           = "II/5th Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 113 }
      name           = "10th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 127 }
      name           = "11th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 128 }
      name           = "12th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 129 }
      name           = "13th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 147 }
    name     = "Mediterranean Fleet"
    location = 429
    base     = 429
    division = {
      id             = { type = 12700 id = 88 }
      name           = "HMS Royal Oak"
      type           = battleship
      model          = 4
      extra1         = naval_anti_air_l
      extra2         = naval_improved_hull_l
      extra3         = naval_fire_controll_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 148 }
      name           = "HMS Queen Elizabeth"
      type           = battleship
      model          = 4
      extra1         = naval_anti_air_l
      extra2         = naval_improved_hull_l
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 153 }
      name           = "HMS Revenge"
      type           = battleship
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 151 }
      name           = "HMS Malaya"
      type           = battleship
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 155 }
      name           = "HMS Glorious"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 195 }
      name           = "HMS Eagle"
      type           = escort_carrier
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 157 }
      name           = "HMS London"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 158 }
      name           = "HMS Shropshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 159 }
      name           = "HMS Sussex"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 542 }
      name           = "HMS Dunedin"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 162 }
      name           = "HMS Coventry"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 164 }
      name           = "HMS Delhi"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 133 }
      name           = "Destroyer Division 1"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 141 }
      name           = "Destroyer Division 2"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 142 }
      name           = "Destroyer Division 3"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 180 }
      name           = "Destroyer Division 5"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 181 }
      name           = "Destroyer Division 6"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 185 }
      name           = "Destroyer Division 7"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 186 }
      name           = "Destroyer Division 8"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 176 }
      name           = "I/1st Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 200 }
      name           = "II/1st Submarine Flotilla"
      type           = submarine
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 543 }
      name           = "14th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 544 }
      name           = "15th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 545 }
      name           = "16th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 546 }
      name           = "17th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 174 }
    name     = "South Atlantic Division"
    location = 964
    base     = 964
    division = {
      id             = { type = 12700 id = 165 }
      name           = "HMS Despatch"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 166 }
      name           = "HMS Durban"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 222 }
      name           = "HMS Dauntless"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 192 }
      name           = "Destroyer Division 4"
      type           = destroyer
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 548 }
      name           = "18th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 177 }
    name     = "America & West Indies Station"
    location = 1773
    base     = 1773
    division = {
      id             = { type = 12700 id = 188 }
      name           = "HMS Norfolk"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 161 }
      name           = "HMS York"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 221 }
      name           = "HMS Danae"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 549 }
      name           = "19th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 182 }
    name     = "Africa Station"
    location = 880
    base     = 880
    division = {
      id             = { type = 12700 id = 206 }
      name           = "HMS Dorsetshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 184 }
      name           = "HMS Carlisle"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 218 }
      name           = "HMS Cardiff"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 550 }
      name           = "36th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 187 }
    name     = "East Indies Station"
    location = 1511
    base     = 1511
    division = {
      id             = { type = 12700 id = 207 }
      name           = "HMS Hawkins"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 190 }
      name           = "HMS Emerald"
      type           = light_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 191 }
      name           = "HMS Enterprise"
      type           = light_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 196 }
      name           = "HMS Capetown"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 217 }
      name           = "HMS Colombo"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 551 }
      name           = "29th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 194 }
    name     = "China Station"
    location = 1432
    base     = 1432
    division = {
      id             = { type = 12700 id = 203 }
      name           = "HMS Hermes"
      type           = escort_carrier
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 156 }
      name           = "HMS Devonshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 208 }
      name           = "HMS Berwick"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 209 }
      name           = "HMS Cornwall"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 210 }
      name           = "HMS Cumberland"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 211 }
      name           = "HMS Suffolk"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 212 }
      name           = "HMS Kent"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 552 }
      name           = "HMS Cavendish"
      type           = heavy_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 197 }
      name           = "Destroyer Division 41"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 198 }
      name           = "Destroyer Division 42"
      type           = destroyer
      model          = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 201 }
      name           = "I/4th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 553 }
      name           = "II/4th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 554 }
      name           = "III/4th Submarine Flotilla"
      type           = submarine
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 555 }
      name           = "20th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 556 }
      name           = "21st Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 557 }
      name           = "22nd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 558 }
      name           = "23rd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 559 }
      name           = "24th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 560 }
      name           = "25th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 561 }
      name           = "26th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 562 }
      name           = "27th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 563 }
      name           = "28th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 202 }
    name     = "Reserve Fleet"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 204 }
      name           = "HMS Effingham"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 205 }
      name           = "HMS Frobisher"
      type           = heavy_cruiser
      model          = 3
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 564 }
      name           = "HMS Erebus"
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 565 }
      name           = "HMS Terror"
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 219 }
      name           = "HMS Ceres"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 163 }
      name           = "HMS Curlew"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 189 }
      name           = "HMS Centaur"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 167 }
      name           = "HMS Concord"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 179 }
      name           = "HMS Cambrian"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 183 }
      name           = "HMS Canterbury"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 97 }
      name           = "HMS Castor"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 98 }
      name           = "HMS Constance"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 99 }
      name           = "HMS Champion"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 100 }
      name           = "HMS Comus"
      type           = light_cruiser
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 103 }
      name           = "Destroyer Division 9"
      type           = destroyer
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 102 }
      name           = "Destroyer Division 10"
      type           = destroyer
      model          = 2
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 566 }
      name           = "30th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 12700 id = 199 }
    name     = "Royal Fleet Auxiliary"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 574 }
      name           = "31st Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 567 }
      name           = "32nd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 568 }
      name           = "33rd Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 569 }
      name           = "34th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 570 }
      name           = "35th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 571 }
      name           = "37th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 572 }
      name           = "38th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
    division = {
      id             = { type = 12700 id = 573 }
      name           = "39th Transport Flotilla"
      type           = transport
      model          = 1
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 12700 id = 67 }
    name     = "Wessex Bombing Area"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 64 }
      name           = "Wessex Bombing Area"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 65 }
    name     = "Coastal Area"
    location = 27
    base     = 27
    division = {
      id             = { type = 12700 id = 66 }
      name           = "Coastal Area"
      type           = naval_bomber
      model          = 1
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 12700 id = 72 }
    name     = "Air Defence Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 12700 id = 73 }
      name           = "Air Defence Group"
      type           = multi_role
      model          = 3
      strength       = 45
    }
  }
  airunit = { 
    id       = { type = 12700 id = 76 }
    name     = "Fighting Area"
    location = 26
    base     = 26
    division = {
      id             = { type = 12700 id = 77 }
      name           = "Fighting Area"
      type           = interceptor
      model          = 7
      strength       = 90
    }
  }
  airunit = { 
    id       = { type = 12700 id = 78 }
    name     = "Inland Area"
    location = 26
    base     = 26
    division = {
      id             = { type = 12700 id = 79 }
      name           = "Inland Area"
      type           = transport_plane
      model          = 0
      strength       = 10
    }
  }

  division_development = {
    id             = { type = 12700 id = 149 }
    name           = "HMS Barham"
    type           = battleship
    model          = 4
    cost           = 0.5
    unitcost       = no
    new_model      = no
    date           = { year = 1934 month = january day = 1 }
    extra1         = naval_anti_air_l
    extra2         = naval_fire_controll_l
    extra3         = floatplane
    brigade_model3 = 4
  }
  division_development = {
    id             = { type = 12700 id = 227 }
    name           = "Destroyer Division 39"
    type           = destroyer
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1934 month = april day = 1 }
  }
  division_development = {
    id             = { type = 12700 id = 228 }
    name           = "3rd Submarine Flotilla"
    type           = submarine
    model          = 3
    cost           = 0.1
    new_model      = no
    date           = { year = 1933 month = july day = 3 }
  }
  division_development = {
    id             = { type = 12700 id = 229 }
    name           = "HMS Orion"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1934 month = january day = 18 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 12700 id = 230 }
    name           = "HMS Neptune"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1934 month = february day = 12 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 12700 id = 231 }
    name           = "HMS Arethusa"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1935 month = may day = 23 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 12700 id = 232 }
    name           = "HMS Ajax"
    type           = light_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1935 month = june day = 3 }
    extra1         = floatplane
    brigade_model1 = 4
  }

  landdivision = { dormant = yes id = { type = 12700 id = 10001 } name = "1. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10002 } name = "2. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10003 } name = "3. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10004 } name = "4. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10005 } name = "5. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10006 } name = "6. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10007 } name = "7. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10008 } name = "8. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10009 } name = "9. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10010 } name = "10. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10011 } name = "11. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10012 } name = "12. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10013 } name = "13. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10014 } name = "14. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10015 } name = "15. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10016 } name = "16. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10017 } name = "17. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 12700 id = 10018 } name = "18. Home Guard"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
}
