##############################
# Country definition for SIK #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIK
  puppet             = SOV
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1281 # Urumqi
  dissent            = 40
  manpower           = 0
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 100

  diplomacy = {
    relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 125 }
    relation = { tag = TAN value = 125 }
    relation = { tag = CHI value = -125 }
  }
  SpyInfo                = { country = "SIK" NumberOfSpies = 4 }

  nationalprovinces      = { 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 }
  ownedprovinces         = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }
  controlledprovinces    = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }

  techapps               = { 5810 5820 5050 5800 5316 5326 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1830 1910 1920 1930 1940 1950 1960 1970 2290 2300 2310 2900 2910 6570 6300 14000 14010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  blueprints             = { 1090 1100 1220 5327 5700 5600 7600 7610 2620 2010 2860 2870 2910 14020 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 420003 } # Sheng Shicai
  headofgovernment       = { type = 9 id = 420010 } # Sheng Shicai
  foreignminister        = { type = 9 id = 420022 } # Guo Daming
  armamentminister       = { type = 9 id = 420025 } # Mao Zemin
  ministerofsecurity     = { type = 9 id = 420033 } # Li Yingqi
  ministerofintelligence = { type = 9 id = 420039 } # Li Yingqi
  chiefofstaff           = { type = 9 id = 420046 } # Sheng Shiqi
  chiefofarmy            = { type = 9 id = 420051 } # Sheng Shicai
  chiefofnavy            = { type = 9 id = 420063 } # Under Army Control
  chiefofair             = { type = 9 id = 420060 } # Yao Xiong

  landunit = {
    id       = { type = 25600 id = 1 }
    name     = "Xin'jiang Jüntuan 1"
    location = 1281
    division = {
      id             = { type = 25600 id = 2 }
      name           = "1 Xin'jiang Shi"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 25600 id = 3 }
      name           = "7 Xin'jiang Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 25600 id = 4 }
      name           = "8 Xin'jiang Lü"
      type           = militia
      model          = 3
      strength       = 40
    }
  }
}
