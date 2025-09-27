 
 ############################## 
 # Country definition for U49 # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = U49 
	ai                     = "U49.ai" 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } }
	capital                = 825 
	puppet                 = ITA 
	control                = ITA 
	# Resource Reserves 
	energy                 = 420
	metal                  = 210
	rare_materials         = 105
	oil                    = 500 
	supplies               = 2000 
	money                  = 50 
	manpower               = 0 
	transports             = 300 
	escorts                = 60 
      
   diplomacy = 
   {   
   relation = {  tag = ITA value = 150 access = yes  }  
    } 
   SpyInfo                = {  country = "U49" NumberOfSpies = 3  } 
  
    
   nationalprovinces      = {  834 835 818 819 820 821 822 823 824 825 826 827 828 829 830 831 817 816 815 837 836 838
                               832 833
                            } 
   ownedprovinces         = {  834 835 818 819 820 821 822 823 824 825 826 827 828 829 830 831 817 816 815 837 836 838  } 
   controlledprovinces    = {  834 835 818 819 820 821 822 823 824 825 826 827 828 829 830 831 817 816 815 837 836 838  } 
   
  # FRA 1936 techs 
   # ###################### 
   techapps               = {  
 #Great War Infantry Division  
 1010  1020 1030 1040 1050 1060   
 #Early Mountain Division 
 1160  1170 1180 1190 1200 1210 1220 1230 1240  
 #Interbellum 1930 Supply 
 1910 1920 1930 1940 1950 1960 

 #1930 Cavalry Division  
 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370  
 #Basic Armoured Car  
 2860 2870 2880 2020  
 #Great War Heavy Field Artillery 
 2290 2300 2310 
#Early Static Anti-Air Artillery 
2800 2450
#SW Tank 
7600 7610
#Great War Destroyer 
3010 3020 3030 3040
#Interwar Light Cruiser 
3110 3120 3130 3140
#Early Heavy Cruiser 
3210 3220 3230
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010 
#Interwar Bomber 
4600 4610 4620 4630 4120
#Improved Construction Engineering
5800 5080  
#Engineers
1830 1840 

#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810
#Medicine
5600 5610
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Naval Doctrines
8010 8020 8050 
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
  } 
inventions = { 3000027 }    
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 2 
     political_left    = 3 
     free_market       = 7 
     freedom           = 3 
     professional_army = 2 
     defense_lobby     = 7 
     interventionism   = 8 
    } 

  # ################# 
   # ### OOB #### 
   # ################# 

       # ITALIAN EAST AFRICA SUPREME COMMAND
       landunit =
       {  id       = {  type = 23500 id = 131  }
         location = 825
         name     = "Comando Superiore dell'AOI"
         division =
         { id       = {  type = 23500 id = 132  }
           name     = "Comando Superiore dell'AOI"
           type     = hq
           model    = 2
           strength = 100
          }
        }    
       landunit =
       {  id       = {  type = 23500 id = 133  }
         location = 817
         name     = "Scacchiere Nord"
         division =
         { id       = {  type = 23500 id = 134  }
           name     = "1a Divisione 'Eritrea'"
           type     = militia
           model    = 4
           strength = 100
           extra    = artillery
           brigade_model = 4
          }
         division =
         { id       = {  type = 23500 id = 135  }
           name     = "2a Divisione 'Eritrea'"
           type     = militia
           model    = 4
           strength = 100
           extra    = artillery
           brigade_model = 4
          }
         division =
         { id       = {  type = 23500 id = 136  }
           name     = "4a Divisione 'Eritrea'"
           type     = militia
           model    = 4
           strength = 100
           extra    = artillery
           brigade_model = 5		   
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 137  }
         location = 827
         name     = "Scacchiere Sud"
         division =
         { id       = {  type = 23500 id = 138  }
           name     = "1a Divisione 'Ethopia'"
           type     = militia
           model    = 4
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 142  }
         location = 829
         name     = "Scacchiere Est"
         division =
         { id       = {  type = 23500 id = 143  }
           name     = "2a Divisione 'Ethopia'"
           type     = militia
           model    = 4
           strength = 100
          }
        }
       landunit =
       {  id       = {  type = 23500 id = 144  }
         location = 836
         name     = "Scacchiere Giuba"
         division =
         { id       = {  type = 23500 id = 145  }
           name     = "101a Divisione 'Somala'"
           type     = infantry
           model    = 6
           strength = 60
           max_strength = 70
          }
         division =
         { id       = {  type = 23500 id = 146  }
           name     = "102a Divisione 'Somala'"
           type     = infantry
           model    = 6
           strength = 60
           max_strength = 70
          }
        }
  }