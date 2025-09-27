 
 ############################## 
 # Country definition for CGX # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {
	tag                    = CGX 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	regular_id             = UCH
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 15 
	puppet                 = UCH
	capital                = 1378 # Guilin 
   # Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 100
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	manpower               = 32
	dissent                = 5
 diplomacy = 
 {
 } 
 SpyInfo                = {  country = "CGX" NumberOfSpies = 2  }
 nationalprovinces      = { 1378 1365 1376 1377 1375 1380 1381 1382 1383 1369 1370 1373 1379 1367 1374 1368
 1303 1305 1306 1307
 } 
 ownedprovinces         = { 1378 1365 1376 1377 1375 1380 1381 1382 1383 1369 1370 1373 1379 1367 1374 1368  } 
 controlledprovinces    = { 1378 1365 1376 1377 1375 1380 1381 1382 1383 1369 1370 1373 1379 1367 1374 1368  } 

 techapps               = { 
 #Infantry - Up to 1897
 1010 1020

 #Cavalry - Only 1870
 13060
 
 #Light Infantry Division - Only 1870
 1160

 #Early Construction - Only 1870
 5800

 #Interwar Light Cruiser 
 3110
 #Early Heavy Cruiser
 3210
 #Early Battleship
 3410
 #Troopships
 3810
 #Early Torpedoes
 3720
 # Torpedo Gunboat (DD)
 3010

 #Land Doctrines
 6500 6510

 #Naval Doctrines
 8010 8020 8050 8060 8070 81300

 #Air Doctrines
 }
 blueprints = {
 # Scout Cruiser (CL)
 3120
 
 # 20th Century Land Doctrine
 6530
 }
 policy = 
 {  
	 date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 9 
     professional_army = 2 
     defense_lobby     = 6 
     interventionism   = 2 
 }
 
 # 1914 China OOB (Partially Extrapolated). Around 50 divisions in China total.
 # 23 Divisions were in Beiyang control.
 # Special thanks to research by Delanonne.
 # Wu-wei Jun: Based around Manchuria, Loyal to Yuan Shikai. Later joins the Zhili Clique under Cao Kun.
# landunit = 
# {
#   location = 1247 # Beijing 
#   name   = "Wu-wei Jun"  
#   leader = # Yuan Shikai 
#   id    = {   type = 22001 id = 10000  }  
   landdivision = 
   {
    experience = 20
    id     = {   type = 22001 id = 10001   }  
    name    = "Frontal Division" #Led by Ma Yuekun
    type    = infantry  
    model   = 3
	dormant = yes
   }
   landdivision = 
   {
    experience = 20  
    id     = {   type = 22001 id = 10002   }  
    name    = "Left Division" #Led by Yuan Shikai
    type    = infantry  
    model   = 3
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10003   }  
    name    = "Hind Division" #Led by Nie Shicheng
    type    = infantry  
    model   = 2 
	dormant = yes	
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10004   }  
    name    = "Right Division" #Led by Dong Fuziang
    type    = infantry  
    model   = 2  
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10005   }  
    name    = "Middle Division" #Led by Duang Zhigui
    type    = infantry  
    model   = 2  
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10006   }  
    name    = "New Division" #Led by ???
    type    = infantry
    model   = 2
	dormant = yes
   }
# }
 # Huai-jun: Based in Hubei-Jiangsu. Loyal to local governors/Zhang Zhidong. Are NOT warlord troops. Jiangsu supported KMT.
# landunit = 
# {
#   location = 1317 # Wuhan  
#   name   = "Hubei Huai-jun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10010  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10011   }  
    name    = "Hubei Lujun" #Led by ???
    type    = infantry  
    model   = 1
	dormant = yes
   }
# }
# landunit = 
# {
#   location = 1337 # Nanjing 
#   name   = "Jiangsu Huai-jun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10020  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10021   }  
    name    = "Jiangsu Lujun" #Led by ???
    type    = infantry  
    model   = 1
	
	dormant = yes
   }
# }
 # Shanghai Bund: Based in Shanghai, Loyal to Sun Zhongshan and the KMT.
# landunit = 
# {
#   location = 1338 # Shanghai 
#   name   = "Shanghai Mingzhongjituan"  
#   leader = # Chen Qimei
#   id    = {   type = 22001 id = 10030  }  
   landdivision = 
   {
    experience = 40
    id     = {   type = 22001 id = 10031   }  
    name    = "Shanghai Mingbin" #Led by Chen Qimei
    type    = militia
    model   = 0
	dormant = yes	
   }
# }
 # Jiangxi-jun: Based in Jiangxi. Loyal to local governors/Li Liejun. Are NOT warlord troops. Supported KMT.
# landunit = 
# {
#   location = 1352 # Nanchang 
#   name   = "Jiangxi Difangjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10040  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10041   }  
    name    = "Jiangxi Lujun" #Led by ???
    type    = infantry
    model   = 1
	dormant = yes
   }
# }
 # Anhui: Loyal to Duan Qirui
