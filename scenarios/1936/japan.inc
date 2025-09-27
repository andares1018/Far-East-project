##############################
# Country definition for JAP #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  belligerence       = 10
  capital            = 1552 # Tokyo
  manpower           = 686
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 600
  escorts        = 100

  diplomacy = {
    relation = { tag = BEL value = -25 }
    relation = { tag = CGX value = -75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CHL value = 20 }
    relation = { tag = CSX value = -100 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = U67 value = -200 }
    relation = { tag = ENG value = -25 }
    relation = { tag = ETH value = 35 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = -20 }
    relation = { tag = GER value = 20 }
    relation = { tag = HOL value = -50 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = PHI value = 1 }
    relation = { tag = SIA value = 75 }
    relation = { tag = SOV value = -10 }
    relation = { tag = USA value = 15 }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 9 }

  nationalprovinces      = { 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1672 1541 1542 1228 1229 1230 1231 1232 1233 1221 1222 1223 1224 1225 1226 1227 1361 1362 1363 1364 }
  ownedprovinces         = { 1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 1222 1229 1363 1216 1235 1236 1240 1362 }
  controlledprovinces    = { 1219 1221 1223 1224 1225 1226 1227 1228 1230 1231 1232 1233 1361 1362 1364 1542 1543 1544 1545 1546 1547 1548 1549 1550 1551 1552 1553 1554 1555 1556 1557 1558 1559 1560 1561 1562 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 1222 1229 1363 1216 1235 1236 1240 }
  claimedprovinces       = { 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 1219 1216 1235 1236 1683 1338 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1560 1570 1580 1590 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 7600 7610 2620 2010 2630 2640 2646 2650 2860 2870 2880 2020 2290 2300 2310 2900 2910 2920 2800 2450 21180 21190 2810 2820 2510 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3510 3520 3530 12100 12110 12120 12130 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3760 3900 3810 3820 4400 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4700 4710 4190 4290 4300 4310 4320 4330 4340 4740 4750 4760 4770 4780 4800 4810 4820 4900 4910 4920 5700 5710 5010 5810 5820 5050 5830 5800 5080 5090 5310 54010 54020 54030 5316 5326 5327 5600 5610 5620 5560 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6390 6400 6420 14000 14010 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 81650 81700 81710 81850 81860 82300 82310 82500 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 }
  blueprints             = { 81730 81740 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 2
    freedom           = 3
    free_market       = 6
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 50001 } # Hirohito
  headofgovernment       = { type = 9 id = 50049 } # Okada Keisuke
  foreignminister        = { type = 9 id = 50074 } # Hirota Koki
  armamentminister       = { type = 9 id = 50121 } # Takahashi Korekiyo
  ministerofsecurity     = { type = 9 id = 50225 } # Goto Fumio
  ministerofintelligence = { type = 9 id = 50222 } # Okamura Yasuji
  chiefofstaff           = { type = 9 id = 50304 } # Kanin Kotohito
  chiefofarmy            = { type = 9 id = 50325 } # Kawashima Yoshiyuki
  chiefofnavy            = { type = 9 id = 50357 } # Osumi Mineo
  chiefofair             = { type = 9 id = 50392 } # Yamamoto Isoroku

  landunit = {
    id       = { type = 13016 id = 1 }
    name     = "Kantogun"
    location = 1208
    division = {
      id             = { type = 13016 id = 2 }
      name           = "Kantogun saiko shireibu"
      type           = hq
      model          = 2
      strength       = 40
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 3 }
    name     = "Kihei gurupu"
    location = 1209
    division = {
      id             = { type = 13016 id = 4 }
      name           = "Dai 1 Kihei ryodan"
      type           = cavalry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 5 }
      name           = "Dai 3 Kihei ryodan"
      type           = cavalry
      model          = 9
      strength       = 55
    }
    division = {
      id             = { type = 13016 id = 6 }
      name           = "Dai 4 Kihei ryodan"
      type           = cavalry
      model          = 9
      extra          = engineer
      brigade_model  = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 7 }
    name     = "Tokyo keibi shireibu"
    location = 1552
    division = {
      id             = { type = 13016 id = 8 }
      name           = "Daihon'ei"
      type           = hq
      model          = 2
      extra          = anti_air
      brigade_model  = 1
      strength       = 40
    }
    division = {
      id             = { type = 13016 id = 9 }
      name           = "Konoe Shidan"
      type           = infantry
      model          = 8
      extra1         = artillery
      extra2         = anti_air
      brigade_model1 = 6
      brigade_model2 = 1
      strength       = 100
      experience     = 35
    }
    division = {
      id             = { type = 13016 id = 10 }
      name           = "Dai 2 Kihei ryodan"
      type           = cavalry
      model          = 9
      extra          = light_armor_brigade
      brigade_model  = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 11 }
    name     = "Kure Kaigunku"
    location = 1554
    division = {
      id             = { type = 13016 id = 12 }
      name           = "Kure Rikusentai"
      type           = marine
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13016 id = 13 }
    name     = "Maizuru Kaigunku"
    location = 1558
    division = {
      id             = { type = 13016 id = 14 }
      name           = "Maizuru Rikusentai"
      type           = marine
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13016 id = 15 }
    name     = "Sasebo Kaigunku"
    location = 1560
    division = {
      id             = { type = 13016 id = 16 }
      name           = "Sasebo Rikusentai"
      type           = marine
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 13016 id = 17 }
    name     = "Yokosuka Kaigunku"
    location = 1552
    division = {
      id             = { type = 13016 id = 18 }
      name           = "Yokosuka Rikusentai"
      type           = marine
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 13016 id = 19 }
      name           = "Shanghai Rikusentai"
      type           = marine
      model          = 2
      strength       = 17
    }
  }
  landunit = {
    id       = { type = 13016 id = 20 }
    name     = "Ryojun Kaigunku"
    location = 1219
    division = {
      id             = { type = 13016 id = 21 }
      name           = "Ryojun Rikusentai"
      type           = garrison
      model          = 3
      strength       = 15
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 22 }
    name     = "Uchi komu ko gun"
    location = 1209
    division = {
      id             = { type = 13016 id = 23 }
      name           = "Uchi komu ko gun"
      type           = cavalry
      model          = 7
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 24 }
    name     = "Higashi no Kawakita gun"
    location = 1245
    division = {
      id             = { type = 13016 id = 25 }
      name           = "Dai 1 Tai"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 26 }
      name           = "Dai 2 Tai"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 27 }
      name           = "Dai 3 Tai"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 28 }
      name           = "Dai 4 Tai"
      type           = militia
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 29 }
      name           = "Kunren tai"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13016 id = 30 }
    name     = "Dai 1 'Tokyo' Shidan"
    location = 1552
    division = {
      id             = { type = 13016 id = 45 }
      name           = "1 Ryodan"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 46 }
      name           = "2 Ryodan"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 31 }
    name     = "Dai 2 'Sendai' Shidan"
    location = 1208
    division = {
      id             = { type = 13016 id = 47 }
      name           = "15 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 48 }
      name           = "3 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 32 }
    name     = "Dai 3 'Nagoya' Shidan"
    location = 1557
    division = {
      id             = { type = 13016 id = 49 }
      name           = "5 Ryodan"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 50 }
      name           = "29 Ryodan"
      type           = infantry
      model          = 7
      extra          = armored_car
      brigade_model  = 2
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 33 }
    name     = "Dai 4 'Osaka' Shidan"
    location = 1553
    division = {
      id             = { type = 13016 id = 51 }
      name           = "7 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 52 }
      name           = "32 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 34 }
    name     = "Dai 5 'Hiroshima' Shidan"
    location = 1554
    division = {
      id             = { type = 13016 id = 53 }
      name           = "9 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 54 }
      name           = "21 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 35 }
    name     = "Dai 6 'Kumamoto' Shidan"
    location = 1561
    division = {
      id             = { type = 13016 id = 55 }
      name           = "11 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 56 }
      name           = "36 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 36 }
    name     = "Dai 7 'Asahikawa' Shidan"
    location = 1545
    division = {
      id             = { type = 13016 id = 57 }
      name           = "13 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 58 }
      name           = "14 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 37 }
    name     = "Dai 8 'Hirosaki' Shidan"
    location = 1235
    division = {
      id             = { type = 13016 id = 59 }
      name           = "4 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 60 }
      name           = "16 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 38 }
    name     = "Dai 9 'Kanazawa' Shidan"
    location = 1556
    division = {
      id             = { type = 13016 id = 61 }
      name           = "6 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 62 }
      name           = "18 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 39 }
    name     = "Dai 10 'Himeji' Shidan"
    location = 1555
    division = {
      id             = { type = 13016 id = 63 }
      name           = "33 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 64 }
      name           = "8 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 77 }
    name     = "Dai 11 'Zentsuji' Shidan"
    location = 1559
    division = {
      id             = { type = 13016 id = 65 }
      name           = "10 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 66 }
      name           = "22 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 40 }
    name     = "Dai 12 'Kurume' Shidan"
    location = 1560
    division = {
      id             = { type = 13016 id = 67 }
      name           = "12 Ryodan"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 68 }
      name           = "24 Ryodan"
      type           = infantry
      model          = 7
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 41 }
    name     = "Dai 14 'Utsunomiya' Shidan"
    location = 1208
    division = {
      id             = { type = 13016 id = 69 }
      name           = "27 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 70 }
      name           = "28 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 42 }
    name     = "Dai 16 'Kyoto' Shidan"
    location = 1558
    division = {
      id             = { type = 13016 id = 71 }
      name           = "30 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 72 }
      name           = "19 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 43 }
    name     = "Dai 19 'Ranan' Shidan"
    location = 1208
    division = {
      id             = { type = 13016 id = 73 }
      name           = "38 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 74 }
      name           = "37 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 44 }
    name     = "Dai 20 'Keijo' Shidan"
    location = 1228
    division = {
      id             = { type = 13016 id = 75 }
      name           = "39 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 76 }
      name           = "40 Ryodan"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 78 }
    name     = "Taiwan gun"
    location = 1362
    division = {
      id             = { type = 13016 id = 79 }
      name           = "Forumosa Ryodan"
      type           = infantry
      model          = 7
      strength       = 30
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 80 }
    name     = "11 Konseiryodan"
    location = 1208
    division = {
      id             = { type = 13016 id = 81 }
      name           = "11 Konseiryodan"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 82 }
    name     = "Chosen gun"
    location = 1228
    division = {
      id             = { type = 13016 id = 83 }
      name           = "19 Rusushidan"
      type           = garrison
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 84 }
      name           = "20 Rusushidan"
      type           = garrison
      model          = 3
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 13016 id = 85 }
    name     = "Shina chutongun"
    location = 1245
    division = {
      id             = { type = 13016 id = 86 }
      name           = "Dokuritsu konsei 11 ryodan"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 6
      strength       = 70
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 13016 id = 112 }
    name     = "Dai 1 Koku Sentai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 175 }
      name           = "Akagi"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 13016 id = 177 }
      name           = "Kaga"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 13016 id = 163 }
      name           = "Myoko"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 164 }
      name           = "Ashigara"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 131 }
      name           = "Tama"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 132 }
      name           = "Kitakami"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 127 }
      name           = "Tatsuta"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 182 }
      name           = "Dai 1 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 116 }
    name     = "Dai 2 Koku Sentai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 179 }
      name           = "Ryujo"
      type           = light_carrier
      model          = 0
      extra1         = light_cag
      brigade_model1 = 2
    }
    division = {
      id             = { type = 13016 id = 170 }
      name           = "Mikuma"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 171 }
      name           = "Mogami"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 150 }
      name           = "Yubari"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 151 }
      name           = "Isuzu"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 197 }
      name           = "Dai 2 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 198 }
      name           = "Dai 3 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 201 }
      name           = "Dai 4 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 120 }
    name     = "Dai 1 Senkan Sentai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 123 }
      name           = "Nagato"
      type           = battleship
      model          = 5
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = floatplane
      brigade_model3 = 4
    }
    division = {
      id             = { type = 13016 id = 173 }
      name           = "Hosho"
      type           = escort_carrier
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 166 }
      name           = "Takao"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 167 }
      name           = "Chokai"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 145 }
      name           = "Natori"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 146 }
      name           = "Kinu"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 207 }
      name           = "Dai 5 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 215 }
      name           = "Dai 6 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 205 }
      name           = "Dai 7 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 124 }
    name     = "Dai 2 Senkan Sentai"
    location = 1559
    base     = 1559
    division = {
      id             = { type = 13016 id = 121 }
      name           = "Ise"
      type           = battleship
      model          = 4
      extra1         = naval_improved_hull_l
      extra2         = naval_anti_air_l
      extra3         = floatplane
      brigade_model3 = 4
    }
    division = {
      id             = { type = 13016 id = 122 }
      name           = "Hyuga"
      type           = battleship
      model          = 4
      extra1         = naval_improved_hull_l
      extra2         = naval_anti_air_l
      extra3         = floatplane
      brigade_model3 = 4
    }
    division = {
      id             = { type = 13016 id = 260 }
      name           = "Kamoi"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 156 }
      name           = "Kako"
      type           = heavy_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 133 }
      name           = "Furutaka"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 130 }
      name           = "Kuma"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 161 }
      name           = "Naka"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 214 }
      name           = "Dai 8 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 206 }
      name           = "Dai 9 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 196 }
      name           = "Dai 10 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 126 }
    name     = "Dai 3 Senkan Sentai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 115 }
      name           = "Haruna"
      type           = battlecruiser
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 4
    }
    division = {
      id             = { type = 13016 id = 165 }
      name           = "Atago"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 169 }
      name           = "Maya"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 213 }
      name           = "Dai 11 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 186 }
      name           = "Dai 12 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 200 }
      name           = "Dai 13 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 199 }
      name           = "Dai 14 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 172 }
    name     = "Dai 4 Senkan Sentai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 118 }
      name           = "Fuso"
      type           = battleship
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 4
    }
    division = {
      id             = { type = 13016 id = 119 }
      name           = "Yamashiro"
      type           = battleship
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 4
    }
    division = {
      id             = { type = 13016 id = 261 }
      name           = "Notoro"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 157 }
      name           = "Aoba"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 158 }
      name           = "Kinugasa"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 137 }
      name           = "Nagara"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 140 }
      name           = "Yura"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 194 }
      name           = "Dai 15 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 181 }
      name           = "Dai 16 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 183 }
      name           = "Dai 17 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 193 }
    name     = "Dai 5 Sentai"
    location = 1553
    base     = 1553
    division = {
      id             = { type = 13016 id = 159 }
      name           = "Nachi"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 160 }
      name           = "Haguro"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 135 }
      name           = "Kiso"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 136 }
      name           = "Oi"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 139 }
      name           = "Tenryu"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 152 }
      name           = "Sendai"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 153 }
      name           = "Abukuma"
      type           = light_cruiser
      model          = 3
      extra1         = floatplane
      extra2         = naval_torpedoes_s
      brigade_model1 = 3
      brigade_model2 = 0
    }
    division = {
      id             = { type = 13016 id = 154 }
      name           = "Jintsu"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 184 }
      name           = "Dai 18 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 185 }
      name           = "Dai 19 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 231 }
    name     = "Dai 7 sentai"
    location = 1560
    base     = 1560
    division = {
      id             = { type = 13016 id = 148 }
      name           = "Asama"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 258 }
      name           = "Iwate"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 138 }
      name           = "Izumo"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 2249 }
      name           = "Dai 20 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2250 }
      name           = "Dai 21 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 212 }
    name     = "Dai 9 Sentai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 259 }
      name           = "Tokiwa"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 262 }
      name           = "Yakumo"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 129 }
      name           = "Yahagi"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 128 }
      name           = "Hirado"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 2253 }
      name           = "Dai 22 Kuchikusentai"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 2246 }
      name           = "Dai 23 Kuchikusentai"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 2247 }
      name           = "Dai 24 Kuchikusentai"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 280 }
    name     = "Dai 1 Sensui Kantai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 281 }
      name           = "Dai 1 Sensuisentai"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 282 }
      name           = "Dai 2 Sensuisentai"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 283 }
      name           = "Dai 3 Sensuisentai"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 284 }
      name           = "Dai 4 Sensuisentai"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 285 }
    name     = "Dai 2 Sensui Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 286 }
      name           = "Dai 5 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 287 }
      name           = "Dai 6 Sensuisentai"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 288 }
      name           = "Dai 7 Sensuisentai"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 300 }
    name     = "Dai 3 Sensui Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 289 }
      name           = "Dai 8 Sensuisentai"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 290 }
      name           = "Dai 9 Sensuisentai"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 291 }
      name           = "Dai 10 Sensuisentai"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 292 }
      name           = "Dai 11 Sensuisentai"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 293 }
    name     = "Dai 4 Sensui Kantai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 294 }
      name           = "I-5"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 295 }
      name           = "I-6"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 296 }
      name           = "I-7"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 297 }
      name           = "Dai 13 Sensuisentai"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1508 }
    name     = "Dai 1 Yuso Kantai"
    location = 1553
    base     = 1553
    division = {
      id             = { type = 13016 id = 2254 }
      name           = "Dai 25 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 187 }
      name           = "Dai 1 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 188 }
      name           = "Dai 2 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 189 }
      name           = "Dai 3 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 221 }
      name           = "Dai 16 Yuso Sentai"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1510 }
    name     = "Dai 2 Yuso Kantai"
    location = 1553
    base     = 1553
    division = {
      id             = { type = 13016 id = 2255 }
      name           = "Dai 26 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 192 }
      name           = "Dai 6 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 191 }
      name           = "Dai 5 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 190 }
      name           = "Dai 4 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 224 }
      name           = "Dai 19 Yuso Sentai"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2244 }
    name     = "Dai 3 Yuso Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 2256 }
      name           = "Dai 27 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 218 }
      name           = "Dai 14 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 219 }
      name           = "Dai 15 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 222 }
      name           = "Dai 17 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 223 }
      name           = "Dai 18 Yuso Sentai"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2259 }
    name     = "Dai 4 Yuso Kantai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 2257 }
      name           = "Dai 28 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 202 }
      name           = "Dai 7 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 203 }
      name           = "Dai 8 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 216 }
      name           = "Dai 20 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 217 }
      name           = "Dai 13 Yuso Sentai"
      type           = transport
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 204 }
    name     = "Dai 5 Yuso Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 2258 }
      name           = "Dai 29 Kuchikusentai"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 211 }
      name           = "Dai 12 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 208 }
      name           = "Dai 9 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 209 }
      name           = "Dai 10 Yuso Sentai"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 210 }
      name           = "Dai 11 Yuso Sentai"
      type           = transport
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 13016 id = 236 }
    name     = "Dai 1 Nihon Kokutai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 237 }
      name           = "Dai 1 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 13016 id = 238 }
    name     = "Dai 2 Nihon Kokutai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 239 }
      name           = "Dai 2 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 13016 id = 240 }
    name     = "Dai 1 Kokutai"
    location = 1219
    base     = 1219
    division = {
      id             = { type = 13016 id = 241 }
      name           = "Dai 3 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 13016 id = 242 }
    name     = "Dai 3 Nihon Kokutai"
    location = 1219
    base     = 1219
    division = {
      id             = { type = 13016 id = 243 }
      name           = "Dai 4 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 13016 id = 244 }
    name     = "Dai 2 Kokutai"
    location = 1219
    base     = 1219
    division = {
      id             = { type = 13016 id = 245 }
      name           = "Dai 5 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 13016 id = 246 }
    name     = "Dai 4 Nihon Kokutai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 247 }
      name           = "Dai 13 Kaigunkogeki Hikodan"
      type           = naval_bomber
      model          = 1
    }
  }
  airunit = { 
    id       = { type = 13016 id = 248 }
    name     = "Dai 5 Nihon Kokutai"
    location = 1219
    base     = 1219
    division = {
      id             = { type = 13016 id = 249 }
      name           = "Dai 33 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 2
    }
  }
  airunit = { 
    id       = { type = 13016 id = 250 }
    name     = "Dai 1 Kyokuchi Hikodan"
    location = 1199
    base     = 1199
    division = {
      id             = { type = 13016 id = 251 }
      name           = "Dai 1 Kyokuchi Hikodan"
      type           = interceptor
      model          = 7
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 252 }
    name     = "Dai 2 Kyokuchi Hikodan"
    location = 1199
    base     = 1199
    division = {
      id             = { type = 13016 id = 253 }
      name           = "Dai 2 Kyokuchi Hikodan"
      type           = interceptor
      model          = 7
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 254 }
    name     = "Dai 3 Kyokuchi Hikodan"
    location = 1219
    base     = 1219
    division = {
      id             = { type = 13016 id = 255 }
      name           = "Dai 3 Kyokuchi Hikodan"
      type           = interceptor
      model          = 7
      strength       = 85
    }
  }
  airunit = { 
    id       = { type = 13016 id = 256 }
    name     = "Dai 4 Kyokuchi Hikodan"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 257 }
      name           = "Dai 4 Kyokuchi Hikodan"
      type           = interceptor
      model          = 6
      strength       = 85
    }
  }

  division_development = {
    id             = { type = 13016 id = 263 }
    name           = "Soryu"
    type           = carrier
    model          = 2
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = december day = 20 }
    extra1         = cag
    brigade_model1 = 2
  }
  division_development = {
    id             = { type = 13016 id = 264 }
    name           = "Kumano"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = october day = 1 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 265 }
    name           = "Suzuya"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1937 month = october day = 29 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 266 }
    name           = "Tone"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1938 month = november day = 20 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 267 }
    name           = "Chikuma"
    type           = heavy_cruiser
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1939 month = may day = 20 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 268 }
    name           = "Dai 30 Kuchikusentai"
    type           = destroyer
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = march day = 1 }
  }
  division_development = {
    id             = { type = 13016 id = 368 }
    name           = "Dai 31 Kuchikusentai"
    type           = destroyer
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = june day = 1 }
  }
  division_development = {
    id             = { type = 13016 id = 468 }
    name           = "Dai 32 Kuchikusentai"
    type           = destroyer
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1936 month = september day = 1 }
  }
  division_development = {
    id             = { type = 13016 id = 113 }
    name           = "Kongo"
    type           = battlecruiser
    model          = 3
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1937 month = january day = 8 }
    extra1         = naval_improved_hull_l
    extra2         = floatplane
    brigade_model2 = 4
  }
  division_development = {
    id             = { type = 13016 id = 117 }
    name           = "Kirishima"
    type           = battlecruiser
    model          = 3
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1936 month = june day = 8 }
    extra1         = naval_improved_hull_l
    extra2         = floatplane
    brigade_model2 = 4
  }
  division_development = {
    id             = { type = 13016 id = 114 }
    name           = "Hiei"
    type           = battlecruiser
    model          = 3
    cost           = 1.1
    unitcost       = no
    new_model      = no
    date           = { year = 1938 month = may day = 1 }
    extra1         = naval_improved_hull_l
    extra2         = floatplane
    brigade_model2 = 4
  }
  division_development = {
    id             = { type = 13016 id = 125 }
    name           = "Mutsu"
    type           = battleship
    model          = 5
    cost           = 0.5
    unitcost       = no
    new_model      = no
    date           = { year = 1936 month = september day = 29 }
    extra1         = naval_anti_air_l
    extra2         = naval_fire_controll_l
    extra3         = naval_improved_hull_l
    extra4         = floatplane
    brigade_model4 = 4
  }
  division_development = {
    id             = { type = 13016 id = 269 }
    name           = "Chitose"
    type           = escort_carrier
    cost           = 0.1
    new_model      = no
    date           = { year = 1938 month = july day = 25 }
  }
  division_development = {
    id             = { type = 13016 id = 270 }
    name           = "Chiyoda"
    type           = escort_carrier
    cost           = 0.1
    new_model      = no
    date           = { year = 1938 month = july day = 25 }
  }
  division_development = {
    id             = { type = 13016 id = 271 }
    name           = "I-8"
    type           = nuclear_submarine
    model          = 0
    cost           = 0.1
    date           = { year = 1938 month = december day = 4 }
    extra1         = floatplane
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 272 }
    name           = "Dai 13 Sensuisentai"
    type           = submarine
    model          = 4
    cost           = 0.1
    date           = { year = 1936 month = may day = 1 }
  }

  landdivision = { dormant = yes id = { type = 13016 id = 2000 } name = "1 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2001 } name = "22 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2002 } name = "2 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2003 } name = "3 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2004 } name = "4 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2005 } name = "5 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2006 } name = "6 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2007 } name = "7 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2008 } name = "8 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2009 } name = "9 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2010 } name = "10 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2011 } name = "11 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2012 } name = "12 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2013 } name = "13 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2014 } name = "14 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2015 } name = "15 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2016 } name = "16 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2017 } name = "17 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2018 } name = "18 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2019 } name = "19 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2020 } name = "20 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 2021 } name = "21 Hendan"  type = garrison model = 5 extra = artillery brigade_model = 9 locked = yes } 
}
