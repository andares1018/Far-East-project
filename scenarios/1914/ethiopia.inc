 
 ######################################## 
 # Country definition for ETH by Cardus # 
 ######################################## 

 country = 
 {  tag          = ETH 
	ai             = "ETH_1914.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil          = 500 
	supplies        = 500 
	money         = 10 
	capital        = 825
	flag_ext = _14 
	manpower        = 10
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
	democratic    = 3 
	political_left  = 4 
	free_market = 3
	freedom      = 3
	professional_army = 3
	defense_lobby     = 8 
	interventionism  = 3 
   } 

   headofstate            = {  type = 9 id = 245075  } # Iyasu V
   headofgovernment       = {  type = 9 id = 245077  } # Mikael of Wollo 
   foreignminister        = {  type = 9 id = 245072  } # Dejazmach Beyene Yimer
   armamentminister       = {  type = 9 id = 245076  } # Habte Giyorgis Dinegde
   ministerofsecurity     = {  type = 9 id = 245079  } # Habte Giyorgis Dinegde (or "Afa-Negus" = Justice minister)
   ministerofintelligence = {  type = 9 id = 245078 } # Habte Giyorgis
   chiefofstaff           = {  type = 9 id = 245068  } # Habte Giyorgis as "Fitawrari"
   chiefofarmy            = {  type = 9 id = 245065  } # Habte Giyorgis as "Fitawrari"
   chiefofnavy            = {  type = 9 id = 245081  } # est. 1955 Habte Giyorgis
   chiefofair             = {  type = 9 id = 245080  } # est. 1929 Habte Giyorgis

  nationalprovinces   = {  815 816 817 818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
  ownedprovinces     = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
  controlledprovinces  = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
  # ROTW Minor Tech '14 
  # Group E 1914 techs 
  # ###################### 
  # GW fighter 
  techapps        = {  
	#Interwar Fighter  

	#Interwar Armoured Car  

	#Light Field Artillery  

	#Early Infantry Division
	1010  1020 
	#1930 Cavalry Division
	13060  
	#Early Mountain Division
	1160  1170 

	#Early Agriculture
	5700 
	#Landdoctrine ww1 - rest
	6500 6510  
	#Air Doctrines - ww1 techs

  } 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = FRA value = 25  } 
   relation = {  tag = ITA value = -200  } 
   relation = {  tag = JAP value = 35  } 
     relation = { tag = OTT value = 75 }
     relation = { tag = U08 value = 50 }
   } 
  SpyInfo        = {  country = "ETH" NumberOfSpies = 2  } 
  #################################################################################### 
 #OOB Ethiopian Troops - Second Italo Abyssinian War 1935-1936 by Cardus 
 # ref. http://en.wikipedia.org/wiki/Ethiopian_Order_of_Battle_Second_Italo-Abyssinian_War 
 # ref http://it.wikipedia.org/wiki/Guerra_d%27Etiopia 
 # ref http://en.wikipedia.org/wiki/Ethiopian_Air_Force #Early_years_.281929-1935.29 
 ##################################################################################### 
  
# OOB extrapolated by Eginhard from the 1936 one and the provincial nature of the Abyssinian army. 
  landunit = 
  {  id    = {  type = 31000 id = 1  } 
   location = 825 
   name   = "Imperial Guard" 
   Division = 
   {  id    = {  type = 31000 id = 2  } 
    name   = "Kebur Zabangna" 
    type   = infantry 
    strength = 100
    model  = 1
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 3  } 
   location = 831 
   name   = "Arusi Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 4  } 
    name   = "Arusi Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 5  } 
    name   = "Kula Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
    landunit = 
  {  id    = {  type = 31000 id = 6  } 
   location = 826 
   name   = "Bale Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 7  } 
    name   = "Bale Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 8  } 
   location = 823 
   name   = "Begemder Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 9  } 
    name   = "Begemder Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 10  } 
    name   = "Om Hajer Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 11  } 
    name   = "Sela Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 12  } 
    name   = "Semien Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 13  } 
    name   = "Wolqayt Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 14  } 
   location = 830 
   name   = "Gemu Gofa Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 15  } 
    name   = "Gemu Gofa Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 16  } 
    name   = "Mui Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 17  } 
    name   = "Sodo Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 18  } 
   location = 822 
   name   = "Gojjam Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 19  } 
    name   = "Gojjam Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 20  } 
    name   = "Gubba Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 21  } 
   location = 828 
   name   = "Hararghe Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 22  } 
    name   = "Hararghe Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 23  } 
    name   = "Ifrata Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 24  } 
    name   = "Ogaden Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 25  } 
   location = 829 
   name   = "Illubabor Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 26  } 
    name   = "Illubabor Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 27  } 
   location = 829 
   name   = "Kaffa Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 28  } 
    name   = "Kaffa Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 29  } 
    name   = "Gurage Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 30  } 
    name   = "Jimma Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 31  } 
   location = 825 
   name   = "Shoa Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 32  } 
    name   = "Shoa Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 33  } 
    name   = "Amino Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 34  } 
   location = 830 
   name   = "Sidamo Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 35  } 
    name   = "Sidamo Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 36  } 
   location = 821 
   name   = "Tigray Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 37  } 
    name   = "Tigray Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 38  } 
    name   = "Yejju Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 39  } 
   location = 824 
   name   = "Welega Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 40  } 
    name   = "Welega Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 41  } 
    name   = "Ardjo Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 31000 id = 42  } 
   location = 820 
   name   = "Wollo Provincial Forces" 
   Division = 
   {  id    = {  type = 31000 id = 43  } 
    name   = "Wollo Sefari" 
    type   = militia
    strength = 10
    model  = 0
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 44  } 
    name   = "Danakil Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 45  } 
    name   = "Lasta Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
  Division = 
   {  id    = {  type = 31000 id = 46  } 
    name   = "Wag Sefari" 
    type   = militia 
    strength = 10
    model  = 0 
	experience = 0
    } 
   } 
   } 
 