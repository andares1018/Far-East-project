   
   ##############################   
   # Country definition for USA #   
   ##############################   
      
   #####################   
   # Country main data #   
   #####################   
      
   country =   
   {  tag                    = USA 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes } }     
	# Resource Reserves   
	energy                 = 90000
	metal                  = 90000
	rare_materials         = 90000  
	oil                    = 90000   
	supplies               = 90000   
	money                  = 100   
	manpower               = 2370 # based on http://en.wikipedia.org/wiki/United_States_home_front_during_World_War_II#Draft
	transports             = 4325 #1825
	escorts                = 1500 #500   
	capital                = 1809   

  diplomacy =
  { relation =
    { tag        = ARG
      value      = 75
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = AST value = 150 }
    relation = { tag = BEL value = 75 }
    relation =
    { tag        = BOL
      value      = 85
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = BRA
      value      = 120
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = CAN value = 200 }
    relation = { tag = CHI value = 100 }
    relation =
    { tag        = CHL
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = COL
      value      = 75
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = COS
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = CUB
      value      = 200
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = DOM
      value      = 125
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = ECU
      value      = 75
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 90 }
    relation = { tag = U01 value = 65 }
    relation = { tag = GER value = -200 }
    relation =
    { tag        = GUA
      value      = 125
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = HAI
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = HOL value = 70 }
    relation =
    { tag        = HON
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = { tag = JAP value = -200 }
    relation = { tag = LIB value = 200 access = yes }
    relation = { tag = MAN value = -200 }
    relation = { tag = MEN value = -200 }
    relation =
    { tag        = MEX
      value      = 125
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = NEP value = 100 }
    relation =
    { tag        = NIC
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation =
    { tag        = PAN
      value      = 175
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = PAR
      value      = 75
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = PHI value = 200 access = yes }
    relation =
    { tag        = PRU
      value      = 75
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = SAF value = 125 }
    relation =
    { tag        = SAL
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = SOV value = 175 }
    relation = { tag = SWE value = 75 }
    relation =
    { tag        = URU
      value      = 100
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation =
    { tag        = VEN
      value      = 125
      guaranteed = { day = 29 month = december year = 1940 }
    }
    relation = { tag = YEM value = 100 }
    relation = { tag = U05 value = 70  }  
  }   
     SpyInfo                = {  country = "USA" NumberOfSpies = 11  }   
        
     nationalprovinces      = {  889 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 
                              }  
    ownedprovinces         = {  1953  1949  1948  1952  1951  1950  1947  1956  1954    1955  1960  1958  1963    1961  1962  1964  1813  1812    1814  1818 1815 1816 1817  1809   
                               1808  1807  1801  1797  1791  1795  1793    1792  1805  1803  1804    1790    1787  1788  1784  1785    1789  1796  1826  1806   
                               1810  1811  1820  1819  1942  1943  1940   1939 1936 1937  1944  1931  1825  1821  1842  1845  1802  1957  1828  1934  1930  1929 1932  1918  1915     
                               1925    1836  1833  1830  1829  1832  1839  1838  1841  1843  1834  1837   2145 2144 2146 2151  1846  1850        1855  1856  1858  1857  1859   
                               1860    1914  1913    1919  1910  1911    1924  1928  1926  1920   1921  1922   1905  1906  1904  1900    1901    
                               1902  1898  1896  1907  1908  1897  1909  1868  1866      1862        1869    1865    1871    1873 1875 1876  1874     
                               1877  1878  1882    1879  1880    1895  1893    1892  1899  1886  1887  1883  1888  1889  1884  2141   2140  2142 2147 2143  2139     
                                         1923      1765  889  1736  1737  1735    1739  1734  1738  1673 1683   
                 1747  
               1733 1751 1745  
               1778 1831  
               1872 1863 2150 1864 1847 1935 1945 1885  2174
         1890 1891 1894 1881  
  1870 1861 1903 1851 1916 1927 1912 1852 1853 1854 1867 1849 1917 1933 1835 1840 1848 1844 1822 1823 1827 1941 1946 1959 1800  
  1794 1824 1798 1799 1786 1938 
  1783 1    3
  740  741  742  744  745  746  747  748  749  717  718  719  720  721  722  723  724  725  726  727  728  729  730  731  732  733  734  735  736  737  738  739  743
  1593 1590 1591 1592 1588 1589 1678 1679 1680 1682
  1750 1687 1586 1585 1584 1583 1582 1581
  1724 1725 1726 1727 1602 1234 1603 1605 1587 1604 1606 1607 1608 1609 1610
  # For gameplay purposes
  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
  100 101 102 103 104 105 106 107
  71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  86  88  89  87  90  91  92  93  94
  108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
                              }  
    controlledprovinces    = {  1953  1949  1948  1952  1951  1950  1947  1956  1954   1955  1960  1958  1963    1961  1962  1964  1813  1812    1814  1818 1815 1816 1817  1809   
                               1808  1807  1801  1797  1791  1795  1793    1792  1805  1803  1804   1790    1787  1788  1784  1785    1789  1796  1826  1806   
                               1810  1811  1820  1819  1942  1943  1940    1939 1936 1937  1944  1931  1825  1821  1842  1845  1802  1957  1828  1934  1930  1929 1932  1918  1915     
                               1925    1836  1833  1830  1829  1832  1839  1838  1841  1843  1834  1837   2145 2144 2146 2151  1846  1850        1855  1856  1858  1857  1859   
                               1860    1914  1913    1919  1910  1911    1924  1928  1926  1920    1921  1922   1905  1906  1904  1900    1901    
                               1902  1898  1896  1907  1908  1897  1909  1868  1866      1862        1869    1865    1871    1873 1875 1876  1874    
                               1877  1878  1882    1879  1880    1895  1893    1892  1899  1886  1887  1883  1888  1889  1884  2141    2140  2142 2147 2143  2139     
                                         1923      1765  889  1736  1737  1735    1739  1734  1738  1747  
                1733 1751 1745
               1778 1831  
               1872 1863 2150 1864 1847 1935 1945 1885  2174
         1890 1891 1894 1881  
  1870 1861 1903 1851 1916 1927 1912 1852 1853 1854 1867 1849 1917 1933 1835 1840 1848 1844 1822 1823 1827 1941 1946 1959 1800  
  1794 1824 1798 1799 1786 1938  
  1783 1    3
  740  741  742  744  745  746  747  748  749  717  718  719  720  721  722  723  724  725  726  727  728  729  730  731  732  733  734  735  736  737  738  739  743
  1590 1591 1592 1593 1588 1589
  1750 1687 1586 1585 1584 1583 1582 1581
  1602 1604 1606 1607 1608 1609 1234 1675 1676 1677 1678 1679 1680 1685 1724 1727 1596 1595 1573 1683 1670 1671 1594 1597 1598 1601 1603 1610 1668 1599 
  109 108 110 111 112 113 114 115 116 117 123 118 121
  37  38  40  41  42  43  44  45  46  47  48  49  50  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  70  90  91  92  93  94  95  96
  97  98  99  100 101 102 103 104 106 107 
  71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  86  87  88  89  
                }  
    claimedprovinces    = {
  # For gameplay purposes
  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
  100 101 102 103 104 105 106 107
  71  72  73  74  75  76  77  78  79  80  81  82  83  84  85  86  88  89  87  90  91  92  93  94
  109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
                }  
	# USA 1944.12 techs  
	# ######################  
	techapps = {  
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Assembly Line
	5140 5160 5180 5150
	# Construction Engineering 
	5800 5080 5090 5100
	# Computers and cryptography
	5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360 5370 5380 5340
	# Agriculture 
	5700 5710 5010 5020 5030
	# Radar
	5410 5416 5417 5420 5426
	# Refining
	5190 5200 5210 5220
	# Atomic Research 
	5470 5480 5490 5500 5510 5520 5530 5540
	# Medicine
	5600 5610 5620 5630 5640 5650
	# Exp. Rocket
	5560
	
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120
	# Mountain
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270
	# Marines
	1560 1570 1580 1590 1600 1610
	# Airborne
	1670 1680 1690
	# Motorized
	1396 1400 1410
	# Mechanized
	1470
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Engineers
	1830 1840 1850 1860 1870
	# Supply / Logs
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140 199110

	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2080 2090
	# Armoured Cars 
	2860 2870 2880 2020 2150 
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-Tank Artillery
	2400 2410 2420 2430
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470 2480
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520 2530
	# Tank Destroyer
	2170 2180 2850
	# SP Art
	2220 2230 2240
	#Rocket Artillery
	2970
	#SP Rocket Artillery
	2980
	#SP Anti-Air Artillery Brigade
	22910

	# Hospital System 
	14000 14010 14020 14030 14040
	# WWI Land Doctrines - Entente: eng fra ita usa bel hol jap 
	6500 6510  6530 6540 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6910
	# WWII Land Doctrines - Firepower Focus
	6010 6020 6040 6050 6060 6070 6080 6090 6900

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160 12010
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Battlecruiser
	3310 3320 3330 3340 3350
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670 3680
	# Light Carrier 
	12100 12110 12120 12130 12140 12150
	# Fleet Carrier 
	3510 3520 3530 3540 3550 12060
	# Troopships
	3810 3820 3830 3840
	#Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910

	# Naval Doctrines -
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210 8170
	# Naval Interdiction
	8500 8510 8550 8520 8560 8600 8610
	# Engagement Tactics - Fleet-in-Being colum
	8900 8910 8920 8930 8940 8950 8960 8970 8980
	# Subsidiary Carrier Role
	81650
	# Carrier - Scouting Focus
	81850 81860 81870 81880 81890
	# Carrier - Aerial Supremacy
	81700 81710 81720 81730 81740
	# Logistic Support
	82500 82510
	# Amphibious Warfare
	82300 82310 82320
	
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020	4030 4060 4090
	# Multi-role fighter
	4300 4310 4320 4330 4340 4040 4070 4100 4350
	# Close Air Support
	4400 4170 4280 4450
	# Escort Fighter
	4050 4080 4110
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130 4140 4150 4160 15100
	# Air Transport 
	4290 4250 4260 4270
	# Strategic Bomber 
	4800 4810 4820 4220 4230 4240
	# Naval bomber
	4700 4710 4190 4200 4210
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 
	# CAG
	4900 4910 4920 4930 4940 4950
	
	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 
	9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9430 9440 9450 9460 9190 9200 9210 9220 9310 9320 9230 9240 9250 9350 
	9360 9370 9380 9260 9390 9400 9410

	#rocket engine
	7550 7560 7570 15500
	#Advanced oil extraction
	55010
	} 

inventions = { 3000027 3000028 3000012 3000019 }
    policy =  
    {  date              = {  year = 1942 month = january day = 0  }  
     democratic        = 9 
      political_left    = 6  
      freedom           = 10  
      free_market       = 10  
      professional_army = 7  
      defense_lobby     = 9  
      interventionism   = 6  
     }  
	 peacetime_ic_mod       = 0.6 # +0.4 from 4 events, +0.4 more can be added
	 wartime_ic_mod       = 0.8
    headofstate            = {  type = 9 id = 240001  }  
    headofgovernment       = {  type = 9 id = 240024  }
    foreignminister        = {  type = 9 id = 240036  }  
    armamentminister       = {  type = 9 id = 240004  }  
    ministerofsecurity     = {  type = 9 id = 240005  }  
    ministerofintelligence = {  type = 9 id = 240098  }  
    chiefofstaff           = {  type = 9 id = 240104  }  
    chiefofarmy            = {  type = 9 id = 240109  }  
    chiefofnavy            = {  type = 9 id = 240126  }  
    chiefofair             = {  type = 9 id = 240129  }
    dormant_ministers      = {  240052 240006 240135 240009 240125 240121 240010 240080 240007 240008 240020 240086 240116 240015 240003 240042  } 

    # SUPREME HEADQUARTERS ALLIED EXPEDITIONARY FORCE
    # 12TH ARMY GROUP
    # 9th Army
    landunit =  
    {  location = 121  
       leader   = 240326 # Simpson W.H.
      name     = "9th Army"  
      id       = {  type = 14800 id = 1118  }  
     Division = 
     {  id       = {  type = 13500 id = 1119  } 
       name     = "9th Army" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }   
     }    
    landunit =  
    {  location = 121  
      name     = "US XVI Corps"  
      id       = {  type = 14800 id = 1120  }  
      Division =  
      {  id   = {  type = 14800 id = 6115  }  
        name = "7th Armored Division 'Lucky Seventh'" 
		strength = 70
		type = armor  
		model    = 1
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 6086  }  
        name = "84th Infantry Division 'Railsplitters'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 15
       }
      Division =  
      {  id   = {  type = 14800 id = 6110  }  
        name = "102nd Infantry Division 'Ozark'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 15
       }
     }
    landunit =  
    {  location = 121  
      name     = "US XIX Corps"  
      id       = {  type = 14800 id = 601  } 
      Division =  
      {  id   = {  type = 14800 id = 1113  }  
        name = "2nd Armored Division 'Hell on Wheels'" 
		strength = 80
		type = armor  
		model    = 2
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 612  }  
        name = "29th Infantry Division 'Blue and Gray'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 1004  }  
        name = "30th Infantry Division 'Old Hickory'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       }
     }
    # 1st Army
    landunit =  
    {  location = 109  
       leader   = 240213 # Hodges C.H.
      name     = "1st Army"  
      id       = {  type = 14800 id = 1022  }  
     Division = 
     {  id       = {  type = 13500 id = 1023  } 
       name     = "1st Army" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }   
     }    
    landunit =  
    {  location = 110  
      name     = "US V Corps"  
      id       = {  type = 14800 id = 6050  }  
      Division =  
      {  id   = {  type = 14800 id = 627  }  
        name = "2nd Infantry Division 'Indianhead'" 
		strength = 90
		type = infantry  
		model    = 11
		extra1 = artillery
		brigade_model1 = 8
		extra2 = amph_armor
		brigade_model2 = 0
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 1104  }  
        name = "8th Infantry Division 'Pathfinder'" 
		strength = 60
		type = infantry  
		model    = 11
		extra = artillery
		brigade_model = 8
		experience = 35
       }   
      Division =  
      {  id   = {  type = 14800 id = 608  }  
        name = "78th Infantry Division 'Lightning'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 15
       }
      Division =  
      {  id   = {  type = 14800 id = 6108  }  
        name = "99th Infantry Division 'Checkerboard'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       }
     }        
    landunit =  
    {  location = 121  
      name     = "US VII Corps"  
      id       = {  type = 14800 id = 626  }  
      Division =  
      {  id   = {  type = 14800 id = 1112  }  
        name = "3rd Armored Division 'Spearhead'" 
		strength = 80
		type = armor  
		model    = 2
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6112  }  
        name = "5th Armored Division 'Victory'" 
		strength = 80
		type = armor  
		model    = 2
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 605  }  
        name = "1st Infantry Division 'Big Red One'" 
		strength = 70
		type = motorized  
		model    = 2
		extra = sp_anti_air
		brigade_model = 0
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 1105  }  
        name = "9th Infantry Division 'Old Reliables'" 
		strength = 80
		type = motorized  
		model    = 2
		extra = medium_armor
		brigade_model = 2
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6085  }  
        name = "83rd Infantry Division 'Thunderbolt'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 636  }  
        name = "104th Infantry Division 'Timberwolf'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       } 
     }    
    landunit =  
    {  location = 110  
      name     = "US VIII Corps"  
      id       = {  type = 14800 id = 1009  }
      Division =  
      {  id   = {  type = 14800 id = 1101  }  
        name = "4th Infantry Division 'Ivy'" 
		strength = 80
		type = infantry  
		model    = 11
		extra1 = artillery
		brigade_model1 = 8
		extra2 = amph_armor
		brigade_model2 = 0
		experience = 40
       }    
      Division =  
      {  id   = {  type = 14800 id = 611  }  
        name = "28th Infantry Division 'Keystone'"
		strength = 45		
        type = infantry  
		model    = 11
		experience = 35
       }  
      Division =  
      {  id   = {  type = 14800 id = 3037  }  
        name = "106th Infantry Division 'Golden Lion'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       }
      Division =  
      {  id   = {  type = 14800 id = 6118  }  
        name = "9th Armored Division 'Phantom'" 
		strength = 60
		type = armor  
		model    = 1
       }
      Division =  
      {  id   = {  type = 14800 id = 6120  }  
        name = "11th Armored Division 'Thunderbolt'" 
		strength = 60
		type = armor  
		model    = 1
       }
     }       
    landunit =  
    {  location = 109  
      name     = "US XVIII Airborne Corps"  
      id       = {  type = 14800 id = 1121  }
      Division =  
      {  id   = {  type = 14800 id = 6137  }  
        name = "17th Airborne Division 'Golden Talons'"
		strength = 70		
        type = paratrooper  
		model    = 2
		experience = 15
       }
      Division =  
      {  id   = {  type = 14800 id = 6083  }  
        name = "82nd Airborne Division 'All American'"
		strength = 80		
        type = paratrooper  
		model    = 2
		extra    = glider_artillery
		brigade_model = 0		
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 6127  }  
        name = "101st Airborne Division 'Screaming Eagles'"
		strength = 70		
        type = paratrooper  
		model    = 2
		experience = 35
       }
     }       
    # 3rd Army
    landunit =  
    {  location = 104  
       leader   = 240290 # Patton G.S.
      name     = "3rd Army"  
      id       = {  type = 14800 id = 1029  }  
     Division = 
     {  id       = {  type = 13500 id = 1030  } 
       name     = "3rd Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 35
      }   
     }        
    landunit =  
    {  location = 109  
      name     = "US III Corps"  
      id       = {  type = 14800 id = 1122  }
      Division =  
      {  id   = {  type = 14800 id = 602  }  
        name = "26th Infantry Division 'Yankee'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 25
       }
      Division =  
      {  id   = {  type = 14800 id = 6113  }  
        name = "6th Armored Division 'Super Sixth'" 
		strength = 80
		type = armor  
		model    = 1
		experience = 35
       }
     }       
    landunit =  
    {  location = 104  
      name     = "US XII Corps"  
      id       = {  type = 14800 id = 6051  }  
      Division =  
      {  id   = {  type = 14800 id = 1110  }  
        name = "4th Armored Division" 
		strength = 80
		type = armor  
		model    = 2
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 625  }  
        name = "35th Infantry Division 'Santa Fe'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6081  }  
        name = "80th Infantry Division 'Blue Ridge'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 25
       }
      Division =  
      {  id   = {  type = 14800 id = 3035  }  
        name = "87th Infantry Division 'Golden Acorn'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 25
       }
     }      
    landunit =  
    {  location = 104  
      name     = "US XX Corps"  
      id       = {  type = 14800 id = 1011  }
      Division =  
      {  id   = {  type = 14800 id = 6119  }  
        name = "10th Armored Division 'Tiger'" 
		strength = 60
		type = armor  
		model    = 1
       }
      Division =  
      {  id   = {  type = 14800 id = 1001  }  
        name = "5th Infantry Division 'Red Devils'" 
		strength = 100
		type = infantry  
		model    = 11
		extra = artillery
		brigade_model = 9
		experience = 35
       }    
      Division =  
      {  id   = {  type = 14800 id = 6350  }  
        name = "90th Infantry Division 'Tough Ombres'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 40
       }  
      Division =  
      {  id   = {  type = 14800 id = 630  }  
        name = "95th Infantry Division 'Iron Men of Metz'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       }
     }
    # 6TH ARMY GROUP
    # 7th Army
    landunit =  
    {  location = 107  
       leader   = 240287 # Patch A.M.
      name     = "7th Army"  
      id       = {  type = 14800 id = 1026  }  
     Division = 
     {  id       = {  type = 13500 id = 6131  } 
       name     = "7th Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 35
      }   
     }        
    landunit =  
    {  location = 107  
      name     = "US XXI Corps"  
      id       = {  type = 14800 id = 1125  }
      Division =  
      {  id   = {  type = 14800 id = 6122  }  
        name = "12th Armored Division 'Hellcat'" 
		strength = 60
		type = armor  
		model    = 1
       }
      Division =  
      {  id   = {  type = 14800 id = 632  }  
        name = "3rd Infantry Division 'Rock of the Marne'" 
		strength = 90
		type = motorized  
		model    = 2
		extra = medium_armor
		brigade_model = 2
		experience = 50
       }    
     }
    landunit =  
    {  location = 107  
      name     = "US XV Corps"  
      id       = {  type = 14800 id = 1126  }
      Division =  
      {  id   = {  type = 14800 id = 629  }  
        name = "45th Infantry Division 'Thunderbird'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 619  }  
        name = "100th Infantry Division 'Century'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 40
       }  
     }
    landunit =  
    {  location = 107  
      name     = "US VI Corps"  
      id       = {  type = 14800 id = 6130  }  
      Division =  
      {  id   = {  type = 14800 id = 6125  }  
        name = "14th Armored Division 'Liberator'" 
		strength = 60
		type = armor  
		model    = 1
       }
      Division =  
      {  id   = {  type = 14800 id = 1018  }  
        name = "36th Infantry Division 'Texas'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 50
       }   
      Division =  
      {  id   = {  type = 14800 id = 6080  }  
        name = "79th Infantry Division 'Cross of Lorraine'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6111  }  
        name = "103rd Infantry Division 'Cactus'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 35
       }  
     }        
    landunit =  
    {  location = 49  
      name     = "Task Force Dunkirk"  
      id       = {  type = 14800 id = 6054  } 
      Division =  
      {  id   = {  type = 14800 id = 6055  }  
        name = "76th Infantry Division 'Onaway'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       } 
    } 
    landunit =  
    {  location = 50  
      name     = "Task Force Dunkirk"  
      id       = {  type = 14800 id = 6084  } 
      Division =  
      {  id   = {  type = 14800 id = 3034  }  
        name = "75th Infantry Division"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       }
    }
    landunit =  
    {  location = 38  
      name     = "Task Force Brittany"  
      id       = {  type = 14800 id = 1127  } 
      Division =  
      {  id   = {  type = 14800 id = 621  }  
        name = "94th Infantry Division 'Pilgrim'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 15
       }
    }
    # 5th Army
    landunit =  
    {  location = 410  
       leader   = 240098 # Clark
      name     = "5th Army"  
      id       = {  type = 14800 id = 1024  }  
     Division = 
     {  id       = {  type = 13500 id = 1025  } 
       name     = "5th Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }   
     }        
    landunit =  
    {  location = 410  
      name     = "US II Corps"  
      id       = {  type = 14800 id = 1128  }  
      Division =  
      {  id   = {  type = 14800 id = 624  }  
        name = "34th Infantry Division 'Red Bull'"
		strength = 80		
        type = motorized  
		model    = 2
		extra = sp_artillery
		brigade_model = 2
		experience = 50
       }
      Division =  
      {  id   = {  type = 14800 id = 6101  }  
        name = "88th Infantry Division 'Blue Devils'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 635  }  
        name = "91st Infantry Division 'Wild West'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 40
       }  
     }        
    landunit =  
    {  location = 410  
      name     = "US IV Corps"  
      id       = {  type = 14800 id = 1129  }  
      Division =  
      {  id   = {  type = 14800 id = 6088  }  
        name = "85th Infantry Division 'Custer'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 6104  }  
        name = "92nd Infantry Division 'Buffalo Soliders'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 40
       }
      Division =  
      {  id   = {  type = 14800 id = 1108  }  
        name = "1st Armored Division 'Old Ironsides'" 
		strength = 60
		type = armor  
		model    = 2
		experience = 60
       }
     }        
    landunit =  
    {  location = 87  
      name     = "44th Infantry Division"  
      id       = {  type = 14800 id = 1130  }  
      Division =  
      {  id   = {  type = 14800 id = 607  }  
        name = "44th Infantry Division"
		strength = 80		
        type = infantry  
		model    = 11
       }
     }
    # 15th Army
    landunit =  
    {  location = 27  
       #leader   = ###### # Compton L.
      name     = "15th Army"  
      id       = {  type = 14800 id = 1131  }  
     Division = 
     {  id       = {  type = 13500 id = 1132  } 
       name     = "15th Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }   
      Division =  
      {  id   = {  type = 14800 id = 6116  }  
        name = "8th Armored Division 'Thundering Herd'" 
		strength = 60
		type = armor  
		model    = 1
       }
      Division =  
      {  id   = {  type = 14800 id = 3072  }  
        name = "65th Infantry Division 'Battle-Axe'"
		strength = 80		
        type = infantry  
		model    = 11
       }
      Division =  
      {  id   = {  type = 14800 id = 3031  }  
        name = "66th Infantry Division 'Black Panther'"
		strength = 80		
        type = infantry  
		model    = 11
       }
      Division =  
      {  id   = {  type = 14800 id = 3032  }  
        name = "69th Infantry Division"
		strength = 80		
        type = infantry  
		model    = 11
       }
     }        
    # 6th Army
    landunit =  
    {  location = 1573  
       leader   = 240229 # Krueger
      name     = "6th Army"  
      id       = {  type = 14800 id = 1133  }  
     Division = 
     {  id       = {  type = 13500 id = 1134  } 
       name     = "6th Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 35
      }   
     }        
    landunit =  
    {  location = 1573  
      name     = "US X Corps"  
      id       = {  type = 14800 id = 1014  }
      Division =  
      {  id   = {  type = 14800 id = 628  }  
        name = "1st Cavalry Division 'First Team'"  
		strength = 80
        type = cavalry  
		model    = 12
	extra = armored_car
		brigade_model = 3
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 1021  }  
        name = "24th Infantry Division 'Victory'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 1016  }  
        name = "32nd Infantry Division 'Red Arrow'"
		strength = 70		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6056  }  
        name = "77th Infantry Division 'Statue of Liberty'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       } 
     }
    landunit =  
    {  location = 1573  
      name     = "US XXIV Corps"  
      id       = {  type = 14800 id = 1019  }
      Division =  
      {  id   = {  type = 14800 id = 1103  }  
        name = "7th Infantry Division 'Hourglass'" 
		strength = 75
		type = motorized  
		model    = 1
		extra = sp_artillery
		brigade_model = 2
		experience = 35
       }  
      Division =  
      {  id   = {  type = 14800 id = 6106  }  
        name = "96th Infantry Division 'Deadeye'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 3029  }  
        name = "11th Airborne Division 'Angels'"
		strength = 70		
        type = paratrooper  
		model    = 2
		extra    = glider_artillery
		brigade_model = 0	
		experience = 35
       }
     } 
    # 8th Army
    landunit =  
    {  location = 1596  
       leader   = 240144 # Eichelberger
      name     = "8th Army"  
      id       = {  type = 14800 id = 1135  }  
     Division = 
     {  id       = {  type = 13500 id = 1136  } 
       name     = "8th Army" 
       type     = hq 
       model    = 3 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 15
      }   
     }        
    landunit =  
    {  location = 1670  
      name     = "US III Amphibious Corps"  
      id       = {  type = 14800 id = 6132  } 
      Division =  
      {  id   = {  type = 14800 id = 6380  }  
        name = "1st Marine Division 'Old Breed'" 
		strength = 55
		type = marine
		model    = 5
		experience = 35
       }  
      Division =  
      {  id   = {  type = 14800 id = 6082  }  
        name = "81st Infantry Division 'Wildcat'"
		strength = 65		
        type = infantry  
		model    = 11
		experience = 35
       }
    }
    landunit =  
    {  location = 1683  
      name     = "US III Amphibious Corps"  
      id       = {  type = 14800 id = 1137  } 
      Division =  
      {  id   = {  type = 14800 id = 6382  }  
        name = "3rd Marine Division 'Fighting Third'" 
		strength = 60
		type = marine
		model    = 5
		experience = 35
       }  
    }
    landunit =  
    {  location = 1589  
      name     = "US XIV Corps"  
      id       = {  type = 14800 id = 6322  } 
      Division =  
      {  id   = {  type = 14800 id = 6323  }  
        name = "23rd Infantry Division 'Americal'" 
		strength = 70
		type = infantry  
		model    = 11
		extra = artillery
		brigade_model = 8
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 618  }  
        name = "37th Infantry Division 'Buckeye'"
		strength = 60		
        type = infantry  
		model    = 11
		experience = 35
       }
      Division =  
      {  id   = {  type = 14800 id = 6105  }  
        name = "93rd Infantry Division 'Blue Helmets'"
		strength = 60		
        type = infantry  
		model    = 11
		experience = 35
       }
    }
    landunit =  
    {  location = 1736  
      name     = "98th Infantry Division 'Iroquois'"  
      id       = {  type = 14800 id = 1138  }  
      Division =  
      {  id   = {  type = 14800 id = 1139  }  
        name = "98th Infantry Division 'Iroquois'"
		strength = 50		
        type = infantry  
		model    = 11
       }
     }       
    landunit =  
    {  location = 1736  
      name     = "5th Marine Division 'Spearhead'"  
      id       = {  type = 14800 id = 1050  } 
      Division =  
      {  id   = {  type = 14800 id = 3074  }  
        name = "5th Marine Division 'Spearhead'" 
		strength = 60
		type = marine
		model    = 5
		experience = 35
       }  
    }
    landunit =  
    {  location = 1586  
      name     = "US XIV Corps"  
      id       = {  type = 14800 id = 6133  } 
      Division =  
      {  id   = {  type = 14800 id = 6325  }  
        name = "25th Infantry Division 'Tropic Lightning'" 
		strength = 70
		type = infantry  
		model    = 11
		experience = 35
       }
    }
    landunit =  
    {  location = 1602  
      name     = "43rd Infantry Division 'Winged Victory'"  
      id       = {  type = 14800 id = 1140  }  
      Division =  
      {  id   = {  type = 14800 id = 603  }  
        name = "43rd Infantry Division 'Winged Victory'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       } 
    }
    landunit =  
    {  location = 1573  
      name     = "38th Infantry Division 'Cyclone'"  
      id       = {  type = 14800 id = 6324  } 
      Division =  
      {  id   = {  type = 14800 id = 1017  }  
        name = "38th Infantry Division 'Cyclone'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       }
    }
    landunit =  
    {  location = 1727  
      name     = "40th Infantry Division 'Sunshine'"  
      id       = {  type = 14800 id = 6330  } 
      Division =  
      {  id   = {  type = 14800 id = 633  }  
        name = "40th Infantry Division 'Sunshine'"
		strength = 70		
        type = mechanized  
		model    = 0
		experience = 35
       }   
    }
    landunit =  
    {  location = 1595  
      name     = "41st Infantry Division 'Sunsetters'"  
      id       = {  type = 14800 id = 6052  } 
      Division =  
      {  id   = {  type = 14800 id = 634  }  
        name = "41st Infantry Division 'Sunsetters'"
		strength = 50		
        type = infantry  
		model    = 11
		experience = 35
       }
    }
    landunit =  
    {  location = 1954  
      name     = "71st Infantry Division 'Red Circle'"  
      id       = {  type = 14800 id = 6057  } 
      Division =  
      {  id   = {  type = 14800 id = 6140  }  
        name = "71st Infantry Division 'Red Circle'"
		strength = 25		
        type = infantry  
		model    = 10
       }
    }
    landunit =  
    {  location = 1931  
      name     = "86th Infantry Division 'Blackhawk'"  
      id       = {  type = 14800 id = 6087  } 
      Division =  
      {  id   = {  type = 14800 id = 6089  }  
        name = "86th Infantry Division 'Blackhawk'"
		strength = 25		
        type = infantry  
		model    = 10
       }
    }
    landunit =  
    {  location = 1913  
      name     = "89th Infantry Division 'Rolling W'"  
      id       = {  type = 14800 id = 6100  } 
      Division =  
      {  id   = {  type = 14800 id = 6102  }  
        name = "89th Infantry Division 'Rolling W'"
		strength = 25		
        type = infantry  
		model    = 10
       }
    }
    landunit =  
    {  location = 1901  
      name     = "97th Infantry Division 'Trident'"  
      id       = {  type = 14800 id = 6103  } 
      Division =  
      {  id   = {  type = 14800 id = 3036  }  
        name = "97th Infantry Division 'Trident'"
		strength = 25		
        type = infantry  
		model    = 10
       }
    }
    landunit =  
    {  location = 89  
      name     = "70th Infantry Division 'Trailblazers'"  
      id       = {  type = 14800 id = 6134  }  
      Division =  
      {  id   = {  type = 14800 id = 3033  }  
        name = "70th Infantry Division 'Trailblazers'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 15
       }
     }
    landunit =  
    {  location = 421  
      name     = "10th Mountain Division"  
      id       = {  type = 14800 id = 6135  }  
      Division =  
      {  id   = {  type = 14800 id = 3069  }  
        name = "10th Mountain Division"
		strength = 70		
        type = bergsjaeger  
		model    = 11
       }
     }
    landunit =  
    {  location = 1599  
      name     = "31st Infantry Division 'Dixie'"  
      id       = {  type = 14800 id = 6136  }  
      Division =  
      {  id   = {  type = 14800 id = 615  }  
        name = "31st Infantry Division 'Dixie'"
		strength = 70		
        type = infantry  
		model    = 11
       } 
     }
    landunit =  
    {  location = 1601  
      name     = "33rd Infantry Division 'Golden Cross'"  
      id       = {  type = 14800 id = 1141  }  
      Division =  
      {  id   = {  type = 14800 id = 1013  }  
        name = "33rd Infantry Division 'Golden Cross'"
		strength = 70		
        type = infantry  
		model    = 11
       }
     }
    landunit =  
    {  location = 1962  
      name     = "13th Airborne Division"  
      id       = {  type = 14800 id = 1027  }  
      Division =  
      {  id   = {  type = 14800 id = 1028  }  
        name = "13th Airborne Division"
		strength = 70		
        type = paratrooper  
		model    = 2
       }
     }
    landunit =  
    {  location = 1789  
      name     = "20th Armored Division 'Armoraiders'"  
      id       = {  type = 14800 id = 6138  }  
      Division =  
      {  id   = {  type = 14800 id = 3038  }  
        name = "20th Armored Division 'Armoraiders'"
		strength = 60		
        type = armor  
		model    = 1
       }
     }
    landunit =  
    {  location = 1952  
      name     = "US IX Corps"  
      id       = {  type = 14800 id = 631  }  
      Division =  
      {  id   = {  type = 14800 id = 3030  }  
        name = "63rd Infantry Division 'Blood and Fire'"
		strength = 25		
        type = infantry  
		model    = 10
       }
     }
    landunit =
    {  location = 1582  
      name     = "27th Infantry Division 'New York'"  
      id       = {  type = 14800 id = 1142  }
      Division =  
      {  id   = {  type = 14800 id = 1012  }  
        name = "27th Infantry Division 'New York'"
		strength = 80		
        type = infantry  
		model    = 11
		experience = 35
       }
     }
    landunit =
    {  location = 1685  
      name     = "US V Amphibious Corps"  
      id       = {  type = 14800 id = 1020  }
      Division =  
      {  id   = {  type = 14800 id = 6381  }  
        name = "2nd Marine Division 'Silent Second'" 
		strength = 70
		type = marine
		model    = 5
		experience = 35
       }  
      Division =  
      {  id   = {  type = 14800 id = 3073  }  
        name = "4th Marine Division 'Fighting Fourth'" 
		strength = 70
		type = marine
		model    = 5
		experience = 35
       }  
     }  
    landunit =
    {  location = 1590  
      name     = "6th Marine Division 'Striking Sixth'"  
      id       = {  type = 14800 id = 2712  }
      Division =  
      {  id   = {  type = 14800 id = 3131  }  
        name = "6th Marine Division 'Striking Sixth'" 
		strength = 70
		type = marine
		model    = 5
		experience = 35
       }  
     }  
    landunit =  
    {  location = 1596  
      name     = "US XVII Corps"  
      id       = {  type = 14800 id = 1002  }  
      Division =  
      {  id   = {  type = 14800 id = 1003  }  
        name = "6th Infantry Division 'Sightseeing Sixth'" 
		strength = 100
		type = infantry  
		model    = 11
		extra = artillery
		brigade_model = 8
		experience = 35
       }    
     }
    landunit =  
    {  location = 1888  
      name     = "13th Armored Division 'Black Cat'"  
      id       = {  type = 14800 id = 6121  }    
      Division =  
      {  id   = {  type = 14800 id = 6123  }  
        name = "13th Armored Division 'Black Cat'" 
		strength = 60
		type = armor  
		model    = 1
       }
     }   
    landunit =  
    {  location = 1917  
      name     = "16th Armored Division 'Armadillo'"  
      id       = {  type = 14800 id = 6124  }    
      Division =  
      {  id   = {  type = 14800 id = 6141  }  
        name = "16th Armored Division 'Armadillo'" 
		strength = 40
		type = armor  
		model    = 2
       }
     }   
    landunit =  
    {  location = 1808  
       leader   = 240250 # Marshall G.
      name     = "U.S. Army General Staff"  
      id       = {  type = 14800 id = 609  }  
     Division = 
     {  id       = {  type = 13500 id = 610  } 
       name     = "U.S. Army General Staff" 
       type     = hq 
       model    = 4 
       strength = 100 
      }   
     }            
    # 10th Army
    landunit =  
    {  location = 1670  
       leader   = 240074 # Buckner S.B.
      name     = "10th Army"  
      id       = {  type = 14800 id = 1051  }  
     Division = 
     {  id       = {  type = 13500 id = 1052  } 
       name     = "10th Army" 
       type     = hq 
       model    = 4 
       strength = 70 
       extra    = anti_air
       brigade_model = 4
       experience = 40
      }   
     }    
    landunit =  
    {  location = 1734  
      name     = "Hawaiian Department"  
      id       = {  type = 14800 id = 643  }  
      Division =  
      {  id     = {  type = 14800 id = 644  }  
        name   = "Hawaiian Division"  
        type   = infantry  
		model    = 10
        strength = 100 
	extra = engineer
		brigade_model = 3
       }  
     }  
    landunit =  
    {  id       = {  type = 14800 id = 647  }  
      name     = "Panama Canal Department"  
      location = 889  
      Division =  
      {  id     = {  type = 14800 id = 648  }  
        name   = "Panama Canal Garrison"  
		strength = 100
        type   = garrison  
        model  = 5
        locked = yes  
       }  
     }  

    # US NAVY
    # TASK FORCE 38
    navalunit =  
    {  name     = "USN Task Force 38"  
      id       = {  type = 14800 id = 2701  }  
      location = 2487  
      base     = 1668  
      Division =  
      {  id   = {  type = 14800 id = 3048  }  
        name  = "USS Cowpens"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id   = {  type = 14800 id = 3049  }  
        name  = "USS Monterey"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id   = {  type = 14800 id = 3051  }  
        name  = "USS Cabot"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id   = {  type = 14800 id = 3023  }  
        name  = "USS Independence"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id    = {  type = 14800 id = 3005  }  
        name  = "USS Iowa"  
        type  = battleship  
        model = 8
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3008  }  
        name  = "USS Wisconsin"  
        type  = battleship  
        model = 8
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4023  }  
        name  = "USS North Carolina"  
        type  = battleship  
        model = 7 
        extra1 = naval_anti_air_l 
	extra2 = floatplane
	brigade_model2 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4024  }  
        name  = "USS Washington"  
        type  = battleship  
        model = 7  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3001  }  
        name  = "USS South Dakota"  
        type  = battleship  
        model = 7
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3003  }  
        name  = "USS Massachusetts"  
        type  = battleship  
        model = 7
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3027  }  
        name  = "USS Baltimore"  
        type  = heavy_cruiser  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3056  }  
        name  = "USS Canberra"  
        type  = heavy_cruiser  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 57  }  
        name  = "USS New Orleans"  
        type  = heavy_cruiser  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3061  }  
        name  = "USS Miami"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3058  }  
        name  = "USS Biloxi"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3062  }  
        name  = "USS Astoria"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3011  }  
        name  = "USS San Diego"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3026  }  
        name  = "USS Mobile"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3054  }  
        name  = "USS Vincennes"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3099  }  
        name  = "USS Pasadena"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3063  }  
        name  = "USS Oakland"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 62  }  
        name  = "Destroyer Division 1"  
        type  = destroyer  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 63  }  
        name  = "Destroyer Division 2"  
        type  = destroyer  
        model = 5  
        experience = 20
       }    
      Division =  
      {  id    = {  type = 14800 id = 64  }  
        name  = "Destroyer Division 3"  
        type  = destroyer  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 2023  }  
        name  = "Destroyer Division 4"  
        type  = destroyer  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2315  }  
        name  = "Destroyer Division 5"  
        type  = destroyer  
        model = 3
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2316  }  
        name  = "Destroyer Division 6"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
     }  
    # Task Group 38.1
    navalunit =  
    {  name     = "USN Task Group 38.1"  
      id       = {  type = 14800 id = 2801  }  
      location = 2487  
      base     = 1668  
      Division =  
      {  id            = {  type = 14800 id = 3028  }  
        name          = "USS Yorktown"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3046  }  
        name          = "USS Wasp"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id   = {  type = 14800 id = 3053  }  
        name  = "USS San Jacinto"  
        type  = light_carrier  
        model = 1    
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 3004  }  
        name  = "USS Alabama"  
        type  = battleship  
        model = 7
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3055  }  
        name  = "USS Boston"  
        type  = heavy_cruiser  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 60  }  
        name  = "USS San Francisco"  
        type  = heavy_cruiser  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3022  }  
        name  = "USS Santa Fe"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2317  }  
        name  = "Destroyer Division 7"  
        type  = destroyer  
        model = 3  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2318  }  
        name  = "Destroyer Division 8"  
        type  = destroyer  
        model = 3
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2319  }  
        name  = "Destroyer Division 9"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
     }  
    # Task Group 38.2
    navalunit =  
    {  name     = "USN Task Group 38.2"  
      id       = {  type = 14800 id = 2802  }  
      location = 2487  
      base     = 1668  
      Division =  
      {  id            = {  type = 14800 id = 3044  }  
        name          = "USS Lexington"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3078  }  
        name          = "USS Hancock"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3043  }  
        name          = "USS Hornet"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 3006  }  
        name  = "USS New Jersey"  
        type  = battleship  
        model = 8
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3017  }  
        name  = "USS San Juan"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2320  }  
        name  = "Destroyer Division 10"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2291  }  
        name  = "Destroyer Division 11"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2292  }  
        name  = "Destroyer Division 12"  
        type  = destroyer  
        model = 3  
        experience = 20
       } 
     }  
    # Task Group 38.3
    navalunit =  
    {  name     = "USN Task Group 38.3"  
      id       = {  type = 14800 id = 2803  }  
      location = 2487  
      base     = 1668  
      Division =  
      {  id            = {  type = 14800 id = 3009  }  
        name          = "USS Essex"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3076  }  
        name          = "USS Ticonderoga"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id   = {  type = 14800 id = 3050  }  
        name  = "USS Langley"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id    = {  type = 14800 id = 82  }  
        name  = "Destroyer Division 13"  
        type  = destroyer  
        model = 5  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 83  }  
        name  = "Destroyer Division 14"  
        type  = destroyer  
        model = 3
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 84  }  
        name  = "Destroyer Division 15"  
        type  = destroyer  
        model = 3  
        experience = 20
       } 
     }  
    # Task Group 38.4
    navalunit =  
    {  name     = "USN Task Group 38.4"  
      id       = {  type = 14800 id = 2806  }  
      location = 2487  
      base     = 1668  
      Division =  
      {  id    = {  type = 14800 id = 117  }  
        name  = "Destroyer Division 19"  
        type  = destroyer  
        model = 3
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 118  }  
        name  = "Destroyer Division 20"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 119  }  
        name  = "Destroyer Division 21"  
        type  = destroyer  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 120  }  
        name  = "Destroyer Division 22"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 121  }  
        name  = "Destroyer Division 23"  
        type  = destroyer  
        model = 3
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 172  }  
        name  = "Destroyer Division 24"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 4230  }  
        name = "Transport Division 1"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 152  }  
        name = "Transport Division 2"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 153  }  
        name = "Transport Division 3"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 143  }  
        name = "Transport Division 4"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 154  }  
        name = "Transport Division 5"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 144  }  
        name = "Transport Division 6"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2605  }  
        name = "Transport Division 50"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2807  }  
        name = "Transport Division 51"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2808  }  
        name = "Transport Division 52"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2809  }  
        name = "Transport Division 53"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2810  }  
        name = "Transport Division 54"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2811  }  
        name = "Transport Division 55"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2812  }  
        name = "Transport Division 56"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2813  }  
        name = "Transport Division 57"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2814  }  
        name = "Transport Division 58"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2815  }  
        name = "Transport Division 59"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2816  }  
        name = "Transport Division 60"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2817  }  
        name = "Transport Division 61"  
        type = transport  
		model = 3
        experience = 20
       }  
     }
    # TASK FORCE 75
    # Task Group 75.2
    navalunit =  
    {  name     = "USN Task Group 75.2"  
      id       = {  type = 14800 id = 2702  }  
      location = 2555  
      base     = 1724  
      Division =  
      {  id    = {  type = 14800 id = 54  }  
        name  = "USS Louisville"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3019  }  
        name  = "USS Columbia"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
     }  
    # TASK FORCE 77
    # Task Group 77.3
    navalunit =  
    {  name     = "USN Task Group 77.3"  
      id       = {  type = 14800 id = 2703  }  
      location = 2556  
      base     = 1668  
      Division =  
      {  id    = {  type = 14800 id = 55  }  
        name  = "USS Portland"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2612 }  
        name  = "Destroyer Division 60"  
        type  = destroyer  
        model = 7  
        experience = 20
       }   
     }  
    # Task Group 77.12
    navalunit =  
    {  name     = "USN Task Group 77.12"  
      id       = {  type = 14800 id = 2704  }  
      location = 2556  
      base     = 1668  
      Division =  
      {  id    = {  type = 14800 id = 3041  }  
        name  = "USS West Virginia"  
        type  = battleship  
        model = 6 # modernized to resemble South Dakota-class, but still not a South Dakota; uses BB 1922 model
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 37  }  
        name  = "USS Colorado"  
        type  = battleship  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 99  }  
        name  = "USS New Mexico"  
        type  = battleship  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3021  }  
        name  = "USS Denver"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3020  }  
        name  = "USS Montpelier"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2842  }  
        name  = "Destroyer Division 37"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2843  }  
        name  = "Destroyer Division 38"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2844  }  
        name  = "Destroyer Division 39"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
     }  
    # Task Group 77.14
    navalunit =  
    {  name     = "USN Task Group 77.14"  
      id       = {  type = 14800 id = 2705  }  
      location = 2556  
      base     = 1668  
      Division =  
      {  id    = {  type = 14800 id = 59  }  
        name  = "USS Minneapolis"  
        type  = heavy_cruiser  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 509  }  
        name  = "USS Boise"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 508  }  
        name  = "USS Phoenix"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 175  }  
        name  = "Destroyer Division 27"  
        type  = destroyer  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 2293  }  
        name  = "Destroyer Division 28"  
        type  = destroyer  
        model = 3  
        experience = 20
       }
     }  
    # TASK FORCE 78
    # Task Group 78.3
    navalunit =  
    {  name     = "USN Task Group 78.3"  
      id       = {  type = 14800 id = 2706  }  
      location = 2555  
      base     = 1724  
      Division =  
      {  id    = {  type = 14800 id = 511  }  
        name  = "USS Nashville"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 173  }  
        name  = "Destroyer Division 25"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 174  }  
        name  = "Destroyer Division 26"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2889  }  
        name = "Transport Division 103"  
        type = transport  
		model = 3
        experience = 20
       }  
     }  
    # TASK FORCE 79
    navalunit =  
    {  name     = "USN Task Force 79"  
      id       = {  type = 14800 id = 2707  }  
      location = 2555  
      base     = 1724  
      Division =  
      {  id    = {  type = 14800 id = 3039  }  
        name  = "USS Tennessee"  
        type  = battleship  
        model = 6 # modernized to resemble South Dakota-class, but still not a South Dakota; uses BB 1922 model
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3040  }  
        name  = "USS California"  
        type  = battleship  
        model = 6 # modernized to resemble South Dakota-class, but still not a South Dakota; uses BB 1922 model
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
	extra3 = naval_fire_controll_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 30  }  
        name  = "USS Pennsylvania"  
        type  = battleship
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
	extra3 = naval_improved_hull_l
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 91  }  
        name  = "Destroyer Division 16"  
        type  = destroyer  
        model = 3  
        experience = 20
       }    
      Division =  
      {  id    = {  type = 14800 id = 96  }  
        name  = "Destroyer Division 17"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 116  }  
        name  = "Destroyer Division 18"  
        type  = destroyer  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id   = {  type = 14800 id = 145  }  
        name = "Transport Division 8"  
        type = transport  
		model = 3
        experience = 20
       }  
     }  
    # San Francisco Squadron
    navalunit =  
    {  name     = "USN San Francisco Squadron"  
      id       = {  type = 14800 id = 2708  }  
      location = 1889  
      base     = 1889  
      Division =  
      {  id            = {  type = 14800 id = 3042  }  
        name          = "USS Intrepid"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3077  }  
        name          = "USS Randolph"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 115  }  
        name          = "USS Ranger"  
        type          = carrier  
        model         = 1  
        extra         = cag  
        brigade_model = 4  
        experience = 20
       } 
      Division =  
      {  id   = {  type = 14800 id = 3047  }  
        name  = "USS Belleau Wood"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id   = {  type = 14800 id = 3012  }  
        name  = "USS Pocomoke"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 3066  }  
        name  = "USS Alaska"  
        type  = battlecruiser  
        model = 4
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 512  }  
        name  = "USS Wichita"  
        type  = heavy_cruiser  
        model = 5 
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 50  }  
        name  = "USS Indianapolis"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3025  }  
        name  = "USS Birmingham"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3018  }  
        name  = "USS Cleveland"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2042  }  
        name  = "USS St. Louis"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 2854  }  
        name  = "Destroyer Division 41"  
        type  = destroyer  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2613  }  
        name  = "Destroyer Division 61"  
        type  = destroyer  
        model = 7  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 2614  }  
        name  = "Destroyer Division 62"  
        type  = destroyer  
        model = 7  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 2855  }  
        name  = "Destroyer Division 63"  
        type  = destroyer  
        model = 6 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2616  }  
        name  = "Destroyer Division 64"  
        type  = destroyer  
        model = 6  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 2856  }  
        name  = "Destroyer Division 65"  
        type  = destroyer  
        model = 6 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2857  }  
        name  = "Destroyer Division 66"  
        type  = destroyer  
        model = 6 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2858  }  
        name  = "Destroyer Division 67"  
        type  = destroyer  
        model = 7 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2859  }  
        name  = "Destroyer Division 68"  
        type  = destroyer  
        model = 7 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2860  }  
        name  = "Destroyer Division 69"  
        type  = destroyer  
        model = 7 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2617 }  
        name  = "Destroyer Division 70"  
        type  = destroyer  
        model = 7  
        experience = 20
       }   
      Division =  
      {  id    = {  type = 14800 id = 2861  }  
        name  = "Destroyer Division 71"  
        type  = destroyer  
        model = 7 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4008  }  
        name  = "Submarine Division 20"  
        type  = submarine  
        model = 2
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 4006  }  
        name  = "Submarine Division 21"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 4007  }  
        name  = "Submarine Division 22"  
        type  = submarine  
        model = 5 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 4224  }  
        name  = "Submarine Division 23"  
        type  = submarine  
        model = 5 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 4225  }  
        name  = "Submarine Division 24"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2862  }  
        name  = "Submarine Division 25"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2863  }  
        name  = "Submarine Division 26"  
        type  = submarine  
        model = 3 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2864  }  
        name  = "Submarine Division 27"  
        type  = submarine  
        model = 3 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2865  }  
        name  = "Submarine Division 28"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2866  }  
        name  = "Submarine Division 29"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2867  }  
        name  = "Submarine Division 30"  
        type  = submarine  
        model = 4 
        experience = 20
       } 
     }
    # Bremerton Squadron
    navalunit =  
    {  name     = "USN Bremerton Squadron"  
      id       = {  type = 14800 id = 2709  }  
      location = 1874  
      base     = 1874  
      Division =  
      {  id            = {  type = 14800 id = 3045  }  
        name          = "USS Bunker Hill"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3075  }  
        name          = "USS Franklin"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 101  }  
        name  = "USS Idaho"  
        type  = battleship  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
	extra3 = naval_improved_hull_l
        experience = 20
       } 
     }  
    # 3RD FLEET
    navalunit =  
    {  name     = "USN 3rd Fleet"  
      id       = {  type = 14800 id = 2607  }  
      location = 1734  
      base     = 1734 
      Division =  
      {  id            = {  type = 14800 id = 501  }  
        name          = "USS Enterprise"  
        type          = carrier  
        model         = 2  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 3007  }  
        name  = "USS Missouri"  
        type  = battleship  
        model = 8
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3002  }  
        name  = "USS Indiana"  
        type  = battleship  
        model = 7
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 39  }  
        name  = "USS Maryland"  
        type  = battleship  
        model = 6
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }     
      Division =  
      {  id    = {  type = 14800 id = 105  }  
        name  = "USS Texas"  
        type  = battleship  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_fire_controll_l
        experience = 20
       } 
      Division =  
      {  id   = {  type = 14800 id = 3052  }  
        name  = "USS Bataan"  
        type  = light_carrier  
        model = 1    
        experience = 20
		extra = light_cag
		brigade_model = 5
       }
      Division =  
      {  id    = {  type = 14800 id = 113  }  
        name  = "USS Tuscaloosa"  
        type  = heavy_cruiser  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3065  }  
        name  = "USS Flint"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3092  }  
        name  = "USS Wilkes-Barre"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
     } 
    # 3rd Fleet Transport Squadron
    navalunit =  
    {  name     = "USN 3rd Fleet Transport Squadron"  
      id       = {  type = 14800 id = 106  }  
      location = 1734  
      base     = 1734 
      Division =  
      {  id    = {  type = 14800 id = 2845  }  
        name  = "Destroyer Division 40"  
        type  = destroyer  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 136  }  
        name = "Transport Division 17"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 159  }  
        name = "Transport Division 18"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 137  }  
        name = "Transport Division 19"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 140  }  
        name = "Transport Division 20"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2846  }  
        name = "Transport Division 82"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2847  }  
        name = "Transport Division 83"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2848  }  
        name = "Transport Division 84"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2849  }  
        name = "Transport Division 85"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2850  }  
        name = "Transport Division 86"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2851  }  
        name = "Transport Division 87"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2852  }  
        name = "Transport Division 88"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2853  }  
        name = "Transport Division 89"  
        type = transport  
		model = 3
        experience = 20
       }  
     } 
    # Manus Squadron
    navalunit =  
    {  name     = "USN Manus Squadron"  
      id       = {  type = 14800 id = 2804  }  
      location = 1724  
      base     = 1724  
      Division =  
      {  id    = {  type = 14800 id = 100  }  
        name  = "USS Mississippi"  
        type  = battleship  
        model = 4  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3059  }  
        name  = "USS Houston"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3064  }  
        name  = "USS Reno"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       } 
     }
    # Commander Air, Central Pacific
    navalunit =  
    {  name     = "USN Commander Air, Central Pacific"  
      id       = {  type = 14800 id = 2710  }  
      location = 1685  
      base     = 1685  
      Division =  
      {  id   = {  type = 14800 id = 4030  }  
        name  = "USS Curtiss"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
      Division =  
      {  id   = {  type = 14800 id = 3104  }  
        name  = "USS Hamlin"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
      Division =  
      {  id   = {  type = 14800 id = 3105  }  
        name  = "USS St. George"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     }
    # Norfolk Squadron
    navalunit =  
    {  name     = "USN Norfolk Squadron"  
      id       = {  type = 14800 id = 2805  }  
      location = 1812  
      base     = 1812  
      Division =  
      {  id            = {  type = 14800 id = 3082  }  
        name          = "USS Shangri-La"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 3057  }  
        name  = "USS Quincy"  
        type  = heavy_cruiser  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3060  }  
        name  = "USS Vicksburg"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 510  }  
        name  = "USS Honolulu"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
     }
    # Southwest Pacific Transport Squadron
    navalunit =  
    {  name     = "USN Southwest Pacific Transport Squadron"  
      id       = {  type = 14800 id = 4200  }  
      location = 1596  
      base     = 1596  
      Division =  
      {  id    = {  type = 14800 id = 2025  }  
        name  = "Destroyer Division 29"  
        type  = destroyer  
        model = 5  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 4235  }  
        name  = "Destroyer Division 30"  
        type  = destroyer  
        model = 3
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 4228  }  
        name  = "Destroyer Division 31"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 156  }  
        name = "Transport Division 7"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 150  }  
        name = "Transport Division 9"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 134  }  
        name = "Transport Division 10"  
        type = transport
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 151  }  
        name = "Transport Division 11"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7150  }  
        name = "Transport Division 12"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2819  }  
        name = "Transport Division 62"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2820  }  
        name = "Transport Division 63"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2821  }  
        name = "Transport Division 64"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2822  }  
        name = "Transport Division 65"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2823  }  
        name = "Transport Division 66"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2824  }  
        name = "Transport Division 67"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2825  }  
        name = "Transport Division 68"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2826  }  
        name = "Transport Division 69"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2827  }  
        name = "Transport Division 70"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2828  }  
        name = "Transport Division 71"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2829  }  
        name = "Transport Division 72"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2830  }  
        name = "Transport Division 73"  
        type = transport  
		model = 3
        experience = 20
       }  
     } 
    # South Pacific Squadron
    navalunit =  
    {  name     = "USN South Pacific Squadron"  
      id       = {  type = 14800 id = 2004  }  
      location = 1668  
      base     = 1668  
      Division =  
      {  id            = {  type = 14800 id = 32  }  
        name          = "USS Saratoga"  
        type          = carrier  
        model         = 0  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 4229  }  
        name  = "Destroyer Division 32"  
        type  = destroyer  
        model = 3  
        experience = 20
       }  
     }
    # South Pacific Transport Squadron
    navalunit =  
    {  name     = "USN South Pacific Transport Squadron"  
      id       = {  type = 14800 id = 4227  }  
      location = 1668  
      base     = 1668 
      Division =  
      {  id    = {  type = 14800 id = 4233  }  
        name  = "Destroyer Division 33"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7152  }  
        name = "Transport Division 13"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7151  }  
        name = "Transport Division 14"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2831  }  
        name = "Transport Division 74"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2832  }  
        name = "Transport Division 75"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2833  }  
        name = "Transport Division 76"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2834  }  
        name = "Transport Division 77"  
        type = transport  
		model = 3
        experience = 20
       }  
     } 
    # TASK FORCE 54
    navalunit =  
    {  name     = "USN Task Force 54"  
      id       = {  type = 14800 id = 5094  }  
      location = 2476  
      base     = 1668 
      Division =  
      {  id    = {  type = 14800 id = 53  }  
        name  = "USS Chester"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 47  }  
        name  = "USS Pensacola"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 48  }  
        name  = "USS Salt Lake City"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 43  }  
        name  = "USS Concord"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 45  }  
        name  = "USS Detroit"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 41  }  
        name  = "USS Richmond"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 42  }  
        name  = "USS Trenton"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2835  }  
        name  = "Destroyer Division 34"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2836  }  
        name  = "Destroyer Division 35"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
     } 
    # North Pacific Transport Squadron
    navalunit =  
    {  name     = "USN North Pacific Transport Squadron"  
      id       = {  type = 14800 id = 92  }  
      location = 2142  
      base     = 2142 
      Division =  
      {  id    = {  type = 14800 id = 2837  }  
        name  = "Destroyer Division 36"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 135  }  
        name  = "Transport Division 15"  
        type  = transport  
	model = 3
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4232  }  
        name  = "Transport Division 16"  
        type  = transport
        model = 3  
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2838  }  
        name = "Transport Division 78"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2839  }  
        name = "Transport Division 79"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2840  }  
        name = "Transport Division 80"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2841  }  
        name = "Transport Division 81"  
        type = transport  
		model = 3
        experience = 20
       }  
     } 
    # 1st West Coast Transport Squadron
    navalunit =  
    {  name     = "USN 1st West Coast Transport Squadron"  
      id       = {  type = 14800 id = 4005  }  
      location = 1889  
      base     = 1889 
      Division =  
      {  id   = {  type = 14800 id = 707  }  
        name = "Transport Division 21"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 138  }  
        name = "Transport Division 22"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2868  }  
        name = "Transport Division 90"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2869  }  
        name = "Transport Division 91"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2870  }  
        name = "Transport Division 92"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2871  }  
        name = "Transport Division 93"  
        type = transport  
		model = 3
        experience = 20
       }  
     }
    # New York Squadron
    navalunit =  
    {  name     = "USN New York Squadron"  
      id       = {  type = 14800 id = 2711  }  
      location = 1795  
      base     = 1795 
      Division =  
      {  id            = {  type = 14800 id = 3079  }  
        name          = "USS Bennington"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id            = {  type = 14800 id = 3080  }  
        name          = "USS Bon Homme Richard"  
        type          = carrier  
        model         = 4  
        extra         = CAG  
        brigade_model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 28  }  
        name  = "USS Nevada"  
        type  = battleship  
        model = 6 # modernized to resemble South Dakota-class, but still not a South Dakota; uses BB 1922 model
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_anti_air_l
	extra3 = naval_improved_hull_l
	extra4 = naval_fire_controll_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3093  }  
        name  = "USS Atlanta"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 3116  }  
        name  = "USS Duluth"  
        type  = light_cruiser  
        model = 6  
        experience = 20
       } 
     }
    # San Diego Squadron
    navalunit =  
    {  name     = "USN San Diego Squadron"  
      id       = {  type = 14800 id = 2800  }  
      location = 1886  
      base     = 1886 
      Division =  
      {  id    = {  type = 14800 id = 103  }  
        name  = "USS Arkansas"  
        type  = battleship  
        model = 2 
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 104  }  
        name  = "USS New York"  
        type  = battleship  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
	extra2 = naval_radar_l
	brigade_model2 = 2
	extra3 = naval_anti_air_l
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 44  }  
        name  = "USS Raleigh"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 2872  }  
        name  = "Destroyer Division 42"  
        type  = destroyer  
        model = 5 
        experience = 20
       }  
     } 
    # 2nd West Coast Transport Squadron
    navalunit =  
    {  name     = "USN 2nd West Coast Transport Squadron"  
      id       = {  type = 14800 id = 2877  }  
      location = 1886  
      base     = 1886 
      Division =  
      {  id   = {  type = 14800 id = 709  }  
        name = "Transport Division 23"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 141  }  
        name = "Transport Division 24"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2873  }  
        name = "Transport Division 94"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2874  }  
        name = "Transport Division 95"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2875  }  
        name = "Transport Division 96"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2876  }  
        name = "Transport Division 97"  
        type = transport  
		model = 3
        experience = 20
       }  
     }
    # Boston Squadron
    navalunit =  
    {  name     = "USN Boston Squadron"  
      id       = {  type = 14800 id = 2878  }  
      location = 1789  
      base     = 1789 
      Division =  
      {  id    = {  type = 14800 id = 112  }  
        name  = "USS Augusta"  
        type  = heavy_cruiser  
        model = 3  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 3084  }  
        name  = "USS Pittsburg"  
        type  = heavy_cruiser  
        model = 6  
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       } 
     }
    # Leyte Invasion Force
    navalunit =  
    {  name     = "USN Leyte Invasion Force"  
      id       = {  type = 14800 id = 4602  }  
      location = 2555  
      base     = 1685  
      Division =  
      {  id    = {  type = 14800 id = 2882  }  
        name  = "Destroyer Division 46"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2883  }  
        name  = "Destroyer Division 47"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 711  }  
        name = "Transport Division 25"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 139  }  
        name = "Transport Division 26"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 713  }  
        name = "Transport Division 27"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7153  }  
        name = "Transport Division 28"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 715  }  
        name = "Transport Division 29"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7154  }  
        name = "Transport Division 30"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2884  }  
        name = "Transport Division 98"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2885  }  
        name = "Transport Division 99"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2886  }  
        name = "Transport Division 100"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2887  }  
        name = "Transport Division 101"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2888  }  
        name = "Transport Division 102"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2890  }  
        name = "Transport Division 104"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2891  }  
        name = "Transport Division 105"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2892  }  
        name = "Transport Division 106"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2893  }  
        name = "Transport Division 107"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2894  }  
        name = "Transport Division 108"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2895  }  
        name = "Transport Division 109"  
        type = transport  
		model = 3
        experience = 20
       }  
     }
    # Mediterranean Squadron
    navalunit =  
    {  name     = "USN Mediterranean Squadron"  
      id       = {  type = 14800 id = 4209  }  
      location = 421  
      base     = 421  
      Division =  
      {  id    = {  type = 14800 id = 504  }  
        name  = "USS Brooklyn"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id       = {  type = 14800 id = 90  }  
        name     = "USS Marblehead"  
        strength = 100  
        type     = light_cruiser  
        model    = 3  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 109  }  
        name  = "USS Cincinnati"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 107  }  
        name  = "USS Omaha"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 110  }  
        name  = "USS Memphis"  
        type  = light_cruiser  
        model = 3  
        experience = 20
       } 
      Division =  
      {  id    = {  type = 14800 id = 505  }  
        name  = "USS Philadelphia"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 506  }  
        name  = "USS Savannah"  
        type  = light_cruiser  
        model = 5  
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 2879  }  
        name  = "Destroyer Division 43"  
        type  = destroyer  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2880  }  
        name  = "Destroyer Division 44"  
        type  = destroyer  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2881  }  
        name  = "Destroyer Division 45"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2896  }  
        name  = "Destroyer Division 48"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2897  }  
        name  = "Destroyer Division 49"  
        type  = destroyer  
        model = 3 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4013  }  
        name  = "Destroyer Division 50"  
        type  = destroyer  
        model = 3  
        experience = 20
       } 
     } 
    # Mediterranean Transport Squadron
    navalunit =  
    {  location = 421  
      base     = 421
      id       = {  type = 14800 id = 1330  }  
      name     = "USN Mediterranean Transport Squadron"  
      Division =  
      {  id    = {  type = 14800 id = 2898  }  
        name  = "Destroyer Division 51"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 2899  }  
        name  = "Destroyer Division 52"  
        type  = destroyer  
        model = 4 
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7159  }  
        name = "Transport Division 31"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7155  }  
        name = "Transport Division 32"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7160  }  
        name = "Transport Division 33"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7156  }  
        name = "Transport Division 34"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7161  }  
        name = "Transport Division 35"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7157  }  
        name = "Transport Division 36"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2900  }  
        name = "Transport Division 110"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2901  }  
        name = "Transport Division 111"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2902  }  
        name = "Transport Division 112"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2903  }  
        name = "Transport Division 113"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2904  }  
        name = "Transport Division 114"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2905  }  
        name = "Transport Division 115"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2906  }  
        name = "Transport Division 116"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2907  }  
        name = "Transport Division 117"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2908  }  
        name = "Transport Division 118"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2909  }  
        name = "Transport Division 119"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2910  }  
        name = "Transport Division 120"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2911  }  
        name = "Transport Division 121"  
        type = transport  
		model = 3
        experience = 20
       }  
     }  
    # 1st East Coast Transport Squadron
    navalunit =  
    {  location = 1795  
      base     = 1795
      id       = {  type = 14800 id = 2912  }  
      name     = "USN 1st East Coast Transport Squadron"  
      Division =  
      {  id    = {  type = 14800 id = 2610 }  
        name  = "Destroyer Division 53"  
        type  = destroyer  
        model = 5  
        experience = 20
       }   
      Division =  
      {  id   = {  type = 14800 id = 7162  }  
        name = "Transport Division 37"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 7158  }  
        name = "Transport Division 38"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2913  }  
        name = "Transport Division 122"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2914  }  
        name = "Transport Division 123"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2915  }  
        name = "Transport Division 124"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2916  }  
        name = "Transport Division 125"  
        type = transport  
		model = 3
        experience = 20
       }  
     }  
    # 2nd East Coast Transport Squadron
    navalunit =  
    {  location = 1805  
      base     = 1805
      id       = {  type = 14800 id = 2917  }  
      name     = "USN 2nd East Coast Transport Squadron"  
      Division =  
      {  id    = {  type = 14800 id = 2611  }  
        name  = "Destroyer Division 54"  
        type  = destroyer  
        model = 5  
        experience = 20
       }   
      Division =  
      {  id   = {  type = 14800 id = 3068  }  
        name = "Transport Division 39"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2918  }  
        name = "Transport Division 40"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2919  }  
        name = "Transport Division 126"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2920  }  
        name = "Transport Division 127"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2921  }  
        name = "Transport Division 128"  
        type = transport  
		model = 3
        experience = 20
       }  
      Division =  
      {  id   = {  type = 14800 id = 2922  }  
        name = "Transport Division 129"  
        type = transport  
		model = 3
        experience = 20
       }  
     }  
    # Submarine Squadron 1
    navalunit =  
    {  name     = "USN Submarine Squadron 1"  
      id       = {  type = 14800 id = 4213  }  
      location = 2560  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 97  }  
        name  = "Submarine Division 1"  
        type  = submarine  
        model = 6 
        experience = 20
       }
     }  
    # Submarine Squadron 2
    navalunit =  
    {  name     = "USN Submarine Squadron 2"  
      id       = {  type = 14800 id = 4202  }  
      location = 2521  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 123  }  
        name  = "Submarine Division 2"  
        type  = submarine  
        model = 6  
        experience = 20
       }  
     }  
    # Submarine Squadron 3
    navalunit =  
    {  name     = "USN Submarine Squadron 3"  
      id       = {  type = 14800 id = 4203  }  
      location = 2520  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 4204  }  
        name  = "Submarine Division 3"  
        type  = submarine  
        model = 6
        experience = 20
       }  
     }  
    # Submarine Squadron 4
    navalunit =  
    {  name     = "USN Submarine Squadron 4"  
      id       = {  type = 14800 id = 4205  }  
      location = 2521  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 4206  }  
        name  = "Submarine Division 4"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
     }  
    # Submarine Squadron 5
    navalunit =  
    {  name     = "USN Submarine Squadron 5"  
      id       = {  type = 14800 id = 4207  }  
      location = 2484  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 4208  }  
        name  = "Submarine Division 5"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
     }  
    # Submarine Squadron 6
    navalunit =  
    {  name     = "USN Submarine Squadron 6"  
      id       = {  type = 14800 id = 2603  }  
      location = 2487  
      base     = 1685 
      Division =  
      {  id    = {  type = 14800 id = 2604  }  
        name  = "Submarine Division 6"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
     }  
    # Submarine Squadron 7
    navalunit =  
    {  name     = "USN Submarine Squadron 7"  
      id       = {  type = 14800 id = 4215  }  
      location = 1739  
      base     = 1739 
      Division =  
      {  id    = {  type = 14800 id = 4216  }  
        name  = "Submarine Division 7"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
     }  
    # Submarine Squadron 8
    navalunit =  
    {  name     = "USN Submarine Squadron 8"  
      id       = {  type = 14800 id = 4217  }  
      location = 1739  
      base     = 1739 
      Division =  
      {  id    = {  type = 14800 id = 4218  }  
        name  = "Submarine Division 8"  
        type  = submarine  
        model = 3 
        experience = 20
       }  
     }  
    # Submarine Squadron 9
    navalunit =  
    {  name     = "USN Submarine Squadron 9"  
      id       = {  type = 14800 id = 4214  }  
      location = 2519  
      base     = 1697 
      Division =  
      {  id    = {  type = 14800 id = 4219  }  
        name  = "Submarine Division 9"  
        type  = submarine  
        model = 4 
        experience = 20
       }  
     }  
    # Submarine Squadron 10
    navalunit =  
    {  name     = "USN Submarine Squadron 10"  
      id       = {  type = 14800 id = 4210  }  
      location = 2553  
      base     = 1697 
      Division =  
      {  id    = {  type = 14800 id = 4211  }  
        name  = "Submarine Division 10"  
        type  = submarine  
        model = 3 
        experience = 20
       }  
     }  
    # Submarine Flotilla 1
    navalunit =  
    {  name     = "USN Submarine Flotilla 1"  
      id       = {  type = 14800 id = 4220  }  
      location = 1697  
      base     = 1697 
      Division =  
      {  id    = {  type = 14800 id = 4221  }  
        name  = "Submarine Division 11"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4222  }  
        name  = "Submarine Division 12"  
        type  = submarine  
        model = 3 
        experience = 20
       }
     }  
    # Submarine Flotilla 2
    navalunit =  
    {  name     = "USN Submarine Flotilla 2"  
      id       = {  type = 14800 id = 4223  }  
      location = 1734  
      base     = 1734 
      Division =  
      {  id    = {  type = 14800 id = 4237  }  
        name  = "Submarine Division 13"  
        type  = submarine  
        model = 5 
        experience = 20
       }  
      Division =  
      {  id    = {  type = 14800 id = 4231  }  
        name  = "Submarine Division 14"  
        type  = submarine  
        model = 4 
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 4234  }  
        name  = "Submarine Division 15"  
        type  = submarine  
        model = 3 
        experience = 20
       }
      Division =  
      {  id    = {  type = 14800 id = 4236  }  
        name  = "Submarine Division 16"  
        type  = submarine  
        model = 3 
        experience = 20
       }
     }  
    # USS Guam
    navalunit =  
    {  name     = "USS Guam"  
      id       = {  type = 14800 id = 2714  }  
      location = 1805  
      base     = 1805  
      Division =  
      {  id    = {  type = 14800 id = 3067  }  
        name  = "USS Guam"  
        type  = battlecruiser  
        model = 4
	extra1 = floatplane
	brigade_model1 = 6
        experience = 20
       }  
     }  
    # 7TH FLEET
    navalunit =  
    {  name     = "USN 7th Fleet"  
      id       = {  type = 14800 id = 2102  }  
      location = 1724  
      base     = 1724  
      Division =  
      {  id    = {  type = 14800 id = 3015  }  
        name  = "USS Tangier"  
        type  = escort_carrier  
        model = 0  
        experience = 20
       } 
      Division =  
      {  id   = {  type = 14800 id = 2103  }  
        name  = "USS Heron"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
      Division =  
      {  id   = {  type = 14800 id = 3100  }  
        name  = "USS Currituck"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     } 
    # USS Cumberland Sound
    navalunit =  
    {  name     = "USS Cumberland Sound"  
      id       = {  type = 14800 id = 2713  }  
      location = 1675  
      base     = 1675  
      Division =  
      {  id   = {  type = 14800 id = 3106  }  
        name  = "USS Cumberland Sound"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     } 
    # South Atlantic Force
    navalunit =  
    {  name     = "USN South Atlantic Force"  
      id       = {  type = 14800 id = 4000  }    
      location = 2075 
      base     = 2075 
      Division =  
      {  id   = {  type = 14800 id = 2101  }  
        name  = "USS Patoka"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     }
    # North African Squadron
    navalunit =  
    {  name     = "USN North African Squadron"  
      id       = {  type = 14800 id = 4031  }  
      location = 718  
      base     = 718  
      Division =  
      {  id   = {  type = 14800 id = 4032  }  
        name  = "USS Albemarle"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     } 
    # Patrol Squadron 16
    navalunit =  
    {  name     = "USN Patrol Squadron 16"  
      id       = {  type = 14800 id = 3112  }  
      location = 1685  
      base     = 1685  
      Division =  
      {  id   = {  type = 14800 id = 2923  }  
        name  = "USS Kenneth Whiting"  
        type  = escort_carrier  
        model = 0    
        experience = 20
       }
     } 
    # USS Chandeleur
    navalunit =  
    {  location = 1675  
      base     = 1675  
      id       = {  type = 14800 id = 5100  }  
      name     = "USS Chandeleur"  
      Division =  
      {  id    = {  type = 14800 id = 3014  }  
        name  = "USS Chandeleur"  
        type  = escort_carrier  
        model = 0  
        experience = 20
       } 
     }  

  # USAAF
  ###################

  airunit =
  { id       = { type = 14800 id = 5000 }
    name     = "Eighth Air Force"
    location = 25
    base     = 25
    division =
    { id       = { type = 14800 id = 5001 }
      name     = "25th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5002 }
      name     = "91st USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5003 }
      name     = "94th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5004 }
      name     = "303rd USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5005 }
      name     = "322th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5006 }
      name     = "379th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5007 }
      name     = "385th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5008 }
      name     = "388th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5009 }
      name     = "392th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5010 }
      name     = "445th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5011 }
      name     = "457th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5012 }
      name     = "467th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5013 }
      name     = "487th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5014 }
      name     = "491st USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5015 }
      name     = "1st USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5016 }
      name     = "4th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5017 }
      name     = "56th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5018 }
      name     = "352nd USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5019 }
      name     = "355th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5020 }
      name     = "356th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5021 }
      name     = "357th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5022 }
      name     = "358th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5023 }
    name     = "Ninth Air Force"
    location = 27
    base     = 27
    division =
    { id       = { type = 14800 id = 5024 }
      name     = "97th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 6
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5025 }
      name     = "98th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5026 }
      name     = "99th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5027 }
      name     = "70th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5028 }
      name     = "71st USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5029 }
      name     = "84th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5030 }
      name     = "100th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5031 }
      name     = "303rd USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5032 }
      name     = "50th USAAF Troop Carrier Wing"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5033 }
      name     = "52nd USAAF Troop Carrier Wing"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5034 }
      name     = "53rd USAAF Troop Carrier Wing"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5035 }
    name     = "Tenth Air Force"
    location = 1442
    base     = 1442
    division =
    { id       = { type = 14800 id = 5036 }
      name     = "7th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5037 }
      name     = "12th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5038 }
      name     = "341st USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5039 }
      name     = "33rd USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5040 }
      name     = "80th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5041 }
      name     = "311st USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5042 }
    name     = "Eleventh Air Force"
    location = 2174
    base     = 2174
    division =
    { id       = { type = 14800 id = 5043 }
      name     = "9th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5044 }
      name     = "11th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5045 }
    name     = "Twelfth Air Force"
    location = 416
    base     = 416
    division =
    { id       = { type = 14800 id = 5046 }
      name     = "17th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5047 }
      name     = "310th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5048 }
      name     = "57th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5049 }
      name     = "324th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5050 }
    name     = "Thirteenth Air Force"
    location = 1607
    base     = 1607
    division =
    { id       = { type = 14800 id = 5051 }
      name     = "5th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5052 }
      name     = "42nd USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5053 }
      name     = "403rd USAAF Troop Carrier Wing"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5054 }
      name     = "347th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5055 }
    name     = "Fifteenth Air Force"
    location = 422
    base     = 422
    division =
    { id       = { type = 14800 id = 5056 }
      name     = "47th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5057 }
      name     = "49th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5058 }
      name     = "55th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5059 }
      name     = "304th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5060 }
      name     = "305th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5061 }
      name     = "306th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5062 }
    name     = "USAAF CONUS Reserve"
    location = 1805
    base     = 1805
    division =
    { id       = { type = 14800 id = 5063 }
      name     = "1st USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5064 }
      name     = "2nd USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5065 }
      name     = "3rd USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5066 }
      name     = "4th USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5067 }
      name     = "5th USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5068 }
      name     = "6th USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5069 }
      name     = "7th USAAF Reserve Bomb. Group"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5070 }
      name     = "1st USAAF Reserve Fight. Group"
      strength = 100
      type     = multi_role
      model    = 7
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5071 }
      name     = "1st USAAF Reserve Trans. Group"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5072 }
      name     = "2nd USAAF Reserve Trans. Group"
      strength = 100
      type     = transport_plane
      model    = 3
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5073 }
    name     = "1/SWPAF"
    location = 1596
    base     = 1596
    division =
    { id       = { type = 14800 id = 5074 }
      name     = "38th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5075 }
      name     = "345th USAAF Tactical Bomb. Wing"
      strength = 100
      type     = tactical_bomber
      model    = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5076 }
      name     = "35th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 6
      experience = 35
    }
  }
  airunit =
  { id       = { type = 14800 id = 5077 }
    name     = "2/SWPAF"
    location = 1607
    base     = 1607
    division =
    { id       = { type = 14800 id = 5078 }
      name     = "43rd USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5079 }
      name     = "307th USAAF Strategic Bomb. Wing"
      strength = 100
      type     = strategic_bomber
      model    = 5
      extra    = escort
      brigade_model = 2
      experience = 35
    }
    division =
    { id       = { type = 14800 id = 5080 }
      name     = "49th USAAF Fighter Wing"
      strength = 100
      type     = multi_role
      model    = 6
      experience = 35
    }
  }
  airunit =
  { location = 1724
    base     = 1724
    id       = { type = 14800 id = 5081 }
    name     = "3/SWPAF"
    division =
    { id         = { type = 14800 id = 5082 }
      name       = "VMFN 115"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5083 }
      name       = "VMSB 142"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
  }
  airunit =
  { location = 1724
    base     = 1724
    id       = { type = 14800 id = 5084 }
    name     = "4/SWPAF"
    division =
    { id         = { type = 14800 id = 5085 }
      name       = "VMF 121/211"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5086 }
      name       = "VMF 313"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5087 }
      name       = "VMB 433/443"
      strength   = 100
      type       = tactical_bomber
      model      = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
  }
  airunit =
  { location = 1589
    base     = 1589
    id       = { type = 14800 id = 5088 }
    name     = "5/SWPAF"
    division =
    { id         = { type = 14800 id = 5089 }
      name       = "VMF 218/222"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5114 }
      name       = "VMSB 133/341"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5091 }
      name       = "VMSB 244/423"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
  }
  airunit =
  { location = 1589
    base     = 1589
    id       = { type = 14800 id = 5092 }
    name     = "6/SWPAF"
    division =
    { id         = { type = 14800 id = 5093 }
      name       = "VMF 215/223"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5115 }
      name       = "VMF 221/315"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5095 }
      name       = "VMB 241/413"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
  }
  airunit =
  { location = 1676
    base     = 1676
    id       = { type = 14800 id = 5096 }
    name     = "2/CPAF"
    division =
    { id         = { type = 14800 id = 5097 }
      name       = "VMF 111/224"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5098 }
      name       = "VMSB 311/331"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5099 }
      name       = "VMSB 231/245"
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
  }
  airunit =
  { location = 1734
    base     = 1734
    id       = { type = 14800 id = 5116 }
    name     = "1/CPAF"
    division =
    { id         = { type = 14800 id = 5101 }
      name       = "VMF 124/213"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5102 }
      name       = "VMSB "
      strength   = 100
      type       = cas
      model      = 3
      experience = 35
    }
  }
  airunit =
  { location = 1685
    base     = 1685
    id       = { type = 14800 id = 5103 }
    name     = "3/CPAF"
    division =
    { id         = { type = 14800 id = 5104 }
      name       = "VFN 532/534"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5105 }
      name       = "VMF 225/321"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5106 }
      name       = "VMF 216/217"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5107 }
      name       = "VMTB 131/242"
      strength   = 100
      type       = naval_bomber
      model      = 4
      experience = 35
    }
  }
  airunit =
  { location = 1675
    base     = 1675
    id       = { type = 14800 id = 5108 }
    name     = "4/CPAF"
    division =
    { id         = { type = 14800 id = 5109 }
      name       = "VMF 114/122"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5110 }
      name       = "VMB 134/541"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
  }
  airunit =
  { location = 1675
    base     = 1675
    id       = { type = 14800 id = 5111 }
    name     = "7/SWPAF"
    division =
    { id         = { type = 14800 id = 5112 }
      name       = "VMF 113/422"
      strength   = 100
      type       = interceptor
      model      = 10
      experience = 35
    }
    division =
    { id         = { type = 14800 id = 5113 }
      name       = "VMB 151/612"
      strength   = 100
      type       = tactical_bomber
      model      = 8
      extra    = escort
      brigade_model = 2
      experience = 35
    }
  }





   division_development =    
   {  name  = "USS Antietam"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3081  }  
      date  = {  year = 1945 month = january day = 28  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Lake Champlain"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3083  }  
      date  = {  year = 1945 month = june day = 3  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Boxer"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3107  }  
      date  = {  year = 1945 month = april day = 16  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Leyte"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3108  }  
      date  = {  year = 1946 month = april day = 11  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Kearsarge"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3109  }  
      date  = {  year = 1946 month = march day = 2  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Oriskany"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3110  }  
      date  = {  year = 1947 month = december day = 16  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Princeton"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3111  }  
      date  = {  year = 1945 month = november day = 18  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Tarawa"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3130  }  
      date  = {  year = 1945 month = december day = 8  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Reprisal"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3132  }  
      date  = {  year = 1948 month = march day = 1  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Valley Forge"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3134  }  
      date  = {  year = 1946 month = november day = 3  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Philippine Sea"  
      type  = carrier  
      model = 4  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3135  }  
      date  = {  year = 1946 month = may day = 11  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Midway"  
      type  = carrier  
      model = 5  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3113  }  
      date  = {  year = 1945 month = september day = 10  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Franklin D. Roosevelt"  
      type  = carrier  
      model = 5  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3114  }  
      date  = {  year = 1945 month = october day = 27  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Coral Sea"  
      type  = carrier  
      model = 5  
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3133  }  
      date  = {  year = 1947 month = october day = 1  }  
      extra = cag  
      brigade_model = 5  
     }
   division_development =    
   {  name  = "USS Norton Sound"
      type  = escort_carrier  
      model = 0  
      new_model = no
      cost  = 0.2  
      id    = {  type = 14800 id = 3101  }  
      date  = {  year = 1945 month = january day = 8  }    
     }  
   division_development =    
   {  name  = "USS Pine Island"
      type  = escort_carrier  
      model = 0  
      new_model = no
      cost  = 0.2  
      id    = {  type = 14800 id = 3102  }  
      date  = {  year = 1945 month = april day = 26  }    
     }  
   division_development =    
   {  name  = "USS Salisbury Sound"
      type  = escort_carrier  
      model = 0  
      new_model = no
      cost  = 0.2  
      id    = {  type = 14800 id = 3103  }  
      date  = {  year = 1945 month = november day = 26  }    
     }  
   division_development =    
   {  name  = "USS Saipan"
      type  = light_carrier  
      model = 2  
      new_model = no
      cost  = 0.2  
      id    = {  type = 14800 id = 3136  }  
      date  = {  year = 1946 month = july day = 14  }    
      extra = light_cag
      brigade_model = 5
     }  
   division_development =    
   {  name  = "USS Wright"
      type  = light_carrier  
      model = 2  
      new_model = no
      cost  = 0.2  
      id    = {  type = 14800 id = 3137  }  
      date  = {  year = 1947 month = february day = 9  }    
      extra = light_cag
      brigade_model = 5
     }  
   division_development =    
   {  name  = "USS Kentucky"  
      type  = battleship  
      model = 8
      new_model = no
      cost  = 0.5  
      id    = {  type = 14800 id = 3115  }  
      date  = {  year = 1948 month = october day = 7  }
      extra1 = floatplane
      brigade_model1 = 6    
     }   
   division_development =    
   {  name  = "USS Hawaii"  
      type  = battlecruiser  
      model = 4  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3129  }  
      date  = {  year = 1946 month = january day = 5  }    
      extra1 = floatplane
      brigade_model1 = 6
     }        
   division_development =    
   {  name  = "USS Oklahoma City"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3087  }  
      date  = {  year = 1944 month = december day = 22  }    
     }         
   division_development =    
   {  name  = "USS Little Rock"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3088  }  
      date  = {  year = 1945 month = june day = 17  }    
     }        
   division_development =    
   {  name  = "USS Tucson"
      type  = light_cruiser  
      model = 5  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3089  }  
      date  = {  year = 1945 month = february day = 3  }    
     }        
   division_development =    
   {  name  = "USS Amsterdam"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3090  }  
      date  = {  year = 1945 month = january day = 8  }    
     }        
   division_development =    
   {  name  = "USS Portsmouth"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3091  }  
      date  = {  year = 1945 month = june day = 25  }    
     }        
   division_development =    
   {  name  = "USS Dayton"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3094  }  
      date  = {  year = 1945 month = january day = 7  }    
     }         
   division_development =    
   {  name  = "USS Huntington"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3095  }  
      date  = {  year = 1946 month = february day = 23  }    
     }         
   division_development =    
   {  name  = "USS Providence"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3117  }  
      date  = {  year = 1945 month = may day = 15  }    
     }       
   division_development =    
   {  name  = "USS Newark"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3118  }  
      date  = {  year = 1947 month = january day = 12  }    
     }       
   division_development =    
   {  name  = "USS New Haven"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3119  }  
      date  = {  year = 1947 month = february day = 23  }    
     }       
   division_development =    
   {  name  = "USS Buffalo"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3120  }  
      date  = {  year = 1947 month = march day = 28  }    
     }     
   division_development =    
   {  name  = "USS Tallahassee"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3121  }  
      date  = {  year = 1947 month = january day = 26  }    
     }         
   division_development =    
   {  name  = "USS Cheyenne"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3122  }  
      date  = {  year = 1947 month = may day = 24  }    
     }       
   division_development =    
   {  name  = "USS Chattanooga"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3140  }  
      date  = {  year = 1947 month = october day = 4  }    
     }       
   division_development =    
   {  name  = "USS Juneau"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3141  }  
      date  = {  year = 1946 month = february day = 15  }    
     }       
   division_development =    
   {  name  = "USS Spokane"
      type  = light_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3142  }  
      date  = {  year = 1946 month = may day = 17  }    
     }       
   division_development =    
   {  name  = "USS St. Paul"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3085  }  
      date  = {  year = 1945 month = february day = 17  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Columbus"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3086  }  
      date  = {  year = 1945 month = june day = 8  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Bremerton"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3096  }  
      date  = {  year = 1945 month = april day = 29  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Fall River"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3097  }  
      date  = {  year = 1945 month = july day = 1  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Macon"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3098  }  
      date  = {  year = 1945 month = august day = 26  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Oregon City"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3123  }  
      date  = {  year = 1946 month = february day = 16  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Albany"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3124  }  
      date  = {  year = 1946 month = june day = 15  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Rochester"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3125  }  
      date  = {  year = 1946 month = december day = 20  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Toledo"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3126  }  
      date  = {  year = 1946 month = october day = 27  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Chicago"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3127  }  
      date  = {  year = 1945 month = january day = 10  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Los Angeles"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3128  }  
      date  = {  year = 1945 month = july day = 22  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Northampton"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3138  }  
      date  = {  year = 1946 month = march day = 7  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   division_development =    
   {  name  = "USS Cambridge"  
      type  = heavy_cruiser  
      model = 6  
      new_model = no
      cost  = 0.3  
      id    = {  type = 14800 id = 3139  }  
      date  = {  year = 1946 month = october day = 18  }    
      extra1 = floatplane
      brigade_model1 = 6
     }      
   }  
  
