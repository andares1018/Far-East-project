##############################
# Country definition for U63 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U63
  regular_id         = CHI
  puppet             = CHI
  flag_ext           = _KMT
  ai                 = "U63.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1369 # Guangzhou
  dissent            = 40
  extra_tc           = 4
  manpower           = 100
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 100
  supplies       = 100
  money          = 50
  free = {
    ic             = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 75 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = CGX value = 200 access = yes }
    relation = { tag = U67 value = 150 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
  }
  SpyInfo                = { country = "U63" NumberOfSpies = 4 }

  nationalprovinces      = { 1365 1367 1368 1369 1370 1373 1374 1375 1311 1356 }
  ownedprovinces         = { 1365 1367 1368 1369 1370 1373 1374 1375 }
  controlledprovinces    = { 1365 1367 1368 1369 1370 1373 1374 1375 }

  techapps               = { 5810 5820 5800 5080 5700 5310 54010 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 1970 2860 2870 2290 2300 2310 2900 2910 5600 5610 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 3010 3110 3120 3210 3220 3810 3720 3410 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1080 1090 1560 1230 1350 1360 1840 1850 7600 7610 2620 2010 2880 2920 2930 2800 6210 6570 4120 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 2500000 } # Chen Jitang
  headofgovernment       = { type = 9 id = 2500001 } # Chen Jitang
  foreignminister        = { type = 9 id = 2500005 } # Lin Yungai
  armamentminister       = { type = 9 id = 2500015 } # Luo Yiqun
  ministerofsecurity     = { type = 9 id = 2500013 } # Lin Yizhong
  ministerofintelligence = { type = 9 id = 2500014 } # Lin Yizhong
  chiefofstaff           = { type = 9 id = 2500007 } # Li Hanhun
  chiefofarmy            = { type = 9 id = 2500003 } # Chen Jitang
  chiefofnavy            = { type = 9 id = 2500018 } # Zhang Zhiying
  chiefofair             = { type = 9 id = 2500019 } # Huang Zhenqiu

  landunit = {
    id       = { type = 22450 id = 26 }
    name     = "Guangdong 1st Corps"
    location = 1369
    division = {
      id             = { type = 22450 id = 27 }
      name           = "Guangdong 1st Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 28 }
      name           = "Guangdong 2nd Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 2
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 29 }
      name           = "Guangdong 3rd Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22450 id = 30 }
    name     = "Guangdong 2nd Corps"
    location = 1369
    division = {
      id             = { type = 22450 id = 31 }
      name           = "Guangdong 4th Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 2
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 32 }
      name           = "Guangdong 5th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 33 }
      name           = "Guangdong 6th Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 4
      strength       = 60
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22450 id = 34 }
    name     = "Guangdong 3rd Corps"
    location = 1369
    division = {
      id             = { type = 22450 id = 35 }
      name           = "Guangdong 7th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 36 }
      name           = "Guangdong 8th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22450 id = 37 }
      name           = "Guangdong 9th Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22450 id = 38 }
    name     = "4th Army"
    location = 1369
    division = {
      id             = { type = 22450 id = 39 }
      name           = "1st Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 40 }
      name           = "2nd Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 41 }
      name           = "3rd Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 42 }
      name           = "4th Independent Division"
      type           = militia
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 43 }
      name           = "Training Division"
      type           = infantry
      model          = 5
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 0
      brigade_model2 = 4
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 44 }
      name           = "4th Army HQ"
      type           = hq
      model          = 1
      extra          = police
      brigade_model  = 1
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 22450 id = 45 }
    name     = "4th Fleet"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22450 id = 46 }
      name           = "Haizhou, Haihu"
      type           = destroyer
      model          = 0
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 22450 id = 47 }
      name           = "Haiqiang, Haiji, Jiangda, Jianggong, Guangjin"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 48 }
      name           = "Guangcheng, Anbei, Fengwu, Jianru, Zhixin"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 49 }
      name           = "Hushan, Guanghua, Zhili, Jinma, Feipeng"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 50 }
      name           = "Jiangcheng, Jiangping, Pingxi, Jingdong, Guangan"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 51 }
      name           = "Guangyuan, Lichen, Suijiang, Haiou, Zhujiang "
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 52 }
      name           = "Xixing, Zhongyuan, Zhongkai, Xinsongjiang"
      type           = destroyer
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 22450 id = 53 }
      name           = "S-1, S-2, S-3, S-4"
      type           = destroyer
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 22400 id = 54 }
      name           = "Zhaohe"
      type           = light_cruiser
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 22450 id = 55 }
      name           = "Hairui, Fuan"
      type           = transport
      model          = 0
      strength       = 40
    }
  }

  airunit = { 
    id       = { type = 22400 id = 56 }
    name     = "Guangdong Fighter Force"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22450 id = 57 }
      name           = "16th Squadron"
      type           = interceptor
      model          = 0
      strength       = 9
    }
    division = {
      id             = { type = 22450 id = 58 }
      name           = "17th Squadron"
      type           = interceptor
      model          = 4
      strength       = 10
    }
    division = {
      id             = { type = 22450 id = 59 }
      name           = "28th Squadron"
      type           = interceptor
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 22450 id = 60 }
      name           = "29th Squadron"
      type           = interceptor
      model          = 3
      strength       = 20
    }
  }
  airunit = { 
    id       = { type = 22400 id = 61 }
    name     = "Guangdong Bomber Force"
    location = 1369
    base     = 1369
    division = {
      id             = { type = 22450 id = 62 }
      name           = "18th 19th 20th 31st Squadrons"
      type           = tactical_bomber
      model          = 2
      strength       = 37
    }
    division = {
      id             = { type = 22450 id = 63 }
      name           = "30th Squadron"
      type           = tactical_bomber
      model          = 3
      strength       = 6
    }
  }

  division_development = {
    id             = { type = 22450 id = 14 }
    name           = "25th Division"
    type           = infantry
    model          = 5
    cost           = 0.5
    date           = { year = 1934 month = january day = 1 }
    extra1         = engineer
    extra2         = artillery
    brigade_model1 = 0
    brigade_model2 = 2
  }
  division_development = {
    id             = { type = 22450 id = 16 }
    name           = "27th Division"
    type           = infantry
    model          = 5
    cost           = 0.5
    date           = { year = 1934 month = january day = 1 }
    extra1         = engineer
    extra2         = artillery
    brigade_model1 = 0
    brigade_model2 = 2
  }
}
