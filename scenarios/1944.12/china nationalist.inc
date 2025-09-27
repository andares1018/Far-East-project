##############################
# Country definition for CHI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  ai_settings        = { flags = { RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes } }
  capital            = 1299 # Chongqing
  manpower           = 3670
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = CHC value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = ITA value = 25 }
    relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation = { tag = SIK value = -125 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1384 1385 1386 1387 1388 1389 1390 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285 1286 1287 1288 1289 1290 1294 1295 1273 1274 1275 1277 1279 1280 1281 1282 1276 1278 1255 1256 1259 1260 1219 1238 1239 1240 1371 1372 1361 1362 1363 1364 1120 1121 1122 1123 1124 1125 }
  ownedprovinces         = { 1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352 1327 1328 1329 1330 1331 1332 1321 1323 1241 1247 1242 1243 1244 1365 1367 1368 1369 1370 1373 1374 1375 1377 1251 1252 1248 1249 1250 1257 1258 1268 1256 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285 1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 1378 1376 1253 1380 1381 1382 1383 1379 1254 1274 1275 1277 1279 1281 1282 }
  controlledprovinces    = { 1261 1303 1325 1316 1347 1357 1359 1311 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1356 1349 1314 1315 1267 1299 1300 1301 1351 1368 1374 1257 1258 1268 1256 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285 1389 1390 1384 1385 1373 1387 1386 1388 1291 1292 1293 1380 1381 1382 1352 1274 1275 1277 1279 1281 1282 }
  claimedprovinces       = { 1455 1458 1119 1414 }

  techapps               = { 5810 5820 5050 5830 5800 5080 5190 5200 5310 54010 54030 5320 5316 5326 5327 5350 5360 5410 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1670 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 2860 2870 2880 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 7600 2800 2450 21180 5600 5610 5620 14000 14010 14020 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6010 6020 6040 6050 3010 3110 3120 3130 3140 3210 3220 3810 3820 3720 3730 3410 3420 8010 8020 8050 8060 8070 8080 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4040 4070 4600 4610 4620 4630 4120 4130 4140 4150 4800 4810 4820 4400 4170 4700 4290 4250 4260 3830 4740 4750 4760 4770 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9090 9100 9110 9120 9130 9010 9190 9200 9210 9220 9230 }
  blueprints             = { 1110 1120 1470 1870 1530 5060 5700 5630 199100 7610 2620 2010 2630 2640 2020 2340 21190 21200 2460 6210 6060 6070 6080 6100 6090 6570 6300 6310 6320 6330 6340 6350 4270 4830 4710 3150 3020 3736 3740 9240 9250 9260 9040 9050 9060 5470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 7
    defense_lobby     = 10
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 55001 } # Jiang Jieshi
  headofgovernment       = { type = 9 id = 55002 } # Jiang Jieshi
  foreignminister        = { type = 9 id = 55011 } # Song Ziwen
  armamentminister       = { type = 9 id = 55008 } # Kong Xiangxi
  ministerofsecurity     = { type = 9 id = 55133 } # Zhang Lisheng
  ministerofintelligence = { type = 9 id = 55141 } # Dai Chunfeng
  chiefofstaff           = { type = 9 id = 55048 } # Chen Cheng
  chiefofarmy            = { type = 9 id = 55049 } # Chen Cheng
  chiefofnavy            = { type = 9 id = 55018 } # Chen Shaokuan
  chiefofair             = { type = 9 id = 55021 } # Zhou Zhirou
  dormant_leaders        = { 55012 55303 55338 55370 55377 55003 55029 55018 55020 }
  dormant_teams          = { 55005 }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "2. Juntuan"
    location = 1349
    division = {
      id             = { type = 22000 id = 2 }
      name           = "30. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 3 }
      name           = "42. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 4 }
    name     = "2. Juntuan"
    location = 1311
    division = {
      id             = { type = 22000 id = 5 }
      name           = "68. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 6 }
      name           = "40. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 7 }
    name     = "2. Juntuan"
    location = 1368
    division = {
      id             = { type = 22000 id = 8 }
      name           = "76. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 9 }
      name           = "12. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 10 }
    name     = "4. Juntuan"
    location = 1368
    division = {
      id             = { type = 22000 id = 11 }
      name           = "38. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 12 }
      name           = "47. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 13 }
      name           = "96. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 14 }
    name     = "4. Juntuan"
    location = 1306
    division = {
      id             = { type = 22000 id = 15 }
      name           = "3. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 16 }
      name           = "15. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 17 }
      name           = "17. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 18 }
    name     = "6. Juntuan"
    location = 1356
    division = {
      id             = { type = 22000 id = 19 }
      name           = "19. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 20 }
      name           = "61. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 21 }
      name           = "1. Guo Qibing Jun"
      type           = cavalry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 22 }
      name           = "51. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 23 }
    name     = "7. Juntuan"
    location = 1325
    division = {
      id             = { type = 22000 id = 24 }
      name           = "Xin 1. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 25 }
      name           = "22. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 26 }
      name           = "74. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 27 }
    name     = "15. Juntuan"
    location = 1257
    division = {
      id             = { type = 22000 id = 28 }
      name           = "35. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 29 }
      name           = "Manzhou Juntuan"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 30 }
      name           = "73. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 31 }
    name     = "10. Juntuan"
    location = 1316
    division = {
      id             = { type = 22000 id = 32 }
      name           = "28. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 33 }
      name           = "91. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 34 }
      name           = "Xin 4. Juntuan"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 35 }
      name           = "14. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 36 }
      name           = "93. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 37 }
      name           = "98. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 38 }
    name     = "23. Juntuan"
    location = 1347
    division = {
      id             = { type = 22000 id = 39 }
      name           = "21. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 40 }
    name     = "23. Juntuan"
    location = 1357
    division = {
      id             = { type = 22000 id = 41 }
      name           = "50. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 42 }
      name           = "100. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 43 }
      name           = "25. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 44 }
    name     = "23. Juntuan"
    location = 1359
    division = {
      id             = { type = 22000 id = 45 }
      name           = "29. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 46 }
      name           = "Xin 28. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 47 }
      name           = "Xin 2. Jun"
      type           = motorized
      model          = 0
      strength       = 30
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 48 }
    name     = "9. Juntuan"
    location = 1313
    division = {
      id             = { type = 22000 id = 49 }
      name           = "4. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 50 }
      name           = "65. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 51 }
      name           = "83. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 52 }
    name     = "9. Juntuan"
    location = 1315
    division = {
      id             = { type = 22000 id = 53 }
      name           = "62. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 54 }
      name           = "63. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 55 }
      name           = "66. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 56 }
    name     = "11. Juntuan"
    location = 1258
    division = {
      id             = { type = 22000 id = 57 }
      name           = "7. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 58 }
      name           = "39. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 59 }
      name           = "84. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 60 }
    name     = "22. Juntuan"
    location = 1382
    division = {
      id             = { type = 22000 id = 61 }
      name           = "44. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 62 }
      name           = "48. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 63 }
      name           = "45. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 64 }
    name     = "22. Juntuan"
    location = 1380
    division = {
      id             = { type = 22000 id = 65 }
      name           = "46. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 66 }
      name           = "64. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 67 }
      name           = "9. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 68 }
    name     = "33. Juntuan"
    location = 1373
    division = {
      id             = { type = 22000 id = 69 }
      name           = "55. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 70 }
    name     = "33. Juntuan"
    location = 1381
    division = {
      id             = { type = 22000 id = 71 }
      name           = "1. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 72 }
      name           = "59. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 73 }
      name           = "77. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 74 }
    name     = "29. Juntuan"
    location = 1307
    division = {
      id             = { type = 22000 id = 75 }
      name           = "80. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 76 }
      name           = "82. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 77 }
      name           = "83. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 78 }
    name     = "Guo Qibing Juntuan"
    location = 1351
    division = {
      id             = { type = 22000 id = 79 }
      name           = "2. Guo Qibing Jun"
      type           = cavalry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 80 }
      name           = "5. Guo Qibing Jun"
      type           = cavalry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 81 }
      name           = "6. Guo Qibing Jun"
      type           = cavalry
      model          = 7
      strength       = 40
    }
    division = {
      id             = { type = 22000 id = 82 }
      name           = "8. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 83 }
      name           = "57. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 84 }
      name           = "89. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 85 }
    name     = "1. Juntuan"
    location = 1310
    division = {
      id             = { type = 22000 id = 86 }
      name           = "58. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 87 }
      name           = "81. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 88 }
    name     = "1. Juntuan"
    location = 1310
    division = {
      id             = { type = 22000 id = 89 }
      name           = "Xin 3. Juntuan"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 90 }
      name           = "60. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 91 }
    name     = "19. Juntuan"
    location = 1349
    division = {
      id             = { type = 22000 id = 92 }
      name           = "79. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 93 }
      name           = "49. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 94 }
    name     = "19. Juntuan"
    location = 1352
    division = {
      id             = { type = 22000 id = 95 }
      name           = "70. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 96 }
      name           = "53. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 97 }
      name           = "54. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 98 }
      name           = "87. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 99 }
    name     = "27. Juntuan"
    location = 1325
    division = {
      id             = { type = 22000 id = 100 }
      name           = "78. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 101 }
      name           = "20. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 102 }
      name           = "72. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 103 }
    name     = "27. Juntuan"
    location = 1313
    division = {
      id             = { type = 22000 id = 104 }
      name           = "16. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 105 }
      name           = "27. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 106 }
      name           = "90. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 107 }
    name     = "31. Juntuan"
    location = 1311
    division = {
      id             = { type = 22000 id = 108 }
      name           = "Xin 5. Jun"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 109 }
    name     = "31. Juntuan"
    location = 1307
    division = {
      id             = { type = 22000 id = 110 }
      name           = "69. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 111 }
      name           = "99. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 112 }
    name     = "Xinjiang Juntuan"
    location = 1258
    division = {
      id             = { type = 22000 id = 113 }
      name           = "1. Shi"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 114 }
      name           = "2. Shi"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 115 }
    name     = "Xinjiang Juntuan"
    location = 1259
    division = {
      id             = { type = 22000 id = 116 }
      name           = "3. Shi"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 117 }
      name           = "4. Shi"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 122 }
    name     = "Yunnan Zhujun"
    location = 1390
    division = {
      id             = { type = 22000 id = 123 }
      name           = "Yunnan Daiji Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 124 }
      name           = "Yunnan Minbing"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 125 }
    name     = "Xikang Zhujun"
    location = 1390
    division = {
      id             = { type = 22000 id = 126 }
      name           = "24. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 127 }
      name           = "Xikang Minbing"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 128 }
    name     = "Guangxi Zhujun"
    location = 1311
    division = {
      id             = { type = 22000 id = 129 }
      name           = "Guangxi Zhujun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 130 }
    name     = "Anhui Zhujun"
    location = 1351
    division = {
      id             = { type = 22000 id = 131 }
      name           = "Anhui Zhujun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 132 }
    name     = "21. Juntuan"
    location = 1374
    division = {
      id             = { type = 22000 id = 133 }
      name           = "Hubei Dong Youjidui"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 134 }
    name     = "16. Juntuan"
    location = 1373
    division = {
      id             = { type = 22000 id = 135 }
      name           = "31. Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 136 }
    name     = "17. Juntuan"
    location = 1264
    division = {
      id             = { type = 22000 id = 137 }
      name           = "1. Ningxia Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 138 }
      name           = "2. Ningxia Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 139 }
      name           = "3. Ningxia Jun"
      type           = militia
      model          = 4
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 140 }
    name     = "Qinghai Jun"
    location = 1264
    division = {
      id             = { type = 22000 id = 141 }
      name           = "Qinghai Minbing"
      type           = militia
      model          = 4
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 144 }
      name           = "Qinghai Qibing"
      type           = cavalry
      model          = 7
      strength       = 40
    }
    dig_in   = 20.000
  }

  airunit = { 
    id       = { type = 22000 id = 300 }
    name     = "The Flying Tigers"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 301 }
      name           = "The Flying Tigers"
      type           = interceptor
      model          = 6
    }
  }
  airunit = { 
    id       = { type = 22000 id = 302 }
    name     = "Zhongguo Kongjun"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 303 }
      name           = "1. Zhandouji"
      type           = interceptor
      model          = 5
    }
    division = {
      id             = { type = 22000 id = 304 }
      name           = "1. Hongzhaji"
      type           = tactical_bomber
      model          = 4
    }
    division = {
      id             = { type = 22000 id = 305 }
      name           = "1. Kongyunji"
      type           = transport_plane
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 22000 id = 306 }
    name     = "Zhongguo Kongjun"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 307 }
      name           = "Zhandouji Zhongdui"
      type           = interceptor
      model          = 5
    }
  }
}
