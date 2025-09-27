##############################
# Country definition for UCS #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = UCS
  regular_id         = CHI
  puppet             = JAP
  name               = EHAC
  capital            = 1245 # Tangshan
  dissent            = 30
  manpower           = 20
  # Resource Reserves
  energy         = 5
  metal          = 5
  rare_materials = 5
  oil            = 5
  supplies       = 100
  money          = 5

  diplomacy = {
    relation = { tag = CHI value = 150 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = CHC value = -75 }
  }
  SpyInfo                = { country = "UCS" NumberOfSpies = 2 }

  nationalprovinces      = { 1245 1247 1241 }
  ownedprovinces         = { 1245 }
  controlledprovinces    = { 1245 }
  claimedprovinces = { 1242 1243 1244 1250 1251 1252 1253 1254 1248 1249 1323 1327 1330 1332 1329 1328 1331 }

  techapps               = { 5810 5820 5800 5080 5316 5326 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1830 1910 1920 1930 1940 1950 1960 2290 2300 2310 2900 2910 2920 2930 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1350 1360 5050 5327 5700 5600 7600 7610 2620 2010 2860 2870 2880 8010 8020 8050 8060 8070 8080 3010 3110 3120 3210 3220 3810 3720 3410 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 4740 4750 4760 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 1330009 } # Yin Rugeng
  headofgovernment       = { type = 9 id = 1330010 } # Yin Rugeng
  foreignminister        = { type = 9 id = 1330011 } # Yin Rugeng
  armamentminister       = { type = 9 id = 1330017 } # Chi Zongmo
  ministerofsecurity     = { type = 9 id = 1330014 } # Doihara Kenji
  ministerofintelligence = { type = 9 id = 1330008 } # Doihara Kenji
  chiefofstaff           = { type = 9 id = 1330015 } # Doihara Kenji
  chiefofarmy            = { type = 9 id = 1330007 } # Qi Xieyuan
  chiefofnavy            = { type = 9 id = 1330013 } # Department of the Navy
  chiefofair             = { type = 9 id = 1330018 } # Department of the Air Force

  landunit = {
    id       = { type = 22001 id = 1 }
    name     = "East Hebei Security Group"
    location = 1245
    division = {
      id             = { type = 22001 id = 2 }
      name           = "1st 2nd Divisions"
      type           = infantry
      model          = 5
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22001 id = 3 }
      name           = "3rd 4th 5th Divisions"
      type           = militia
      model          = 5
      strength       = 40
      experience     = 30
    }
  }
}
