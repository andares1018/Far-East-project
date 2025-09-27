##############################
# Country definition for CHI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  ai_settings        = { flags = { RES = yes MOB1 = yes MOB2 = yes 1330110043_HISTORICAL_SCENARIO = yes } }
  capital            = 1337 # Nanjing
  dissent            = 10
  manpower           = 855
  # Resource Reserves
  energy         = 2100
  metal          = 1050
  rare_materials = 525
  oil            = 1000
  supplies       = 3000
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 100 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1384 1385 1386 1387 1388 1389 1390 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285 1286 1287 1288 1289 1290 1294 1295 1273 1274 1275 1277 1279 1280 1281 1282 1276 1278 1255 1256 1259 1260 1219 1238 1239 1240 1371 1372 1361 1362 1363 1364 1120 1121 1122 1123 1124 1125 }
  ownedprovinces         = { 1264 1267 1300 1301 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1315 1316 1317 1318 1319 1320 1321 1324 1326 1327 1333 1334 1335 1336 1337 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1257 1258 1325 1322 1314 1323 1263 1261 1264 1338 }
  controlledprovinces    = { 1264 1267 1300 1301 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1315 1316 1317 1318 1319 1320 1321 1324 1326 1327 1333 1334 1335 1336 1337 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1257 1258 1325 1322 1314 1323 1263 1261 1264 1338 }
  claimedprovinces       = { 1455 1458 1119 1414 1413 }

  techapps               = { 5810 5820 5050 5800 5080 5190 5310 54010 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1830 1840 1910 1920 1930 1940 1950 1960 1970 2860 2870 2290 2300 2310 2900 2910 2920 2930 5600 5610 7600 7610 2620 2010 2630 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 3010 3110 3120 3130 3140 3210 3220 3810 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4550 4300 4310 4320 4600 4610 4620 4630 4120 4800 4810 4700 4740 4750 4760 4770 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  blueprints             = { 1090 1850 5830 54030 5700 5620 1980 2880 6210 6300 4010 4330 4400 3150 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 7
    professional_army = 2
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 55138 } # Lin Sen
  headofgovernment       = { type = 9 id = 55002 } # Jiang Jieshi
  foreignminister        = { type = 9 id = 55117 } # Zhang Qun
  armamentminister       = { type = 9 id = 55182 } # Wu Dingchang 
  ministerofsecurity     = { type = 9 id = 55075 } # Jiang Zuobin
  ministerofintelligence = { type = 9 id = 55141 } # Dai Chunfeng
  chiefofstaff           = { type = 9 id = 55044 } # He Yingqin
  chiefofarmy            = { type = 9 id = 55043 } # He Yingqin
  chiefofnavy            = { type = 9 id = 55018 } # Chen Shaokuan
  chiefofair             = { type = 9 id = 55021 } # Zhou Zhirou
  dormant_leaders        = { 55368 55375 }

  landunit = {
    id       = { type = 22000 id = 30 }
    name     = "7th Corps"
    location = 1258
    division = {
      id             = { type = 22000 id = 31 }
      name           = "42nd Division"
      type           = infantry
      model          = 5
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 32 }
      name           = "17th Division"
      type           = infantry
      model          = 5
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 33 }
    name     = "17th Route Army"
    location = 1258
    division = {
      id             = { type = 22000 id = 34 }
      name           = "17th Route Army HQ"
      type           = hq
      model          = 1
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 35 }
      name           = "Shaanxi Guard"
      type           = militia
      model          = 3
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 36 }
      name           = "1st 2nd 3rd Special Regiments"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 6
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 37 }
    name     = "28th Corps"
    location = 1308
    division = {
      id             = { type = 22000 id = 38 }
      name           = "15th Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 39 }
      name           = "16th Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 40 }
      name           = "19th Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 41 }
    name     = "4th Route Army"
    location = 1308
    division = {
      id             = { type = 22000 id = 42 }
      name           = "62nd Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 43 }
      name           = "63rd Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 44 }
      name           = "New 34th Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 45 }
      name           = "4th Route Army Reserve Regiments"
      type           = infantry
      model          = 5
      strength       = 75
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 46 }
      name           = "4th Route Army Reserve Regiments"
      type           = infantry
      model          = 5
      strength       = 75
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 47 }
      name           = "4th Route Army HQ"
      type           = hq
      model          = 1
      strength       = 100
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 48 }
    name     = "Hunan Provincial Security Group"
    location = 1308
    division = {
      id             = { type = 22000 id = 49 }
      name           = "1st Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 50 }
      name           = "2nd Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 51 }
      name           = "3rd Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 52 }
      name           = "4th Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 53 }
      name           = "5th Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 54 }
      name           = "6th Zone Security Command"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 55 }
    name     = "25th Corps"
    location = 1305
    division = {
      id             = { type = 22000 id = 56 }
      name           = "103rd Division"
      type           = infantry
      model          = 5
      strength       = 100
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 57 }
      name           = "102nd Division"
      type           = infantry
      model          = 5
      strength       = 75
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 58 }
      name           = "New 8th Division"
      type           = infantry
      model          = 5
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 59 }
      name           = "121st Division"
      type           = infantry
      model          = 5
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 60 }
      name           = "New 25th Division"
      type           = infantry
      model          = 5
      strength       = 50
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 61 }
    name     = "Guizhou Provincial Security Group"
    location = 1305
    division = {
      id             = { type = 22000 id = 62 }
      name           = "1st Provincial Militia"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
    division = {
      id             = { type = 22000 id = 63 }
      name           = "2nd Provincial Militia"
      type           = militia
      model          = 4
      strength       = 50
      experience     = 30
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 107 }
    name     = "New 1st Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 108 }
      name           = "50th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 109 }
      name           = "New 30th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 110 }
      name           = "New 38th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 111 }
    name     = "New 6th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 112 }
      name           = "14th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 113 }
      name           = "207th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 114 }
      name           = "New 22nd Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 115 }
    name     = "74th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 116 }
      name           = "51st Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 50
    }
    division = {
      id             = { type = 22000 id = 117 }
      name           = "57th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 118 }
      name           = "58th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 119 }
    name     = "18th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 120 }
      name           = "11th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
    }
    division = {
      id             = { type = 22000 id = 121 }
      name           = "18th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 122 }
      name           = "118th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 123 }
    name     = "5th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 124 }
      name           = "45th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 125 }
      name           = "96th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 127 }
    name     = "2nd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 128 }
      name           = "76th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 129 }
      name           = "2nd Preparation Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 130 }
    name     = "13th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 131 }
      name           = "54th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 132 }
      name           = "89th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 22000 id = 133 }
    name     = "26th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 134 }
      name           = "41st Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 135 }
      name           = "169th Division"
      type           = infantry
      model          = 5
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 136 }
    name     = "8th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 137 }
      name           = "1st Honor Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 15
    }
    division = {
      id             = { type = 22000 id = 138 }
      name           = "166th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 22000 id = 139 }
    name     = "53rd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 140 }
      name           = "2nd Honor Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 141 }
      name           = "116th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 142 }
      name           = "130th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 22000 id = 143 }
    name     = "54th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 144 }
      name           = "36th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 40
    }
    division = {
      id             = { type = 22000 id = 145 }
      name           = "198th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 182 }
      name           = "67th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 22000 id = 146 }
    name     = "71st Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 147 }
      name           = "87th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 148 }
      name           = "88th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 149 }
      name           = "91st Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 150 }
    name     = "73rd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 151 }
      name           = "77th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 152 }
      name           = "193rd Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 153 }
    name     = "20th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 154 }
      name           = "133rd Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 155 }
      name           = "134th Division"
      type           = infantry
      model          = 3
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 156 }
    name     = "28th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 157 }
      name           = "52nd Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 158 }
      name           = "80th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 159 }
      name           = "192nd Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 160 }
    name     = "46th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 161 }
      name           = "175th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 162 }
      name           = "188th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 163 }
      name           = "New 19th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 164 }
    name     = "52nd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 165 }
      name           = "195th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 166 }
    name     = "62nd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 167 }
      name           = "95th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 168 }
      name           = "151st Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 169 }
      name           = "157th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 170 }
    name     = "64th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 171 }
      name           = "156th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 172 }
      name           = "159th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 173 }
    name     = "92nd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 174 }
      name           = "56th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 175 }
      name           = "142nd Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 176 }
    name     = "93rd Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 177 }
      name           = "18th Training Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 178 }
      name           = "20th Training Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 179 }
      name           = "22nd Training Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 180 }
    name     = "9th Army Group"
    location = 1337
    division = {
      id             = { type = 22000 id = 181 }
      name           = "10th Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
    }
    division = {
      id             = { type = 22000 id = 183 }
      name           = "83rd Division"
      type           = infantry
      model          = 6
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
    }
    division = {
      id             = { type = 22000 id = 230 }
      name           = "46th Division"
      type           = infantry
      model          = 8
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 22000 id = 184 }
    name     = "10th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 185 }
      name           = "190th Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 186 }
      name           = "10th Training Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 187 }
    name     = "35th Corps"
    location = 1337
    division = {
      id             = { type = 22000 id = 188 }
      name           = "New 32nd Division"
      type           = infantry
      model          = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 189 }
    name     = "NRA Youth Force"
    location = 1337
    division = {
      id             = { type = 22000 id = 190 }
      name           = "201st Division"
      type           = militia
      model          = 3
      strength       = 60
    }
  }

  navalunit = {
    id       = { type = 22000 id = 204 }
    name     = "1st Fleet"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 22000 id = 205 }
      name           = "Ninghai"
      type           = light_cruiser
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 206 }
      name           = "Pinghai"
      type           = light_cruiser
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 207 }
      name           = "Datong, Ziqiang"
      type           = destroyer
      model          = 0
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 208 }
      name           = "Yixian"
      type           = light_cruiser
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 209 }
      name           = "Hairong"
      type           = light_cruiser
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 210 }
      name           = "Haichou"
      type           = light_cruiser
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 211 }
      name           = "Yongjian, Yongji, Zhongshan, Jiankang"
      type           = destroyer
      model          = 0
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 212 }
      name           = "Dingan, Kean"
      type           = destroyer
      model          = 0
      strength       = 40
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 22000 id = 213 }
    name     = "2nd Fleet"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 22000 id = 214 }
      name           = "Minquan, Minsheng, Xianning, Chutong, Chutai"
      type           = destroyer
      model          = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 215 }
      name           = "Chuyou, Chuguan, Chuqian, Jiangyuan, Jiangzhen"
      type           = destroyer
      model          = 0
      strength       = 100
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 216 }
      name           = "Jiangkun, Jiangxi"
      type           = destroyer
      model          = 0
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 217 }
      name           = "Hupeng, Hue, Huying, Hucui"
      type           = destroyer
      model          = 0
      strength       = 80
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 22000 id = 218 }
    name     = "Training Fleet"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 22000 id = 219 }
      name           = "Yingrui"
      type           = light_cruiser
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 220 }
      name           = "Tongji"
      type           = light_cruiser
      model          = 2
      strength       = 100
    }
  }
  navalunit = {
    id       = { type = 22000 id = 221 }
    name     = "3rd Fleet"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 22000 id = 222 }
      name           = "Zhenhai"
      type           = heavy_cruiser
      model          = 1
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 223 }
      name           = "Tongan, Yongxiang, Chuyu, Jiangli"
      type           = destroyer
      model          = 0
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 224 }
      name           = "Dinghai"
      type           = destroyer
      model          = 0
      strength       = 20
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 22000 id = 225 }
    name     = "RoC Naval Academy Fleet"
    location = 1328
    base     = 1328
    division = {
      id             = { type = 22000 id = 226 }
      name           = "Wen-42, Wen-88, Wen-93, Shi-34, Shi-102"
      type           = destroyer
      model          = 0
      strength       = 100
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 227 }
      name           = "Shi-181, Yue-22, Yue-253, Yue-371"
      type           = destroyer
      model          = 0
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 228 }
      name           = "Haijing, Junhe, Cedian, Boxian"
      type           = destroyer
      model          = 0
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 22000 id = 229 }
      name           = "Tongxin, Tongde, Ziyouzhongguo"
      type           = transport
      model          = 0
      strength       = 60
    }
  }

  airunit = { 
    id       = { type = 22000 id = 193 }
    name     = "Hunan Air Force"
    location = 1312
    base     = 1312
    division = {
      id             = { type = 22000 id = 194 }
      name           = "11th 13th 14th Squadron"
      type           = tactical_bomber
      model          = 2
      strength       = 25
    }
    division = {
      id             = { type = 22000 id = 195 }
      name           = "12th Squadron"
      type           = interceptor
      model          = 0
      strength       = 9
    }
  }
  airunit = { 
    id       = { type = 22000 id = 196 }
    name     = "RoC Airforce"
    location = 1352
    base     = 1352
    division = {
      id             = { type = 22000 id = 197 }
      name           = "1st 2nd 9th 10th Squadrons"
      type           = tactical_bomber
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 198 }
      name           = "21st 22nd 23rd 24th 25th Squadrons"
      type           = interceptor
      model          = 3
      strength       = 48
    }
    division = {
      id             = { type = 22000 id = 199 }
      name           = "3rd 4th 5th 15th Squadrons"
      type           = tactical_bomber
      model          = 1
      strength       = 36
    }
    division = {
      id             = { type = 22000 id = 200 }
      name           = "15th Squadron"
      type           = multi_role
      model          = 1
      strength       = 9
    }
    division = {
      id             = { type = 22000 id = 201 }
      name           = "6th 35th Squadrons"
      type           = interceptor
      model          = 0
      strength       = 18
    }
    division = {
      id             = { type = 22000 id = 202 }
      name           = "26th 27th Squadrons"
      type           = tactical_bomber
      model          = 3
      strength       = 20
    }
    division = {
      id             = { type = 22000 id = 203 }
      name           = "Transport Squadron"
      type           = transport_plane
      model          = 0
      strength       = 100
    }
  }

  landdivision = { dormant = yes id = { type = 22000 id = 126 } name = "200th Division"  type = motorized model = 0 strength = 80 extra = light_armor_brigade brigade_model = 5 } 
}
