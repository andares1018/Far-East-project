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
  ai                 = "U05_1936.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 1647 # Batavia
  dissent            = 20
  manpower           = 83
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 40
  transports     = 160
  escorts        = 21

  diplomacy = {
    relation = { tag = HOL value = 150 }
    relation = { tag = BEL value = 150 }
    relation = { tag = CAN value = 80 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 75 }
    relation = { tag = GER value = 0 }
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

  techapps               = { 1830 1840 1850 1860 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 2860 2870 2880 2020 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 7600 7610 2010 2630 2640 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3210 3220 3230 3240 3250 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3610 3620 3630 3640 3720 3730 3736 3740 3900 3810 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 5700 5710 5010 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5800 5080 5090 5470 5600 5610 5620 5630 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6110 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8600 8610 8900 8910 8920 8930 8940 14000 14010 14020 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 4
    free_market       = 9
    professional_army = 4
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 840001 } # Wilhelmina
  headofgovernment       = { type = 9 id = 840050 } # Bonifacius Cornelis de Jonge
  foreignminister        = { type = 9 id = 840063 } # Bonifacius Cornelis de Jonge
  armamentminister       = { type = 9 id = 840068 } # Edmund Peter Wellenstein
  ministerofsecurity     = { type = 9 id = 840074 } # Karel Lodewijk Jan Enthoven
  ministerofintelligence = { type = 9 id = 840021 } # Gijsbertus Vonk
  chiefofstaff           = { type = 9 id = 840080 } # Johannes Cornelis Koster
  chiefofarmy            = { type = 9 id = 840089 } # Murk Boerstra
  chiefofnavy            = { type = 9 id = 840098 } # Maarten Hendrik van Dulm
  chiefofair             = { type = 9 id = 840077 } # Gustav Adolf Ilgen

  landunit = {
    id       = { type = 10100 id = 1 }
    name     = "Koninklijk Nederlands Indisch Leger"
    location = 1647
    division = {
      id             = { type = 10100 id = 2 }
      name           = "Ie Divisie"
      type           = infantry
      model          = 6
      strength       = 90
    }
    division = {
      id             = { type = 10100 id = 3 }
      name           = "IIe Divisie"
      type           = infantry
      model          = 6
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10100 id = 4 }
    name     = "Veiligheitsbezetting Soerabaja"
    location = 1653
    division = {
      id             = { type = 10100 id = 5 }
      name           = "IIIe Divisie"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 10100 id = 6 }
    name     = "Territoriaal Commando Noord-Sumatra"
    location = 1642
    division = {
      id             = { type = 10100 id = 7 }
      name           = "TC Noord-Sumatra"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10100 id = 8 }
    name     = "Territoriaal Commando Sumatra's Westkust en Tapanoeli"
    location = 1637
    division = {
      id             = { type = 10100 id = 9 }
      name           = "TC Westkust-Sumatra"
      type           = militia
      model          = 3
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 10100 id = 10 }
    name     = "Territoriaal Commando Riouw en Onderhorigheden"
    location = 1635
    division = {
      id             = { type = 10100 id = 11 }
      name           = "TC Riouw"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 12 }
    name     = "Territoriaal Commando Zuid-Sumatra"
    location = 1636
    division = {
      id             = { type = 10100 id = 13 }
      name           = "TC Zuid-Sumatra"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 14 }
    name     = "Territoriaal Commando Westerafdeling van Borneo"
    location = 1631
    division = {
      id             = { type = 10100 id = 15 }
      name           = "TC West-Borneo"
      type           = militia
      model          = 3
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10100 id = 16 }
    name     = "Territoriaal Commando Zuiden en Oosterafdeling van Borneo"
    location = 1633
    division = {
      id             = { type = 10100 id = 17 }
      name           = "TC Zuid-Oost-Borneo"
      type           = militia
      model          = 3
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 10100 id = 18 }
    name     = "Territoriaal Commando Celebes en Manado"
    location = 1657
    division = {
      id             = { type = 10100 id = 19 }
      name           = "TC Celebes"
      type           = militia
      model          = 3
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 10100 id = 20 }
    name     = "Territoriaal Commando Timor en Onderhorigheden"
    location = 1616
    division = {
      id             = { type = 10100 id = 21 }
      name           = "TC Timor"
      type           = militia
      model          = 3
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 10100 id = 22 }
    name     = "Territoriaal Commando Molukken"
    location = 1620
    division = {
      id             = { type = 10100 id = 23 }
      name           = "TC Molukken"
      type           = militia
      model          = 3
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 10100 id = 24 }
    name     = "Oostindies Marine"
    location = 1653
    base     = 1653
    division = {
      id             = { type = 10100 id = 25 }
      name           = "Hr.Ms. De Zeven Provinci n"
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 10100 id = 26 }
      name           = "Hr.Ms. Java"
      type           = light_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 3
    }
    division = {
      id             = { type = 10100 id = 27 }
      name           = "Hr.Ms. Sumatra"
      type           = light_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 3
    }
    division = {
      id             = { type = 10100 id = 28 }
      name           = "1e Torpedojager Flottielje"
      type           = destroyer
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 10100 id = 29 }
      name           = "3e Torpedoboot Flottielje"
      type           = destroyer
      model          = 0
      strength       = 60
    }
    division = {
      id             = { type = 10100 id = 30 }
      name           = "3e Onderzeeboot Flottielje"
      type           = submarine
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 10100 id = 31 }
      name           = "4e Onderzeeboot Flottielje"
      type           = submarine
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 10100 id = 32 }
      name           = "5e Onderzeeboot Flottielje"
      type           = submarine
      model          = 2
      strength       = 80
    }
    division = {
      id             = { type = 10100 id = 33 }
      name           = "3e Transport Flottielje"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 34 }
      name           = "4e Transport Flottielje"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 35 }
      name           = "5e Transport Flottielje"
      type           = transport
      model          = 1
    }
    division = {
      id             = { type = 10100 id = 36 }
      name           = "6e Transport Flottielje"
      type           = transport
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 10100 id = 37 }
    name     = "LA-KNIL"
    location = 1647
    base     = 1647
    division = {
      id             = { type = 10100 id = 38 }
      name           = "2e Luchtvaartregiment"
      type           = interceptor
      model          = 6
      strength       = 20
    }
  }

  division_development = {
    id             = { type = 10100 id = 39 }
    name           = "8e Onderzeeboot Flottielje"
    type           = submarine
    model          = 3
    cost           = 0.1
    new_model      = no
    date           = { year = 1933 month = july day = 6 }
  }
}
