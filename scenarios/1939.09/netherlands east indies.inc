##############################
# Country definition for U05 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U05
  puppet             = HOL
  control            = HOL
  ai                 = "U05_1939.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1647 # Batavia
  manpower           = 20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 40
  transports     = 150
  escorts        = 21

  diplomacy = {
    relation = { tag = HOL value = 150 }
    relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRE value = 75 }
    relation = { tag = ITA value = -20 }
    relation = { tag = JAP value = -50 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  SpyInfo                = { country = "U05" NumberOfSpies = 4 }

  nationalprovinces      = { 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 }
  ownedprovinces         = { 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 }
  controlledprovinces    = { 1639 1642 1640 1635 1634 1637 1636 1641 1638 1647 1648 1646 1651 1650 1649 1654 1653 1652 1655 1656 1643 1645 1615 1616 1619 1644 1657 1658 1660 1659 1620 1621 1622 1599 1600 1595 1601 1618 1598 1597 1596 1594 1633 1631 1628 1623 1627 1632 1629 1630 }

  techapps               = { 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 7600 7610 2010 2630 2640 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3210 3220 3230 3240 3250 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 5470 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8610 8900 8910 8920 8930 8940 14000 14010 14020 55010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 4
    free_market       = 9
    professional_army = 5
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 6 id = 840001 } # Wilhelmina
  headofgovernment       = { type = 6 id = 840051 } # Alidius Tjarda van Starkenborgh-Stachouwer
  foreignminister        = { type = 6 id = 840065 } # Hubertus van Mook
  armamentminister       = { type = 6 id = 840071 } # Hubertus van Mook
  ministerofsecurity     = { type = 6 id = 840074 } # Karel Lodewijk Jan Enthoven
  ministerofintelligence = { type = 6 id = 840021 } # Gijsbertus Vonk
  chiefofstaff           = { type = 6 id = 840081 } # Gerardus Berenschot
  chiefofarmy            = { type = 6 id = 840091 } # Hein ter Poorten
  chiefofnavy            = { type = 6 id = 840099 } # Hendrikus Ferwerda
  chiefofair             = { type = 6 id = 840047 } # Ludolph Hendrik van Oyen

  landunit = {
    id       = { type = 10100 id = 1 }
    name     = "Koninklijk Nederlands Indisch Leger"
    location = 1647
    division = {
      id             = { type = 10100 id = 2 }
      name           = "Ie Divisie"
      type           = infantry
      model          = 7
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 3 }
      name           = "IIe Divisie"
      type           = infantry
      model          = 7
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 4 }
      name           = "IIIe Divisie"
      type           = infantry
      model          = 7
      strength       = 90
    }
  }

  navalunit = {
    id       = { type = 10100 id = 5 }
    name     = "Koninklijke Vloot"
    location = 1647
    base     = 1647
    division = {
      id             = { type = 10100 id = 6 }
      name           = "2e Torpedobootjager Smaldeel"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 10100 id = 7 }
      name           = "4e Transport Smaldeel"
      type           = transport
      model          = 1
    }
  }
}
