##############################
# Country definition for MAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  puppet             = JAP
  control            = JAP
  ai                 = "man_1936.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1208 # Changchun
  dissent            = 20
  manpower           = 0
  # Resource Reserves
  energy         = 900
  metal          = 450
  rare_materials = 225
  oil            = 200
  supplies       = 100
  money          = 10
  transports     = 10

  diplomacy = {
    relation = { tag = CHC value = -100 }
    relation = { tag = CHI value = -100 }
    relation = { tag = CSX value = -100 }
    relation = { tag = U67 value = -200 }
    relation = { tag = CXB value = -75 }
    relation = { tag = CYN value = -75 }
    relation = { tag = CGX value = -75 }
    relation = { tag = GER value = 20 }
    relation = { tag = JAP value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = 1 }
  }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1208 1219 }
  ownedprovinces         = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 }
  controlledprovinces    = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237 }
  claimedprovinces       = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 5600 3810 1830 1840 5810 5820 5800 5080 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 235001 } # Pu-Yi
  headofgovernment       = { type = 9 id = 235003 } # Zheng Xiaoxu
  foreignminister        = { type = 9 id = 235006 } # Xie Jieshi
  armamentminister       = { type = 9 id = 235021 } # Aisin-Gioro Xiqia
  ministerofsecurity     = { type = 9 id = 235034 } # Zhang Jinghui
  ministerofintelligence = { type = 9 id = 235028 } # Tong Jixu
  chiefofstaff           = { type = 9 id = 235047 } # Koiso Kuniaki
  chiefofarmy            = { type = 9 id = 235041 } # Muto Nobuyoshi
  chiefofnavy            = { type = 9 id = 235059 } # Yin Tsuo-chien
  chiefofair             = { type = 9 id = 235062 } # Noguchi Yujiro

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "Fengtian Guard Army"
    location = 1214
    division = {
      id             = { type = 28500 id = 2 }
      name           = "1st Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 16
    }
    division = {
      id             = { type = 28500 id = 3 }
      name           = "2nd Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 13
    }
    division = {
      id             = { type = 28500 id = 4 }
      name           = "3rd Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 14
    }
    division = {
      id             = { type = 28500 id = 5 }
      name           = "4th Mixed Brigade"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 10
    }
    division = {
      id             = { type = 28500 id = 6 }
      name           = "5th Mixed Brigade"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 8
    }
    division = {
      id             = { type = 28500 id = 7 }
      name           = "6th Mixed Brigade"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 13
    }
    division = {
      id             = { type = 28500 id = 8 }
      name           = "7th Mixed Brigade"
      type           = infantry
      model          = 3
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 12
    }
    division = {
      id             = { type = 28500 id = 9 }
      name           = "1st 2nd Cavalry Brigades"
      type           = cavalry
      model          = 6
      strength       = 24
    }
    division = {
      id             = { type = 28500 id = 10 }
      name           = "1st Teaching Brigade"
      type           = infantry
      model          = 6
      strength       = 24
    }
  }
  landunit = {
    id       = { type = 28500 id = 11 }
    name     = "Kirin Guard Army"
    location = 1207
    division = {
      id             = { type = 28500 id = 12 }
      name           = "1st Infantry Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 24
    }
    division = {
      id             = { type = 28500 id = 13 }
      name           = "2nd Infantry Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 23
    }
    division = {
      id             = { type = 28500 id = 14 }
      name           = "3rd Infantry Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 24
    }
    division = {
      id             = { type = 28500 id = 15 }
      name           = "4th Infantry Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 33
    }
    division = {
      id             = { type = 28500 id = 16 }
      name           = "5th Infantry Brigade"
      type           = infantry
      model          = 6
      strength       = 25
    }
    division = {
      id             = { type = 28500 id = 17 }
      name           = "7th Infantry Brigade"
      type           = infantry
      model          = 6
      strength       = 18
    }
    division = {
      id             = { type = 28500 id = 18 }
      name           = "8th Infantry Brigade"
      type           = infantry
      model          = 6
      strength       = 18
    }
    division = {
      id             = { type = 28500 id = 19 }
      name           = "2nd Teaching Brigade"
      type           = infantry
      model          = 6
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 28500 id = 20 }
    name     = "Kirin Railway Guard"
    location = 1207
    division = {
      id             = { type = 28500 id = 21 }
      name           = "Sanrin Unit"
      type           = garrison
      model          = 3
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 22 }
    name     = "Heilongjiang Guard Army"
    location = 1199
    division = {
      id             = { type = 28500 id = 23 }
      name           = "1st Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 31
    }
    division = {
      id             = { type = 28500 id = 24 }
      name           = "2nd Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 31
    }
    division = {
      id             = { type = 28500 id = 25 }
      name           = "3rd Mixed Brigade"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 32
    }
    division = {
      id             = { type = 28500 id = 26 }
      name           = "4th Mixed Brigade"
      type           = infantry
      model          = 6
      strength       = 23
    }
    division = {
      id             = { type = 28500 id = 27 }
      name           = "5th Mixed Brigade"
      type           = infantry
      model          = 6
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 28 }
    name     = "Hsingan Army"
    location = 1206
    division = {
      id             = { type = 28500 id = 29 }
      name           = "Hsingan Garrison"
      type           = garrison
      model          = 3
      strength       = 43
    }
  }
  landunit = {
    id       = { type = 28500 id = 30 }
    name     = "Taoliao Army"
    location = 1237
    division = {
      id             = { type = 28500 id = 31 }
      name           = "Rehe Guard Army"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
    }
  }
}
