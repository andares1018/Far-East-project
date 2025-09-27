province = {
	id = 1219 # Port Arthur
	landfort = 3 
	#coastalfort = 3
	naval_base = {
		size = 10
		current_size = 10
	}
	supplypool = 3000
	oilpool = 200
}

province = {
	id = 1191 # Vladivostok
	landfort = 3 
	coastalfort = 3
	naval_base = {
		size = 5
		current_size = 5
	}
}

#province = {
#	id = 2521 
#	naval_base = {
#		size = 5
#		current_size = 5
#	}
#}

country = {
	tag = RUS

	regular_id = RUS

	capital = 1162 # Irkutsk

	policy = {
		date = { year = 0 month = january day = 0 }
		democratic			= 4 
		political_left		= 3 
		freedom				= 4 
		free_market			= 5 
		professional_army	= 5 
		defense_lobby		= 6 
		interventionism		= 7 
	}

	# Resource Reserves
	energy			= 1000
	metal			= 1000
	rare_materials	= 500
	oil				= 500
	supplies		= 500
	money			= 30

	free = {
		supplies = 50
		oil = 20
		ic = 10
	}

	transports = 40
	escorts = 10

	manpower = 500
	dissent = 0

	ownedprovinces = {
		1191 1196 1193 1192 1195 1194 1190 1185 1187 1189 1188 1171 1174 
		1175 1186 1181 1183 1184 1178 1176 1170 1161 1168 1169 1167
		1162 1163 1166 1216 1235 1210 1209 1206 1200 1198 1213 1208 1214
		1215 1217 1220 1219 1211 1207 1199 1212 1205 1204 1202 1197 1201
		1203 1218 1236 1237 1541 1542
	}
	
	controlledprovinces = {
		1191 1196 1193 1192 1195 1194 1190 1185 1187 1189 1188 1171 1174 
		1175 1186 1181 1183 1184 1178 1176 1170 1161 1168 1169 1167
		1162 1163 1166 1216 1235 1210 1209 1206 1200 1198 1213 1208 1214
		1215 1217 1220 1219 1211 1207 1199 1212 1205 1204 1202 1197 1201
		1203 1218 1236 1237 1541 1542
	}
	nationalprovinces = {
		1191 1196 1193 1192 1195 1194 1190 1185 1187 1189 1188 1171 1174 
		1175 1186 1181 1183 1184 1178 1176 1170 1161 1168 1169 1167
		1162 1163 1166 1216 1235 1210 1209 1206 1200 1198 1213 1208 1214
		1215 1217 1220 1219 1211 1207 1199 1212 1205 1204 1202 1197 1201
		1203 1218 1236 1237 1541 1542
	}
	claimedprovinces = {
	}

	diplomacy = {
		relation = { tag = JAP value = -100 }
	}

	landunit = {
		id = { type = 30008 id = 100 }
		name = "Kwantunsky ukreprayon" #Kwantung fortified area
		location = 1219
		leader = 516578 #Stoessel

		division = { 
			experience = 0 
			locked = yes
			id = { type = 30008 id = 1 }
			name = "Garnizon Port-Artura" #Port Arthur garrison
			strength = 50
			type = garrison
		}
		division = { 
			experience = 0 
			locked = yes
			id = { type = 30008 id = 2 }
			name = "Voiska KwUR" #Kwantung area forces
			strength = 50
			type = garrison
		}
	}

	landunit = {
		id = { type = 30008 id = 110 }
		name = "1-y Sibirskiy Arm. Korpus" #1st Siberian Army Corps
		location = 1214
		leader = 516404 #Sakharov

		division = { 
			experience = 0 
			id = { type = 30008 id = 3 }
			name = "1-ya Sibirskaya str. diviziya" #1st Siberian rifle division
			strength = 65
			type = infantry model = 1
		}
		division = { 
			experience = 0 
			id = { type = 30008 id = 4 }
			name = "5-ya Sibirskaya str. diviziya" #5th Siberian rifle division
			strength = 65
			type = infantry model = 1
		}
		division = { 
			experience = 0 
			id = { type = 30008 id = 5 }
			name = "9-ya Sibirskaya str. diviziya" #9th Siberian rifle division
			strength = 65
			type = infantry model = 1
		}
	}

	navalunit = {
		id = { type = 30036 id = 111 }
		name = "1-ya Tikhookeanskaya eskadra" #Pacific Fleet
		location = 1219
		leader = 516570 #Stark
		base = 1219

		division = { 
			experience = 0  
			id = { type = 30036 id = 6 }  
			name = "Petropavlovsk" 
			type = battleship 
			model = 0 
		}
		division = { 
			experience = 0 
			id = { type = 30036 id = 7 }  
			name = "Sevastopol" 
			type = battleship 
			model = 0 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 8 }  
			name = "Peresvet" 
			type = battleship 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 9 }  
			name = "Pobeda" 
			type = battleship 
			model = 1 
		}
		division = { 
			experience = 0 
			id = { type = 30036 id = 10 }  
			name = "Poltava" 
			type = battleship 
			model = 0 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 11 }  
			name = "Tsesarevich" 
			type = battleship 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 12 }  
			name = "Retvizan" 
			type = battleship 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 13 }  
			name = "Pallada" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 14 }  
			name = "Diana" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 15 }  
			name = "Askold" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 16 }  
			name = "Boyarin" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 17 }  
			name = "Bayan" 
			type = heavy_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 18 }  
			name = "Novik" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0 
			id = { type = 30036 id = 19 }  
			name = "Vsadnik - Gaidamak" 
			type = destroyer 
			model = 0 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 20 }  
			name = "Bditelny - Boevoy" 
			type = destroyer 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 21 }  
			name = "Boiky - Leytenant Burakov" 
			type = destroyer 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 22 }  
			name = "Rastoropny - Razyaschy" 
			type = destroyer 
			model = 1 
		}
	}

	navalunit = {
		id = { type = 30036 id = 112 }
		name = "Otryad Namestnika" #Viceroy's squadron
		location = 1219
		leader = 515176 #Alexeev
		base = 1219

		division = { 
			experience = 0  
			id = { type = 30036 id = 23 }  
			name = "Svetlana" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0 
			id = { type = 30036 id = 24 }  
			name = "Zabiyaka" 
			type = light_cruiser 
			model = 0 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 35 }  
			name = "Reshitelny - Smely" 
			type = destroyer 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 36 }  
			name = "Statny - Stroiny" 
			type = destroyer 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 37 }  
			name = "Vlastny - Vynoslivy" 
			type = destroyer 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 38 }  
			name = "Gremyaschy - Dzhigit" 
			type = destroyer 
			model = 0 
		}
	}

	navalunit = {
		id = { type = 30036 id = 113 }
		name = "Vladivostoskiy Otryad Kreiserov" #Vladivostok cruisers squadron
		location = 1191
		leader = 515666 #Iessen
		base = 1191

		division = { 
			experience = 0 
			id = { type = 30036 id = 25 }  
			name = "Rossiya" 
			type = heavy_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 26 }  
			name = "Rurik" 
			type = heavy_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 27 }  
			name = "Gromoboy" 
			type = heavy_cruiser 
			model = 1 
		}
		division = { 
			experience = 0  
			id = { type = 30036 id = 28 }  
			name = "Bogatyr" 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0 
			id = { type = 30036 id = 29 }  
			name = "Mandjur - Sivuch" 
			type = destroyer 
			model = 0 
		}
	}

	navalunit = {
		id = { type = 30036 id = 114 }
		name = "Otryad Rudneva" # Rudnev Squadron
		location = 2517
		leader = 516941 #Rudnev
		base = 1219

		division = { 
			experience = 0 
			id = { type = 30036 id = 30 }  
			name = "Varyag" 
			strength = 10 
			type = light_cruiser 
			model = 1 
		}
		division = { 
			experience = 0   
			id = { type = 30036 id = 31 }  
			name = "Koreets" 
			strength = 10 
			type = destroyer 
			model = 0 
		}
	}

	landunit = {
		id = { type = 30008 id = 115 }
		name = "Vladivostoskiy Otryad" #Vladivostok detachment
		location = 1191
		leader = 515942 #Linevich

		division = { 
			experience = 0 
			locked = yes
			id = { type = 30008 id = 32 }
			name = "Garnizon Vladivostoka" #Vladivostok Garrison
			strength = 80
			type = garrison 
			model = 0
		}
		division = { 
			experience = 0 
			locked = yes
			id = { type = 30008 id = 33 }
			name = "2-ya Sibirskaya str. diviziya" #2nd Siberian rifle division
			strength = 50
			type = infantry 
			model = 1
		}
		division = { 
			experience = 0 
			locked = yes
			id = { type = 30008 id = 34 }
			name = "8-ya Sibirskaya str. diviziya" #8th Siberian rifle division
			strength = 50
			type = infantry 
			model = 1
		}
	}

	techapps = {
		1010 1020 1160 1170 13060 13070 

		3010 3020 3110 3120 3210 3220 3410 3420 3810 3720 

		6500 6510 

		8010 8020 8050 8040 8500 82500
	}
}
