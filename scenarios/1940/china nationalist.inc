##############################
# Country definition for CHI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  ai                 = "chi_1940.ai"
  ai_settings        = { flags = { RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes } }
  capital            = 1299 # Chongqing
  manpower           = 7000
  # Resource Reserves
  energy         = 2000
  metal          = 2000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 20

  diplomacy = {
    relation = { tag = CHC value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = SIK value = -125 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1384 1385 1386 1387 1388 1389 1390 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285 1286 1287 1288 1289 1290 1294 1295 1273 1274 1275 1277 1279 1280 1281 1282 1276 1278 1255 1256 1259 1260 1219 1238 1239 1240 1371 1372 1361 1362 1363 1364 1120 1121 1122 1123 1124 1125 }
  ownedprovinces         = { 1241 1247 1242 1243 1244 1248 1249 1250 1251 1252 1253 1254 1257 1258 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 }
  controlledprovinces    = { 1257 1258 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1319 1320 1324 1325 1326 1341 1347 1349 1351 1352 1353 1354 1355 1356 1357 1359 1360 1368 1373 1375 1376 1377 1378 1380 1381 1382 1383 }
  claimedprovinces       = { 1455 1458 1119 1414 }

  techapps               = { 5810 5820 5050 5830 5800 5080 5190 5310 54010 54030 5320 5316 5326 5327 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1830 1840 1850 1910 1920 1930 1940 1950 1960 1970 1980 1990 2860 2870 2880 2290 2300 2310 2900 2910 2920 2930 2940 7600 2800 5600 5610 5620 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 6300 6310 3010 3110 3120 3130 3140 3210 3220 3810 3820 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4550 4010 4020 4300 4310 4320 4330 4340 4600 4610 4620 4630 4120 4130 4800 4810 4820 4700 4290 4740 4750 4760 4770 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9090 9010 9190 9200 9210 9220 }
  blueprints             = { 1110 1860 1396 1380 5060 5200 5350 5360 5700 199130 7610 2620 2010 2020 2450 21180 6210 6010 6020 4040 4140 4830 4710 4400 3150 3020 3736 3740 9100 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 8
    defense_lobby     = 10
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 55138 } # Lin Sen
  headofgovernment       = { type = 9 id = 55002 } # Jiang Jieshi
  foreignminister        = { type = 9 id = 55120 } # Wang Chonghui
  armamentminister       = { type = 9 id = 55008 } # Kong Xiangxi
  ministerofsecurity     = { type = 9 id = 55077 } # Zhou Zhongyue
  ministerofintelligence = { type = 9 id = 55141 } # Dai Chunfeng
  chiefofstaff           = { type = 9 id = 55044 } # He Yingqin
  chiefofarmy            = { type = 9 id = 55043 } # He Yingqin
  chiefofnavy            = { type = 9 id = 55018 } # Chen Shaokuan
  chiefofair             = { type = 9 id = 55021 } # Zhou Zhirou
  dormant_leaders        = { 55012 55303 55338 55370 55377 }
  dormant_teams          = { 55005 }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "31st Corps"
    location = 1376
    division = {
      id             = { type = 22000 id = 2 }
      name           = "131st Division"
      type           = infantry
      model          = 6
      strength       = 62
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 3 }
      name           = "135th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 4 }
    name     = "46th Corps"
    location = 1377
    division = {
      id             = { type = 22000 id = 5 }
      name           = "170th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 6 }
      name           = "175th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 7 }
      name           = "New 19th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 8 }
    name     = "26th Army Group"
    location = 1381
    division = {
      id             = { type = 22000 id = 9 }
      name           = "1st 2nd 3rd 4th Sep. Infantry Regiments"
      type           = infantry
      model          = 6
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 10 }
    name     = "64th Corps"
    location = 1378
    division = {
      id             = { type = 22000 id = 11 }
      name           = "155th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 12 }
      name           = "156th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 13 }
    name     = "66th Corps"
    location = 1383
    division = {
      id             = { type = 22000 id = 14 }
      name           = "159th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 15 }
      name           = "160th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 16 }
    name     = "2nd Corps"
    location = 1378
    division = {
      id             = { type = 22000 id = 17 }
      name           = "9th Division"
      type           = infantry
      model          = 9
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 18 }
      name           = "33rd Division"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 22000 id = 19 }
      name           = "76th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 20 }
    name     = "5th Corps"
    location = 1382
    division = {
      id             = { type = 22000 id = 21 }
      name           = "200th Division"
      type           = motorized
      model          = 0
      strength       = 80
    }
    division = {
      id             = { type = 22000 id = 22 }
      name           = "1st Honor Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 15
    }
    division = {
      id             = { type = 22000 id = 23 }
      name           = "New 22nd Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 24 }
    name     = "9th Corps"
    location = 1324
    division = {
      id             = { type = 22000 id = 25 }
      name           = "49th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 26 }
      name           = "93rd Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 27 }
      name           = "2nd Reserve Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 28 }
    name     = "99th Corps"
    location = 1373
    division = {
      id             = { type = 22000 id = 29 }
      name           = "92nd Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 30 }
      name           = "99th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 31 }
      name           = "118th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 32 }
    name     = "36th Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 33 }
      name           = "5th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 34 }
      name           = "96th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 35 }
    name     = "Kwangsi Pacification Army"
    location = 1378
    division = {
      id             = { type = 22000 id = 36 }
      name           = "Kwangsi Pacification HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 37 }
      name           = "43rd Division"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 38 }
      name           = "New 3rd Division"
      type           = infantry
      model          = 6
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 39 }
    name     = "68th Corps"
    location = 1257
    division = {
      id             = { type = 22000 id = 40 }
      name           = "119th Division"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 41 }
      name           = "143rd Division"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 42 }
      name           = "27th Independent Brigade"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 43 }
    name     = "30th Corps"
    location = 1257
    division = {
      id             = { type = 22000 id = 44 }
      name           = "27th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 45 }
      name           = "30th Division"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 22000 id = 46 }
      name           = "31st Division"
      type           = militia
      model          = 4
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 22000 id = 47 }
    name     = "13th Corps"
    location = 1314
    division = {
      id             = { type = 22000 id = 48 }
      name           = "89th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 49 }
      name           = "110th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 50 }
      name           = "11th Independent Brigade"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 51 }
    name     = "85th Corps"
    location = 1314
    division = {
      id             = { type = 22000 id = 52 }
      name           = "4th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 53 }
      name           = "32nd Division"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 22000 id = 225 }
      name           = "11th Reserve Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 54 }
    name     = "92nd Corps"
    location = 1324
    division = {
      id             = { type = 22000 id = 55 }
      name           = "21st Division"
      type           = infantry
      model          = 6
      strength       = 33
    }
    division = {
      id             = { type = 22000 id = 56 }
      name           = "47th Division"
      type           = militia
      model          = 4
      strength       = 50
    }
    division = {
      id             = { type = 22000 id = 224 }
      name           = "142nd Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 57 }
    name     = "84th Corps"
    location = 1325
    division = {
      id             = { type = 22000 id = 58 }
      name           = "178th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 59 }
      name           = "188th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 60 }
    name     = "44th Corps"
    location = 1316
    division = {
      id             = { type = 22000 id = 61 }
      name           = "149th Division"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 62 }
      name           = "150th Division"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 63 }
    name     = "67th Corps"
    location = 1316
    division = {
      id             = { type = 22000 id = 64 }
      name           = "161st Division"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 65 }
      name           = "162nd Division"
      type           = infantry
      model          = 6
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22000 id = 66 }
    name     = "41st Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 67 }
      name           = "122nd Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 68 }
      name           = "124th Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 69 }
    name     = "45th Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 70 }
      name           = "125th Division"
      type           = infantry
      model          = 6
      strength       = 62
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 71 }
      name           = "127th Division"
      type           = infantry
      model          = 6
      strength       = 62
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 72 }
    name     = "22nd Army Group"
    location = 1351
    division = {
      id             = { type = 22000 id = 73 }
      name           = "1st Guerrilla Division"
      type           = militia
      model          = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 74 }
    name     = "55th Corps"
    location = 1341
    division = {
      id             = { type = 22000 id = 75 }
      name           = "29th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 65
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 76 }
      name           = "74th Division"
      type           = infantry
      model          = 6
      strength       = 65
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 77 }
    name     = "59th Corps"
    location = 1341
    division = {
      id             = { type = 22000 id = 78 }
      name           = "38th Division"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 79 }
      name           = "180th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 80 }
      name           = "9th Cavalry Division"
      type           = cavalry
      model          = 8
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 81 }
    name     = "77th Corps"
    location = 1326
    division = {
      id             = { type = 22000 id = 82 }
      name           = "37th Division"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 83 }
      name           = "132nd Division"
      type           = infantry
      model          = 7
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 84 }
      name           = "179th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 85 }
    name     = "75th Corps"
    location = 1304
    division = {
      id             = { type = 22000 id = 86 }
      name           = "6th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 87 }
      name           = "13th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 88 }
      name           = "4th Cavalry Division"
      type           = cavalry
      model          = 8
      strength       = 33
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 89 }
    name     = "39th Corps"
    location = 1325
    division = {
      id             = { type = 22000 id = 90 }
      name           = "56th Division"
      type           = infantry
      model          = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 91 }
    name     = "94th Corps"
    location = 1319
    division = {
      id             = { type = 22000 id = 92 }
      name           = "12th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 93 }
      name           = "55th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 94 }
      name           = "185th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 95 }
    name     = "26th Corps"
    location = 1326
    division = {
      id             = { type = 22000 id = 96 }
      name           = "23rd Division"
      type           = infantry
      model          = 6
      strength       = 33
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 97 }
      name           = "41st Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 98 }
      name           = "44th Division"
      type           = infantry
      model          = 6
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 99 }
    name     = "18th Corps"
    location = 1347
    division = {
      id             = { type = 22000 id = 100 }
      name           = "18th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 101 }
      name           = "77th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 102 }
      name           = "199th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 103 }
    name     = "7th Corps"
    location = 1320
    division = {
      id             = { type = 22000 id = 104 }
      name           = "3rd Guerrilla Division"
      type           = militia
      model          = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 105 }
      name           = "4th Guerrilla Division"
      type           = militia
      model          = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 106 }
      name           = "171st Guerrilla Division"
      type           = militia
      model          = 3
      strength       = 40
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 107 }
      name           = "172nd Guerrilla Division"
      type           = militia
      model          = 3
      strength       = 40
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 108 }
    name     = "Eastern Hupei Guerilla Force"
    location = 1341
    division = {
      id             = { type = 22000 id = 109 }
      name           = "16th Guerrilla Division"
      type           = militia
      model          = 4
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 110 }
      name           = "19th Guerrilla Division"
      type           = militia
      model          = 4
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 111 }
    name     = "32nd Corps"
    location = 1308
    division = {
      id             = { type = 22000 id = 112 }
      name           = "139th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 113 }
      name           = "141st Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 114 }
    name     = "49th Corps"
    location = 1308
    division = {
      id             = { type = 22000 id = 115 }
      name           = "105th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 116 }
      name           = "9th Reserve Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 117 }
    name     = "58th Corps"
    location = 1355
    division = {
      id             = { type = 22000 id = 118 }
      name           = "New 10th Division"
      type           = infantry
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 22000 id = 119 }
      name           = "New 11th Division"
      type           = infantry
      model          = 6
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 120 }
    name     = "60th Corps"
    location = 1357
    division = {
      id             = { type = 22000 id = 121 }
      name           = "183rd Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 122 }
      name           = "184th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 123 }
    name     = "1st Army Group"
    location = 1355
    division = {
      id             = { type = 22000 id = 124 }
      name           = "2nd Advance Column"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 125 }
    name     = "78th Corps"
    location = 1353
    division = {
      id             = { type = 22000 id = 126 }
      name           = "New 13th Division"
      type           = infantry
      model          = 6
      strength       = 50
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 127 }
      name           = "New 16th Division"
      type           = infantry
      model          = 6
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 128 }
    name     = "72nd Corps"
    location = 1353
    division = {
      id             = { type = 22000 id = 129 }
      name           = "New 14th Division"
      type           = infantry
      model          = 6
      strength       = 50
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 130 }
      name           = "New 15th Division"
      type           = infantry
      model          = 6
      strength       = 50
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 131 }
    name     = "8th Corps"
    location = 1352
    division = {
      id             = { type = 22000 id = 132 }
      name           = "3rd Division"
      type           = infantry
      model          = 9
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 133 }
      name           = "197th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 134 }
    name     = "Hupei Hunan Border Area Advance Force"
    location = 1352
    division = {
      id             = { type = 22000 id = 135 }
      name           = "1st Advance Column"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 136 }
      name           = "3rd Advance Column"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 137 }
    name     = "20th Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 138 }
      name           = "133rd Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 139 }
      name           = "134th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 140 }
    name     = "52nd Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 141 }
      name           = "2nd Division"
      type           = infantry
      model          = 9
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 142 }
      name           = "25th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 143 }
      name           = "195th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 144 }
    name     = "37th Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 145 }
      name           = "60th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 146 }
      name           = "95th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 147 }
    name     = "79th Corps"
    location = 1313
    division = {
      id             = { type = 22000 id = 148 }
      name           = "82nd Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 149 }
      name           = "98th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 150 }
      name           = "140th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 151 }
    name     = "53rd Corps"
    location = 1308
    division = {
      id             = { type = 22000 id = 152 }
      name           = "116th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 10
    }
    division = {
      id             = { type = 22000 id = 153 }
      name           = "130th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 22000 id = 154 }
    name     = "54th Corps"
    location = 1368
    division = {
      id             = { type = 22000 id = 155 }
      name           = "14th Division"
      type           = infantry
      model          = 9
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 156 }
      name           = "50th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 157 }
    name     = "87th Corps"
    location = 1355
    division = {
      id             = { type = 22000 id = 158 }
      name           = "198th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 22000 id = 159 }
    name     = "73rd Corps"
    location = 1313
    division = {
      id             = { type = 22000 id = 160 }
      name           = "15th Division"
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 161 }
    name     = "4th Corps"
    location = 1355
    division = {
      id             = { type = 22000 id = 162 }
      name           = "59th Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 163 }
      name           = "102nd Division"
      type           = infantry
      model          = 6
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 164 }
    name     = "70th Corps"
    location = 1313
    division = {
      id             = { type = 22000 id = 165 }
      name           = "90th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 166 }
      name           = "107th Division"
      type           = infantry
      model          = 6
      strength       = 75
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 167 }
    name     = "74th Corps"
    location = 1299
    division = {
      id             = { type = 22000 id = 168 }
      name           = "51st Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 50
    }
    division = {
      id             = { type = 22000 id = 169 }
      name           = "57th Division"
      type           = infantry
      model          = 7
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 4
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 170 }
      name           = "58th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 22000 id = 171 }
    name     = "9th War Area"
    location = 1309
    division = {
      id             = { type = 22000 id = 172 }
      name           = "9th War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 173 }
      name           = "New 12th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 174 }
      name           = "11th Division"
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 4
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 22000 id = 175 }
    name     = "5th War Area"
    location = 1316
    division = {
      id             = { type = 22000 id = 176 }
      name           = "5th War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 177 }
      name           = "40th Division"
      type           = infantry
      model          = 6
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 178 }
      name           = "4th Reserve Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 179 }
    name     = "1st War Area"
    location = 1319
    division = {
      id             = { type = 22000 id = 180 }
      name           = "1st War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 181 }
      name           = "81st Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 65
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 182 }
    name     = "2nd Cavalry Corps"
    location = 1319
    division = {
      id             = { type = 22000 id = 183 }
      name           = "3rd Cavalry Division"
      type           = cavalry
      model          = 8
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 184 }
    name     = "2nd War Area"
    location = 1259
    division = {
      id             = { type = 22000 id = 185 }
      name           = "2nd War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 186 }
      name           = "7th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 187 }
    name     = "40th Corps"
    location = 1259
    division = {
      id             = { type = 22000 id = 188 }
      name           = "46th Division"
      type           = infantry
      model          = 9
      extra1         = engineer
      extra2         = artillery
      brigade_model1 = 2
      brigade_model2 = 6
      strength       = 80
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 189 }
      name           = "8th Reserve Division"
      type           = infantry
      model          = 5
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 190 }
    name     = "8th War Area"
    location = 1268
    division = {
      id             = { type = 22000 id = 191 }
      name           = "8th War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 192 }
    name     = "81st Corps"
    location = 1260
    division = {
      id             = { type = 22000 id = 193 }
      name           = "35th Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 3
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 194 }
      name           = "101st Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 195 }
    name     = "35th Corps"
    location = 1260
    division = {
      id             = { type = 22000 id = 196 }
      name           = "New 32nd Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 197 }
    name     = "69th Corps"
    location = 1259
    division = {
      id             = { type = 22000 id = 198 }
      name           = "New 6th Division"
      type           = militia
      model          = 4
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 22000 id = 199 }
    name     = "3rd War Area"
    location = 1351
    division = {
      id             = { type = 22000 id = 200 }
      name           = "3rd War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 201 }
    name     = "23rd Corps"
    location = 1351
    division = {
      id             = { type = 22000 id = 202 }
      name           = "144th Division"
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 203 }
    name     = "28th Corps"
    location = 1351
    division = {
      id             = { type = 22000 id = 204 }
      name           = "19th Division"
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 205 }
      name           = "147th Division"
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 206 }
    name     = "21st Corps"
    location = 1351
    division = {
      id             = { type = 22000 id = 207 }
      name           = "16th Division"
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 208 }
    name     = "10th Corps"
    location = 1351
    division = {
      id             = { type = 22000 id = 209 }
      name           = "190th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 210 }
      name           = "10th Reserve Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 211 }
    name     = "50th Corps"
    location = 1351
    division = {
      id             = { type = 22000 id = 212 }
      name           = "79th Division"
      type           = infantry
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 213 }
    name     = "4th War Area"
    location = 1368
    division = {
      id             = { type = 22000 id = 214 }
      name           = "4th War Area HQ"
      type           = hq
      model          = 1
      strength       = 80
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 215 }
    name     = "47th Corps"
    location = 1320
    division = {
      id             = { type = 22000 id = 216 }
      name           = "104th Division"
      type           = infantry
      model          = 6
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 217 }
    name     = "33rd Corps"
    location = 1375
    division = {
      id             = { type = 22000 id = 218 }
      name           = "66th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
    division = {
      id             = { type = 22000 id = 219 }
      name           = "73rd Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 220 }
    name     = "34th Corps"
    location = 1360
    division = {
      id             = { type = 22000 id = 221 }
      name           = "69th Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 222 }
    name     = "34th Corps"
    location = 1359
    division = {
      id             = { type = 22000 id = 223 }
      name           = "71st Division"
      type           = infantry
      model          = 7
      strength       = 60
      experience     = 30
    }
  }
  landunit = {
    id       = { type = 22000 id = 226 }
    name     = "29th Corps"
    location = 1319
    division = {
      id             = { type = 22000 id = 227 }
      name           = "91st Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 228 }
    name     = "80th Corps"
    location = 1257
    division = {
      id             = { type = 22000 id = 229 }
      name           = "165th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 230 }
      name           = "New 27th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 231 }
    name     = "5th Army Group"
    location = 1257
    division = {
      id             = { type = 22000 id = 232 }
      name           = "34th Division"
      type           = militia
      model          = 4
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 233 }
    name     = "15th Corps"
    location = 1314
    division = {
      id             = { type = 22000 id = 234 }
      name           = "64th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 235 }
      name           = "65th Division"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 236 }
    name     = "98th Corps"
    location = 1314
    division = {
      id             = { type = 22000 id = 237 }
      name           = "42nd Division"
      type           = infantry
      model          = 6
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 22000 id = 238 }
      name           = "169th Division"
      type           = infantry
      model          = 6
      extra          = artillery
      brigade_model  = 4
      strength       = 80
    }
  }

  airunit = { 
    id       = { type = 22000 id = 300 }
    name     = "Russian Volunteer Group"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 301 }
      name           = "Qianjiji Hang Kong Dui"
      type           = interceptor
      model          = 4
    }
    division = {
      id             = { type = 22000 id = 302 }
      name           = "Hongzhaji Hang Kong Dui"
      type           = tactical_bomber
      model          = 4
    }
  }
}
