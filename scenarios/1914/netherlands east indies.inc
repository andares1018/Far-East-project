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
  ai                 = "U05_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1647 # Batavia
  manpower           = 67
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
    relation = { tag = BEL value = 125 }
    relation = { tag = CAN value = 25 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = ITA value = 20 }
    relation = { tag = JAP value = 25 }
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

  techapps               = { 1830 2290 1010 1020 1030 13060 13070 13080 5700 5190 5600 3010 3020 3030 3110 3120 3210 3220 3310 3320 3410 3420 3610 3620 3810 6500 6510 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8900 14000 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 9
    free_market       = 9
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 6 id = 840001 } # Wilhelmina
  headofgovernment       = { type = 6 id = 840003 } # Alexander Willem Frederik Idenburg
  foreignminister        = { type = 6 id = 840007 } # Alexander Willem Frederik Idenburg
  armamentminister       = { type = 6 id = 840011 } # Frederik Albert Liefrinck
  ministerofsecurity     = { type = 6 id = 840016 } # Jan Willem Cornelis Cordes
  ministerofintelligence = { type = 6 id = 840020 } # Hendrik Gerard Pieter Duijfjes
  chiefofstaff           = { type = 6 id = 840032 } # Walter Robert de Greve
  chiefofarmy            = { type = 6 id = 840022 } # Johan Pieter Michielsen
  chiefofnavy            = { type = 6 id = 840044 } # Frederik Pinke
  chiefofair             = { type = 6 id = 840048 } # Karel Felix Eduard Gerth van Wijk

  landunit = {
    id       = { type = 18500 id = 101 }
    name     = "Koninklijk Nederlands Indisch Leger"
    location = 1647
    division = {
      id             = { type = 18500 id = 102 }
      name           = "Ie Divisie"
      type           = infantry
      model          = 1
      strength       = 90
      experience     = 5
    }
    division = {
      id             = { type = 18500 id = 103 }
      name           = "IIe Divisie"
      type           = infantry
      model          = 1
      strength       = 90
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 18500 id = 104 }
    name     = "Territoriaal Commando Noord-Sumatra"
    location = 1642
    division = {
      id             = { type = 18500 id = 105 }
      name           = "TC Noord-Sumatra"
      type           = garrison
      model          = 0
      strength       = 20
      max_strength   = 20
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 106 }
    name     = "Territoriaal Commando West-Sumatra"
    location = 1637
    division = {
      id             = { type = 18500 id = 107 }
      name           = "TC West-Sumatra"
      type           = garrison
      model          = 0
      strength       = 20
      max_strength   = 20
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 108 }
    name     = "Territoriaal Commando Riouw"
    location = 1639
    division = {
      id             = { type = 18500 id = 109 }
      name           = "TC Riouw"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 110 }
    name     = "Territoriaal Commando Zuid-Sumatra"
    location = 1636
    division = {
      id             = { type = 18500 id = 111 }
      name           = "TC Zuid-Sumatra"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 112 }
    name     = "Territoriaal Commando West-Borneo"
    location = 1631
    division = {
      id             = { type = 18500 id = 113 }
      name           = "TC West-Borneo"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 114 }
    name     = "Territoriaal Commando Zuidoost-Borneo"
    location = 1633
    division = {
      id             = { type = 18500 id = 115 }
      name           = "TC Zuidoost-Borneo"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 116 }
    name     = "Territoriaal Commando Celebes"
    location = 1659
    division = {
      id             = { type = 18500 id = 117 }
      name           = "TC Celebes"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 118 }
    name     = "Territoriaal Commando Timor"
    location = 1616
    division = {
      id             = { type = 18500 id = 119 }
      name           = "TC Timor"
      type           = garrison
      model          = 0
      strength       = 10
      max_strength   = 10
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 18500 id = 120 }
    name     = "Territoriaal Commando Molukken"
    location = 1622
    division = {
      id             = { type = 18500 id = 121 }
      name           = "TC Molukken"
      type           = garrison
      model          = 0
      strength       = 20
      max_strength   = 20
      experience     = 5
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 18500 id = 510 }
    name     = "East Indies Squadron"
    location = 1653
    base     = 1653
    division = {
      id             = { type = 18500 id = 511 }
      name           = "Koningin Regentes"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 512 }
      name           = "De Ruyter"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 513 }
      name           = "Hertog Hendrik"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 514 }
      name           = "3e Flotilla"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 515 }
      name           = "5e Flotilla"
      type           = transport
      model          = 0
    }
  }
}
