##############################
# Country definition for JAP #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
  belligerence       = 40
  capital            = 1552 # Tokyo
  manpower           = 5000
  # Resource Reserves
  energy         = 10000
  metal          = 10000
  rare_materials = 5000
  oil            = 15000
  supplies       = 5000
  money          = 120
  transports     = 1100
  escorts        = 11

  diplomacy = {
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -150 }
    relation = { tag = BUL value = 75 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CHL value = 20 }
    relation = { tag = FIN value = 50 }
    relation = {
      tag        = GER
      value      = 135
      guaranteed = { year = 1940 month = september day = 27 }
    }
    relation = {
      tag        = HUN
      value      = 125
      guaranteed = { year = 1940 month = november day = 20 }
    }
    relation = {
      tag        = ITA
      value      = 125
      guaranteed = { year = 1940 month = november day = 20 }
    }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = MEN value = 200 access = yes }
    relation = {
      tag        = ROM
      value      = 125
      guaranteed = { year = 1940 month = september day = 27 }
    }
    relation = { tag = SIA value = 150 }
    relation = { tag = FRA value = 50 }
    relation = { tag = USA value = -200 }
    relation = { tag = SIK value = -170 }
    relation = { tag = U03 value = 50 access = yes }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 9 }

  nationalprovinces      = { 1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1555 1542 1541 1547 1548 1546 1228 1229 1230 1231 1232 1233 1221 1222 1223 1224 1225 1226 1227 1361 1362 1363 1364 }
  ownedprovinces         = { 1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1686 1685 1684 1668 1670 1671 1665 1669 1667 1666 1674 1675 1676 1677 1681 1364 1225 1226 1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 1361 1547 1548 1546 1222 1229 1363 1362 1245 1565 1566 1567 1568 1569 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 1580 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 1617 }
  controlledprovinces    = { 1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1662 1661 1663 1664 1562 1563 1564 1672 1686 1685 1684 1668 1670 1671 1665 1669 1667 1666 1674 1675 1676 1677 1681 1364 1225 1226 1227 1223 1221 1228 1233 1232 1231 1230 1224 1219 1542 1555 1361 1547 1548 1546 1362 1360 1375 1222 1229 1363 1245 1241 1247 1242 1243 1244 1251 1252 1248 1249 1250 1327 1328 1329 1330 1331 1332 1321 1323 1333 1334 1335 1339 1336 1340 1337 1338 1344 1342 1345 1343 1350 1353 1318 1369 1365 1370 1346 1348 1253 1254 1322 1367 1358 1565 1566 1567 1568 1569 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 1580 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 1617 1371 1437 1438 1435 1436 1432 1624 1625 1626 1614 1678 1679 1680 1682 1588 1589 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1418 1421 1593 1724 1725 1726 1727 1602 1234 1603 1605 1610 1587 1683 1673 2174 }
  claimedprovinces       = { 1665 1666 1667 1668 1669 1670 1671 1672 1674 1675 1676 1677 1681 1684 1685 1686 1219 1245 1683 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1371 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 1617 1602 1603 1604 1605 1606 1607 1608 1609 1610 1234 1565 1566 1567 1568 1569 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 1580 1414 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1418 1421 1432 1435 1436 1437 1438 1624 1625 1626 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5140 5800 5080 5090 5100 5310 54010 54020 54030 5320 5360 5316 5326 5327 5350 5700 5710 5010 5020 5030 5410 5416 5417 5420 5426 5190 5200 5470 5480 5600 5610 5620 5560 5940 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1560 1570 1580 1590 1600 1670 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2070 2050 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2400 2800 2450 21180 21190 21200 2460 2810 2820 2510 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6390 6400 6420 6410 6430 6440 6900 14000 14010 14020 14030 3110 3120 3130 3140 3150 3160 12010 3410 3420 3430 3440 3450 3456 3460 3470 3490 3310 3320 3330 3340 3350 3210 3220 3230 3240 3250 3260 3010 3020 3030 3040 3050 3060 3070 12000 3610 3620 3630 3640 3650 3660 3670 3710 12100 12110 12120 12130 12140 3510 3520 3530 3540 3550 3720 3730 3736 3740 3750 3760 3900 3910 3770 3810 3820 3830 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8170 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 8980 81650 81700 81710 81720 81730 81740 81850 81860 81870 81880 82300 82310 82320 82500 82510 4400 4170 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4050 4600 4610 4620 4630 4120 4130 4140 4150 4700 4710 4190 4200 4290 4250 4300 4310 4320 4330 4340 4040 4070 4740 4750 4760 4770 4780 4790 4850 4860 4800 4810 4820 4900 4910 4920 4930 4940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9350 9230 9240 }
  blueprints             = { 81730 81740 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 1
    free_market       = 3
    professional_army = 8
    defense_lobby     = 8
    interventionism   = 10
  }
  headofstate            = { type = 9 id = 50001 } # Hirohito
  headofgovernment       = { type = 9 id = 50044 } # Tojo Hideki
  foreignminister        = { type = 9 id = 50082 } # Tani Masayuki
  armamentminister       = { type = 9 id = 50125 } # Kaya Okinori
  ministerofsecurity     = { type = 9 id = 50237 } # Yuzawa Michio
  ministerofintelligence = { type = 9 id = 50190 } # Arisue Seizo
  chiefofstaff           = { type = 9 id = 50305 } # Sugiyama Hajime
  chiefofarmy            = { type = 9 id = 50331 } # Tojo Hideki
  chiefofnavy            = { type = 9 id = 50362 } # Shimada Shigetaro
  chiefofair             = { type = 9 id = 50398 } # Tsukahara Nishio
  
  landunit = {
    id       = { type = 13016 id = 1000 }
    name     = "Shina Hakengun"
    location = 1338
    division = {
      id             = { type = 13016 id = 1001 }
      name           = "Shina Hakengun shireibu"
      type           = hq
      model          = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1002 }
    name     = "Kita Shina Hômengun"
    location = 1247
    division = {
      id             = { type = 13016 id = 1003 }
      name           = "Kita Shina Hômengun shireibu"
      type           = hq
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1004 }
      name           = "Dai 27 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1005 }
    name     = "Kita Shina Hômengun"
    location = 1336
    division = {
      id             = { type = 13016 id = 1006 }
      name           = "Dai 35 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1007 }
    name     = "Kita Shina Hômengun"
    location = 1245
    division = {
      id             = { type = 13016 id = 1008 }
      name           = "Dai 1 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1009 }
    name     = "Kita Shina Hômengun"
    location = 1241
    division = {
      id             = { type = 13016 id = 1010 }
      name           = "Dai 7 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1011 }
    name     = "Kita Shina Hômengun"
    location = 1244
    division = {
      id             = { type = 13016 id = 1012 }
      name           = "Dai 8 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1013 }
    name     = "Kita Shina Hômengun"
    location = 1323
    division = {
      id             = { type = 13016 id = 1014 }
      name           = "Dai 15 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 500 }
    name     = "Moukogo Gun"
    location = 1269
    division = {
      id             = { type = 13016 id = 9 }
      name           = "Dai 26 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 10 }
      name           = "Dai 2 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 11 }
      name           = "Dai 1 Moukogo Kiheishidan"
      type           = cavalry
      model          = 7
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 12 }
      name           = "Dai 2 Moukogo Kiheishidan"
      type           = cavalry
      model          = 7
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 13 }
      name           = "Dai 3 Moukogo Kiheishidan"
      type           = cavalry
      model          = 7
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 14 }
      name           = "Dai 4 Moukogo Kiheishidan"
      type           = cavalry
      model          = 7
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 15 }
      name           = "Dai 5 Moukogo Kiheishidan"
      type           = cavalry
      model          = 7
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1015 }
    name     = "Dai 1 Gun"
    location = 1254
    division = {
      id             = { type = 13016 id = 4 }
      name           = "Dai 37 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1016 }
      name           = "Dai 3 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1017 }
    name     = "Dai 1 Gun"
    location = 1253
    division = {
      id             = { type = 13016 id = 3 }
      name           = "Dai 36 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1019 }
    name     = "Dai 1 Gun"
    location = 1375
    division = {
      id             = { type = 13016 id = 1020 }
      name           = "Dai 4 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1021 }
      name           = "Dai 9 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1022 }
      name           = "Dai 69 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1023 }
    name     = "Dai 12 Gun"
    location = 1321
    division = {
      id             = { type = 13016 id = 1024 }
      name           = "Dai 32 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1025 }
      name           = "Dai 59 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1026 }
    name     = "Dai 12 Gun"
    location = 1322
    division = {
      id             = { type = 13016 id = 1027 }
      name           = "Dai 5 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1028 }
      name           = "Dai 6 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1031 }
    name     = "Dai 11 Gun"
    location = 1327
    division = {
      id             = { type = 13016 id = 1032 }
      name           = "Dai 3 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1033 }
      name           = "Dai 13 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1037 }
    name     = "Dai 11 Gun"
    location = 1339
    division = {
      id             = { type = 13016 id = 1038 }
      name           = "Dai 34 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1920 }
    name     = "Dai 11 Gun"
    location = 1358
    division = {
      id             = { type = 13016 id = 1036 }
      name           = "Dai 68 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1922 }
    name     = "Dai 11 Gun"
    location = 1360
    division = {
      id             = { type = 13016 id = 1039 }
      name           = "Dai 58 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1040 }
    name     = "Dai 11 Gun"
    location = 1343
    division = {
      id             = { type = 13016 id = 1042 }
      name           = "Dai 40 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1043 }
    name     = "Dai 13 Gun"
    location = 1340
    division = {
      id             = { type = 13016 id = 1044 }
      name           = "Dai 60 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1045 }
    name     = "Dai 13 Gun"
    location = 1344
    division = {
      id             = { type = 13016 id = 1046 }
      name           = "Dai 12 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1048 }
      name           = "Dai 116 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1049 }
    name     = "Dai 13 Gun"
    location = 1318
    division = {
      id             = { type = 13016 id = 1050 }
      name           = "Dai 13 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1051 }
      name           = "Dai 17 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1052 }
    name     = "Dai 13 Gun"
    location = 1353
    division = {
      id             = { type = 13016 id = 6 }
      name           = "Dai 15 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1053 }
      name           = "Dai 70 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1054 }
    name     = "Dai 13 Gun"
    location = 1350
    division = {
      id             = { type = 13016 id = 7 }
      name           = "Dai 17 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1055 }
      name           = "Dai 22 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1056 }
    name     = "Dai 23 Gun"
    location = 1369
    division = {
      id             = { type = 13016 id = 1058 }
      name           = "Dai 19 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1059 }
    name     = "Dai 23 Gun"
    location = 1370
    division = {
      id             = { type = 13016 id = 1060 }
      name           = "Dai 104 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1067 }
    name     = "Dai 25 Gun"
    location = 1636
    division = {
      id             = { type = 13016 id = 45 }
      name           = "Dai 1 Konoe Shidan"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 13016 id = 2600 }
    name     = "Boruneo-jima Chuton Gun"
    location = 1632
    division = {
      id             = { type = 13016 id = 2601 }
      name           = "Teishin Shudan"
      type           = paratrooper
      model          = 0
      extra          = glider_artillery
      brigade_model  = 0
      strength       = 50
    }
    division = {
      id             = { type = 13016 id = 1400 }
      name           = "Dai 56 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 13016 id = 2602 }
    name     = "Nanpô Gun"
    location = 1399
    division = {
      id             = { type = 13016 id = 2603 }
      name           = "Dai 21 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1 }
    name     = "Manchukuo Hakengun"
    location = 1199
    division = {
      id             = { type = 13016 id = 2 }
      name           = "Manchukuo Hakengun shireibu"
      type           = hq
      model          = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 16 }
    name     = "Kantôgun"
    location = 1208
    division = {
      id             = { type = 13016 id = 17 }
      name           = "Kantôgun saikô shireibu"
      type           = hq
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 18 }
      name           = "Dai 10 'Himeji' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1478 }
      name           = "Dai 24 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 19 }
      name           = "Dai 28 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 20 }
      name           = "Kantô Bôbitai"
      type           = garrison
      model          = 5
      extra          = police
      brigade_model  = 1
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 21 }
    name     = "Dai 3 Gun"
    location = 1201
    division = {
      id             = { type = 13016 id = 22 }
      name           = "Dai 9 'Kanazawa' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 23 }
      name           = "Dai 12 'Kurume' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1071 }
      name           = "Dai 57 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 24 }
    name     = "Dai 4 Gun"
    location = 1200
    division = {
      id             = { type = 13016 id = 25 }
      name           = "Dai 1 'Tokyo' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 26 }
      name           = "Dai 2 Dokuritsu shubitai"
      type           = garrison
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 27 }
      name           = "Dai 3 Dokuritsu shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 28 }
    name     = "Dai 5 Gun"
    location = 1202
    division = {
      id             = { type = 13016 id = 29 }
      name           = "Dai 4 Dokuritsu shubitai"
      type           = garrison
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 30 }
      name           = "Dai 5 Dokuritsu shubitai"
      type           = garrison
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 31 }
      name           = "Dai 3 Manchuko Kiheishidan"
      type           = cavalry
      model          = 8
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1073 }
      name           = "Dai 11 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 32 }
    name     = "Dai 6 Gun"
    location = 1205
    division = {
      id             = { type = 13016 id = 33 }
      name           = "Dai 14 'Utsunomi' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 34 }
      name           = "Dai 23 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = police
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 35 }
    name     = "Dai 20 Gun"
    location = 1204
    division = {
      id             = { type = 13016 id = 36 }
      name           = "Dai 8 'Hirosaki' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 37 }
      name           = "Dai 25 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 38 }
      name           = "Dai 6 Dokuritsu shubitai"
      type           = garrison
      model          = 5
      extra          = artillery
      brigade_model  = 7
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 46 }
    name     = "Daihon'ei"
    location = 1552
    division = {
      id             = { type = 13016 id = 47 }
      name           = "Boei Soshireibu"
      type           = hq
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1404 }
      name           = "Dai 63 Dokuritsu konsei ryodan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 49 }
    name     = "Kita Hômengun"
    location = 1547
    division = {
      id             = { type = 13016 id = 50 }
      name           = "Dai 7 Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 51 }
      name           = "Dai 57 Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1417 }
      name           = "Dai 8 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 52 }
    name     = "Chûô Hômengun"
    location = 1557
    division = {
      id             = { type = 13016 id = 53 }
      name           = "Dai 53 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 5300 }
      name           = "Dai 54 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1479 }
      name           = "Dai 4 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1413 }
      name           = "Dai 5 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1480 }
      name           = "Dai 55 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 54 }
    name     = "Roppou Hômengun"
    location = 1559
    division = {
      id             = { type = 13016 id = 1481 }
      name           = "Dai 6 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 55 }
      name           = "Dai 8 Shubitai"
      type           = garrison
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 56 }
      name           = "Dai 14 Shubitai"
      type           = garrison
      model          = 5
      extra          = anti_air
      brigade_model  = 1
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1482 }
      name           = "Dai 56 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 57 }
    name     = "Tôbu Hômengun"
    location = 1560
    division = {
      id             = { type = 13016 id = 58 }
      name           = "Dai 52 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1483 }
      name           = "Dai 2 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1411 }
      name           = "Dai 3 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1484 }
      name           = "Dai 51 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1485 }
      name           = "Dai 57 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 59 }
    name     = "Chôsengun"
    location = 1225
    division = {
      id             = { type = 13016 id = 60 }
      name           = "Dai 19 'Ranan' Hoheishidan"
      type           = infantry
      model          = 11
      extra          = anti_air
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 71 }
    name     = "Nanpô Chôsengun"
    location = 1228
    division = {
      id             = { type = 13016 id = 72 }
      name           = "Dai 20 Rusu Shidan"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1074 }
    name     = "Taiwangun"
    location = 1362
    division = {
      id             = { type = 13016 id = 1075 }
      name           = "Dai 1 Taiwan Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1076 }
      name           = "Dai 2 Taiwan Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1077 }
    name     = "Tokubetsuna tasukufôsu"
    location = 1367
    division = {
      id             = { type = 13016 id = 1078 }
      name           = "Dai 110 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1092 }
    name     = "Nanpô Gun"
    location = 1399
    division = {
      id             = { type = 13016 id = 1093 }
      name           = "Nanpô Gun shireibu"
      type           = hq
      model          = 3
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1079 }
    name     = "Dai 15 Gun"
    location = 1407
    division = {
      id             = { type = 13016 id = 1070 }
      name           = "Dai 18 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 44 }
      name           = "Dai 56 Hoheishidan"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1921 }
    name     = "Dai 15 Gun"
    location = 1420
    division = {
      id             = { type = 13016 id = 1066 }
      name           = "Dai 55 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1081 }
    name     = "Dai 15 Gun"
    location = 1406
    division = {
      id             = { type = 13016 id = 1082 }
      name           = "Dai 33 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1083 }
    name     = "Dai 15 Gun"
    location = 1408
    division = {
      id             = { type = 13016 id = 1084 }
      name           = "Dai 5 Teishinshudan"
      type           = paratrooper
      model          = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1085 }
    name     = "Dai 16 Gun"
    location = 1647
    division = {
      id             = { type = 13016 id = 1086 }
      name           = "Dai 46 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1087 }
    name     = "Dai 16 Gun"
    location = 1616
    division = {
      id             = { type = 13016 id = 41 }
      name           = "Dai 48 'Formosa' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1473 }
    name     = "Dai 14 Hômengun"
    location = 1565
    division = {
      id             = { type = 13016 id = 1474 }
      name           = "Dai 14 Hômengun shireibu"
      type           = hq
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1088 }
    name     = "Dai 14 Hômengun"
    location = 1565
    division = {
      id             = { type = 13016 id = 48 }
      name           = "Dai 4 'Osaka' Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1091 }
    name     = "Dai 14 Hômengun"
    location = 1568
    division = {
      id             = { type = 13016 id = 40 }
      name           = "Dai 16 'Kyoto' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1094 }
    name     = "Dai 8 Hômengun"
    location = 1726
    division = {
      id             = { type = 13016 id = 1095 }
      name           = "Dai 8 Hômengun shireibu"
      type           = hq
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1064 }
    name     = "Dai 17 Gun"
    location = 1593
    division = {
      id             = { type = 13016 id = 43 }
      name           = "Dai 2 'Sendai' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13016 id = 1096 }
    name     = "Dai 17 Gun"
    location = 1234
    division = {
      id             = { type = 13016 id = 5301 }
      name           = "Minami Taiheiyô Buntai"
      type           = marine
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1405 }
      name           = "Kure Rikusentai"
      type           = marine
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1406 }
      name           = "Sasebo Rikusentai"
      type           = marine
      model          = 4
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1407 }
    name     = "Dai 17 Gun"
    location = 1589
    division = {
      id             = { type = 13016 id = 1408 }
      name           = "Yokosuka Rikusentai"
      type           = marine
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1061 }
    name     = "Dai 17 Gun"
    location = 1588
    division = {
      id             = { type = 13016 id = 1062 }
      name           = "Dai 38 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1034 }
    name     = "Dai 17 Gun"
    location = 1587
    division = {
      id             = { type = 13016 id = 1035 }
      name           = "Dai 6 'Kumamoto' Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1097 }
    name     = "Dai 18 Gun"
    location = 1605
    division = {
      id             = { type = 13016 id = 70 }
      name           = "Dai 20 'Keyo' Hoheishidan"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1018 }
      name           = "Dai 41 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1098 }
    name     = "Dai 17 Gun"
    location = 1726
    division = {
      id             = { type = 13016 id = 1069 }
      name           = "Dai 5 'Hiroshima' Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 13016 id = 1057 }
      name           = "Dai 51 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1107 }
    name     = "Dai 1 Hômengun"
    location = 1214
    division = {
      id             = { type = 13016 id = 1108 }
      name           = "Dai 1 Hômengun shireibu"
      type           = hq
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1109 }
    name     = "Dai 2 Hômengun"
    location = 1202
    division = {
      id             = { type = 13016 id = 1110 }
      name           = "Dai 2 Hômengun shireibu"
      type           = hq
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1111 }
    name     = "Indoshina Chuton Gun"
    location = 1395
    division = {
      id             = { type = 13016 id = 1112 }
      name           = "Dai 21 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1115 }
    name     = "Dai 1 Hômengun"
    location = 1212
    division = {
      id             = { type = 13016 id = 1116 }
      name           = "Dai 1 Senshashidan"
      type           = armor
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1117 }
      name           = "Dai 2 Senshashidan"
      type           = armor
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1403 }
      name           = "Dai 71 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1118 }
    name     = "Kita Shina Hômengun"
    location = 1206
    division = {
      id             = { type = 13016 id = 1119 }
      name           = "Dai 3 Senshashidan"
      type           = light_armor
      model          = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 1120 }
    name     = "Shina Hakengun"
    location = 1345
    division = {
      id             = { type = 13016 id = 1121 }
      name           = "Dai 69 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1122 }
    name     = "Shina Hakengun"
    location = 1348
    division = {
      id             = { type = 13016 id = 1123 }
      name           = "Dai 115 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1124 }
    name     = "Dai 2 Gundan"
    location = 1342
    division = {
      id             = { type = 13016 id = 1041 }
      name           = "Dai 39 Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1099 }
    name     = "Wake Konkyochi tai"
    location = 1673
    division = {
      id             = { type = 13016 id = 1100 }
      name           = "Maizaru Rikusentai"
      type           = marine
      model          = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 1125 }
    name     = "Yokoyama Buntai"
    location = 1234
    division = {
      id             = { type = 13016 id = 1126 }
      name           = "Yokoyama Buntai"
      type           = marine
      model          = 4
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13016 id = 74 }
    name     = "Saishu Chuton Gun"
    location = 1545
    division = {
      id             = { type = 13016 id = 75 }
      name           = "Saishu Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 13016 id = 1113 }
      name           = "Dai 7 'Asahigawa' Hoheishidan"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 76 }
    name     = "Naha Chuton Gun"
    location = 1564
    division = {
      id             = { type = 13016 id = 77 }
      name           = "Naha Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 78 }
    name     = "Toyohara Chuton Gun"
    location = 1542
    division = {
      id             = { type = 13016 id = 79 }
      name           = "Toyohara Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 80 }
    name     = "Tomari Konkyochi tai"
    location = 1666
    division = {
      id             = { type = 13016 id = 81 }
      name           = "Tomari Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 82 }
    name     = "Shana Chuton Gun"
    location = 1543
    division = {
      id             = { type = 13016 id = 83 }
      name           = "Shana Shubitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 84 }
    name     = "Mariane Konkyochi tai"
    location = 1686
    division = {
      id             = { type = 13016 id = 85 }
      name           = "Mariane Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 86 }
    name     = "Palau Konkyochi tai"
    location = 1670
    division = {
      id             = { type = 13016 id = 87 }
      name           = "Palau Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 88 }
    name     = "Eniwetok Konkyochi tai"
    location = 1675
    division = {
      id             = { type = 13016 id = 89 }
      name           = "Eniwetok Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 90 }
    name     = "Bikini Konkyochi tai"
    location = 1674
    division = {
      id             = { type = 13016 id = 91 }
      name           = "Bikini Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 92 }
    name     = "Kwajalein Konkyochi tai"
    location = 1676
    division = {
      id             = { type = 13016 id = 93 }
      name           = "Kwajalein Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 94 }
    name     = "Saipan Konkyochi tai"
    location = 1685
    division = {
      id             = { type = 13016 id = 95 }
      name           = "Saipan Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 96 }
    name     = "Wotje Konkyochi tai"
    location = 1681
    division = {
      id             = { type = 13016 id = 97 }
      name           = "Wotje Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 98 }
    name     = "Iwo Jima Konkyochi tai"
    location = 1661
    division = {
      id             = { type = 13016 id = 99 }
      name           = "Iwo Jima Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 100 }
    name     = "Minami Torima Konkyochi tai"
    location = 1672
    division = {
      id             = { type = 13016 id = 101 }
      name           = "Minami Torima Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 102 }
    name     = "Woleai Konkyochi tai"
    location = 1668
    division = {
      id             = { type = 13016 id = 103 }
      name           = "Woleai Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 104 }
    name     = "Truk Konkyochi tai"
    location = 1667
    division = {
      id             = { type = 13016 id = 105 }
      name           = "Truk Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 106 }
    name     = "Ponape Konkyochi tai"
    location = 1665
    division = {
      id             = { type = 13016 id = 107 }
      name           = "Ponape Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 108 }
    name     = "Marshall Konkyochi tai"
    location = 1677
    division = {
      id             = { type = 13016 id = 109 }
      name           = "Marshall Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 110 }
    name     = "Yap Konkyochi tai"
    location = 1669
    division = {
      id             = { type = 13016 id = 111 }
      name           = "Yap Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1101 }
    name     = "Omiya Jima Konkyochi tai"
    location = 1683
    division = {
      id             = { type = 13016 id = 1102 }
      name           = "Omiya Jima Keibitai"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 1103 }
    name     = "Attu Konkyochi tai"
    location = 2174
    division = {
      id             = { type = 13016 id = 1104 }
      name           = "Attu Keibitai"
      type           = garrison
      model          = 5
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 13016 id = 1105 }
    name     = "Otori-Shima Konkyochi tai"
    location = 1673
    division = {
      id             = { type = 13016 id = 1106 }
      name           = "Dai 65 Gadoyunitto"
      type           = infantry
      model          = 10
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 13016 id = 1127 }
    name     = "Tarawa Konkyochi tai"
    location = 1680
    division = {
      id             = { type = 13016 id = 1128 }
      name           = "Tarawa Keibitai"
      type           = garrison
      model          = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13016 id = 1129 }
    name     = "Makin Konkyochi tai"
    location = 1678
    division = {
      id             = { type = 13016 id = 1130 }
      name           = "Makin Keibitai"
      type           = garrison
      model          = 5
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 13016 id = 1131 }
    name     = "Nauru Konkyochi tai"
    location = 1682
    division = {
      id             = { type = 13016 id = 1132 }
      name           = "Nauru Keibitai"
      type           = garrison
      model          = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 13016 id = 1401 }
    name     = "Shingaporu Chuton Gun"
    location = 1432
    division = {
      id             = { type = 13016 id = 1402 }
      name           = "Shingaporu Keibitai"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 13016 id = 2139 }
    name     = "Dai 2 Koku Sentai"
    location = 2455
    base     = 1726
    division = {
      id             = { type = 13016 id = 3010 }
      name           = "Junyo"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 2247 }
      name           = "Dai 23 Kuchikusentai"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2159 }
    name     = "Musashi"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 3005 }
      name           = "Musashi"
      type           = battleship
      model          = 11
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2160 }
    name     = "Kinu"
    location = 2567
    base     = 1647
    division = {
      id             = { type = 13016 id = 146 }
      name           = "Kinu"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2161 }
    name     = "Isuzu"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 151 }
      name           = "Isuzu"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2001 }
    name     = "Dai 9 Sentai"
    location = 2467
    base     = 1726
    division = {
      id             = { type = 13016 id = 132 }
      name           = "Kitakami"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 136 }
      name           = "Oi"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2117 }
    name     = "Dai 11 Koku Sentai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 3000 }
      name           = "Nisshin"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 3100 }
      name           = "Akitsushima"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 2118 }
      name           = "Chiyoda"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 2119 }
      name           = "Chitose"
      type           = escort_carrier
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2120 }
    name     = "Dai 4 Sensui Kantai"
    location = 1726
    base     = 1726
    division = {
      id             = { type = 13016 id = 2121 }
      name           = "Dai 18 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2122 }
      name           = "Dai 19 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2123 }
      name           = "Dai 21 Sensuisentai"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2124 }
    name     = "Dai 5 Sensui Kantai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 2125 }
      name           = "Dai 28 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2126 }
      name           = "Dai 29 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2127 }
      name           = "Dai 30 Sensuisentai"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2002 }
    name     = "Dai 2 Senkan Sentai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 121 }
      name           = "Ise"
      type           = battleship
      model          = 4
      extra1         = naval_improved_hull_l
      extra2         = naval_anti_air_l
      extra3         = floatplane
      brigade_model3 = 5
    }
    division = {
      id             = { type = 13016 id = 122 }
      name           = "Hyuga"
      type           = battleship
      model          = 4
      extra1         = naval_improved_hull_l
      extra2         = naval_anti_air_l
      extra3         = floatplane
      brigade_model3 = 5
    }
    division = {
      id             = { type = 13016 id = 118 }
      name           = "Fuso"
      type           = battleship
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 5
    }
    division = {
      id             = { type = 13016 id = 119 }
      name           = "Yamashiro"
      type           = battleship
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2115 }
    name     = "Dai 1 Kuchiku Sentai"
    location = 2406
    base     = 2174
    division = {
      id             = { type = 13016 id = 153 }
      name           = "Abukuma"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 186 }
      name           = "Dai 6 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 207 }
      name           = "Dai 17 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 268 }
      name           = "Dai 21 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 2251 }
      name           = "Dai 27 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2011 }
    name     = "Dai 4 Sentai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 166 }
      name           = "Takao"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 165 }
      name           = "Atago"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2012 }
    name     = "Dai 5 Sentai"
    location = 2440
    base     = 1667
    division = {
      id             = { type = 13016 id = 163 }
      name           = "Myoko"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 159 }
      name           = "Nachi"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 160 }
      name           = "Haguro"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2014 }
    name     = "Dai 8 Sentai"
    location = 1602
    base     = 1602
    division = {
      id             = { type = 13016 id = 266 }
      name           = "Tone"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 267 }
      name           = "Chikuma"
      type           = heavy_cruiser
      model          = 5
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2015 }
    name     = "Dai 2 Kuchiku Sentai"
    location = 1675
    base     = 1675
    division = {
      id             = { type = 13016 id = 154 }
      name           = "Jintsu"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 195 }
      name           = "Dai 8 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 205 }
      name           = "Dai 15 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 206 }
      name           = "Dai 16 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 213 }
      name           = "Dai 18 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2128 }
    name     = "Dai 4 Kuchiku Sentai"
    location = 1675
    base     = 1675
    division = {
      id             = { type = 13016 id = 161 }
      name           = "Naka"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 182 }
      name           = "Dai 2 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 184 }
      name           = "Dai 4 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 196 }
      name           = "Dai 9 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 2248 }
      name           = "Dai 24 Kuchikusentai"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2016 }
    name     = "Dai 10 Sentai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 164 }
      name           = "Ashigara"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 130 }
      name           = "Kuma"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 137 }
      name           = "Nagara"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 3007 }
      name           = "Agano"
      type           = light_cruiser
      model          = 6
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2017 }
    name     = "Dai 5 Kuchiku Sentai"
    location = 1362
    base     = 1362
    division = {
      id             = { type = 13016 id = 145 }
      name           = "Natori"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 185 }
      name           = "Dai 5 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 2346 }
      name           = "Dai 22 Kuchikusentai"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2129 }
    name     = "Dai 6 Sensui Kantai"
    location = 1362
    base     = 1362
    division = {
      id             = { type = 13016 id = 234 }
      name           = "Dai 9 Sensuisentai"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 2350 }
      name           = "Dai 13 Sensuisentai"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2104 }
    name     = "Hosho"
    location = 1559
    base     = 1559
    division = {
      id             = { type = 13016 id = 173 }
      name           = "Hosho"
      type           = escort_carrier
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1200 }
    name     = "Hiyo"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 3009 }
      name           = "Hiyo"
      type           = carrier
      model          = 0
      extra1         = cag
      brigade_model1 = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2000 }
    name     = "Dai 1 Senkan Sentai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 3004 }
      name           = "Yamato"
      type           = battleship
      model          = 11
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 123 }
      name           = "Nagato"
      type           = battleship
      model          = 5
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = floatplane
      brigade_model3 = 5
    }
    division = {
      id             = { type = 13016 id = 125 }
      name           = "Mutsu"
      type           = battleship
      model          = 5
      extra1         = naval_anti_air_l
      extra2         = naval_fire_controll_l
      extra3         = naval_improved_hull_l
      extra4         = floatplane
      brigade_model4 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2003 }
    name     = "Dai 3 Senkan Sentai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 113 }
      name           = "Kongo"
      type           = battlecruiser
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 5
    }
    division = {
      id             = { type = 13016 id = 115 }
      name           = "Haruna"
      type           = battlecruiser
      model          = 3
      extra1         = naval_improved_hull_l
      extra2         = floatplane
      brigade_model2 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2131 }
    name     = "Dai 7 Sensui Kantai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 2132 }
      name           = "Dai 26 Sensuisentai"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 2133 }
      name           = "Dai 27 Sensuisentai"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2134 }
      name           = "Dai 33 Sensuisentai"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2019 }
    name     = "Dai 21 Sentai"
    location = 2504
    base     = 2174
    division = {
      id             = { type = 13016 id = 131 }
      name           = "Tama"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 135 }
      name           = "Kiso"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 183 }
      name           = "Dai 3 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2020 }
    name     = "Dai 1 Sensui Kantai"
    location = 1676
    base     = 1676
    division = {
      id             = { type = 13016 id = 226 }
      name           = "Dai 1 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 227 }
      name           = "Dai 2 Sensuisentai"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2021 }
      name           = "Dai 3 Sensuisentai"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2320 }
      name           = "Dai 4 Sensuisentai"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2137 }
    name     = "Dai 2 Sensui Kantai"
    location = 1676
    base     = 1676
    division = {
      id             = { type = 13016 id = 2351 }
      name           = "Dai 11 Sensuisentai"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 2352 }
      name           = "Dai 12 Sensuisentai"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 2138 }
      name           = "Dai 20 Sensuisentai"
      type           = submarine
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2004 }
    name     = "Dai 6 Sentai"
    location = 1726
    base     = 1726
    division = {
      id             = { type = 13016 id = 157 }
      name           = "Aoba"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 167 }
      name           = "Chokai"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2130 }
    name     = "Dai 6 Kuchiku Sentai"
    location = 1726
    base     = 1726
    division = {
      id             = { type = 13016 id = 150 }
      name           = "Yubari"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2253 }
      name           = "Dai 29 Kuchikusentai"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2254 }
      name           = "Dai 30 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2018 }
    name     = "Dai 18 Sentai"
    location = 2455
    base     = 1726
    division = {
      id             = { type = 13016 id = 169 }
      name           = "Maya"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 139 }
      name           = "Tenryu"
      type           = light_cruiser
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 127 }
      name           = "Tatsuta"
      type           = light_cruiser
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2116 }
    name     = "Dai 3 Kuchiku Sentai"
    location = 2455
    base     = 1726
    division = {
      id             = { type = 13016 id = 152 }
      name           = "Sendai"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 198 }
      name           = "Dai 11 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 199 }
      name           = "Dai 12 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 214 }
      name           = "Dai 19 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 215 }
      name           = "Dai 20 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2013 }
    name     = "Dai 7 Sentai"
    location = 1726
    base     = 1726
    division = {
      id             = { type = 13016 id = 264 }
      name           = "Kumano"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 265 }
      name           = "Suzuya"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 112 }
    name     = "Dai 1 Koku Sentai"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 3002 }
      name           = "Shokaku"
      type           = carrier
      model          = 3
      extra1         = cag
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 3003 }
      name           = "Zuikaku"
      type           = carrier
      model          = 3
      extra1         = cag
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 1790 }
      name           = "Zuiho"
      type           = light_carrier
      model          = 0
      extra1         = light_cag
      brigade_model1 = 4
    }
    division = {
      id             = { type = 13016 id = 194 }
      name           = "Dai 7 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2141 }
    name     = "Dai 11 Kokuki Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 260 }
      name           = "Kamoi"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 261 }
      name           = "Notoro"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 2258 }
      name           = "Dai 34 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2142 }
    name     = "Shina Kantai"
    location = 1338
    base     = 1338
    division = {
      id             = { type = 13016 id = 187 }
      name           = "Dai 1 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 188 }
      name           = "Dai 2 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 189 }
      name           = "Dai 3 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 190 }
      name           = "Dai 4 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2143 }
    name     = "Chinkai Keibifu"
    location = 1232
    base     = 1232
    division = {
      id             = { type = 13016 id = 2256 }
      name           = "Dai 32 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2144 }
    name     = "Kure Chinjufu"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 200 }
      name           = "Dai 13 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 230 }
      name           = "Dai 6 Sensuisentai"
      type           = submarine
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2145 }
    name     = "Ôminato Keibifu"
    location = 1551
    base     = 1551
    division = {
      id             = { type = 13016 id = 181 }
      name           = "Dai 1 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 13016 id = 231 }
    name     = "Dai 7 Sentai"
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
      id             = { type = 13016 id = 2249 }
      name           = "Dai 25 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2250 }
      name           = "Dai 26 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2252 }
      name           = "Dai 28 Kuchikusentai"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 13016 id = 212 }
    name     = "Dai 9 Sentai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 262 }
      name           = "Yakumo"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 138 }
      name           = "Izumo"
      type           = heavy_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 225 }
    name     = "Dai 3 Sensui Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 229 }
      name           = "I-5"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 280 }
      name           = "I-6"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 281 }
      name           = "I-7"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 282 }
      name           = "I-8"
      type           = nuclear_submarine
      model          = 0
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 283 }
      name           = "I-9"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 284 }
      name           = "I-10"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 285 }
      name           = "I-11"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 235 }
      name           = "Dai 10 Sensuisentai"
      type           = submarine
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 236 }
    name     = "Dai 8 Sensui Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 237 }
      name           = "I-17"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 238 }
      name           = "I-19"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 239 }
      name           = "I-21"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 240 }
      name           = "I-25"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 241 }
      name           = "I-26"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 242 }
      name           = "I-27"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 243 }
      name           = "I-29"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 244 }
      name           = "I-31"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 245 }
      name           = "I-32"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 246 }
      name           = "I-33"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 247 }
      name           = "I-34"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 248 }
      name           = "I-35"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 13016 id = 249 }
      name           = "I-36"
      type           = nuclear_submarine
      model          = 1
      extra1         = floatplane
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1508 }
    name     = "Dai 1 Yuso Kantai"
    location = 1553
    base     = 1553
    division = {
      id             = { type = 13016 id = 221 }
      name           = "Dai 16 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1510 }
    name     = "Dai 2 Yuso Kantai"
    location = 1553
    base     = 1553
    division = {
      id             = { type = 13016 id = 2255 }
      name           = "Dai 31 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 224 }
      name           = "Dai 19 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2344 }
    name     = "Dai 3 Yuso Kantai"
    location = 1726
    base     = 1726
    division = {
      id             = { type = 13016 id = 218 }
      name           = "Dai 14 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 219 }
      name           = "Dai 15 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 222 }
      name           = "Dai 17 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 223 }
      name           = "Dai 18 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2259 }
    name     = "Dai 4 Yuso Kantai"
    location = 1554
    base     = 1554
    division = {
      id             = { type = 13016 id = 2257 }
      name           = "Dai 33 Kuchikusentai"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 13016 id = 216 }
      name           = "Dai 20 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 217 }
      name           = "Dai 13 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2146 }
    name     = "Dai 5 Yuso Kantai"
    location = 1552
    base     = 1552
    division = {
      id             = { type = 13016 id = 201 }
      name           = "Dai 14 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 208 }
      name           = "Dai 9 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 209 }
      name           = "Dai 10 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 210 }
      name           = "Dai 11 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 211 }
      name           = "Dai 12 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 13016 id = 2025 }
    name     = "Chôsen Kantai"
    location = 1232
    base     = 1232
    division = {
      id             = { type = 13016 id = 197 }
      name           = "Dai 10 Kuchikusentai"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 191 }
      name           = "Dai 5 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 192 }
      name           = "Dai 6 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 202 }
      name           = "Dai 7 Yuso Sentai"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 203 }
      name           = "Dai 8 Yuso Sentai"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 13016 id = 2360 }
    name     = "Dai 17 Kokutai"
    location = 1409
    base     = 1409
    division = {
      id             = { type = 13016 id = 2420 }
      name           = "Dai 5 Kyokutsi Hikodan"
      type           = interceptor
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2421 }
      name           = "Dai 144 Kyokutsi Hikodan"
      type           = interceptor
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2430 }
      name           = "Dai 105 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2422 }
      name           = "Dai 4 Kyokutsi Hikodan"
      type           = interceptor
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2438 }
    name     = "Dai 1 Kokutai"
    location = 1602
    base     = 1602
    division = {
      id             = { type = 13016 id = 2431 }
      name           = "Dai 44 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2700 }
      name           = "Dai 51 Kyokutsi Hikodan"
      type           = multi_role
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2701 }
      name           = "Dai 54 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 3
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2240 }
    name     = "Dai 2 Kokutai"
    location = 1589
    base     = 1589
    division = {
      id             = { type = 13016 id = 2241 }
      name           = "Dai 6 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 7
      extra          = escort
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2246 }
      name           = "Dai 3 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 7
      extra          = escort
      brigade_model  = 1
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2244 }
      name           = "Dai 58 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2426 }
      name           = "Dai 70 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2427 }
      name           = "Dai 85 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2428 }
      name           = "Dai 87 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2702 }
    name     = "Dai 2 Kokutai"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 13016 id = 2242 }
      name           = "Dai 9 Kyokutsi Hikodan"
      type           = interceptor
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2243 }
      name           = "Dai 33 Kyokutsi Hikodan"
      type           = interceptor
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2236 }
    name     = "Dai 3 Kyokutsi Hikodan"
    location = 1345
    base     = 1345
    division = {
      id             = { type = 13016 id = 2462 }
      name           = "Dai 27 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 6
    }
    division = {
      id             = { type = 13016 id = 2429 }
      name           = "Dai 59 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2463 }
      name           = "Dai 75 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 6
    }
    division = {
      id             = { type = 13016 id = 2464 }
      name           = "Dai 60 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 6
    }
    division = {
      id             = { type = 13016 id = 2530 }
      name           = "Dai 64 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2703 }
    name     = "Dai 8 Kyokutsi Hikodan"
    location = 1667
    base     = 1667
    division = {
      id             = { type = 13016 id = 2531 }
      name           = "Dai 98 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 3
      extra          = escort
      brigade_model  = 1
    }
    division = {
      id             = { type = 13016 id = 2532 }
      name           = "Dai 31 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 3
    }
    division = {
      id             = { type = 13016 id = 2533 }
      name           = "Dai 77 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2537 }
      name           = "Dai 1 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2362 }
    name     = "Dai 5 Kyokutsi Hikodan"
    location = 1415
    base     = 1415
    division = {
      id             = { type = 13016 id = 2363 }
      name           = "Dai 8 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 6
    }
    division = {
      id             = { type = 13016 id = 2349 }
      name           = "Dai 14 Keibakugeki Hikodan"
      type           = tactical_bomber
      model          = 5
    }
    division = {
      id             = { type = 13016 id = 2347 }
      name           = "Dai 16 Goraikogeki Hikodan"
      type           = naval_bomber
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 2348 }
      name           = "Dai 50 Kyokutsi Hikodan"
      type           = interceptor
      model          = 8
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 13016 id = 2704 }
    name     = "Dai 10 Kyokutsi Hikodan"
    location = 1565
    base     = 1565
    division = {
      id             = { type = 13016 id = 2339 }
      name           = "Dai 11 Yuso Hikodan"
      type           = transport_plane
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 13016 id = 2345 }
      name           = "Dai 12 Yuso Hikodan"
      type           = transport_plane
      model          = 1
      strength       = 100
    }
  }

  division_development = {
    id             = { type = 13016 id = 3011 }
    name           = "Dai 31 Hoheishidan"
    type           = infantry
    model          = 10
    cost           = 0.1
    date           = { year = 1943 month = march day = 22 }
  }
  division_development = {
    id             = { type = 13016 id = 3006 }
    name           = "Shinano"
    type           = carrier
    model          = 5
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = november day = 19 }
    extra1         = cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3008 }
    name           = "Oyodo"
    type           = light_cruiser
    model          = 6
    cost           = 0.1
    new_model      = no
    date           = { year = 1943 month = february day = 28 }
  }
  division_development = {
    id             = { type = 13016 id = 3012 }
    name           = "Noshiro"
    type           = light_cruiser
    model          = 6
    cost           = 0.1
    new_model      = no
    date           = { year = 1943 month = june day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3013 }
    name           = "Yahagi"
    type           = light_cruiser
    model          = 6
    cost           = 0.1
    new_model      = no
    date           = { year = 1943 month = december day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3014 }
    name           = "Sakawa"
    type           = light_cruiser
    model          = 6
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = november day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3015 }
    name           = "Ibuki"
    type           = heavy_cruiser
    model          = 6
    cost           = 0.1
    new_model      = no
    date           = { year = 1945 month = september day = 1 }
  }
  division_development = {
    id             = { type = 13016 id = 3016 }
    name           = "Ryuho"
    type           = light_carrier
    model          = 0
    cost           = 0.1
    new_model      = no
    date           = { year = 1942 month = november day = 29 }
    extra1         = light_cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3017 }
    name           = "Taiho"
    type           = carrier
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = march day = 7 }
    extra1         = cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3018 }
    name           = "Unryu"
    type           = carrier
    model          = 3
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = august day = 6 }
    extra1         = cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3019 }
    name           = "Amagi"
    type           = carrier
    model          = 3
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = august day = 10 }
    extra1         = cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3020 }
    name           = "Katsuragi"
    type           = carrier
    model          = 3
    cost           = 0.1
    new_model      = no
    date           = { year = 1944 month = october day = 3 }
    extra1         = cag
    brigade_model1 = 4
  }
  division_development = {
    id             = { type = 13016 id = 3021 }
    name           = "Mogami"
    type           = heavy_cruiser
    model          = 4
    cost           = 0.1
    new_model      = no
    date           = { year = 1943 month = april day = 29 }
    extra1         = naval_anti_air_s
    extra2         = floatplane
    brigade_model2 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3022 }
    name           = "Dai 35 Kuchikusentai"
    type           = destroyer
    model          = 6
    cost           = 0.1
    date           = { year = 1943 month = april day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3023 }
    name           = "Dai 36 Kuchikusentai"
    type           = destroyer
    model          = 6
    cost           = 0.1
    date           = { year = 1943 month = july day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3024 }
    name           = "Dai 37 Kuchikusentai"
    type           = destroyer
    model          = 7
    cost           = 0.1
    date           = { year = 1943 month = march day = 29 }
  }
  division_development = {
    id             = { type = 13016 id = 3025 }
    name           = "I-12"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1944 month = may day = 24 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3026 }
    name           = "I-37"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = march day = 9 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3027 }
    name           = "I-38"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = january day = 29 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3028 }
    name           = "I-39"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = april day = 21 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3029 }
    name           = "I-40"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = july day = 29 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3030 }
    name           = "I-41"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = september day = 17 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3031 }
    name           = "I-42"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = november day = 2 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3032 }
    name           = "I-43"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = november day = 4 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3033 }
    name           = "I-44"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1944 month = january day = 29 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3034 }
    name           = "I-45"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1943 month = december day = 27 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3035 }
    name           = "I-54"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1944 month = march day = 29 }
    extra1         = floatplane
    brigade_model1 = 5
  }
  division_development = {
    id             = { type = 13016 id = 3036 }
    name           = "I-56"
    type           = nuclear_submarine
    model          = 1
    cost           = 0.1
    date           = { year = 1944 month = june day = 7 }
    extra1         = floatplane
    brigade_model1 = 5
  }
}
