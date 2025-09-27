province = {
	id = 1560
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1553
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1554
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1551
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1552
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1232
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1361
	naval_base = {
		size = 10
		current_size = 10
		}
	}

#Okinawa
province = {
	id = 1564
	naval_base = {
		size = 6
		current_size = 6
		}
	}


country = {
	tag = JAP

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic			= 4 
		political_left		= 4 
		freedom				= 5 
		free_market			= 6 
		professional_army	= 5 
		defense_lobby		= 8 
		interventionism		= 7 
	}

	capital = 1552

	diplomacy = {
		relation = { tag = RUS value = -200 }
		relation = { tag = KOR value = 50 access = yes}
	}		

	manpower = 200

	# Resource Reserves
	energy			= 2000 
	metal			= 2000	
	rare_materials	= 500	
	oil				= 500	
	supplies		= 500
	money			= 100

	free = {
		supplies = 100
		oil = 50
		ic = 5
	}

	transports = 100
	escorts = 20

	navalunit = {
		id = { type = 30036 id = 10000 }
		name = "1. Sentai"
		leader = 50473 #Togo Heihachiro
		location = 2518
		base = 1552

		division = {
			experience = 20
			id = { type = 30036 id = 1000 }  
			name = "Mikasa" 
			type = battleship 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1001 }  
			name = "Asahi" 
			type = battleship 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1002 }  
			name = "Fuji" 
			type = battleship 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1003 }  
			name = "Yashima"
			type = battleship
			model = 0
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1004 }  
			name = "Shikishima"
			type = battleship 
			model = 1
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1005 }  
			name = "Hatsuse" 
			type = battleship 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1006 }  
			name = "Chitose" 
			type = light_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1007 }  
			name = "Takasago" 
			type = light_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1008 }  
			name = "Kasagi" 
			type = light_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1009 }  
			name = "Yoshino" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1010 }  
			name = "Shirakumo sendan" 
			type = destroyer 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1011 }  
			name = "Oboro sendan" 
			type = destroyer 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1012 }  
			name = "Sazanami sendan" 
			type = destroyer 
			model = 1 
		}
	}

	navalunit = {
		id = { type = 30036 id = 10001 }
		name = "2. Sentai"
		leader = 50447 #Kamimura
		location = 2498
		base = 1551

		division = {
			experience = 20
			id = { type = 30036 id = 1013 }  
			name = "Idzumo" 
			type = heavy_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1014 }  
			name = "Adzuma" 
			type = heavy_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1015 }  
			name = "Yakumo" 
			type = heavy_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1016 }  
			name = "Tokiwa" 
			type = heavy_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1017 }  
			name = "Iwate" 
			type = heavy_cruiser 
			model = 1
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1018 }  
			name = "Akashi" 
			type = light_cruiser 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1019 }  
			name = "Hayatori sendan" 
			type = destroyer 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1020 }  
			name = "Shiranui sendan" 
			type = destroyer 
			model = 1 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1053 }  
			name = "Kari sendan" 
			type = destroyer 
			model = 0 
		}
	}

	navalunit = {
		id = { type = 30036 id = 10002 }
		name = "3. Sentai"
		leader = 50536 #Kataoka
		location = 2492
		base = 1553

		division = {
			experience = 20
			id = { type = 30036 id = 1021 }  
			name = "Chinyen" 
			type = battleship 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1022 }  
			name = "Itsukushima" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1023 }  
			name = "Hashidate" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1024 }  
			name = "Matsushima" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1025 }  
			name = "Idzumi" 
			type = light_cruiser 
			model = 0
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1026 }  
			name = "Akitsushima" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1027 }  
			name = "Suma" 
			type = light_cruiser 
			model = 0
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1028 }  
			name = "Fuso" 
			type = battleship 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1029 }  
			name = "Kaimon" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1030 }  
			name = "Saiyen" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1054 }  
			name = "Tsukushi sendan" 
			type = destroyer 
			model = 0 
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1055 }  
			name = "Shirataka sendan"
			type = destroyer
			model = 0
		}
		division = {
			experience = 20
			id = { type = 30036 id = 1056 }  
			name = "Maya sendan"
			type = destroyer
			model = 0
		}
	}

	navalunit = {
		id = { type = 30036 id = 10003 }
		name = "Uryu Sentai" #Uryu's squadron
		leader = 50477 #Uryu
		location = 2517
		base = 1232

		division = {
			experience = 50
			id = { type = 30036 id = 1031 }  
			name = "Asama" 
			type = heavy_cruiser 
			model = 1
		}
		division = {
			experience = 40
			id = { type = 30036 id = 1032 }  
			name = "Naniwa" 
			type = light_cruiser 
			model = 0
		}
		division = {
			experience = 40
			id = { type = 30036 id = 1033 }  
			name = "Takachiho" 
			type = light_cruiser 
			model = 0 
		}
		division = {
			experience = 40
			id = { type = 30036 id = 1034 }  
			name = "Niitaka" 
			type = light_cruiser 
			model = 1 
		}
		division = {
			experience = 40
			id = { type = 30036 id = 1035 }  
			name = "Chiyoda" 
			type = heavy_cruiser 
			model = 0 
		}
		division = {
			experience = 40
			id = { type = 30036 id = 1036 }  
			name = "Aotaka sendan" 
			type = destroyer 
			model = 1
		}
		division = {
			experience = 30
			id = { type = 30036 id = 1037 } 
			name = "Chidori sendan" 
			type = destroyer 
			model = 1 
		}
	}

	landunit = {
		id = { type = 30008 id = 10004 }
		name = "Dai 1 Gun" #1st Army
		location = 1229
		leader = 50376 #Kuroki

		division = { 
			experience = 50 
			id = { type = 30008 id = 1038 }
			name = "Konoe Shidan" #Konoe Guards division
			strength = 100
			type = infantry 
			model = 1
			extra = artillery 
		}
		division = { 
			experience = 25 
			id = { type = 30008 id = 1039 }
			name = "2. Hoheishidan" #2nd infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
		division = { 
			experience = 25 
			id = { type = 30008 id = 1040 }
			name = "12. Hoheishidan" #12th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
	}

	navalunit = {
		id = { type = 30036 id = 10005 }
		name = "4. Sentai" #4th Squadron
		location = 2523
		leader = 50466 
		base = 1553

		division = {
			experience = 50
			id = { type = 30036 id = 1041 }  
			name = "Kasuga" 
			type = heavy_cruiser 
			model = 1 
		}
		division = {  
			experience = 40
			id = { type = 30036 id = 1042 }  
			name = "Nisshin" 
			type = heavy_cruiser 
			model = 1 
		}
	}

	landunit = {
		id = { type = 30008 id = 10006 }
		name = "Dai 2 Gun" #2nd Army
		location = 1554
		leader = 50398 #Oku

		division = { 
			experience = 25 
			id = { type = 30008 id = 1043 }
			name = "3. Hoheishidan" #3rd infantry division
			type = infantry 
			model = 1
			extra = artillery 
		}
		division = { 
			experience = 25 
			id = { type = 30008 id = 1044 }
			name = "4. Hoheishidan" #4th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
		division = { 
			experience = 25 
			id = { type = 30008 id = 1045 }
			name = "6. Hoheishidan" #6th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
	}

	landunit = {
		id = { type = 30008 id = 10007 }
		name = "Dai 3 Gun" #3rd Army
		location = 1552
		leader = 50392 #Nogi

		division = { 
			experience = 25 
			id = { type = 30008 id = 1046 }
			name = "5. Hoheishidan" #5th infantry division
			type = infantry 
			model = 1
			extra = artillery 
		}
		division = { 
			experience = 25 
			id = { type = 30008 id = 1047 }
			name = "10. Hoheishidan" #10th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
	}

	landunit = {
		id = { type = 30008 id = 10008 }
		name = "Dai 4 Gun" #4th Army
		location = 1560
		leader = 50393 #Nozu

		division = {
			experience = 25 
			id = { type = 30008 id = 1048 }
			name = "1. Hoheishidan" #1st infantry division
			type = infantry 
			model = 1
			extra = artillery 
		}
		division = {
			experience = 25 
			id = { type = 30008 id = 1049 }
			name = "9. Hoheishidan" #9th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
		division = {
			experience = 25 
			id = { type = 30008 id = 1050 }
			name = "11. Hoheishidan" #11th infantry division
			type = infantry 
			model = 1
			extra = artillery
		}
	}

	landunit = {
		id = { type = 30008 id = 10009 }
		name = "Manshugun" #Army of Manchuria
		location = 1553
		leader = 50405 #Oyama

		division = { 
			experience = 25 
			id = { type = 30008 id = 1051 }
			name = "Manshugun" #Army of Manchuria
			type = hq 
		}
		division = {
			experience = 25 
			id = { type = 30008 id = 1052 }
			name = "1&2 Kiheiryodan" #1st and 2nd Cavalry brigades
			type = cavalry 
			model = 1  
			extra = artillery 			
		}
	}

	navalunit = {
		id = { type = 30036 id = 10010 }
		name = "1. Yuso Sentai" #1st Auxillary Squadron
		location = 1553
		leader = 50437  
		base = 1553

		division = {
			experience = 0
			id = { type = 30036 id = 1057 }  
			name = "Kasuga Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1058 }  
			name = "Taichu Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1059 }  
			name = "Yamaguchi Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1060 }  
			name = "Fukuoka Maru sentai"
			type = transport
		}
	}

	navalunit = {
		id = { type = 30036 id = 10011 }
		name = "2. Yuso Sentai" #2nd Auxillary Squadron
		location = 1560
		leader = 50454  
		base = 1560

		division = {
			experience = 0
			id = { type = 30036 id = 1061 }  
			name = "Kinshu Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1062 }  
			name = "Jinsen Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1063 }  
			name = "Bushio Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1064 }  
			name = "Hokoku Maru sentai"
			type = transport
		}
	}

	navalunit = {
		id = { type = 30036 id = 10012 }
		name = "3. Yuso Sentai" #3rd Auxillary Squadron
		location = 1554
		leader = 50482  
		base = 1554

		division = {
			experience = 0
			id = { type = 30036 id = 1065 }  
			name = "Nikko Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1066 }  
			name = "Nippon Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1067 }  
			name = "Koto Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1068 }  
			name = "Hikosan Maru sentai"
			type = transport
		}
	}

	navalunit = {
		id = { type = 30036 id = 10013 }
		name = "4. Yuso Sentai" #4th Auxillary Squadron
		location = 1552
		leader = 50439  
		base = 1552

		division = {
			experience = 0
			id = { type = 30036 id = 1069 }  
			name = "Toyohashi Maru sentai" 
			type = transport 
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1070 }  
			name = "Ariake Maru sentai" 
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1071 }  
			name = "Amerika Maru sentai"
			type = transport
		}
		division = {
			experience = 0
			id = { type = 30036 id = 1072 }  
			name = "Taro Maru sentai"
			type = transport
		}
	}

	ownedprovinces = {
		1543 1544 1545 1549 1551 1552 1550 1548 1546 1557 1556 1558 1553
		1555 1559 1554 1560 1561 1562 1563 1564 1361 1364 1363 1362
		1547
	}
	controlledprovinces = {
		1543 1544 1545 1549 1551 1552 1550 1548 1546 1557 1556 1558 1553
		1555 1559 1554 1560 1561 1562 1563 1564 1361 1364 1363 1362
		1547
	}

	nationalprovinces = {
		1543 1544 1545 1549 1551 1552 1550 1548 1546 1557 1556 1558 1553
		1555 1559 1554 1231 1560 1561 1562 1563 1564 1361 1364 1363 1362
		1547
	}
	claimedprovinces = {
	}

	techapps = {
	1010 1020 1160 1170 13060 13070 

	3010 3020 3110 3120 3210 3220 3410 3420 3810 3720 

	6500 6510 6530

	8010 8020 8050 8060 8330 8100 8500 8900 82500
	}
}
