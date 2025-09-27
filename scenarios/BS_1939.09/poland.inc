#Anti Aircraft Batteries
province = { id = 224 anti_air = 2 } #Poznan
province = { id = 226 anti_air = 2 } #Danzig
province = { id = 223 anti_air = 2 } #Lodz
province = { id = 235 anti_air = 2 } #Krakow
province = { id = 232 anti_air = 3 } #Warszawa
province = { id = 242 anti_air = 2 } #Lwow
province = { id = 258 anti_air = 1 } #Vilna
province = { id = 255 anti_air = 1 } #Grodno
province = { id = 222 anti_air = 1 } #Torun

# Forts
province = { id = 222 landfort = 1 } # Mlawa defences
province = { id = 230 landfort = 2 } # Modlin forts
province = { id = 247 landfort = 2 } # Brest forts



#Gdansk
province = {
	id = 226
	naval_base = { size = 5	current_size = 5 }
	air_base = { size = 5 current_size = 5 }
}

province = {
	id = 232
	air_base = { size = 10 current_size = 10 }
}

province = {
	id = 242
	air_base = { size = 7 current_size = 7 }
}

province = {
	id = 243
	air_base = { size = 5 current_size = 5 }
}


province = {
	id = 235
	air_base = { size = 5 current_size = 5 }
}

province = {
	id = 258
	air_base = { size = 5 current_size = 5 }
}

province = {
	id = 224
	air_base = { size = 5 current_size = 5 }
}

