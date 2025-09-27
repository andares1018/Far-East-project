##############################
# Country definition for U38 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U38
  regular_id         = U38
  puppet             = U38
  flag_ext           = _KMT
  ai                 = "U38.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes RES = yes } }
  intrinsic_gov_type = paternal_autocrat
  capital            = 1330 # Jinan
  dissent            = 10
  extra_tc           = 20
  manpower           = 173
  # Resource Reserves
  energy         = 480
  metal          = 240
  rare_materials = 120
  oil            = 100
  supplies       = 100
  money          = 50
  free = {
    ic             = 4
  }

  diplomacy = {
    relation = { tag = CHI value = 100 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHC value = -75 }
  }
  SpyInfo                = { country = "U38" NumberOfSpies = 2 }

  nationalprovinces      = { 1327 1330 1332 1329 1328 1331 }
  ownedprovinces         = { 1330 1332 1329 1328 1331 }
  controlledprovinces    = { 1330 1332 1329 1328 1331 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1230 1350 1360 5050 5327 5700 5600 7600 7610 2620 2010 2860 2870 2880 2920 2930 6570 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4300 4310 4320 4600 4610 4620 4630 4800 4810 4700 4740 4750 4760 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 1009000 } # Han Fuju
  headofgovernment       = { type = 9 id = 1009001 } # Han Fuju
  foreignminister        = { type = 9 id = 1009002 } # Han Fuju
  armamentminister       = { type = 9 id = 1009003 } # Li Shuchun
  ministerofsecurity     = { type = 9 id = 1009004 } # Fan Zhuxian
  ministerofintelligence = { type = 9 id = 1009005 } # Shi Jingting
  chiefofstaff           = { type = 9 id = 1009006 } # Gao Renfu
  chiefofarmy            = { type = 9 id = 1009007 } # Wen Chenglie
  chiefofnavy            = { type = 9 id = 1009008 } # Yuan Fangqiao
  chiefofair             = { type = 9 id = 1009009 } # Han Fuju

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "6th Corps"
    location = 1330
    division = {
      id             = { type = 22000 id = 2 }
      name           = "22nd Division"
      type           = infantry
      model          = 5
      strength       = 65
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 3 }
      name           = "29th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 65
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 4 }
      name           = "74th Division"
      type           = infantry
      model          = 5
      strength       = 65
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 5 }
    name     = "12th Corps"
    location = 1330
    division = {
      id             = { type = 22000 id = 6 }
      name           = "20th Division"
      type           = infantry
      model          = 5
      strength       = 65
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 7 }
      name           = "81st Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 65
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 8 }
    name     = "3rd Route Army"
    location = 1330
    division = {
      id             = { type = 22000 id = 9 }
      name           = "3rd Route Army HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 10 }
      name           = "1st 2nd Independent Artillery Regiments"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 5
      strength       = 65
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 11 }
    name     = "Shandong Provincial Security Group"
    location = 1330
    division = {
      id             = { type = 22000 id = 12 }
      name           = "1st Route Militia"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 13 }
      name           = "2nd Route Militia"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 14 }
      name           = "3rd Route Militia"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 15 }
      name           = "4th Route Militia"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 16 }
      name           = "5th Route Militia"
      type           = militia
      model          = 3
      strength       = 60
      experience     = 30
    }
  }
}