# landunit = 
# {
#   location = 1340 # Hefei
#   name   = "Second Corps"  
#   leader = # Duan Qirui
#   id    = {   type = 22001 id = 10050  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10051   }  
    name    = "1st SC Division" #Led by ???
    type    = infantry  
    model   = 2
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10052   }  
    name    = "2nd SC Division" #Led by ???
    type    = infantry  
    model   = 2
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10053   }  
    name    = "3rd SC Division" #Led by ???
    type    = infantry  
    model   = 2  
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10054   }  
    name    = "4th SC Division" #Led by ???
    type    = infantry  
    model   = 2  
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10055   }  
    name    = "5th SC Division" #Led by ???
    type    = infantry  
    model   = 2  
	dormant = yes
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10056   }  
    name    = "6th SC Division" #Led by ???
    type    = infantry
    model   = 2
	dormant = yes
   }
   
# }
 # Zhejiang (Extrapolated) Loyal to local governors/Tong Baoxuan. Are NOT warlord troops. Supported all factions except communists.
# landunit = 
# {
#   location = 1345 # Hangzhou
#   name   = "Zhejiang Difangjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10060  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10061   }  
    name    = "Zhejiang Lujun" #Led by ???
    type    = infantry
    model   = 1
	dormant = yes	
   }
# }
 # Sichuan, later joins Zhili Clique. (Extrapolated)
# landunit =
# {
#   location = 1297 # Chendu
#   name   = "Sichuan Difangjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10070  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10071   }  
    name    = "Sichuan Lujun" #Led by ???
    type    = infantry
    model   = 2
	dormant = yes
   }
# }
# landunit =
# {
#   location = 1299 # Chongqing
#   name   = "Chongqing Mingzhongjituan"  
#   leader = # ??
#   id    = {   type = 22001 id = 10080  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10081   }  
    name    = "Congqing Mingbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes	
   }
# }
 # Shandong (Extrapolated)
# landunit =
# {
#   location = 1330 # Jinan
#   name   = "Shandong Renmingjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10090  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10091   }  
    name    = "1 Shangdong Mingbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes	
   }
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10092   }  
    name    = "2 Shangdong Mingbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes
   }
# }
 # Fujian (Extrapolated)
# landunit =
# {
#   location = 1360 # Xiamen
#   name   = "Fujian Difangjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10100  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10101   }  
    name    = "Fujian Mingbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes
   }
# }
 # Hunan (Extrapolated)
# landunit =
# {
#   location = 1308 # Changsha
#   name   = "Hunan Difangjun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10110  }  
   landdivision = 
   {
    experience = 0
    id     = {   type = 22001 id = 10111   }  
    name    = "Hunan Lujun" #Led by ???
    type    = infantry
    model   = 2
	dormant = yes
   }
# }
 # Manchuria (Extrapolated) Warlord troops, loyal to Zhang Zuolin. Later led by Yan Xishan
# landunit =
# {
#   location = 1199 # Harbin
#   name   = "Dongbei Difangjun"  
#   leader = # Zhang Zuolin
#   id    = {   type = 22001 id = 10120  }  
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10121   }  
    name    = "1 Dongbei Lujun" #Led by Zhang Zuolin
    type    = infantry
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10122   }  
    name    = "2 Dongbei Lujun" #Led by ???
    type    = infantry
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10123   }  
    name    = "3 Dongbei Lujun" #Led by ???
    type    = infantry
    model   = 1
	dormant = yes
   }
# }
 # Guizhou (Extrapolated) Loyal to Tang Jiyao/NPA.
# landunit =
# {
#   location = 1305 # Guiyang
#   name   = "Guizhou Difangjun"  
#   leader = # Tang Jiyao
#   id    = {   type = 22001 id = 10130  }  
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10131   }  
    name    = "Guizhou Lujun" #Led by Tang Jiyao
    type    = infantry
    model   = 2
	dormant = yes
   }
# }
 # Shanxi (Extrapolated)
# landunit =
# {
#   location = 1252 # Taiyuan
#   name   = "Shanxi Mingzhongjituan"  
#   leader = # ???
#   id    = {   type = 22001 id = 10140  }  
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10141   }  
    name    = "Shanxi Mingbin" #Led by ???
    type    = militia
    model   = 1
	dormant = yes
   }
# }
 # Shaanxi (Extrapolated)
# landunit =
# {
#   location = 1258 # Xi'an
#   name   = "Shaanxi Mingzhongjituan"  
#   leader = # ???
#   id    = {   type = 22001 id = 10150  }  
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10151   }  
    name    = "Shaanxi Mingbin" #Led by ???
    type    = militia
    model   = 1
	dormant = yes
   }
# }
 # Henan (Extrapolated) Loyal to local governors/Tan Yankai. Are NOT warlodrd troops. Supported Wuhan faction.
# landunit =
# {
#   location = 1322 # Luoyang
#   name   = "Henan Difangjun"  
#   leader = # Tan Yankai
#   id    = {   type = 22001 id = 10160  }  
   landdivision = 
   {
    experience = 5
    id     = {   type = 22001 id = 10161   }  
    name    = "Henan Lujun" #Led by Tan Yankai
    type    = infantry
    model   = 1
	dormant = yes
   }
