 
 ############################## 
 # Country definition for FRA # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = FRA 
	ai           = "FRA_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
	capital        = 55 
	# Resource Reserves 
	energy                 = 7140
	metal                  = 3570
	rare_materials         = 1785
	oil          = 500 
	supplies        = 500 
	money         = 50 
	manpower        = 13
	transports       = 400 
	escorts        = 60 
  diplomacy = 
  {   
 #Alliance 
 relation = {  tag = U08 value = -175  } 
   relation = {  tag = U09 value = -150  } 
   relation = {  tag = ITA value = -50  } 
   relation = {  tag = OTT value = -75  } 
 #Entente 
   relation = {  tag = RUS value = 150  } 
   relation = {  tag = ENG value = 100  } 
 #Commonwealth 
   relation = {  tag = CAN value = 100  } 
   relation = {  tag = NZL value = 100  } 
   relation = {  tag = SAF value = 100  } 
 #Others 
   relation = {  tag = SER value = 75  } 
   relation = {  tag = BEL value = 100  } 
   relation = {  tag = BHU value = 50  } 
   relation = {  tag = ETH value = 25  } 
   relation = {  tag = GRE value = 20  } 
   relation = {  tag = LUX value = 120  } 
   relation = {  tag = NEP value = 50  } 
   relation = {  tag = OMN value = 70  } 
   relation = {  tag = ROM value = 50  } 
   relation = {  tag = SAU value = 10  } 
   relation = {  tag = SCH value = 50  } 
   relation = {  tag = USA value = 65  } 
   relation = {  tag = YEM value = 100  } 
   relation = {  tag = LBY value = -100  }
   } 
  SpyInfo        = {  country = "FRA" NumberOfSpies = 9  } 

  # Togoland 
  # Metropolitan France 
  nationalprovinces   = {  85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68 62 65 66 54 63 105 107 104  
              100 52 51 49 59 50 99 45 55 60 61 37 38 39 57 58 42 43 44 47 72 73 93 
 48 95 64 91 83 88 106 96 97 76 
   98 103 92 
 102 53 46 41 56 101
  
                } 
  # Metropolitan France 
  ownedprovinces     = {  85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  
               54  63  100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  
               43  44  47  72 73 93 2000 1767 1768 724 726 725 721 717 718 722   738 731 734 735 732 736  
               733 727 744 737 728  729 741 740 742 745 746 747 748 749 833 981  
               982  943 944 942 984 985 974 978 980 966  965 975 971 972 973 976 959 957 949 951 967 960  
               962 922 920 923 926 914 915 907 1001 1002 996   
               98   1586 1585 1584 1583 1582 1581 92 
 48 95 64 91 83 88 106 96 97  
 1003 917 918 927 921 946 947 945 958 961 968 970 977 983 986 720 723 730 743 
   719 999 1000 
 1740 1743 1744 1730 1752 2135 103 739 76 
 102 53 46 41 56 101 
                } 
  # Togoland 
  # Metropolitan France 
  controlledprovinces  = {  85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  
               54  63   100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  
               43  44  47  72 73 93 2000 1767 1768 724 726 725 721 717 718 722   738 731 734 735 732 736  
               733 727 744 737 728  729 741 740 742 745 746 747 748 749 833 981  
               982  943 944 942 984 985 974 978 980 966  965 975 971 972 973 976 959 957 949 951 967 960  
               962  922 920 923 926 914 915 907 1001 1002 996   
                98    1586 1585 1584 1583 1582 1581 92 76 
 48 95 64 91 83 88 106 96 97 
 1003 917 918 927 921 946 947 945 958 961 968 970 977 983 986 720 723 730 743 
   999 1000 719 
 1740 1743 1744 1730 1752 2135 103 739 
 102 53 46 41 56 101 
                } 
	claimedprovinces = {
                            717 718 719 720 721 722 723 724 725 726 #Morocco 
                            727 728 729 730 731 732 733 734 735 736 737 738 739 743 #Algeria
                            740 741 742 744 745 746 747 748 749 # Tunisia
                            907 914 915 917 918 #French Congo and Cameroon
                            920 921 922 923 926 927 #Central Africa
                            942 943 944 945 946 947 #Niger
                            949 951 #Slave Coast
                            957 958 959 #Volta
                            960 961 962 #Ivory Coast
                            965 966 967 968 970 #Guinean Coast
                            971 972 973 974 975 976 977 #Malian Valleys
                            978 980 #Senegambia
                            981 982 983 #Mauretania
                            984 985 986 #Malian Desert
                            833 #Djbouti
                            1001 1002 1003 996 999 1000 #Madagascar + nearby Island
                            
                            2000  #Cayenne 
                            1752 1767 1768 #French West Indies
                            1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 #French Pacific Island
                            2135 #Saint Pierre island near Newfoundland
						}					
  # FRA 1914 techs 
  # ###################### 
   techapps               = { 
	#Infantry Division  
	1010  1020 1030 
	#Cavalry Division  
	13060 13070 13080
	#Mountain Division 
	1160  1170 
	#Naval Infantry
	#Engineers
	1830
	#Early Anti-Tank Artillery 
	#Logistics 
	1910 1920
	
	#Armoured Car  
	2860
	#Early Tank 
	#Great War Heavy Field Artillery 
	2290 
	#Static Anti-Air Artillery 
	#Anti-Air Artillery Brigade 

	#Improved Destroyer 
	3010 3020 3030
	#Basic Light Cruiser 
	3110 3120 3130
	#Improved Heavy Cruiser 
	3210 3220 3230
	#Early Battleship 
	3410 3420 3430 3440
	#Early Battlecruiser
	3310
	#Great War Air Carrier 
	#Improved Light carrier 
	#Diesel Submarine
	3610 3620
	#Troopships
	3810
	#ASW
	#Torpedos
	3720 3730
	
	#Interceptors  
	4500
	#Exp.  Bomber 
	4600 4610
	#Multirole fighter
	#strategic bomber
	#navalbomber
	#SEAPLANES
	4740
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
	5810
	#Basic Oil Refining 
	#Basic Decimetric Radar Warning Sites
	#Faculty of Atomic Research 
	
	#Great War Hospital System 

	#Landdoctrine ww1 - exp entente eng fra ita USA bel HOL jap 
	6500 6510 6530 # 6580 
	#Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 8510 8550
	8900 8910
	#Air Doctrines - ww1 techs
	27480 27490 27500 27510
} 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
     democratic = 9 
     political_left = 7 
     free_market = 10 
     freedom = 10 
     professional_army = 6
     defense_lobby = 7 
     interventionism = 8 
   } 
   headofstate            = {  type = 9 id = 5307  } # Raymond Poincaré
   headofgovernment       = {  type = 9 id = 5292  } # René Viviani
   foreignminister        = {  type = 9 id = 5271  }  # René Viviani
   armamentminister       = {  type = 9 id = 5322  } # Noulens
   ministerofsecurity     = {  type = 9 id = 5343  } # Louis-Jean Malvy
   ministerofintelligence = {  type = 9 id = 5299  } # Georges Ladoux
   chiefofstaff           = {  type = 9 id = 5247  } # Émile Eugène Belin
   chiefofarmy            = {  type = 9 id = 5235  } # Joseph Joffre
   chiefofnavy            = {  type = 9 id = 5373  } # Louis Pivet
   chiefofair             = {  type = 9 id = 5374  } # Auguste Edouard Hirschauer

   
  # ################# 
  # ###FRENCH OOB #### 
  # ################# 
  landunit = 
  {  id    = {  type = 10000 id = 1  } 
   name   = "Corps d'armée colonial" 
   #leader = Frédéric Vautier - not in DB !
   location = 55
   Division = 
   {  id  = {  type = 10000 id = 3  } 
    name = "2ème Division d'infanterie coloniale" 
    type = infantry
	model = 1
    strength = 75
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10000 id = 4  } 
    name = "3ème Division d'infanterie coloniale" 
    type = infantry
	model = 1
    strength = 75
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 5  } 
   name   = "Gouvernement militaire de Paris" 
   location = 55
   leader = 5235 #Joseph Joffre (for the GHQ)
   Division = 
   {  id  = {  type = 10000 id = 6  } 
    name = "Grand Quartier Général" 
    type = hq 
	model = 0
    strength = 100
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 7  } 
    name = "6ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 8  } 
    name = "10ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 9  } 
    name = "1ère Division de Cavalerie" 
    type = cavalry
    strength = 50
	model = 2
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 145  } 
   name   = "Place de Paris" 
   #leader = Gen. Groth not in DB
   location = 55
   Division = 
   {  id  = {  type = 10000 id = 10  } 
    name = "83ème Division d'Infanterie territoriale de place" 
    type = garrison
	model = 0
    strength = 5
    locked = yes
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 11  } 
   name   = "Ier Corps d'Armée" 
   location = 52
   leader = 5254 #Charles Lanrezac (for the 5th Army)
   Division = 
   {  id  = {  type = 10000 id = 12  } 
    name = "Vème Armée" 
    type = hq 
	model = 0
    strength = 65
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 13  } 
    name = "1ère Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 14  } 
    name = "2ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 15  } 
    name = "51ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 16  } 
   name   = "IIème Corps d'Armée" 
   leader = 5248 #Gen. Gérard 
   location = 50
   Division = 
   {  id  = {  type = 10000 id = 17  } 
    name = "3ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 18  } 
    name = "4ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 19  } 
    name = "3ème Division de Cavalerie" 
    type = cavalry
    strength = 50
	model = 2
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 20  } 
    name = "69ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 21  } 
    name = "81ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 22  } 
   name   = "IIIème Corps d'Armée" 
   leader = 5360 #Gen. Sauret
   location = 45 
   Division = 
   {  id  = {  type = 10000 id = 23  } 
    name = "5ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 24  } 
    name = "53ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 25  } 
    name = "82ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 26  } 
   name   = "IVème Corps d'Armée" 
   leader = 5274 #Gen. Boëlle
   location = 58
   Division = 
   {  id  = {  type = 10000 id = 27  } 
    name = "7ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 28  } 
    name = "8ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 29  } 
    name = "54ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 30  } 
    name = "84ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 31  } 
   name   = "Vème Corps d'Armée" 
   leader = 5277 #Gen. Brochin
   location = 66 
   Division = 
   {  id  = {  type = 10000 id = 32  } 
    name = "9ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 33  } 
    name = "7ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 34  } 
    name = "55ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 35  } 
   name   = "VIème Corps d'Armée" 
   leader = 5230 #Fernand de Langle de Cary (for the 4th Army)
   location = 100 
   Division = 
   {  id  = {  type = 10000 id = 36  } 
    name = "IVème Armée" 
    type = hq 
	model = 0
    strength = 65
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 37  } 
    name = "12ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 38  } 
    name = "40ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 39  } 
    name = "42ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 40  } 
    name = "4ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 41  } 
    name = "5ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 42  } 
    name = "56ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 168  } 
    name = "132ème Division d'Infanterie" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 43  } 
   name   = "VIIème Corps d'Armée" 
   leader = 5232 #Gen. Dubail (for the 1st Army)
   location = 97 
   Division = 
   {  id  = {  type = 10000 id = 44  } 
    name = "Ière Armée" 
    type = hq 
	model = 0
    strength = 65
	experience = 10
    } 
   Division = 
   {  id  = {  type = 10000 id = 45  } 
    name = "14ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 46  } 
    name = "41ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 47  } 
    name = "57ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 48  } 
   name   = "VIIIème Corps d'Armée" 
   leader = 5292 #Gen. de Castelli
   location = 65 
   Division = 
   {  id  = {  type = 10000 id = 49  } 
    name = "15ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 50  } 
    name = "16ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 51  } 
    name = "8ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 52  } 
    name = "58ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 53  } 
   name   = "IXème Corps d'Armée" 
   leader = 5245 #Gen. Dubois
   location = 61 
   Division = 
   {  id  = {  type = 10000 id = 54  } 
    name = "17ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 55  } 
    name = "18ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 56  } 
    name = "9ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 57  } 
    name = "59ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 58  } 
    name = "85ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 59  } 
    name = "86ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 60  } 
   name   = "Xème Corps d'Armée" 
   leader = 5305 #Gen. Defforges
   location = 38 
   Division = 
   {  id  = {  type = 10000 id = 61  } 
    name = "19ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10000 id = 62  } 
    name = "20ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 63  } 
    name = "87ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 64  } 
   name   = "XIème Corps d'Armée" 
   leader = 5313 #Gen. Eydoux
   location = 57
   Division = 
   {  id  = {  type = 10000 id = 65  } 
    name = "21ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 66  } 
    name = "22ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 67  } 
    name = "52ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 68  } 
    name = "60ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 69  } 
    name = "61ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10	
experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 70  } 
    name = "88ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 71  } 
   name   = "XIIème Corps d'Armée" 
   leader = 5263 #Pierre Roques
   location = 73
   Division = 
   {  id  = {  type = 10000 id = 72  } 
    name = "23ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 73  } 
    name = "24ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 74  } 
    name = "10ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 75  } 
    name = "62ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 76  } 
    name = "89ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 77  } 
   name   = "XIIIème Corps d'Armée" 
   leader = 5267 #Gen. Alix
   location = 71
   Division = 
   {  id  = {  type = 10000 id = 78  } 
    name = "25ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 79  } 
    name = "26ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 80  } 
    name = "63ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 81  } 
   name   = "XIVème Corps d'Armée" 
   leader = 5356 #Gen. Pouradier-Duteil
   location = 85
   Division = 
   {  id  = {  type = 10000 id = 82  } 
    name = "27ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 83  } 
    name = "28ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 84  } 
    name = "6ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 85  } 
    name = "64ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 86  } 
    name = "74ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   }  
  landunit = 
  {  id    = {  type = 10000 id = 87  } 
   name   = "XVème Corps d'Armée" 
   leader = 5312 #Gen. Espinasse
   location = 89
   Division = 
   {  id  = {  type = 10000 id = 88  } 
    name = "29ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 89  } 
    name = "30ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 90  } 
    name = "65ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 91  } 
    name = "75ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 92  } 
   name   = "XVIème Corps d'Armée" 
   leader = 5363 #Gen. Taverna
   location = 82
   Division = 
   {  id  = {  type = 10000 id = 93  } 
    name = "31ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 94  } 
    name = "32ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 95  } 
    name = "66ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 96  } 
    name = "90ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 97  } 
   name   = "XVIIème Corps d'Armée" 
   leader = 5354 #Gen. Poline
   location = 77
   Division = 
   {  id  = {  type = 10000 id = 98  } 
    name = "33ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 99  } 
    name = "34ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 100  } 
    name = "67ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 101  } 
    name = "91ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 102  } 
   name   = "XVIIIème Corps d'Armée" 
   leader = 5296 #Gen. de Mas-Latrie
   location = 68
   Division = 
   {  id  = {  type = 10000 id = 103  } 
    name = "35ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 104  } 
    name = "36ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 105  } 
    name = "68ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 106  } 
    name = "92ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 107  } 
   name   = "XXème Corps d'Armée" 
   leader = 5229 #Edouard de Curières de Castelnau (for the 2nd Army)
   location = 106 
   Division = 
   {  id  = {  type = 10000 id = 108  } 
    name = "IIème Armée" 
    type = hq 
	model = 0
    strength = 65
    } 
   Division = 
   {  id  = {  type = 10000 id = 109  } 
    name = "11ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 110  } 
    name = "39ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
	extra = artillery 
    } 
   Division = 
   {  id  = {  type = 10000 id = 111  } 
    name = "2ème Division de Cavalerie" 
    type = cavalry 
	model = 2
    strength = 50
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 112  } 
    name = "70ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 113  } 
    name = "73ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 114  } 
   name   = "XXIème Corps d'Armée" 
   leader = 5264 #Gen. Ruffey (for the 3rd Army)
   location = 96
   Division = 
   {  id  = {  type = 10000 id = 115  } 
    name = "IIIème Armée" 
    type = hq 
	model = 0
    strength = 65
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 116  } 
    name = "13ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
    extra = artillery 
	brigade_model = 0
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 117  } 
    name = "43ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 75
	experience = 0
    extra = artillery 
	brigade_model = 0	
    } 
   Division = 
   {  id  = {  type = 10000 id = 118  } 
    name = "71ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 1119  } 
    name = "72ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 146  } 
   name   = "1er Groupe de divisions" 
   location = 55
   Division = 
   {  id  = {  type = 10000 id = 147  } 
    name = "47ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 148  } 
    name = "48ème Division d'Infanterie" 
    type = infantry 
	model = 2
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 149  } 
   name   = "2ème Groupe de divisions" 
   location = 55
   Division = 
   {  id  = {  type = 10000 id = 150  } 
    name = "76ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 151  } 
    name = "77ème Division d'Infanterie de réserve" 
    type = infantry 
	model = 1
    strength = 10
	experience = 0
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 152  } 
   name   = "3ème Groupe de divisions" 
   location = 55
   Division = 
   {  id  = {  type = 10000 id = 153  } 
    name = "96ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 154  } 
    name = "97ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 169  } 
    name = "99ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   Division = 
   {  id  = {  type = 10000 id = 170  } 
    name = "100ème Division d'Infanterie territoriale" 
    type = infantry 
	model = 0
    strength = 5
	experience = 0
    } 
   } 

  landunit = 
  {  id    = {  type = 10000 id = 1120  } 
   name   = "XIXème Corps d'Armée"
   leader = 5339 #Gen. Moinier
   location = 727
   Division = 
   {  id  = {  type = 10000 id = 2  } 
    name = "37ème Division d'Infanterie" 
    type = infantry 
	model = 1
    strength = 10
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10000 id = 167  } 
    name = "38ème Division d'Infanterie" 
    type = infantry 
	model = 1
    strength = 10
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10000 id = 1121  } 
    name = "44ème Division d'Infanterie" 
    type = infantry 
	model = 1
    strength = 10
	experience = 5
    } 
   Division = 
   {  id  = {  type = 10000 id = 1122  } 
    name = "45ème Division d'Infanterie" 
    type = infantry 
	model = 1
    strength = 10
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 156  } 
   name   = "Division d'Alger" 
   location = 727
   Division = 
   {  id  = {  type = 10000 id = 157  } 
    name = "Division d'Alger" 
    type = garrison
	model = 1
    strength = 60
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 158  } 
   name   = "Division d'Oran" 
   location = 728
   Division = 
   {  id  = {  type = 10000 id = 159  } 
    name = "Division d'Oran" 
    type = garrison
	model = 1
    strength = 60
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 155  } 
   name   = "Division de Constantine" 
   location = 734
   Division = 
   {  id  = {  type = 10000 id = 1123  } 
    name = "Division de Constantine" 
    type = garrison
	model = 1
    strength = 60
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 1124  } 
   name   = "Division d'occupation de Tunisie" 
   location = 747
   Division = 
   {  id  = {  type = 10000 id = 125  } 
    name = "Division d'occupation de Tunisie" 
    type = garrison
	model = 1
    strength = 90
	experience = 5
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 160  } 
   name   = "Division du Maroc occidental" 
   location = 718
   Division = 
   {  id  = {  type = 10000 id = 127  } 
    name = "Division du Maroc occidental" 
    type = garrison
	model = 1
    strength = 100
 	experience = 10
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 161  } 
   name   = "Division du Maroc oriental" 
   location = 724
   Division = 
   {  id  = {  type = 10000 id = 128  } 
    name = "Division du Maroc oriental" 
    type = garrison
	model = 1
    strength = 100
	experience = 10
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 126  } 
   name   = "Corps d'occupation du Maroc" 
   location = 717
   Division = 
   {  id  = {  type = 10000 id = 162  } 
    name = "Division marocaine" 
    type = infantry 
	model = 1
    strength = 10
	experience = 10
    } 
   Division = 
   {  id  = {  type = 10000 id = 129  } 
    name = "Troupes auxiliaires marocaines" 
    type = militia
	model = 1
    strength = 50
	experience = 10
    } 
   Division = 
   {  id  = {  type = 10000 id = 130  } 
    name = "Goumiers" 
    type = militia
	model = 1
    strength = 30
	experience = 10
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 131  } 
   name   = "Groupe de l'Afrique orientale" 
   location = 1001 
   Division = 
   {  id  = {  type = 10000 id = 132  } 
    name = "1er Régiment de tirailleurs malgaches" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   Division = 
   {  id  = {  type = 10000 id = 133  } 
    name = "2ème Régiment de tirailleurs malgaches" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   Division = 
   {  id  = {  type = 10000 id = 134  } 
    name = "3ème Régiment de tirailleurs malgaches" 
    type = militia
	model = 1
    strength = 40
	experience = 0
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 135  } 
   name   = "1er Régiment de tirailleurs sénégalais" 
   location = 983
   Division = 
   {  id  = {  type = 10000 id = 136  } 
    name = "1er Régiment de tirailleurs sénégalais" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 163  } 
   name   = "2ème Régiment de tirailleurs sénégalais" 
   location = 975
   Division = 
   {  id  = {  type = 10000 id = 137  } 
    name = "2ème Régiment de tirailleurs sénégalais" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 164  } 
   name   = "3ème Régiment de tirailleurs sénégalais" 
   location = 962
   Division = 
   {  id  = {  type = 10000 id = 138  } 
    name = "3ème Régiment de tirailleurs sénégalais" 
    type = militia
	model = 1
    strength = 30
	experience = 5
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 165  } 
   name   = "4ème Régiment de tirailleurs sénégalais" 
   location = 978
   Division = 
   {  id  = {  type = 10000 id = 166  } 
    name = "4ème Régiment de tirailleurs sénégalais" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 139  } 
   name   = "Régiment indigène du Tchad" 
   location = 920
   Division = 
   {  id  = {  type = 10000 id = 140  } 
    name = "Régiment indigène du Tchad" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   } 
  landunit = 
  {  id    = {  type = 10000 id = 141  } 
   name   = "Groupe de l'Afrique équatoriale" 
   location = 915
   Division = 
   {  id  = {  type = 10000 id = 142  } 
    name = "Régiment indigène du Gabon" 
    type = militia
	model = 1
    strength = 40
	experience = 5
	max_strength = 40
    } 
   } 
 landunit = {   
     id = {  type = 10000 id = 143  }  
     name = "Groupe du Pacifique"  
     location = 1586
   Division = 
   {  id  = {  type = 10000 id = 144  } 
    name = "Bataillon d'Infanterie coloniale de la Nouvelle-Calédonie" 
    type = militia
	model = 1
    strength = 10
	experience = 5
	max_strength = 10
    } 
   }  
  
 ### French air force, 2752 
 airunit = {   
 id = {  type = 10000 id = 600  }  
 name = "1er Corps d'Aviation Militaire"  
 leader = 5599 # Bouttieaux 
 base = 55 # Versailles 
 location = 55 # Versailles 
  
 Division = {  id = {  type = 10000 id = 601  } name = "1. Escadrille"  
 strength = 10 max_strength = 75 type = tactical_bomber model = 1  } 
 Division = {  id = {  type = 10000 id = 602  } name = "2. Escadrille"  
 strength = 10 max_strength = 50 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10000 id = 603  }  
 name = "2ème Corps d'Aviation Militaire"  
 leader = 5601 # Breton 
 base = 52 # Lille 
 location = 52 # Lille
  
 Division = {  id = {  type = 10000 id = 604  } name = "3. Escadrille"  
 strength = 10 max_strength = 75 type = tactical_bomber model = 1  } 
 Division = {  id = {  type = 10000 id = 605  } name = "4. Escadrille"  
 strength = 10 max_strength = 50 type = interceptor model = 0  } 
  } 
 airunit = {   
 id = {  type = 10000 id = 606  }  
 name = "3ème Corps d'Aviation Militaire"  
 leader = 5608 # Estienne 
 base = 85 # Lyon 
 location = 85 # Lyon 
  
 Division = {  id = {  type = 10000 id = 607  } name = "5. Escadrille"  
 strength = 50 max_strength = 75 type = tactical_bomber model = 1  } 
 Division = {  id = {  type = 10000 id = 608  } name = "6. Escadrille"  
 strength = 40 max_strength = 50 type = interceptor model = 0  } 
  } 

 ### French fleet, 2752 
 navalunit = {   
     id = {  type = 10000 id = 500  }  
 name = "1ère Flotte"  
     leader = 5530 # Boué de Lapeyrère
     base = 86 # Toulon
     location = 86 # Toulon  
  
     Division = {  id = {  type = 10000 id = 501  } name = "Courbet" type = battleship model = 2  }  
     Division = {  id = {  type = 10000 id = 502  } name = "Jean Bart" type = battleship model = 2  }  
     Division = {  id = {  type = 10000 id = 503  } name = "Danton" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 504  } name = "Mirabeau" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 505  } name = "Diderot" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 506  } name = "Condorcet" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 507  } name = "Vergniaud" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 508  } name = "Voltaire" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 509  } name = "Démocratie" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 510  } name = "Justice" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 511  } name = "Verité" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 512  } name = "Republique" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 513  } name = "Patrie" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 514  } name = "Suffren" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 515  } name = "Bouvet" type = battleship model = 0  }  
     Division = {  id = {  type = 10000 id = 516  } name = "Gaulois" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 517  } name = "Charlemagne" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 518  } name = "St Louis" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 519  } name = "Carnot" type = battleship model = 0  }  
     Division = {  id = {  type = 10000 id = 520  } name = "Jauréguiberry" type = battleship model = 0  }  
     Division = {  id = {  type = 10000 id = 521  } name = "Charles Martel" type = battleship model = 0  }  
     Division = {  id = {  type = 10000 id = 522  } name = "Massena" type = battleship model = 1  }  
     Division = {  id = {  type = 10000 id = 523  } name = "Foudre" type = escort_carrier model = 0  }  
     Division = {  id = {  type = 10000 id = 524  } name = "Waldeck Rousseau" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 525  } name = "Edgar Quinet" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 526  } name = "Ernest Renan" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 527  } name = "Leon Gambetta" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 528  } name = "Jules Ferry" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 529  } name = "Victor Hugo" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 530  } name = "Jules Michelet" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 531  } name = "D'Entrecasteaux" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 532  } name = "Pothuau" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 533  } name = "Bruix" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 534  } name = "Latouche Treville" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 535  } name = "Chateaurenault" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 536  } name = "Jurien de la Graviere" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 537  } name = "1ère Escadrille de Torpilleurs" type = destroyer model = 2  }  
     Division = {  id = {  type = 10000 id = 538  } name = "2ème Escadrille de Torpilleurs" type = destroyer model = 2  }  
     Division = {  id = {  type = 10000 id = 539  } name = "3ème Escadrille de Torpilleurs" type = destroyer model = 1  }  
     Division = {  id = {  type = 10000 id = 540  } name = "4ème Escadrille de Torpilleurs" type = destroyer model = 0  } 
     Division = {  id = {  type = 10000 id = 613  } name = "16ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
     Division = {  id = {  type = 10000 id = 614  } name = "17ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
     Division = {  id = {  type = 10000 id = 615  } name = "18ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
     Division = {  id = {  type = 10000 id = 609  } name = "19ème Escadrille de Torpilleurs" type = destroyer model = 0  }
     Division = {  id = {  type = 10000 id = 610  } name = "20ème Escadrille de Torpilleurs" type = destroyer model = 0  }	 
    } 
  
 navalunit = {   
	id = {  type = 10000 id = 541  }  
	name = "2ème Flotte Légére"  
	# leader = # Rouyer  
	base = 43 # Cherbourg
	location = 43 # Cherbourg 
  
	Division = {  id = {  type = 10000 id = 542  } name = "Marseillaise" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 543  } name = "Amiral Aube" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 544  } name = "Condé" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 545  } name = "Gloire" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 546  } name = "Desaix" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 547  } name = "Kleber" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 548  } name = "Jeanne d'Arc" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 549  } name = "Gueydon" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 550  } name = "Dupetit Thouars" type = heavy_cruiser model = 1  }  
	Division = {  id = {  type = 10000 id = 551  } name = "Lavoisier" type = light_cruiser model = 0  }  
	Division = {  id = {  type = 10000 id = 552  } name = "D'Estrées" type = light_cruiser model = 0  }  
	Division = {  id = {  type = 10000 id = 553  } name = "Forbin" type = light_cruiser model = 0  }  
	Division = {  id = {  type = 10000 id = 554  } name = "Surcouf" type = light_cruiser model = 0  }  
	Division = {  id = {  type = 10000 id = 555  } name = "Guichen" type = light_cruiser model = 0  }  
	Division = {  id = {  type = 10000 id = 556  } name = "5ème Escadrille de Torpilleurs" type = destroyer model = 2  }
	Division = {  id = {  type = 10000 id = 557  } name = "5ème Escadrille de Torpilleurs" type = destroyer model = 2  }	 
	Division = {  id = {  type = 10000 id = 558  } name = "6ème Escadrille de Torpilleurs" type = destroyer model = 1  }  
	Division = {  id = {  type = 10000 id = 559  } name = "7ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
	Division = {  id = {  type = 10000 id = 611  } name = "21ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
	Division = {  id = {  type = 10000 id = 612  } name = "22ème Escadrille de Torpilleurs" type = destroyer model = 0  }  	 
	}  
  
 navalunit = {   
     id = {  type = 10000 id = 560  }  
 name = "Defense Mobile"  
     # leader = ?  
     base = 49 # Calais
     location = 49 # Calais  
     Division = {  id = {  type = 10000 id = 561  } name = "8ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
     Division = {  id = {  type = 10000 id = 562  } name = "9ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
	 Division = {  id = {  type = 10000 id = 619  } name = "10ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
	 Division = {  id = {  type = 10000 id = 620  } name = "11ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 563  }  
 name = "Defense Speciale"  
     # leader = ?  
     base = 717 # Casablanca
     location = 717 # Casablanca 
  
     Division = {  id = {  type = 10000 id = 564  } name = "Henri IV" type = battleship model = 0  }  
     Division = {  id = {  type = 10000 id = 565  } name = "Amiral Charner" type = heavy_cruiser model = 1  }  
     Division = {  id = {  type = 10000 id = 566  } name = "Cassard" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 567  } name = "Du Chayla" type = light_cruiser model = 0  }  
     Division = {  id = {  type = 10000 id = 568  } name = "Cosmao" type = light_cruiser model = 0  }  
	 Division = {  id = {  type = 10000 id = 621  } name = "12ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
	 Division = {  id = {  type = 10000 id = 616  } name = "13ème Escadrille de Torpilleurs" type = destroyer model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 569  }  
 name = "Defense Orientale"  
     # leader = ?  
     base = 1399 # Saigon
     location = 1399 # Saigon 
  
     Division = {  id = {  type = 10000 id = 570  } name = "Dupleix" type = heavy_cruiser model = 1  }  
	 Division = {  id = {  type = 10000 id = 617  } name = "14ème Escadrille de Torpilleurs" type = destroyer model = 1  }  
    }  
  
 navalunit = {   
     id = {  type = 10000 id = 571  }  
 name = "Defense des Indes de l'Ouest"  
     # leader = ?  
     base = 1768 # Fort-de-France
     location = 1768 # Fort-de-France  
  
     Division = {  id = {  type = 10000 id = 572  } name = "Descartes" type = light_cruiser model = 0  }  
    } 
  
 navalunit = {   
     id = {  type = 10000 id = 573  }  
 name = "Defense du Pacifique de Sud"  
     # leader = ?  
     base = 1748
     location = 1748 # Tahiti 
  
     Division = {  id = {  type = 10000 id = 574  } name = "Montcalm" type = heavy_cruiser model = 1  } 
     Division = {  id = {  type = 10000 id = 618  } name = "15ème Escadrille de Torpilleurs" type = destroyer model = 1  }  	 
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 575  }  
 name = "1ère Flottille de Sous-Marins"  
     # leader = ?  
     base = 43
     location = 43 # Cherbourg 
  
     Division = {  id = {  type = 10000 id = 576  } name = "1ère Escadrille de Sous-Marins" type = submarine model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 577  }  
 name = "2ème Flottille de Sous-Marins"  
     # leader = ?  
     base = 49
     location = 49 # Calais
  
     Division = {  id = {  type = 10000 id = 578  } name = "2ème Escadrille de Sous-Marins" type = submarine model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 579  }  
 name = "3ème Flottille de Sous-Marins"  
     # leader = ?  
     base = 86
     location = 86 # Toulon 
  
     Division = {  id = {  type = 10000 id = 580  } name = "3ème Escadrille de Sous-Marins" type = submarine model = 0  }  
     Division = {  id = {  type = 10000 id = 581  } name = "4ème Escadrille de Sous-Marins" type = submarine model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 582  }  
 name = "Transports Généraux"  
     # leader = ?  
     base = 68
     location = 68 # Nantes 
  
     Division = {  id = {  type = 10000 id = 583  } name = "1ère Flottille de Transport" type = transport model = 0  }  
     Division = {  id = {  type = 10000 id = 584  } name = "2ème Flottille de Transport" type = transport model = 0  }  
     Division = {  id = {  type = 10000 id = 585  } name = "3ème Flottille de Transport" type = transport model = 0  }  
    }  
    
 navalunit = {   
     id = {  type = 10000 id = 586  }  
 name = "Transport Expéditionnaire"  
     # leader = ?  
     base = 727
     location = 727 # Algiers 
  
     Division = {  id = {  type = 10000 id = 587  } name = "4ème Flottille de Transport" type = transport model = 0  }  
     Division = {  id = {  type = 10000 id = 588  } name = "5ème Flottille de Transport" type = transport model = 0  }  
     Division = {  id = {  type = 10000 id = 589  } name = "6ème Flottille de Transport" type = transport model = 0  }  
  } 
  # ################################# 
  # Naval units under construction 
  # ################################# 
 division_development = {   
     id = {  type =10000 id = 590  }  
     name = "Paris"  
     type = battleship  
     model = 2  
     cost = 0.4  
     date = {  year = 1914 month = august day = 1  }  
    }  
 division_development = {   
     id = {  type =10000 id = 591  }  
     name = "France"  
     type = battleship  
     model = 2  
     cost = 0.4 
     date = {  year = 1914 month = july day = 15  }  
    }  
 division_development = {   
     id = {  type =10000 id = 592  }  
     name = "Bretagne"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1915 month = september day = 1  }  
    }  
 division_development = {   
     id = {  type =10000 id = 593  }  
     name = "Provence"  
     type = battleship  
     model = 3  
     cost = 0.4  
     date = {  year = 1915 month = june day = 1  }  
    }  
 division_development = {   
     id = {  type =10000 id = 594  }  
     name = "Lorraine"  
     type = battleship  
     model = 3  
     cost = 0.4 
     date = {  year = 1916 month = july day = 27  }  
    }  
 # Historically the French cancelled construction of the following ships once war began: 
 #division_development = {    
    # id = {  type =10000 id = 595  }  
  #   name = "Normandie"  
   #  type = battleship  
   #  model = 3  
   #  cost = 0.4  
   #  date = {  year = 1917 month = march day = 15  }  
    #}  
# division_development = {   
  #   id = {  type =10000 id = 596  }  
   #  name = "Languedoc"  
  #   type = battleship  
 #    model = 3  
 #    cost = 0.4  
   #  date = {  year = 1917 month = march day = 15  }  
#   }  
# division_development = {   
  #   id = {  type =10000 id = 597  }  
  #   name = "Flandre"  
   #  type = battleship  
    # model = 3  
  #   cost = 0.4  
   #  date = {  year = 1917 month = march day = 15  }  
  #  }  
# division_development = {   
  #   id = {  type =10000 id = 598  }  
  #   name = "Gascogne"  
 #    type = battleship  
  #   model = 3  
  #   cost = 0.4  
   #  date = {  year = 1917 month = march day = 15  }  
  #  }  
 #division_development = {   
#     id = {  type =10000 id = 599  }  
 #    name = "Béarn"  
 #   type = battleship  
 #    model = 3  
 #    cost = 0.4 
 #    date = {  year = 1917 month = march day = 15  }  
 #   } 
  } 
 
