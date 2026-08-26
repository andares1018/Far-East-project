##############################
# Country definition for CGX #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CGX
  regular_id         = CHI
  flag_ext           = _PNE
  ai                 = "cgx_1933.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1379 # Nanning
  dissent            = 40
  extra_tc           = 10
  manpower           = 32
  # Resource Reserves
  energy         = 600
  metal          = 300
  rare_materials = 150
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 60
  free = {
    ic             = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 100 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = U67 value = 150 }
    relation = { tag = U63 value = 200 access = yes }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = {
      tag        = SIK
      value      = 100
      guaranteed = { year = 1936 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "CGX" NumberOfSpies = 2 }

  nationalprovinces      = { 1376 1377 1378 1379 1380 1381 1382 1383 }
  ownedprovinces         = { 1376 1377 1378 1379 1380 1381 1382 1383 }
  controlledprovinces    = { 1376 1377 1378 1379 1380 1381 1382 1383 }

  techapps               = { 5810 5820 5800 5080 5700 5310 54010 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 1970 2860 2870 2290 2300 2310 2900 2910 5600 5610 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 3010 3110 3120 3210 3220 3810 3720 3410 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1080 1090 1560 1230 1350 1360 1840 1850 7600 7610 2620 2010 2880 2920 2930 2800 6210 6570 4120 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 585004 } # Li Zongren
  headofgovernment       = { type = 9 id = 585012 } # Huang Xuchu
  foreignminister        = { type = 9 id = 585016 } # Sun Renlin
  armamentminister       = { type = 9 id = 585026 } # Huang Zhongyue
  ministerofsecurity     = { type = 9 id = 585038 } # Lei Yin
  ministerofintelligence = { type = 9 id = 585042 } # Wang Gongdu
  chiefofstaff           = { type = 9 id = 585045 } # Bai Chongxi
  chiefofarmy            = { type = 9 id = 585054 } # Li Zongren
  chiefofnavy            = { type = 9 id = 585061 } # Li Qingwen
  chiefofair             = { type = 9 id = 585063 } # Lin Weicheng

  landunit = {
    id       = { type = 22400 id = 1 }
    name     = "7th Corps"
    location = 1378
    division = {
      id             = { type = 22400 id = 2 }
      name           = "19th Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 4 }
      name           = "24th Division"
      type           = infantry
      model          = 5
      strength       = 33
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22400 id = 9 }
    name     = "15th Corps"
    location = 1378
    division = {
      id             = { type = 22400 id = 10 }
      name           = "43rd Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 11 }
      name           = "44th Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22400 id = 12 }
      name           = "45th Division"
      type           = infantry
      model          = 5
      strength       = 40
      experience     = 30
    }
  }

  airunit = { 
    id       = { type = 22400 id = 64 }
    name     = "Guangxi Air Force"
    location = 1379
    base     = 1379
    division = {
      id             = { type = 22400 id = 65 }
      name           = "7th 8th 34th Squadrons"
      type           = interceptor
      model          = 5
      strength       = 25
    }
    division = {
      id             = { type = 22400 id = 66 }
      name           = "32nd Squadron"
      type           = tactical_bomber
      model          = 2
      strength       = 9
    }
  }
}
