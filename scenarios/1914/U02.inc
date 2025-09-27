 
 ############################## 
 # Country definition for the British Raj # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = U02  
	regular_id       = IND 
	puppet         = ENG 
	ai           = "U02_1914.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	capital        = 1459 
	manpower        = 409
	relative_manpower = 0.6000 
	# Resource Reserves 
	energy                 = 5940
	metal                  = 2970
	rare_materials         = 1485 
	oil          = 500 
	supplies        = 500 
	money         = 70 
	transports       = 200 
	escorts        = 20 
  
  
  diplomacy = 
  {   
 relation = {  tag = ENG value = 100 access = yes  }  
  relation = { tag = PER access = yes }   
  } 
   nationalprovinces      = {
  #Malaysia                 
  1406 1407 1408 1409 1410 1411 1412 1413 1414 1415 1416 1417 1418 1419 1420 1421 1439 1440 1441 1442 1443 1445 1450 1455 1458
  #India  
  1444 1446 1447 1448 1449 1451 1452 1453 1454 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1473 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 1490 1491 1492 1493 1494 1495 1496 1497 1498 1499 1500 1501 1502 1503 1504 1505 1506 1507 1508 1512 1514 1515 1516 1517 1518 1519 1520 1521 1522 1523 1524 1525 1526 1527 1528 1530 1531 1532 1535 1536 
  #Pakistan 
  1278 1529 1533 1534 1537 1538 1539 1540   } 
               
 
  ownedprovinces     = { 
 #Malaysia         
 1439 1445 1529 1442 1450 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1413 1418 1443 1421 1458 1455 1414 1440 1441 
 #India 
 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1444 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1461 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1449 1536 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 
 #Pakistan 
 1278 1540 1533 1534 1537 1538  1539 
 #Aden protectorate
 1051 1053 840   
 1612
 
 } 
  
  controlledprovinces  = {  
 #Malaysia         
 1439 1445 1529 1442 1450 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1413 1418 1443 1421 1458 1455 1414 1440 1441 
 #India 
 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1444 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1461 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1449 1536 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 
 #Pakistan 
 1278 1540 1533 1534 1537 1538  1539 
 #Aden protectorate
 1051 1053 840
 1612
 } 
 
 claimedprovinces = { 
 1051 1053 #Yemen
 840
 1612
 }
  SpyInfo        = {  country = "U02" NumberOfSpies = 3  } 
  
  
  techapps               = { 
	#Infantry Division  
	1010  1020
	#CAVALRY 
	13060 13070
	#Mountain Division 
	1160  1170 1180  
	#Naval Infantry
	#Engineers
	1830
	#Logistics 
	1910 1920
	
	#Basic Armoured Car  
	2860
	#Tankette 
	#Great War Heavy Field Artillery 
	2290 
	#Static Anti-Air Artillery 
	#Anti-Air Artillery Brigade
	#Anti-Tank Artillery 

	#Great War Destroyer
	3010 3020
	#Interwar Light Cruiser 
	3110 3120
	#Early Heavy Cruiser 
	3210 3220 3230
	#Troopships
	3810
	#ASW 18
	#TORPEDOES
	3720
	
	#Interceptors
	#Exp.  Bomber
	#Multirole fighter
	#Strategic bomber
	#Navalbomber
	#SEAPLANES
	#CAG
	
	#Census Tabulating Machine 
	5310
	#Medicine
	5600
	#Agriculture 
	5700
	#Construction Engineering 
	5800 5080
	#MANUFACTURING
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 

	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Naval Doctrines
	8010
	#Air Doctrines - ww1 techs
} 

 policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 3 
   freedom      = 3 
   free_market    = 5 
   professional_army = 2 # no conscription 
   defense_lobby     = 3 
   interventionism  = 3 
   } 
  
   headofstate            = {  type = 9 id = 825031  } # Charles Hardinge
   headofgovernment       = {  type = 9 id = 825035  } # Robert Crewe-Milnes
   foreignminister        = {  type = 9 id = 825042  } # Robert Crewe-Milnes
   armamentminister       = {  type = 9 id = 825049  } # William Stevenson Meyer
   ministerofsecurity     = {  type = 9 id = 825059  } # Robert Crewe-Milnes
   ministerofintelligence = {  type = 9 id = 825067  } # George Macaulay Kirkpatrick
   chiefofstaff           = {  type = 9 id = 825074  } # Percy Lake
   chiefofarmy            = {  type = 9 id = 825080  } # Beauchamp Duff
   chiefofnavy            = {  type = 9 id = 825084  } # Walter Lumsden
   #chiefofair             = {  type = 9 id = ###  } # no airforce
  
  
  
  landunit = 
  {  name   = "Army of India" 
   location = 1459
   leader = 825137 #Duff
   id    = {  type = 12700 id = 1  } 
   Division = 
   {  id      = {  type = 12700 id = 2  } 
    name     = "Army of India General Staff" 
    type     = hq
	model = 0
    strength   = 90
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 3  } 
    name   = "9th (Secundarabad) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 4  } 
    name   = "Imperial Service Infantry" 
    type   = infantry 
	model = 1
    strength = 100 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 5  } 
    name   = "Imperial Service Cavalry" 
    type   = cavalry
	model = 1
    strength = 100 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 6  } 
    name   = "1st Indian Cavalry Division" 
    type   = cavalry
	model = 2
    strength = 100 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 7  } 
    name   = "2nd Indian Cavalry Division" 
    type   = cavalry
	model = 2
    strength = 100 
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 24  } 
    name   = "10th Indian Division" 
    type   = infantry 
	model = 2
    strength = 10
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 25  } 
    name   = "11th Indian Division" 
    type   = infantry 
	model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  name   = "Burma Force" 
   location = 1415
   id    = {  type = 12700 id = 8  } 
   Division = 
   {  id    = {  type = 12700 id = 9  } 
    name   = "Burma Division" 
    type   = garrison
	model = 1
    strength = 100 
	experience = 0
    } 
   } 
  landunit = 
  {  name   = "Eastern Command" 
   location = 1461
   leader = 825128 #Nixon
   id    = {  type = 12700 id = 10  } 
   Division = 
   {  id    = {  type = 12700 id = 11  } 
    name   = "7th (Meerut) Division" 
    type   = infantry 
	model = 2
    strength = 100 
	extra  = cavalry_brigade
	brigade_model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 12  } 
    name   = "8th (Lucknow) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  name   = "Northern Command" 
   location = 1537
   leader = 825129 #Willcocks
   id    = {  type = 12700 id = 13  } 
   Division = 
   {  id    = {  type = 12700 id = 14  } 
    name   = "1st (Peshawar) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 5
    } 
   Division = 
   {  id    = {  type = 12700 id = 15  } 
    name   = "2nd (Rawalpindi) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 5
    } 
   Division = 
   {  id    = {  type = 12700 id = 16  } 
    name   = "3rd (Lahore) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 5
    } 
   } 
  landunit = 
  {  name   = "Western Command" 
   location = 1533
   id    = {  type = 12700 id = 20  } 
   Division = 
   {  id    = {  type = 12700 id = 21  } 
    name   = "4th (Quetta) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 0
    } 
   Division = 
   {  id    = {  type = 12700 id = 22  } 
    name   = "5th (Mhow) Division" 
    type   = infantry 
	model = 2
    extra = cavalry_brigade
    brigade_model = 2
    strength = 100 
	experience = 2
    } 
   Division = 
   {  id    = {  type = 12700 id = 23  } 
    name   = "6th (Poona) Division" 
    type   = infantry 
	model = 2
    strength = 100 
    extra = cavalry_brigade
    brigade_model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  name   = "Aden Force" 
   location = 1053
   id    = {  type = 12700 id = 17  } 
   Division = 
   {  id    = {  type = 12700 id = 18  } 
    name   = "Aden Brigade" 
    type   = garrison
	model = 1
    strength = 30
	experience = 5
	locked = yes
    } 
   } 


 
  navalunit = 
  {  id    = {  type = 12700 id = 288  } 
   name   = "Royal Indian Navy" 
   location = 1517 # Bombay 
   base   = 1517 
   Division = 
   {  id  = {  type = 12700 id = 289  } 
    name = "HMIS 1st Transport Flotilla" 
    type = transport 
    model = 0 
    } 
   Division = 
   {  id  = {  type = 12700 id = 291  } 
    name = "HMIS 2nd Transport Flotilla" 
    type = transport 
    model = 0 
    } 
   Division = 
   {  id  = {  type = 12700 id = 290  } 
    name = "HMIS 3rd Transport Flotilla" 
    type = transport 
    model = 0 
    } 
   Division = 
   {  id  = {  type = 12700 id = 286  } 
    name = "HMIS 4th Transport Flotilla" 
    type = transport 
    model = 0 
    } 
   Division = 
   {  id  = {  type = 12700 id = 287  } 
    name = "HMIS Destroyer Flotilla" 
    type = destroyer 
    model = 0 
    } 
   } 
  }