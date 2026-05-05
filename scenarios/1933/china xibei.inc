##############################
# Country definition for CXB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CXB
  regular_id         = CHI
  puppet             = CHI
  ai                 = "cxb_1933.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1284 # Xining
  dissent            = 40
  extra_tc           = 2
  manpower           = 31
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 100
  supplies       = 100
  money          = 50
  free = {
    ic             = 4
  }

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = U67 value = 150 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -100 }
    relation = {
      tag        = SIK
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }

  nationalprovinces      = { 1256 1262 1263 1265 1266 1268 1271 1272 1283 1284 1285 1255 1261 1264 }
  ownedprovinces         = { 1256 1262 1265 1266 1268 1271 1272 1283 1284 1285 1255 }
  controlledprovinces    = { 1256 1262 1265 1266 1268 1271 1272 1283 1284 1285 1255 }

  techapps               = { 5810 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1350 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 }
  blueprints             = { 1230 1360 5050 5820 5327 5700 5600 7600 7610 2620 2010 2860 2870 2920 2900 2910 6570 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 610001 } # Ma Hongkui
  headofgovernment       = { type = 9 id = 610002 } # Ma Hongkui
  foreignminister        = { type = 9 id = 610003 } # Fang Jing
  armamentminister       = { type = 9 id = 610004 } # Zi Shen
  ministerofsecurity     = { type = 9 id = 610005 } # Li Shiqun
  ministerofintelligence = { type = 9 id = 610006 } # Ma Hongbin
  chiefofstaff           = { type = 9 id = 610007 } # Ma Buqing
  chiefofarmy            = { type = 9 id = 610008 } # Ma Buqing
  chiefofnavy            = { type = 9 id = 610009 } # Ma Bufang
  chiefofair             = { type = 9 id = 610010 } # Ma Bufang

  landunit = {
    id       = { type = 22200 id = 1 }
    name     = "New 2nd Corps"
    location = 1264
    division = {
      id             = { type = 22200 id = 2 }
      name           = "New 9th Division"
      type           = infantry
      model          = 6
      extra1         = artillery
      extra2         = cavalry_brigade
      brigade_model1 = 4
      brigade_model2 = 6
      strength       = 85
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 3 }
    name     = "Qinghai Provincial Security Group"
    location = 1283
    division = {
      id             = { type = 22200 id = 4 }
      name           = "South Qinghai Garrison"
      type           = cavalry
      model          = 3
      strength       = 50
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 8 }
    name     = "5th Cavalry Corps"
    location = 1283
    division = {
      id             = { type = 22200 id = 9 }
      name           = "1st 2nd Cavalry Brigade"
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 55
      experience     = 40
    }
    division = {
      id             = { type = 22200 id = 10 }
      name           = "3rd Independent Cavalry Brigade"
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 3
      strength       = 55
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 11 }
    name     = "11th Corps"
    location = 1268
    division = {
      id             = { type = 22200 id = 12 }
      name           = "New 7th Division"
      type           = infantry
      model          = 5
      extra          = cavalry_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 22200 id = 13 }
      name           = "10th Independent Brigade"
      type           = infantry
      model          = 5
      extra          = cavalry_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 14 }
    name     = "81st Corps"
    location = 1268
    division = {
      id             = { type = 22200 id = 15 }
      name           = "35th Division"
      type           = infantry
      model          = 5
      extra          = cavalry_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22200 id = 16 }
    name     = "Ningxia Provincial Security Group"
    location = 1268
    division = {
      id             = { type = 22200 id = 17 }
      name           = "1st 2nd Security Militia"
      type           = militia
      model          = 4
      extra          = cavalry_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 40
    }
  }
}
