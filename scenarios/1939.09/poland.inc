 
 ############################## 
 # Country definition for POL # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = POL 
	ai                     = "POL_1939.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }	
	capital                = 232 
	manpower               = 124 
	# Resource Reserves 
	energy                 = 2000
	metal                  = 2000
	rare_materials         = 1000
	transports = 100
	oil                    = 1000 
	supplies               = 1000 
	money                  = 100 
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = SLO value = -200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = 10 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 200 }
    relation = { tag = ROM value = 40 }
    relation = { tag = SAF value = 200 }
    relation = { tag = SOV value = -50 }
    relation = { tag = YEM value = 200 }
  }
   SpyInfo                = {  country = "POL" NumberOfSpies = 9  } 
   nationalprovinces      = {  168 185 203 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 614 618 } 
   ownedprovinces         = {  221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 203  } 
   controlledprovinces    = {  221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 203  } 
   # Air Doctrines 
   techapps               = {
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
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WWII - Defensive Focus 
6560 6030
#Naval Doctrines  
8010 8040  8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 3 
     freedom           = 4 
     free_market       = 5 
     professional_army = 8 
     defense_lobby     = 8 
     interventionism   = 6 
    } 

   headofstate            = {  type = 9 id = 60001  } 
   headofgovernment       = {  type = 9 id = 60020  } 
   foreignminister        = {  type = 9 id = 60003  } 
   armamentminister       = {  type = 9 id = 60051  } 
   ministerofsecurity     = {  type = 9 id = 60067  } 
   ministerofintelligence = {  type = 9 id = 60006  } 
   chiefofstaff           = {  type = 9 id = 60092  } 
   chiefofarmy            = {  type = 9 id = 60100  } 
   chiefofnavy            = {  type = 9 id = 60106  } 
   chiefofair             = {  type = 9 id = 60110  } 
   dormant_ministers      = {  60034  }

   landunit = 
   {  id       = {  type = 18600 id = 1  } 
     location = 225 
     name     = "Armia Pomorze" 
     Division = 
     {  id    = {  type = 18600 id = 2  } 
       name  = "9 Dywizja Piechoty" 
	   strength  = 80
       type  = infantry 
	   model    = 8
       extra = anti_air 
	   brigade_model = 1
      } 
     Division = 
     {  id   = {  type = 18600 id = 3  } 
       name = "15 Wielkopolska Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 4  } 
       name = "27 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
#	  Division = 
#     {  id   = {  type = 18600 id = 69  } 
#       name = "8 Pulk Strzelców Konnych" 
#	   strength  = 40
#	max_strength = 70
#      type = cavalry
#	   model    = 8
#     }
# Unit doesn't seem to appear in Niehorster's OOB for the Polish campaign 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 5  } 
     location = 222 
     name     = "Armia Pomorze - Wsch. Grupa Operacyjna" 
     Division = 
     {  id   = {  type = 18600 id = 6  } 
       name = "4 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 7  } 
       name = "16 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 8  } 
     location = 226 
     name     = "Armia Pomorze - Grupa Operacyjna Czersk" 
     Division = 
     {  id   = {  type = 18600 id = 9  } 
       name = "Pomorska Brygada Kawalerii" 
	   strength  = 50
		max_strength = 70
       type = cavalry
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 10  } 
     location = 230 
     name     = "Armia Modlin" 
     Division = 
     {  id   = {  type = 18600 id = 11  } 
       name = "8 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 6
      } 
     Division = 
     {  id   = {  type = 18600 id = 12  } 
       name = "20 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 13  } 
       name = "Nowogródzka Brygada Kawalerii" 
	   strength  = 50
	max_strength = 70
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 14  } 
       name = "Mazowiecka Brygada Kawalerii" 
	   strength  = 45
	max_strength = 60
       type = cavalry
	   model    = 9
	extra = armored_car
	brigade_model = 3	   
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 15  } 
     location = 236 
     name     = "Grupa Operacyjna Tarnow" 
     Division = 
     {  id   = {  type = 18600 id = 16  } 
       name = "22 Dywizja Piechoty Górskiej" 
	   strength  = 80
       type = bergsjaeger
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 17  } 
       name = "38 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 18  } 
     location = 227 
     name     = "Armia Lódz" 
     Division = 
     {  id   = {  type = 18600 id = 19  } 
       name = "2 Dywizja Piechoty Legionów" 
	   strength  = 90
       type = infantry 
	   model    = 9
       extra = artillery 
	   brigade_model = 4
      } 
     Division = 
     {  id    = {  type = 18600 id = 20  } 
       name  = "10 Dywizja Piechoty" 
	   strength  = 80
       type  = infantry 
	   model    = 8
       extra = engineer 
	   brigade_model = 4
      } 
     Division = 
     {  id   = {  type = 18600 id = 21  } 
       name = "28 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 22  } 
       name = "30 Poleska Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 23  } 
       name = "Kresowa Brygada Kawalerii" 
	   strength  = 50
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 24  } 
       name = "Wolynska Brygada Kawalerii" 
	   strength  = 50
	max_strength = 70
       type = cavalry
	   model    = 8
      }
#	   Division = 
#     {  id   = {  type = 18600 id = 68  } 
#       name = "1 Pu³k Kawalerii" 
#	   strength  = 60
#       type = cavalry 
#	   model    = 8
#       extra = artillery 
#	   brigade_model = 4
#      } 
# Actually an understrength border guards regiment
    } 
   landunit = 
   {  id       = {  type = 18600 id = 25  } 
     location = 224 
     name     = "Armia Poznan" 
     Division = 
     {  id   = {  type = 18600 id = 26  } 
       name = "14 Wielkopolska Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id    = {  type = 18600 id = 29  } 
       name  = "17 Wielkopolska Dywizja Piechoty" 
	   strength  = 80
       type  = infantry 
	   model    = 8
       extra = engineer
	   brigade_model = 4
      } 
     Division = 
     {  id   = {  type = 18600 id = 30  } 
       name = "25 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id    = {  type = 18600 id = 31  } 
       name  = "26 Dywizja Piechoty" 
	   strength  = 80
       type  = infantry 
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 32  } 
       name = "Wielkopolska Brygada Kawalerii" 
	   strength  = 50
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 33  } 
       name = "Podolska Brygada Kawalerii" 
	   strength  = 50
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
#	  Division = 
#     {  id   = {  type = 18600 id = 73  } 
#       name = "Poznanska Brygada Obrony Narodowej" 
#	   strength  = 50
#       type = infantry 
#	   model    = 7
#      } 
# Actually an unspecified militia unit. ON "brigades" had no fixed organization and were most often greatly varying, depending on what they were made from.
    } 
   landunit = 
   {  id       = {  type = 18600 id = 34  } 
     location = 235 
     name     = "Armia Kraków" 
     Division = 
     {  id   = {  type = 18600 id = 35  } 
       name = "6 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 36  } 
       name = "7 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
#     Division = 
#     {  id   = {  type = 18600 id = 37  } 
#       name = "23 Górnoslaska Dywizja Piechoty" 
#	   strength  = 80
#       type = infantry 
#	   model    = 8
#      } 
# Already part of the Slask operational group. Furthermore, it was not a mountain unit.
     Division = 
     {  id   = {  type = 18600 id = 38  } 
       name = "Krakowska Brygada Kawalerii" 
	   strength  = 50
	max_strength = 60
       type = cavalry
	   model    = 8
      } 
	  Division = 
     {  id   = {  type = 18600 id = 39  } 
       name = "10 Brygada Kawalerii Zmotoryzowanej" 
	   strength  = 40
	max_strength = 40
       type = motorized
	   model    = 0
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 40  } 
     location = 221 
     name     = "Samodzielna Grupa Operacyjna Slask" 
     Division = 
     {  id    = {  type = 18600 id = 41  } 
       name  = "23 Dywizja Piechoty" 
	   strength  = 90
       type  = infantry 
	   model    = 9
       extra = engineer
	   brigade_model = 4
      } 
     Division = 
     {  id   = {  type = 18600 id = 42  } 
       name = "55 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 43  } 
     location = 203 
     name     = "Armia Kraków - Grupa Operacyjna Bielsko" 
     Division = 
     {  id   = {  type = 18600 id = 44  } 
       name = "21 Dywizja Piechoty Górskiej" 
	   strength  = 50
       type = bergsjaeger
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 45  } 
     location = 243 
     name     = "Armia Lublin" 
     Division = 
     {  id   = {  type = 18600 id = 46  } 
       name = "Warszawska Brygada Pancerno-Motorowa" 
	   strength  = 35
	max_strength = 40
       type = motorized
	   model    = 0
      } 
# Was a motorized cavalry brigade.
     Division = 
     {  id   = {  type = 18600 id = 55  } 
       name = "39 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 47  } 
     location = 234 
     name     = "Armia Prusy" 
     Division = 
     {  id   = {  type = 18600 id = 48  } 
       name = "3 Dywizja Piechoty Legionów" 
	   strength  = 90
       type = infantry 
	   model    = 9
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 49  } 
       name = "12 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id    = {  type = 18600 id = 50  } 
       name  = "13 Dywizja Piechoty" 
	   strength  = 80
       type  = infantry 
	   model    = 8
      } 
     Division = 
     {  id   = {  type = 18600 id = 51  } 
       name = "19 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
     Division = 
     {  id    = {  type = 18600 id = 52  } 
       name  = "29 Dywizja Piechoty" 
	   strength  = 90
       type  = infantry 
	   model    = 9
      } 
     Division = 
     {  id   = {  type = 18600 id = 53  } 
       name = "36 Dywizja Piechoty Rezerwowej" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 56  } 
       name = "44 Dywizja Piechoty Rezerwowej" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 57  } 
       name = "Wilenska Brygada Kawalerii" 
	   strength  = 35
	max_strength = 60
       type = cavalry
	   model    = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 58  } 
     name     = "Grupa Operacyjna Wyszków" 
     location = 252 
     Division = 
     {  id   = {  type = 18600 id = 59  } 
       name = "1 Dywizja Piechoty Legionów" 
	   strength  = 90
       type = infantry 
	   model    = 9
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 60  } 
       name = "35 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 61  } 
       name = "41 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 62  } 
     name     = "Samodzielna Grupa Operacyjna Narew" 
     location = 254 
     Division = 
     {  id   = {  type = 18600 id = 63  } 
       name = "18 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 64  } 
       name = "33 Dywizja Piechoty (rezerwowa)" 
	   strength  = 50
       type = infantry 
	   model    = 7
      } 
     Division = 
     {  id   = {  type = 18600 id = 65  } 
       name = "Podlaska Brygada Kawalerii" 
	   strength  = 35
	max_strength = 60
       type = cavalry
	   model    = 9
	extra = light_armor_brigade
	brigade_model = 3	   
      } 
     Division = 
     {  id   = {  type = 18600 id = 66  } 
       name = "Suwalska Brygada Kawalerii" 
	   strength  = 35
	max_strength = 70
       type = cavalry
	   model    = 9
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 67  } 
     name     = "Grupa Odwodów Kutno" 
     location = 232 
     Division = 
     {  id   = {  type = 18600 id = 70  } 
       name = "5 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
       extra = artillery 
	   brigade_model = 5
      } 
     Division = 
     {  id   = {  type = 18600 id = 72  } 
       name = "24 Dywizja Piechoty" 
	   strength  = 80
       type = infantry 
	   model    = 8
      } 
    } 
   landunit = 
   {  id       = {  type = 18600 id = 74  } 
     name     = "Ladowa Obrona Wybrzeza" 
     location = 226 
     Division = 
     {  id   = {  type = 18600 id = 75  } 
       name = "Morskie Pulki Strzelców" 
	   strength  = 40
       type = infantry 
	   model    = 6
      } 
    } 
#   landunit = 
#   {  id       = {  type = 18600 id = 76  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Polesie'" 
#     location = 247 
#     Division = 
#     {  id   = {  type = 18600 id = 77  } 
#       name = "Korpus Ochrony Pogranicza 'Polesie'" 
#	   strength  = 70
#       type = infantry 
#	   model    = 6
#      } 
#    } 
#	landunit = 
#   {  id       = {  type = 18600 id = 87  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Glebokie'" 
#     location = 245 
#     Division = 
#     {  id   = {  type = 18600 id = 86  } 
#       name = "Korpus Ochrony Pogranicza 'Glebokie'" 
#	   strength  = 50
#       type = infantry 
#	   model    = 7
#      } 
#    } 
#   landunit = 
#   {  id       = {  type = 18600 id = 78  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Wilno'" 
#     location = 258 
#     Division = 
#     {  id   = {  type = 18600 id = 79  } 
#       name = "Korpus Ochrony Pogranicza 'Wilno'" 
#	   strength  = 20
#	   max_strength = 20
#       type = militia 
#	   model    = 4
#      } 
#    } 
#   landunit = 
#   {  id       = {  type = 18600 id = 80  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Grodno'" 
#     location = 255 
#     Division = 
#     {  id   = {  type = 18600 id = 81  } 
#       name = "Korpus Ochrony Pogranicza 'Grodno'" 
#	   strength  = 20
#	   max_strength = 20
#       type = militia 
#	   model    = 4
#      } 
#    } 
#   landunit = 
#   {  id       = {  type = 18600 id = 82  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Równe'" 
#     location = 244 
#     Division = 
#     {  id   = {  type = 18600 id = 83  } 
#       name = "Korpusu Ochrony Pogranicza 'Równe'" 
#	   strength  = 20
#	   max_strength = 20
#       type = militia 
#	   model    = 4
#      } 
#    } 
#   landunit = 
#   {  id       = {  type = 18600 id = 84  } 
#     name     = "Brygada Korpusu Ochrony Pogranicza 'Polesie'" 
#     location = 248 
#     Division = 
#     {  id   = {  type = 18600 id = 85  } 
#       name = "Korpusu Ochrony Pogranicza 'Polesie'" 
#	   strength  = 20
#	   max_strength = 20
#       type = militia 
#	   model    = 4
#      } 
#    } 
# Border guards units.
   navalunit = 
   {  id       = {  type = 18600 id = 100  } 
     name     = "Polska Flota Wojenna" 
     location = 226 
     base     = 226 
     Division = 
     {  id       = {  type = 18600 id = 101  } 
       name     = "Dywizjon Kontrtorpedowcow" 
       type     = destroyer 
       model    = 3
       strength = 40 
      } 
     Division = 
     {  id    = {  type = 18600 id = 102  } 
       name  = "Dywizjon Okretów Podwodnych" 
       type  = submarine 
       model = 3
      } 
    } 
   airunit = 
   {  id       = {  type = 18600 id = 110  } 
     name     = "Brygada Poscigowa" 
     location = 232 
     base     = 232 
     Division = 
     {  id    = {  type = 18600 id = 111  } 
       name  = "III Dywizjon Mysliwski" 
       type  = interceptor 
       model = 7
      } 
     Division = 
     {  id    = {  type = 18600 id = 112  } 
       name  = "IV Dywizjon Mysliwski" 
       type  = interceptor 
       model = 7 
      } 
    } 
  airunit = 
   {  id       = {  type = 18600 id = 114  } 
     name     = "Brygada Bombowa" 
     location = 232 
     base     = 232 
     Division = 
     {  id    = {  type = 18600 id = 113  } 
       name  = "X Dywizjon Bombowy" 
       type  = tactical_bomber 
       model = 4
      } 
    } 
  } 
 
