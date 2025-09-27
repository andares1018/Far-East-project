 
 ############################## 
 # Country definition for CHC # 
 ############################## 
  

  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHC
	ai = "chc_1940.ai"
	ai_settings = { flags = { RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	intrinsic_gov_type     = leninist 
	extra_tc               = 7 
	capital                = 1259 # Yan'an 
	# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 100 
	manpower               = 220 #120 added to reinforce units 
   diplomacy = 
   {  relation = {  tag = JAP value = -200  } 
     relation = {  tag = MAN value = -200  } 
     relation = {  tag = MEN value = -200  }
     relation = {  tag = CHI value = 100  }  
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = MON value = 25  }
     relation = {  tag = U67 value = 50  } 
     relation = {  tag = SIK value = 40  }
    } 
   SpyInfo                = {  country = "CHC" NumberOfSpies = 3  } 
   nationalprovinces      = {   
  
 #Communist China at start      
 1255 1259 1260
  
 #Nationalist China  
 1256 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390 
  
 #Guanxi Clique  
 1361 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
 #Shanxi       
 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332   
  
 #Manchoukou 
 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237
  
 #Xibei san ma            
 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285   
  
 #Tibet       
 1286 1287 1288 1289 1290 1294 1295 
  
 #Sinkiang        
 1273 1274 1275 1277 1279 1280 1281 1282 
  
 #India        
 1276 1278  
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1362 1363 1364  
  
                             } 
	ownedprovinces         = {  1255 1259 1260 } 
	controlledprovinces    = {  1255 1259 1260 } 
 	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
						}   
	#Communist China
 	techapps = { 

	# Construction Engineering - Up to 1910
	5800 5080
	
	# Computers
	5310 54010

	# Crypto
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370

	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Field Artillery 
	2290 2300 2310 2900 2910 2920

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Manpower Focus
	6570 6300 6310


	} 

blueprints = {
	
	#Manufacturing
	5810 5820

	#Computers
	54030

	#Cavalry
	1380

	#Mountain
	1250

	#Armoured Car  
	2860

	#Medicine
	5600

	#Artillery
	2930 2940

	#Agriculture
	5700

	# Synthetic Oil
	5190

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Tactical Bomber 
	4600 4610 4620 4630 4120
	# Strategic Bomber
	4800 4810


}
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 2 
     professional_army = 5 
     defense_lobby     = 10 
     interventionism   = 5 
    } 
   headofstate            = {  type = 9 id = 260848  } 
   headofgovernment       = {  type = 9 id = 260858  } 
   foreignminister        = {  type = 9 id = 260861  } 
   armamentminister       = {  type = 9 id = 260814  } 
   ministerofsecurity     = {  type = 9 id = 260856  } 
   ministerofintelligence = {  type = 9 id = 260868  } 
   chiefofstaff           = {  type = 9 id = 260820  } 
   chiefofarmy            = {  type = 9 id = 260867  } 
   chiefofnavy            = {  type = 9 id = 260806  } 
   chiefofair             = {  type = 9 id = 260874  } 
   # ###### 
   # COMMUNSIT CHINA OOB
   # 7000 from First Red Army arrived Oct 35 (15 divisions at 5% strength up to 20% by Jan 36)
   # 2 other units did not arrive until 1 year later
   # ###### 
   landunit = 
   {  location = 1260 # Yan'an 
     name     = "1. Fangmianjun" 
     id       = {  type = 24000 id = 1  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 2  } 
       name       = "1. Juntuan" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 3  } 
       name       = "3. Juntuan" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 4  } 
       name       = "5. Juntuan" 
       type       = bergsjaeger 
       strength  = 50 
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 5  } 
       name       = "8. Juntuan" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 6  } 
       name       = "9. Juntuan" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1255 
     name     = "2. Fangmianjun" 
     id       = {  type = 24000 id = 7  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 8  } 
       name       = "2. Juntuan" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 9  } 
       name       = "6. Juntuan" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1259 # Xianyang 
     name     = "4. Fangmianjun" 
     id       = {  type = 24000 id = 10  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 11  } 
       name       = "4. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 12  } 
       name       = "9. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 13  } 
       name       = "30. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 14  } 
       name       = "31. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     dig_in   = 20.000
    } 
   landunit = 
   {  location = 1260 # Yan'an 
     name     = "15. Juntuan" 
     id       = {  type = 24000 id = 15  } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 16  } 
       name       = "25. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 17  } 
       name       = "26. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 18  } 
       name       = "27. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8 
      } 
     Division = 
     {  experience = 60 
       id         = {  type = 24000 id = 19  } 
       name       = "28. Jun" 
       type       = infantry 
       strength  = 50
       model      = 8
      } 
     dig_in   = 20.000 
    } 
  } 
 