country = {
	tag = POL

	ai = "fallweiss_pol.ai"

	capital = 232

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic        = 7 
		political_left    = 1 
		freedom           = 4 
		free_market       = 5 
		professional_army = 5 
		defense_lobby     = 8 
		interventionism   = 6 
	}

	headofstate            = {  type = 9 id = 60001  } 
	headofgovernment       = {  type = 9 id = 60002  } 
	foreignminister        = {  type = 9 id = 60003  } 
	armamentminister       = {  type = 9 id = 60004  } 
	ministerofsecurity     = {  type = 9 id = 60005  } 
	ministerofintelligence = {  type = 9 id = 60006  } 
	chiefofstaff           = {  type = 9 id = 60007  } 
	chiefofarmy            = {  type = 9 id = 60008  } 
	chiefofnavy            = {  type = 9 id = 60009  } 
	chiefofair             = {  type = 9 id = 60010  } 

	manpower = 150	#275

	# Resource Reserves				#No production in this scenario!
	oil = 25000
	supplies = 65000
	extra_tc = 50

	free = 	{
		ic = 20
	}

	ownedprovinces =      {
		226 225 224 222 227 221 223 231 230 233 235 236 237 234 232 229 228 243 239 246 254 250 252 258 257 256 255 251 253 247 248 249 245 244 240 242 241 238 203
	}
	controlledprovinces = {
		226 225 224 222 227 221 223 231 230 233 235 236 237 234 232 229 228 243 239 246 254 250 252 258 257 256 255 251 253 247 248 249 245 244 240 242 241 238 203
	}
	nationalprovinces =   {
		226 225 224 222 227 221 223 231 230 233 235 236 237 234 232 229 228 243 239 246 254 250 252 258 257 256 255 251 253 247 248 249 245 244 240 242 241 238 203
	}
	
	techapps = {
		#Early Infantry Division  
		1010  1020 1030 1040 1050 1060 1070 1080 1090
		#Early Mountain Division 
		1160  1170 1180 1190 1200 1210 1220 1230 1240
		#1930 Cavalry Division  
		13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
		#Interbellum 1930 Supply 
		1910 1920 1930 1940 1950 1960
		#Great War Hospital System 
		14000 14010 14020
		#Naval Infantry
		##1560
		#Engineers
		1830 1840 1850 1860
		#Tankette 
		7600 7610 2620 2010 2630 2640
		#Basic Armoured Car  
		2860 2870 2880 2020
		#Field Artillery 
		2290 2300 2310 2900 
		#Early Anti-Tank Artillery
		#2400
		#Early Static Anti-Air Artillery 
		2800 2450
		#Basic Anti-Air Artillery Brigade 
		2810 2820
		# Heavy Cruiser
		3210 3220
		#Improved Destroyer 
		3010 3020 3030 3040 3050 3060
		#Short Range Submarine 
		3610 3620 3630 3640
		#Torpedo & ASW 18
		3720 3730 3736 3740 3750 3900
		#Troopships
		3810

		#Early Fighter  
		4500 4510 4520 4530 4540 4550 4010 4020
		#Early Bomber 
		4600 4610 4620 4630 4120 4130
		#Multirole fighter
		4300 4310 4320 4330
		#ww1 strategic bomber
		4800 4810
		#ww1 navalbomber
		#4700 4710

		#Modern Agriculture  
		5700 5710
		#Computers & cryptografi
		5310 54010 54020 5316 5326
		#Manufactoring
		5810 5820 5050 5830
		#Improved Construction Engineering 
		5800 5080 
		#Basic Oil Refining 
		##5190
		#Medicine
		5600 5610 5620 5630
		# Land Doctrines WWI - Entente line (default)
		6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
		# Land Doctrines WWII - Defensive Focus 
		6560 6030
		#Naval Doctrines  
		8010 8040  8050
		#Air Doctrines - ww2 techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	} 

########################################################
##Polish 1939 OOB - big thanks to Halibutt for support##
########################################################

	landunit = {
		id = { type = 30013 id = 1 }
		name = "Morska Obrona Wybrzeza"
		location = 226

		division = {	
			locked = yes
			id = { type = 30013 id = 2 }
			name = "Dowodztwo MOW"
			strength = 20
			max_strength = 20
			type = hq
			model = 3
		}
		division = {	
			locked = yes
			id = { type = 30013 id = 3 }
			name = "Rejon Umocniony Hel"
			strength = 50
			max_strength = 50
			type = garrison
			extra = anti_air
			model = 3
		}
		division = {	
			locked = yes
			id = { type = 30013 id = 14 }
			name = "Morska Brygada ON"
			strength = 50
			max_strength = 50
			type = infantry
			extra = anti_air
			model = 8
		}
	}
	
	navalunit = {
		id = { type = 30013 id = 4 }
		name = "Morska Obrona Wybrzeza"
		location = 226
		base = 226

		division = {
			id = { type = 30013 id = 5 }
			name = "1 Flota Niszczycieli"
			type = destroyer 
			model = 5
		}
	}
	
	navalunit = {
		id = { type = 30013 id = 7 }
		name = "Dywizjon Okretow Podwodnych"
		location = 226
		base = 226

		division = {
			id = { type = 30013 id = 8 }
			name = "1 Flotylla Okretow Podwodnych"
			type = submarine
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30013 id = 15 }
		name = "Grupa 'Grodno'"
		leader = 60088
		location = 255

		division = {	
			locked = yes
			id = { type = 30013 id = 16 }
			name = "Obszar Warowny 'Grodno'"
			strength = 30
			type = garrison
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30013 id = 17 }
		name = "Grupa 'Grodno'"
		location = 258

		division = {	
			locked = yes
			id = { type = 30013 id = 18 }
			name = "Obszar Warowny 'Wilno'"
			strength = 30
			type = garrison
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30013 id = 19 }
		name = "SGO 'Narew'"
		leader = 60079
		location = 250

		division = {	
			id = { type = 30013 id = 22 }
			name = "18 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 24 }
			name = "33 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 25 }
		name = "SGO 'Narew'"
		leader = 60060
		location = 254

		division = {	
			id = { type = 30013 id = 26 }
			name = "Podlaska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 27 }
		name = "SGO 'Narew'"
		leader = 60101
		location = 252

		division = {	
			id = { type = 30013 id = 28 }
			name = "Suwalska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 31 }
		name = "Armia 'Modlin'"
		leader = 60108
		location = 230

		division = {	
			id = { type = 30013 id = 32 }
			name = "Kwatera Glowna Armii 'Modlin'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
		division = {	
			id = { type = 30013 id = 36 }
			name = "8 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 38 }
			name = "20 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 40 }
			name = "Mazowiecka Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 42 }
			name = "Nowogrodzka Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 43 }
		name = "GO 'Wyszkow'"
		leader = 60065
		location = 229

		division = {	
			id = { type = 30013 id = 46 }
			name = "1 Dywizja Piechoty Legionow"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 50 }
			name = "41 Dywizja Piechoty (rez.)"
			strength = 80
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 47 }
		name = "GO 'Wyszkow'"
		leader = 60140
		location = 250

		division = {	
			id = { type = 30013 id = 48 }
			name = "35 Dywizja Piechoty (rez.)"
			strength = 80
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 51 }
		name = "Armia 'Pomorze'"
		leader = 60009
		location = 226

		division = {	
			id = { type = 30013 id = 52 }
			name = "Kwatera Glowna Armii 'Pomorze'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
		division = {	
			id = { type = 30013 id = 60 }
			name = "Pomorska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 62 }
			name = "27 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 64 }
			name = "9 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 57 }
		name = "GO 'Wschod'"
		leader = 60007
		location = 222

		division = {	
			id = { type = 30013 id = 54 }
			name = "4 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 56 }
			name = "16 Pomorska Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 65 }
		name = "Armia 'Pomorze'"
		leader = 60111
		location = 225

		division = {	
			id = { type = 30013 id = 66 }
			name = "15 Wielkopolska Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 67 }
		name = "Armia 'Poznan'"
		leader = 60071
		location = 224

		division = {	
			id = { type = 30013 id = 68 }
			name = "Kwatera Glowna Armii 'Poznan'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
		division = {	
			id = { type = 30013 id = 70 }
			name = "14 Wielkopolska Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 72 }
			name = "17 Wielkopolska Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 76 }
			name = "26 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 78 }
			name = "Wielkopolska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 80 }
			name = "Podolska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 73 }
		name = "Armia 'Poznan'"
		leader = 60002
		location = 227

		division = {	
			id = { type = 30013 id = 74 }
			name = "25 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 81 }
		name = "GO 'Kutno'"
		leader = 60068
		location = 231

		division = {	
			id = { type = 30013 id = 82 }
			name = "24 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 84 }
			name = "5 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 85 }
		name = "Armia 'Lodz'"
		leader = 60116
		location = 223

		division = {	
			id = { type = 30013 id = 86 }
			name = "Kwatera Glowna Armii 'Lodz'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
		division = {	
			id = { type = 30013 id = 98 }
			name = "2 Dywizja Piechoty Legionow"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 100 }
			name = "Kresowa Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 87 }
		name = "Armia 'Lodz'"
		leader = 60025
		location = 227

		division = {	
			id = { type = 30013 id = 88 }
			name = "10 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 90 }
			name = "28 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 93 }
		name = "GO 'Piotrkow'"
		leader = 60145
		location = 227

		division = {	
			id = { type = 30013 id = 94 }
			name = "30 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 96 }
			name = "Wolynska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 101 }
		name = "Armia 'Krakow'"
		leader = 60141
		location = 235

		division = {	
			id = { type = 30013 id = 102 }
			name = "Kwatera Glowna Armii 'Krakow'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
		division = {	
			id = { type = 30013 id = 118 }
			name = "10 Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 103 }
		name = "Armia 'Krakow'"
		leader = 60038
		location = 227

		division = {	
			id = { type = 30013 id = 104 }
			name = "7 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 106 }
			name = "Krakowska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 107 }
		name = "GO 'Slask'"
		leader = 60049
		location = 233

		division = {	
			id = { type = 30013 id = 108 }
			name = "23 Gornoslaska Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 110 }
			name = "55 Dywizja Piechoty (rez.)"
			strength = 80
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 111 }
		name = "GO 'Bielsko'"
		leader = 60070
		location = 221

		division = {	
			id = { type = 30013 id = 112 }
			name = "21 Dywizja Piechoty Gorskiej"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 113 }
		name = "Armia 'Krakow'"
		leader = 60080
		location = 221

		division = {	
			id = { type = 30013 id = 114 }
			name = "6 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 115 }
		name = "GO 'Bielsko'"
		leader = 60037
		location = 235

		division = {	
			id = { type = 30013 id = 116 }
			name = "1 Brygada Gorska"
			strength = 30
			max_strength = 30
			type = bergsjaeger
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 123 }
		name = "Armia 'Karpaty'"
		leader = 60034
		location = 236

		division = {	
			id = { type = 30013 id = 124 }
			name = "Kwatera Glowna Armii 'Karpaty'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30013 id = 127 }
		name = "GO 'Jaslo'"
		location = 236

		division = {	
			id = { type = 30013 id = 128 }
			name = "2 Brygada Gorska"
			strength = 30
			max_strength = 30
			type = bergsjaeger
			model = 8
		}
		division = {	
			id = { type = 30013 id = 130 }
			name = "3 Brygada Gorska"
			strength = 30
			max_strength = 30
			type = bergsjaeger
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 131 }
		name = "GO 'Tarnow'"
		leader = 60032
		location = 237

		division = {	
			id = { type = 30013 id = 132 }
			name = "22 Dywizja Piechoty Gorskiej"
			strength = 100
			type = bergsjaeger
			model = 8
		}
		division = {	
			id = { type = 30013 id = 134 }
			name = "38 Dywizja Piechoty"
			strength = 80
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 135 }
		name = "Armia 'Prusy'"
		leader = 60021
		location = 232

		division = {	
			id = { type = 30013 id = 136 }
			name = "Kwatera Glowna Armii 'Prusy'"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
	}
	
	landunit = {
		id = { type = 30013 id = 139 }
		name = "GOKaw. Nr 1"
		leader = 60028
		location = 223

		division = {	
			id = { type = 30013 id = 140 }
			name = "Wilenska Brygada Kawalerii"
			strength = 50
			max_strength = 50
			type = cavalry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 142 }
			name = "19 Dywizja Piechoty"
			strength = 80
			type = infantry
			model = 8
		}
	}
	
	landunit = {
		id = { type = 30013 id = 143 }
		name = "GO 'Skwarczynski'"
		leader = 60127
		location = 234

		division = {	
			id = { type = 30013 id = 144 }
			name = "3 Dywizja Piechoty Legionow"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 148 }
			name = "12 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 150 }
			name = "39 Dywizja Piechoty"
			strength = 80
			type = infantry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 151 }
		name = "Armia 'Prusy'"
		leader = 60164
		location = 225

		division = {	
			id = { type = 30013 id = 152 }
			name = "13 Kresowa Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 153 }
		name = "Armia 'Prusy'"
		leader = 60094
		location = 223

		division = {	
			id = { type = 30013 id = 154 }
			name = "29 Dywizja Piechoty"
			strength = 100
			type = infantry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 155 }
		name = "Armia 'Prusy'"
		leader = 60093
		location = 234

		division = {	
			id = { type = 30013 id = 156 }
			name = "36 Dywizja Piechoty Rezerwowej"
			strength = 100
			type = infantry
			model = 8
		}
		division = {	
			id = { type = 30013 id = 158 }
			name = "44 Dywizja Piechoty Rezerwowej"
			strength = 80
			type = infantry
			model = 8
		}
	}

	landunit = {
		id = { type = 30013 id = 159 }
		name = "KG KOP"
		leader = 60091
		location = 232

		division = {	
			id = { type = 30013 id = 160 }
			name = "Kwatera Glowna KOP"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 161 }
		name = "KOP 'Wilno'"
		location = 258

		division = {	
			locked = yes
			id = { type = 30013 id = 162 }
			name = "KOP 'Wilno'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 163 }
		name = "KOP 'Glebiokie'"
		location = 257

		division = {	
			locked = yes
			id = { type = 30013 id = 164 }
			name = "KOP 'Glebokie'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 165 }
		name = "KOP 'Wilejka'"
		location = 256

		division = {	
			locked = yes
			id = { type = 30013 id = 166 }
			name = "KOP 'Wilejka'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 167 }
		name = "KOP 'Snow'"
		location = 251

		division = {	
			locked = yes
			id = { type = 30013 id = 168 }
			name = "KOP 'Snow'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 169 }
		name = "KOP 'Snow'"
		location = 248

		division = {	
			locked = yes
			id = { type = 30013 id = 170 }
			name = "KOP 'Snow'"
			strength = 25
			max_strength = 25
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 171 }
		name = "KOP 'Sarny'"
		location = 249

		division = {	
			locked = yes
			id = { type = 30013 id = 172 }
			name = "KOP 'Sarny'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 173 }
		name = "KOP 'Zdolbunow'"
		location = 244

		division = {	
			locked = yes
			id = { type = 30013 id = 174 }
			name = "KOP 'Zdolbunow'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 175 }
		name = "KOP 'Czortkow'"
		location = 240

		division = {	
			locked = yes
			id = { type = 30013 id = 176 }
			name = "KOP 'Czortkow'"
			strength = 10
			max_strength = 10
			type = garrison
			model = 3
		}
	}

	landunit = {
		id = { type = 30013 id = 177 }
		name = "Naczelne Dowodztwo WP"
		leader = 60129
		location = 232

		division = {	
			id = { type = 30013 id = 178 }
			name = "Naczelne Dowodztwo WP"
			strength = 50
			max_strength = 50
			type = hq
			model = 3
		}
	}
	
	airunit = { 
		location = 232
		base = 232
		id = { type = 30013 id = 179 } 
		name = "Brygada Poscigowa" 
		leader = 60191
		
		division = { id = { type = 30013 id = 180 } name = "III/1 dm" strength = 100 type = interceptor model = 8 } 
		division = { id = { type = 30013 id = 181 } name = "IV/1 dm" strength = 100 type = interceptor model = 8 } 
	} 
	
	airunit = { 
		location = 232
		base = 232
		id = { type = 30013 id = 182 } 
		name = "Brygada Bombowa" 
		leader = 60180
		
		division = { id = { type = 30013 id = 183 } name = "X Dywizjon Bombowy" strength = 100 type = tactical_bomber model = 6 } 
		division = { id = { type = 30013 id = 184 } name = "XV Dywizjon Bombowy" strength = 100 type = tactical_bomber model = 6 } 
		division = { id = { type = 30013 id = 185 } name = "II Dywizjon Bombowy" strength = 100 type = tactical_bomber model = 6 } 
		division = { id = { type = 30013 id = 186 } name = "IV Dywizjon Bombowy" strength = 100 type = tactical_bomber model = 6 } 
	} 
	
	airunit = { 
		location = 232
		base = 232
		id = { type = 30013 id = 187 } 
		name = "Lotnictwo Armii 'Modlin'" 
		leader = 60193
		
		division = { id = { type = 30013 id = 188 } name = "III/5 dm" strength = 50 type = interceptor model = 8 } 
	}

	airunit = { 
		location = 258
		base = 258
		id = { type = 30013 id = 189 } 
		name = "Lotnictwo SGO 'Narew'" 
		
		division = { id = { type = 30013 id = 190 } name = "151 Eskadra Mysliwska" strength = 50 type = interceptor model = 8 } 
	}

	airunit = { 
		location = 226
		base = 226
		id = { type = 30013 id = 191 } 
		name = "Lotnictwo Armii 'Pomorze'" 
		
		division = { id = { type = 30013 id = 192 } name = "III/4 dm" strength = 100 type = interceptor model = 8 } 
	}

	airunit = { 
		location = 224
		base = 224
		id = { type = 30013 id = 193 } 
		name = "Lotnictwo Armii 'Poznan'" 
		leader = 60188
		
		division = { id = { type = 30013 id = 194 } name = "III/3 dm" strength = 100 type = interceptor model = 8 } 
	}

	airunit = { 
		location = 232
		base = 232
		id = { type = 30013 id = 195 } 
		name = "Lotnictwo Armii 'lodz'" 
		leader = 60215
		
		division = { id = { type = 30013 id = 196 } name = "III/6 dm" strength = 100 type = interceptor model = 8 } 
	}
	
	airunit = { 
		location = 235
		base = 235
		id = { type = 30013 id = 197 } 
		name = "Lotnictwo Armii 'Krakow'" 
		
		division = { id = { type = 30013 id = 198 } name = "III/2 dm" strength = 100 type = interceptor model = 8 } 
	}
}