# }
 # Yunnan (Extrapolated)
#  landunit = 
# {
#   location = 1390 # Kunming  
#   name   = "Kunming Ye Quan Jun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10170  }  
#   dormant = yes
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10171   }  
    name    = "1 YQ Division" #Led by ???
    type    = infantry  
    model   = 2
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10172   }  
    name    = "2 YQ Division" #Led by ???
    type    = infantry  
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10173   }  
    name    = "3 YQ Division" #Led by ???
    type    = infantry  
    model   = 1
	dormant = yes
   }
# }
#  landunit = 
# {
#   location = 1292 # Ya'an 
#   name   = "Ya'an Ye Quan Jun"  
#   leader = # ??
#   id    = {   type = 22001 id = 10180  }  
#   dormant = yes
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10181   }  
    name    = "4 YQ Division" #Led by ???
    type    = infantry  
    model   = 2
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10182   }  
    name    = "5 YQ Division" #Led by ???
    type    = infantry  
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10183   }  
    name    = "6 YQ Division" #Led by ???
    type    = infantry  
    model   = 1
	dormant = yes
   }
# }
 # Guangxi (Extrapolated) Loyal to Old Guangxi Clique
  landunit = 
 {
   location = 1378 # Guiling
   name   = "Guangxi Difangjun"  
#   leader = # Lu Rongting
   id    = {   type = 22001 id = 10190  }  
   Division = 
   {
    experience = 10
    id     = {   type = 22001 id = 10191   }  
    name    = "1 GX Division" #Led by Li Zhongren
    type    = infantry  
    model   = 2
   }
   Division = 
   {
    experience = 10
    id     = {   type = 22001 id = 10192   }  
    name    = "2 GX Division" #Led by Lu Rongting
    type    = militia 
    model   = 1
   }
   Division = 
   {
    experience = 10
    id     = {   type = 22001 id = 10193   }  
    name    = "3 GX Division" #Led by ???
    type    = militia
    model   = 0
   }
 }
 # Guangdong (Extrapolated) Loyal to KMT, Sun Zhongshan
  landunit = 
 {
   location = 1369 # Guangzhou
   name   = "Guangdong Difangjun"
#   leader = # Chen Jiaoming
   id    = {   type = 22001 id = 10200  }  
   Division = 
   {
    experience = 30
    id     = {   type = 22001 id = 10201   }  
    name    = "1 GD Division" #Led by Chen Jiaoming
    type    = infantry  
    model   = 2
   }
   Division = 
   {
    experience = 30
    id     = {   type = 22001 id = 10202   }  
    name    = "2 GD Division" #Led by ???
    type    = infantry  
    model   = 2
   }
   Division = 
   {
    experience = 30
    id     = {   type = 22001 id = 10203   }  
    name    = "3 GD Division" #Led by ???
    type    = infantry  
    model   = 1
   }
   Division = 
   {
    experience = 30
    id     = {   type = 22001 id = 10204   }  
    name    = "4 GD Division" #Led by ???
    type    = infantry  
    model   = 1
   }
 }
 # Xibei (San Ma Clique) (Extrapolated)
#  landunit = 
# {
#   location = 1264 # Lanzhou
#   name   = "1 Guyong jun"  
#   leader = # ???
#   id    = {   type = 22001 id = 10210  }  
#   dormant = yes
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10211   }  
    name    = "1 SM Guyongbin" #Led by ???
    type    = militia
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10212   }  
    name    = "2 SM Guyongbin" #Led by ???
    type    = militia 
    model   = 0
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10213   }  
    name    = "3 SM Guyongbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes
   }
# }
#  landunit = 
# {
#   location = 1283 # Ge'ermu
#   name   = "2 Guyong jun"  
#   leader = # ???
#   id    = {   type = 22001 id = 10220  }  
#   dormant = yes
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10221   }  
    name    = "4 SM Guyongbin" #Led by ???
    type    = militia
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10222   }  
    name    = "5 SM Guyongbin" #Led by ???
    type    = militia 
    model   = 0
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10223   }  
    name    = "6 SM Guyongbin" #Led by ???
    type    = militia
    model   = 0
	dormant = yes
   }
# }
 # Xinjiang (Extrapolated)
#  landunit = 
# {
#   location = 1281 # Urumuqi
#   name   = "Xinjiang Yuangzhenjun"  
#   leader = # ???
#   id    = {   type = 22001 id = 10230  }  
#   dormant = yes
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10231   }  
    name    = "1 Yuangzhenjun" #Led by ???
    type    = militia
    model   = 1
	dormant = yes
   }
   landdivision = 
   {
    experience = 10
    id     = {   type = 22001 id = 10232   }  
    name    = "2 Yuangzhenjun" #Led by ???
    type    = militia 
    model   = 0
	dormant = yes
   }
# }
}
 