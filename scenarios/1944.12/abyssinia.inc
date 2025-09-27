 
 ######################################## 
 # Country definition for ETH by Cardus # 
 ######################################## 
  

 country = 
 {  tag                    = ETH 
	ai_settings	= { flags = { AI_reinforcements = yes RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
	puppet                 = ENG
	control                = ENG
	# Resource Reserves 
	energy                 = 1060
	metal                  = 1180
	rare_materials         = 490
	oil                    = 100 
	supplies               = 100 
	money                  = 500 
	capital                = 825 
	manpower               = 185 
#      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 3 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 2 
    } 

   nationalprovinces      = {  815 816 817 818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
   ownedprovinces         = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
   controlledprovinces    = {  818 819 820 821 822 823 824 825 826 827 828 829 830 831  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  

#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
# Inf support 
1910 1920 1930 1940 1950 1960
#Early Static Anti-Air Artillery 
2800
#SW Tank 
7600 7610
#Early Infantry Division  
1010 1020 1030 1040 1050 1060 1070
#Early Mountain Division
1160  1170 1180 1190 1200 1210 1220 
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 

 }
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = ENG value = 50  } 
     relation = {  tag = FRA value = 25  } 
     relation = {  tag = IRE value = 100  } 
     relation = {  tag = ITA value = -200  } 
     relation = {  tag = JAP value = 35  } 
    } 
   SpyInfo                = {  country = "ETH" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 245001  } 
   headofgovernment       = {  type = 9 id = 245014  } 
   foreignminister        = {  type = 9 id = 245020  } 
   armamentminister       = {  type = 9 id = 245004  } 
   ministerofsecurity     = {  type = 9 id = 245033  } 
   ministerofintelligence = {  type = 9 id = 245039  } 
   chiefofstaff           = {  type = 9 id = 245045  } 
   chiefofarmy            = {  type = 9 id = 245050  } 
   chiefofnavy            = {  type = 9 id = 245057  } 
   chiefofair             = {  type = 9 id = 245061  } 
   dormant_ministers      = {  245011 245015 245002 245017  }
       landunit =
       {  id       = {  type = 31000 id = 1  }
         location = 825
         name     = "Imperial Army"
         Division =
         {  id       = {  type = 31000 id = 2  }
           name     = "Kebur Zabagna"
           type     = infantry
           strength = 30
           model    = 7
          }
         Division =
         {  id       = {  type = 31000 id = 3  }
           name     = "1/Sefari"
           type     = militia
           strength = 70
           model    = 1
          }
         Division =
         {  id       = {  type = 31000 id = 4  }
           name     = "2/Sefari"
           type     = militia
           strength = 70
           model    = 1
          }
       }
}