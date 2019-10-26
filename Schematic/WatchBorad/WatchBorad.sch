EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L RF_Module:E73-2G4M04S-52832 U1
U 1 1 5D87721B
P 2600 2950
F 0 "U1" H 2600 1264 50  0000 C CNN
F 1 "E73-2G4M04S-52832" H 2600 1173 50  0000 C CNN
F 2 "RF_Module:E73-2G4M04S" H 2600 3400 50  0001 C CNN
F 3 "http://www.cdebyte.com/en/downpdf.aspx?id=243" H 2600 3400 50  0001 C CNN
	1    2600 2950
	1    0    0    -1  
$EndComp
$Comp
L W25Q16BVSSIG:W25Q16BVSSIG U3
U 1 1 5D87735B
P 11650 1500
F 0 "U3" H 11650 2170 50  0000 C CNN
F 1 "W25Q16BVSSIG" H 11650 2079 50  0000 C CNN
F 2 "W25Q16BVSSIG:SOIC127P790X216-8N" H 11650 1500 50  0001 L BNN
F 3 "None" H 11650 1500 50  0001 L BNN
F 4 "Winbond" H 11650 1500 50  0001 L BNN "Field4"
F 5 "Flash, pin, soic, flash, Memory, Semiconductors and Actives, serial, ic" H 11650 1500 50  0001 L BNN "Field5"
F 6 "SOIC-8 Winbond" H 11650 1500 50  0001 L BNN "Field6"
F 7 "Unavailable" H 11650 1500 50  0001 L BNN "Field7"
F 8 "W25Q16BVSSIG" H 11650 1500 50  0001 L BNN "Field8"
	1    11650 1500
	1    0    0    -1  
$EndComp
Text Label 10750 1300 2    50   ~ 0
FLASH_CS
Wire Wire Line
	10950 1300 10750 1300
Text Label 10750 1400 2    50   ~ 0
FLASH_SCK
Wire Wire Line
	10950 1400 10750 1400
Wire Wire Line
	10950 1500 10750 1500
Text Label 10750 1500 2    50   ~ 0
FLASH_MOSI
Wire Wire Line
	10950 1600 10750 1600
Text Label 10750 1600 2    50   ~ 0
FLASH_MISO
Wire Wire Line
	12350 1100 12500 1100
Wire Wire Line
	12350 1500 12650 1500
Wire Wire Line
	12650 1500 12650 1100
Wire Wire Line
	12350 1400 12500 1400
Wire Wire Line
	12500 1400 12500 1100
Connection ~ 12500 1100
Wire Wire Line
	12500 1100 12650 1100
Connection ~ 12650 1100
$Comp
L power:GND #PWR0101
U 1 1 5D877870
P 12450 1900
F 0 "#PWR0101" H 12450 1650 50  0001 C CNN
F 1 "GND" H 12455 1727 50  0000 C CNN
F 2 "" H 12450 1900 50  0001 C CNN
F 3 "" H 12450 1900 50  0001 C CNN
	1    12450 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	12350 1800 12450 1800
Wire Wire Line
	12450 1800 12450 1900
$Comp
L power:GND #PWR0102
U 1 1 5D877974
P 12900 1700
F 0 "#PWR0102" H 12900 1450 50  0001 C CNN
F 1 "GND" H 12905 1527 50  0000 C CNN
F 2 "" H 12900 1700 50  0001 C CNN
F 3 "" H 12900 1700 50  0001 C CNN
	1    12900 1700
	1    0    0    -1  
$EndComp
$Comp
L Hirose_connectors:FH26-13S-0.3SHW(05) U2
U 1 1 5D877F18
P 8050 3450
F 0 "U2" H 8200 3575 50  0000 C CNN
F 1 "FH26-13S-0.3SHW(05)" H 8200 3484 50  0000 C CNN
F 2 "FH26W-13S-0:FH26-13S-0.3SHW(05)" H 8050 3450 50  0001 C CNN
F 3 "" H 8050 3450 50  0001 C CNN
	1    8050 3450
	-1   0    0    1   
$EndComp
$Comp
L TXS0108E:TXS0108E IC1
U 1 1 5D8780E1
P 7900 1650
F 0 "IC1" H 7900 2417 50  0000 C CNN
F 1 "TXS0108E" H 7900 2326 50  0000 C CNN
F 2 "TXS0108E:PW_R-PDSO-G20" H 7900 1650 50  0001 L BNN
F 3 "8-Bit Bidirectional Voltage-Level Translator For Open-Drain And Push-Pull Application" H 7900 1650 50  0001 L BNN
F 4 "Texas Instruments" H 7900 1650 50  0001 L BNN "Field4"
F 5 "Unavailable" H 7900 1650 50  0001 L BNN "Field5"
F 6 "None" H 7900 1650 50  0001 L BNN "Field6"
F 7 "TXS0108E" H 7900 1650 50  0001 L BNN "Field7"
F 8 "TSSOP-20 Texas Instruments" H 7900 1650 50  0001 L BNN "Field8"
	1    7900 1650
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x06_Male J1
U 1 1 5DA4E11A
P 1050 7050
F 0 "J1" H 1156 7428 50  0000 C CNN
F 1 "Conn_01x06_Male" H 1156 7337 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 1050 7050 50  0001 C CNN
F 3 "~" H 1050 7050 50  0001 C CNN
	1    1050 7050
	1    0    0    -1  
$EndComp
Text Label 1300 3650 2    50   ~ 0
SWD_SWDIO
Wire Wire Line
	1300 3650 1700 3650
Wire Wire Line
	1700 3550 1300 3550
Text Label 1300 3550 2    50   ~ 0
SWD_SWDCLK
Wire Wire Line
	1700 3450 1300 3450
Text Label 1300 3450 2    50   ~ 0
SWD_RESET
Text Label 3750 3150 0    50   ~ 0
SWD_SWO
Wire Wire Line
	1250 7050 1500 7050
Wire Wire Line
	1250 7150 1500 7150
Wire Wire Line
	1250 7250 1500 7250
Wire Wire Line
	1250 7350 1500 7350
Text Label 1500 7050 0    50   ~ 0
SWD_SWDIO
Wire Wire Line
	1650 6850 1650 6650
Wire Wire Line
	1250 6850 1650 6850
$Comp
L power:+3.3V #PWR0103
U 1 1 5DA504CF
P 1650 6650
F 0 "#PWR0103" H 1650 6500 50  0001 C CNN
F 1 "+3.3V" H 1665 6823 50  0000 C CNN
F 2 "" H 1650 6650 50  0001 C CNN
F 3 "" H 1650 6650 50  0001 C CNN
	1    1650 6650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1750 6950 1750 6650
Wire Wire Line
	1750 6650 1900 6650
Wire Wire Line
	1250 6950 1750 6950
$Comp
L power:GND #PWR0104
U 1 1 5DA50A5E
P 1900 6650
F 0 "#PWR0104" H 1900 6400 50  0001 C CNN
F 1 "GND" V 1905 6522 50  0000 R CNN
F 2 "" H 1900 6650 50  0001 C CNN
F 3 "" H 1900 6650 50  0001 C CNN
	1    1900 6650
	0    -1   -1   0   
$EndComp
Text Label 1500 7150 0    50   ~ 0
SWD_SWDCLK
Text Label 1500 7250 0    50   ~ 0
SWD_RESET
Text Label 1500 7350 0    50   ~ 0
SWD_SWO
Wire Wire Line
	8150 2950 8400 2950
Wire Wire Line
	8150 3050 8400 3050
Wire Wire Line
	8150 3150 8400 3150
Wire Wire Line
	7650 3200 7350 3200
Wire Wire Line
	7650 3100 7350 3100
Wire Wire Line
	7650 3000 7350 3000
Wire Wire Line
	7650 2900 7350 2900
Wire Wire Line
	7650 2800 7350 2800
Text Label 8400 2750 0    50   ~ 0
LEDK2
Wire Wire Line
	8150 2750 8700 2750
Wire Wire Line
	8700 2750 8700 2650
$Comp
L power:GND #PWR0105
U 1 1 5DA59B65
P 8700 2650
F 0 "#PWR0105" H 8700 2400 50  0001 C CNN
F 1 "GND" V 8705 2522 50  0000 R CNN
F 2 "" H 8700 2650 50  0001 C CNN
F 3 "" H 8700 2650 50  0001 C CNN
	1    8700 2650
	0    -1   -1   0   
$EndComp
Text Label 8400 2850 0    50   ~ 0
LEDA
Text Label 8400 2950 0    50   ~ 0
FMARK_1.8
Text Label 8400 3050 0    50   ~ 0
RS_1.8
Text Label 8400 3150 0    50   ~ 0
CS_1.8
$Comp
L power:+1V8 #PWR0106
U 1 1 5DA59C3D
P 8950 3250
F 0 "#PWR0106" H 8950 3100 50  0001 C CNN
F 1 "+1V8" H 8965 3423 50  0000 C CNN
F 2 "" H 8950 3250 50  0001 C CNN
F 3 "" H 8950 3250 50  0001 C CNN
	1    8950 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	8150 3250 8950 3250
Wire Wire Line
	8600 3350 8600 3400
Wire Wire Line
	8150 3350 8600 3350
$Comp
L power:GND #PWR0107
U 1 1 5DA5B4D0
P 8600 3400
F 0 "#PWR0107" H 8600 3150 50  0001 C CNN
F 1 "GND" H 8605 3227 50  0000 C CNN
F 2 "" H 8600 3400 50  0001 C CNN
F 3 "" H 8600 3400 50  0001 C CNN
	1    8600 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	7350 2900 7350 2800
Connection ~ 7350 2800
Text Label 7150 2800 2    50   ~ 0
LEDK1
Wire Wire Line
	6850 2800 7350 2800
$Comp
L power:GND #PWR0108
U 1 1 5DA5DAAF
P 6850 2800
F 0 "#PWR0108" H 6850 2550 50  0001 C CNN
F 1 "GND" V 6855 2672 50  0000 R CNN
F 2 "" H 6850 2800 50  0001 C CNN
F 3 "" H 6850 2800 50  0001 C CNN
	1    6850 2800
	0    1    1    0   
$EndComp
Text Label 7350 3000 2    50   ~ 0
SDA_1.8
Text Label 7350 3100 2    50   ~ 0
SCLK_1.8
Text Label 7350 3200 2    50   ~ 0
RESET_1.8
$Comp
L power:+2V8 #PWR0109
U 1 1 5DA5DB7F
P 6750 3300
F 0 "#PWR0109" H 6750 3150 50  0001 C CNN
F 1 "+2V8" H 6765 3473 50  0000 C CNN
F 2 "" H 6750 3300 50  0001 C CNN
F 3 "" H 6750 3300 50  0001 C CNN
	1    6750 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 3300 7650 3300
$Comp
L Device:R R2
U 1 1 5DA5EAFE
P 9100 2850
F 0 "R2" V 8893 2850 50  0000 C CNN
F 1 "R100" V 8984 2850 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 9030 2850 50  0001 C CNN
F 3 "~" H 9100 2850 50  0001 C CNN
	1    9100 2850
	0    1    1    0   
$EndComp
Wire Wire Line
	8150 2850 8950 2850
$Comp
L power:+3.3V #PWR0110
U 1 1 5DA5F875
P 9500 2850
F 0 "#PWR0110" H 9500 2700 50  0001 C CNN
F 1 "+3.3V" H 9515 3023 50  0000 C CNN
F 2 "" H 9500 2850 50  0001 C CNN
F 3 "" H 9500 2850 50  0001 C CNN
	1    9500 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	9250 2850 9500 2850
$Comp
L power:GND #PWR0111
U 1 1 5DA62427
P 7000 1150
F 0 "#PWR0111" H 7000 900 50  0001 C CNN
F 1 "GND" H 7005 977 50  0000 C CNN
F 2 "" H 7000 1150 50  0001 C CNN
F 3 "" H 7000 1150 50  0001 C CNN
	1    7000 1150
	-1   0    0    1   
$EndComp
Wire Wire Line
	7300 1150 7000 1150
Wire Wire Line
	7300 1250 6900 1250
$Comp
L Device:R R1
U 1 1 5DA64D58
P 6750 1250
F 0 "R1" V 6543 1250 50  0000 C CNN
F 1 "10K" V 6634 1250 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 6680 1250 50  0001 C CNN
F 3 "~" H 6750 1250 50  0001 C CNN
	1    6750 1250
	0    1    1    0   
$EndComp
$Comp
L power:+1V8 #PWR0112
U 1 1 5DA64DE9
P 6600 950
F 0 "#PWR0112" H 6600 800 50  0001 C CNN
F 1 "+1V8" H 6615 1123 50  0000 C CNN
F 2 "" H 6600 950 50  0001 C CNN
F 3 "" H 6600 950 50  0001 C CNN
	1    6600 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 1250 6600 950 
Wire Wire Line
	7300 1450 7050 1450
Wire Wire Line
	7300 1550 7050 1550
Wire Wire Line
	7300 1650 7050 1650
Wire Wire Line
	7300 1750 7050 1750
Wire Wire Line
	7300 1850 7050 1850
Wire Wire Line
	7300 1950 7050 1950
Wire Wire Line
	7300 2050 7050 2050
Wire Wire Line
	7300 2150 7050 2150
Text Label 7050 1450 2    50   ~ 0
RS_1.8
Text Label 7050 1550 2    50   ~ 0
SDA_1.8
Text Label 7050 1650 2    50   ~ 0
SCLK_1.8
Text Label 7050 1750 2    50   ~ 0
FMARK_1.8
Text Label 7050 1850 2    50   ~ 0
CS_1.8
Text Label 7050 1950 2    50   ~ 0
RESET_1.8
$Comp
L power:+1V8 #PWR0113
U 1 1 5DA80D29
P 9500 950
F 0 "#PWR0113" H 9500 800 50  0001 C CNN
F 1 "+1V8" H 9500 1100 50  0000 L CNN
F 2 "" H 9500 950 50  0001 C CNN
F 3 "" H 9500 950 50  0001 C CNN
	1    9500 950 
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 5DA82825
P 9500 1400
F 0 "C3" H 9615 1446 50  0000 L CNN
F 1 "0.1uF" H 9550 1300 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9538 1250 50  0001 C CNN
F 3 "~" H 9500 1400 50  0001 C CNN
	1    9500 1400
	1    0    0    -1  
$EndComp
$Comp
L Device:C C1
U 1 1 5DA940D0
P 9150 1400
F 0 "C1" H 9265 1446 50  0000 L CNN
F 1 "0.1uF" H 9200 1300 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9188 1250 50  0001 C CNN
F 3 "~" H 9150 1400 50  0001 C CNN
	1    9150 1400
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0115
U 1 1 5DA95783
P 9150 950
F 0 "#PWR0115" H 9150 800 50  0001 C CNN
F 1 "+3.3V" H 9165 1123 50  0000 C CNN
F 2 "" H 9150 950 50  0001 C CNN
F 3 "" H 9150 950 50  0001 C CNN
	1    9150 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	9150 1550 9150 1650
Wire Wire Line
	9500 1150 9500 1250
Wire Wire Line
	8500 1150 9500 1150
Wire Wire Line
	9500 1150 9500 950 
Connection ~ 9500 1150
Wire Wire Line
	9150 950  9150 1250
Wire Wire Line
	8500 1250 9150 1250
Connection ~ 9150 1250
Text Label 8600 1450 0    50   ~ 0
DISP_RS
Text Label 8600 1550 0    50   ~ 0
DISP_SDA
Text Label 8600 1650 0    50   ~ 0
DISP_SCLK
Text Label 8600 1750 0    50   ~ 0
DISP_FMARK
Text Label 8600 1850 0    50   ~ 0
DISP_CS
Text Label 8600 1950 0    50   ~ 0
DISP_RESET
Wire Wire Line
	8500 1450 8600 1450
Wire Wire Line
	8600 1550 8500 1550
Wire Wire Line
	8500 1650 8600 1650
Wire Wire Line
	8600 1750 8500 1750
Wire Wire Line
	8500 1850 8600 1850
Wire Wire Line
	8600 1950 8500 1950
Wire Wire Line
	9500 1650 9500 1550
Wire Wire Line
	12650 1100 12900 1100
$Comp
L Device:C C2
U 1 1 5DAB0AFE
P 12900 1350
F 0 "C2" H 13015 1396 50  0000 L CNN
F 1 "0.1uF" H 13015 1305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 12938 1200 50  0001 C CNN
F 3 "~" H 12900 1350 50  0001 C CNN
	1    12900 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	12900 1200 12900 1100
Connection ~ 12900 1100
Wire Wire Line
	12900 1500 12900 1700
$Comp
L power:+3.3V #PWR0117
U 1 1 5DAB3EC4
P 13150 1100
F 0 "#PWR0117" H 13150 950 50  0001 C CNN
F 1 "+3.3V" H 13165 1273 50  0000 C CNN
F 2 "" H 13150 1100 50  0001 C CNN
F 3 "" H 13150 1100 50  0001 C CNN
	1    13150 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	12900 1100 13150 1100
Text Notes 7400 3900 0    50   ~ 0
Display module, Controller ST7789V
$Comp
L Connector:Conn_01x09_Female J2
U 1 1 5DABB4A4
P 6200 3550
F 0 "J2" H 6227 3576 50  0000 L CNN
F 1 "Conn_01x09_Female" H 6227 3485 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x09_P2.54mm_Vertical" H 6200 3550 50  0001 C CNN
F 3 "~" H 6200 3550 50  0001 C CNN
	1    6200 3550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0118
U 1 1 5DABB817
P 5650 3150
F 0 "#PWR0118" H 5650 3000 50  0001 C CNN
F 1 "+3.3V" H 5665 3323 50  0000 C CNN
F 2 "" H 5650 3150 50  0001 C CNN
F 3 "" H 5650 3150 50  0001 C CNN
	1    5650 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 3150 6000 3150
Wire Wire Line
	6000 3250 5650 3250
$Comp
L power:GND #PWR0119
U 1 1 5DABF01E
P 5550 3200
F 0 "#PWR0119" H 5550 2950 50  0001 C CNN
F 1 "GND" V 5555 3072 50  0000 R CNN
F 2 "" H 5550 3200 50  0001 C CNN
F 3 "" H 5550 3200 50  0001 C CNN
	1    5550 3200
	0    1    1    0   
$EndComp
Wire Wire Line
	6000 3350 5600 3350
Text Label 5600 3850 2    50   ~ 0
DISP_RESET
Wire Wire Line
	5650 3250 5650 3200
Wire Wire Line
	5650 3200 5550 3200
Wire Wire Line
	6000 3450 5600 3450
Text Label 5600 3450 2    50   ~ 0
DISP_SDA
Text Label 5600 3550 2    50   ~ 0
DISP_SCLK
Wire Wire Line
	6000 3550 5600 3550
Wire Wire Line
	6000 3650 5600 3650
Text Label 5600 3650 2    50   ~ 0
DISP_FMARK
Wire Wire Line
	6000 3750 5600 3750
Text Label 5600 3750 2    50   ~ 0
DISP_CS
Wire Wire Line
	6000 3850 5600 3850
Text Label 5600 3350 2    50   ~ 0
DISP_RS
Text Label 3750 4250 0    50   ~ 0
DISP_CS
Text Label 3750 4050 0    50   ~ 0
DISP_SCLK
Text Label 3750 3950 0    50   ~ 0
DISP_SDA
Text Label 3750 3850 0    50   ~ 0
DISP_RS
Text Label 3750 4350 0    50   ~ 0
DISP_RESET
Wire Wire Line
	3750 3950 3500 3950
Wire Wire Line
	3500 4050 3750 4050
Wire Wire Line
	3500 4150 3750 4150
Wire Wire Line
	3500 4250 3750 4250
Wire Wire Line
	3500 4350 3750 4350
Wire Wire Line
	3750 3150 3500 3150
Wire Wire Line
	3100 4550 3100 4750
Wire Wire Line
	2600 4550 3100 4550
$Comp
L power:GND #PWR0120
U 1 1 5DB0326D
P 3100 4750
F 0 "#PWR0120" H 3100 4500 50  0001 C CNN
F 1 "GND" H 3105 4577 50  0000 C CNN
F 2 "" H 3100 4750 50  0001 C CNN
F 3 "" H 3100 4750 50  0001 C CNN
	1    3100 4750
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0121
U 1 1 5DB03517
P 2600 1200
F 0 "#PWR0121" H 2600 1050 50  0001 C CNN
F 1 "+3.3V" H 2615 1373 50  0000 C CNN
F 2 "" H 2600 1200 50  0001 C CNN
F 3 "" H 2600 1200 50  0001 C CNN
	1    2600 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2600 1200 2600 1350
Wire Notes Line
	5100 4000 5100 550 
Wire Notes Line
	5100 550  9900 550 
Wire Notes Line
	9900 550  9900 4000
Wire Notes Line
	5100 4000 9900 4000
Wire Notes Line
	600  7700 2450 7700
Wire Notes Line
	600  6300 600  7700
Text Notes 1000 7550 0    50   ~ 0
SWD programming interface
Text Label 3750 4150 0    50   ~ 0
DISP_FMARK
Wire Wire Line
	3750 3850 3500 3850
$Comp
L Device:R R3
U 1 1 5DB1F5A6
P 3200 6850
F 0 "R3" V 3407 6850 50  0000 C CNN
F 1 "1.5K" V 3316 6850 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 3130 6850 50  0001 C CNN
F 3 "~" H 3200 6850 50  0001 C CNN
	1    3200 6850
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D1
U 1 1 5DB1F78E
P 3600 6850
F 0 "D1" H 3592 6595 50  0000 C CNN
F 1 "LED" H 3592 6686 50  0000 C CNN
F 2 "LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3600 6850 50  0001 C CNN
F 3 "~" H 3600 6850 50  0001 C CNN
	1    3600 6850
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0122
U 1 1 5DB1F81C
P 3850 7000
F 0 "#PWR0122" H 3850 6750 50  0001 C CNN
F 1 "GND" H 3855 6827 50  0000 C CNN
F 2 "" H 3850 7000 50  0001 C CNN
F 3 "" H 3850 7000 50  0001 C CNN
	1    3850 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3750 6850 3850 6850
Wire Wire Line
	3850 6850 3850 7000
Wire Wire Line
	3450 6850 3350 6850
Text Label 3050 6850 2    50   ~ 0
BRD_LED_P13
Wire Wire Line
	3500 2650 3750 2650
Text Label 3750 2650 0    50   ~ 0
BRD_LED_P13
Wire Wire Line
	9150 1650 9350 1650
$Comp
L power:GND #PWR0126
U 1 1 5DB9DB9C
P 9350 1750
F 0 "#PWR0126" H 9350 1500 50  0001 C CNN
F 1 "GND" H 9355 1577 50  0000 C CNN
F 2 "" H 9350 1750 50  0001 C CNN
F 3 "" H 9350 1750 50  0001 C CNN
	1    9350 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	9350 1750 9350 1650
Connection ~ 9350 1650
Wire Wire Line
	9350 1650 9500 1650
Wire Notes Line
	2500 7700 4100 7700
Wire Notes Line
	4100 7700 4100 6300
Text Notes 2900 7550 0    50   ~ 0
Onboard RED LED
$Comp
L Regulator_Linear:LP2985-2.8 U7
U 1 1 5DB52AB5
P 1650 10350
F 0 "U7" H 1650 10692 50  0000 C CNN
F 1 "LP2985-2.8" H 1650 10601 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5" H 1650 10675 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/lp2985.pdf" H 1650 10350 50  0001 C CNN
	1    1650 10350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0128
U 1 1 5DB59877
P 1650 10850
F 0 "#PWR0128" H 1650 10600 50  0001 C CNN
F 1 "GND" H 1655 10677 50  0000 C CNN
F 2 "" H 1650 10850 50  0001 C CNN
F 3 "" H 1650 10850 50  0001 C CNN
	1    1650 10850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C7
U 1 1 5DB64277
P 1000 10550
F 0 "C7" H 1115 10596 50  0000 L CNN
F 1 "0.1uF" H 1115 10505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1038 10400 50  0001 C CNN
F 3 "~" H 1000 10550 50  0001 C CNN
	1    1000 10550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1250 10350 1100 10350
Wire Wire Line
	1100 10350 1100 10250
Connection ~ 1100 10250
Wire Wire Line
	1100 10250 1250 10250
$Comp
L power:+2V8 #PWR0129
U 1 1 5DB80F86
P 2500 10150
F 0 "#PWR0129" H 2500 10000 50  0001 C CNN
F 1 "+2V8" H 2515 10323 50  0000 C CNN
F 2 "" H 2500 10150 50  0001 C CNN
F 3 "" H 2500 10150 50  0001 C CNN
	1    2500 10150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C12
U 1 1 5DB814C8
P 2150 10550
F 0 "C12" H 2200 10650 50  0000 L CNN
F 1 "0.1uF" H 2200 10450 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2188 10400 50  0001 C CNN
F 3 "~" H 2150 10550 50  0001 C CNN
	1    2150 10550
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0130
U 1 1 5DB8F3C8
P 2300 8000
F 0 "#PWR0130" H 2300 7850 50  0001 C CNN
F 1 "+3.3V" H 2315 8173 50  0000 C CNN
F 2 "" H 2300 8000 50  0001 C CNN
F 3 "" H 2300 8000 50  0001 C CNN
	1    2300 8000
	1    0    0    -1  
$EndComp
$Comp
L Device:C C10
U 1 1 5DB89395
P 2050 8350
F 0 "C10" H 2165 8396 50  0000 L CNN
F 1 "0.1uF" H 2165 8305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2088 8200 50  0001 C CNN
F 3 "~" H 2050 8350 50  0001 C CNN
	1    2050 8350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0131
U 1 1 5DB88504
P 1650 8600
F 0 "#PWR0131" H 1650 8350 50  0001 C CNN
F 1 "GND" H 1655 8427 50  0000 C CNN
F 2 "" H 1650 8600 50  0001 C CNN
F 3 "" H 1650 8600 50  0001 C CNN
	1    1650 8600
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:MCP1700-3302E_SOT23 U5
U 1 1 5DBB69D4
P 1650 8100
F 0 "U5" H 1650 8342 50  0000 C CNN
F 1 "MCP1700-3302E_SOT23" H 1650 8251 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 1650 8325 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001826C.pdf" H 1650 8100 50  0001 C CNN
	1    1650 8100
	1    0    0    -1  
$EndComp
Wire Notes Line
	4100 6300 2500 6300
Wire Notes Line
	2500 6300 2500 7700
Wire Notes Line
	2450 6300 600  6300
Wire Notes Line
	2450 7700 2450 6300
$Comp
L Device:C C9
U 1 1 5DBC7BF7
P 1200 8350
F 0 "C9" H 1315 8396 50  0000 L CNN
F 1 "0.1uF" H 1315 8305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1238 8200 50  0001 C CNN
F 3 "~" H 1200 8350 50  0001 C CNN
	1    1200 8350
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR0132
U 1 1 5DBDB7DD
P 950 8050
F 0 "#PWR0132" H 950 7900 50  0001 C CNN
F 1 "+5V" H 965 8223 50  0000 C CNN
F 2 "" H 950 8050 50  0001 C CNN
F 3 "" H 950 8050 50  0001 C CNN
	1    950  8050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1650 8400 1650 8550
Connection ~ 1650 8550
Wire Wire Line
	1650 8550 1650 8600
Wire Wire Line
	1650 10750 1650 10850
Wire Wire Line
	1650 10750 1650 10650
Connection ~ 1650 10750
Wire Wire Line
	1650 10750 2150 10750
Wire Wire Line
	2150 10750 2150 10700
Wire Wire Line
	2150 10400 2150 10350
Wire Wire Line
	2150 10350 2050 10350
Wire Wire Line
	1950 8100 2050 8100
Wire Wire Line
	2050 8200 2050 8100
Wire Wire Line
	2050 8500 2050 8550
Wire Wire Line
	2050 8550 1650 8550
Wire Wire Line
	1200 8200 1200 8100
Wire Wire Line
	1200 8100 1350 8100
Wire Wire Line
	1200 8500 1200 8550
Wire Wire Line
	1200 8550 1650 8550
Connection ~ 1200 8100
Wire Wire Line
	950  8100 950  8050
Wire Wire Line
	950  8100 1200 8100
Wire Wire Line
	2050 8100 2300 8100
Wire Wire Line
	2300 8100 2300 8000
Connection ~ 2050 8100
$Comp
L Regulator_Linear:MCP1700-1802E_SOT23 U6
U 1 1 5DCC293E
P 1650 9150
F 0 "U6" H 1650 9392 50  0000 C CNN
F 1 "MCP1700-1802E_SOT23" H 1650 9301 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 1650 9375 50  0001 C CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001826D.pdf" H 1650 9150 50  0001 C CNN
	1    1650 9150
	1    0    0    -1  
$EndComp
$Comp
L power:+1V8 #PWR0133
U 1 1 5DCCE61A
P 2300 8950
F 0 "#PWR0133" H 2300 8800 50  0001 C CNN
F 1 "+1V8" H 2315 9123 50  0000 C CNN
F 2 "" H 2300 8950 50  0001 C CNN
F 3 "" H 2300 8950 50  0001 C CNN
	1    2300 8950
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 9150 2300 8950
$Comp
L Device:C C11
U 1 1 5DCD6694
P 2050 9400
F 0 "C11" H 2165 9446 50  0000 L CNN
F 1 "0.1uF" H 2165 9355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2088 9250 50  0001 C CNN
F 3 "~" H 2050 9400 50  0001 C CNN
	1    2050 9400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1650 9600 1650 9450
Wire Wire Line
	950  9150 950  8950
Wire Wire Line
	950  9150 1150 9150
$Comp
L Device:C C8
U 1 1 5DCFF867
P 1150 9400
F 0 "C8" H 1265 9446 50  0000 L CNN
F 1 "0.1uF" H 1265 9355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1188 9250 50  0001 C CNN
F 3 "~" H 1150 9400 50  0001 C CNN
	1    1150 9400
	1    0    0    -1  
$EndComp
Wire Wire Line
	1150 9250 1150 9150
Connection ~ 1150 9150
Wire Wire Line
	1150 9150 1350 9150
Wire Wire Line
	1950 9150 2050 9150
Connection ~ 2050 9150
Wire Wire Line
	2050 9150 2300 9150
Wire Wire Line
	2050 9550 2050 9600
Wire Wire Line
	2050 9600 1650 9600
Wire Wire Line
	1650 9600 1150 9600
Wire Wire Line
	1150 9600 1150 9550
Connection ~ 1650 9600
$Comp
L power:GND #PWR0135
U 1 1 5DD21C93
P 1650 9700
F 0 "#PWR0135" H 1650 9450 50  0001 C CNN
F 1 "GND" H 1655 9527 50  0000 C CNN
F 2 "" H 1650 9700 50  0001 C CNN
F 3 "" H 1650 9700 50  0001 C CNN
	1    1650 9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1650 9700 1650 9600
Wire Wire Line
	2050 9150 2050 9250
Wire Wire Line
	1000 10400 1000 10250
Wire Wire Line
	1000 10250 1100 10250
Wire Wire Line
	1000 10700 1000 10750
Wire Wire Line
	1000 10750 1650 10750
Wire Wire Line
	1000 10250 950  10250
Wire Wire Line
	950  10250 950  10150
Connection ~ 1000 10250
Text Notes 1150 11150 0    50   ~ 0
Diplsay & board supply
Wire Notes Line
	600  7750 600  11200
Wire Notes Line
	10050 550  10050 2300
Wire Notes Line
	10050 2300 13500 2300
Wire Notes Line
	13500 2300 13500 550 
Wire Notes Line
	13500 550  10050 550 
Text Notes 11350 2150 0    50   ~ 0
SPI FLASH Memory\n
$Comp
L MPU-9250:MPU-9250 U8
U 1 1 5DDDC579
P 7300 5550
F 0 "U8" H 7300 6515 50  0000 C CNN
F 1 "MPU-9250" H 7300 6424 50  0000 C CNN
F 2 "QFN40P300X300X105-24N" H 7300 5550 50  0001 L BNN
F 3 "QFN-24 TDK InvenSense" H 7300 5550 50  0001 L BNN
F 4 "SMD Gyroscope/Accelerometer/Magnetometer Sensor; 9-AXIS" H 7300 5550 50  0001 L BNN "Field4"
F 5 "None" H 7300 5550 50  0001 L BNN "Field5"
F 6 "MPU-9250" H 7300 5550 50  0001 L BNN "Field6"
F 7 "Unavailable" H 7300 5550 50  0001 L BNN "Field7"
F 8 "TDK InvenSense" H 7300 5550 50  0001 L BNN "Field8"
	1    7300 5550
	1    0    0    -1  
$EndComp
Text Label 5550 5150 2    50   ~ 0
MPU_SYNC
Text Label 9100 5150 0    0    ~ 0
MPU_INT
Text Label 9100 5150 0    0    ~ 0
MPU_INT
Text Label 8400 5150 0    50   ~ 0
MPU_INT
Text Label 5600 5550 2    50   ~ 0
MPU_SDA
Text Label 5600 5450 2    50   ~ 0
MPU_SCLK
$Comp
L power:+3.3V #PWR0137
U 1 1 5DE987C7
P 9650 4700
F 0 "#PWR0137" H 9650 4550 50  0001 C CNN
F 1 "+3.3V" H 9665 4873 50  0000 C CNN
F 2 "" H 9650 4700 50  0001 C CNN
F 3 "" H 9650 4700 50  0001 C CNN
	1    9650 4700
	1    0    0    -1  
$EndComp
$Comp
L Device:C C16
U 1 1 5DEB8E69
P 9550 5250
F 0 "C16" H 9600 5350 50  0000 L CNN
F 1 "0.1uF" H 9600 5150 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9588 5100 50  0001 C CNN
F 3 "~" H 9550 5250 50  0001 C CNN
	1    9550 5250
	1    0    0    -1  
$EndComp
$Comp
L Device:C C15
U 1 1 5DECE6BF
P 9300 5250
F 0 "C15" H 9350 5350 50  0000 L CNN
F 1 "10nF" H 9300 5100 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9338 5100 50  0001 C CNN
F 3 "~" H 9300 5250 50  0001 C CNN
	1    9300 5250
	1    0    0    -1  
$EndComp
Wire Wire Line
	9650 4850 9650 4700
Wire Wire Line
	9650 4950 9650 4850
Connection ~ 9650 4850
Wire Wire Line
	9550 5100 9550 4850
Wire Wire Line
	9300 5100 9300 4950
Wire Wire Line
	9300 4950 9650 4950
$Comp
L power:GND #PWR0138
U 1 1 5DF16787
P 9450 5550
F 0 "#PWR0138" H 9450 5300 50  0001 C CNN
F 1 "GND" H 9455 5377 50  0000 C CNN
F 2 "" H 9450 5550 50  0001 C CNN
F 3 "" H 9450 5550 50  0001 C CNN
	1    9450 5550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9300 5400 9300 5500
Wire Wire Line
	9300 5500 9450 5500
Wire Wire Line
	9450 5500 9450 5550
Wire Wire Line
	9450 5500 9550 5500
Wire Wire Line
	9550 5500 9550 5400
Connection ~ 9450 5500
Connection ~ 9550 4850
Wire Wire Line
	9550 4850 9650 4850
Wire Wire Line
	8100 4950 9050 4950
Connection ~ 9300 4950
Wire Wire Line
	8100 5550 9050 5550
$Comp
L Device:C C14
U 1 1 5DF92F6B
P 9050 5750
F 0 "C14" H 9165 5796 50  0000 L CNN
F 1 "0.1uF" H 9165 5705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9088 5600 50  0001 C CNN
F 3 "~" H 9050 5750 50  0001 C CNN
	1    9050 5750
	1    0    0    -1  
$EndComp
Wire Wire Line
	9050 5600 9050 5550
$Comp
L power:GND #PWR0139
U 1 1 5DFAA088
P 8350 6300
F 0 "#PWR0139" H 8350 6050 50  0001 C CNN
F 1 "GND" H 8355 6127 50  0000 C CNN
F 2 "" H 8350 6300 50  0001 C CNN
F 3 "" H 8350 6300 50  0001 C CNN
	1    8350 6300
	1    0    0    -1  
$EndComp
Wire Wire Line
	8100 6150 8350 6150
Wire Wire Line
	8350 6150 8350 6300
Wire Wire Line
	8100 5750 8350 5750
Wire Wire Line
	8350 5750 8350 6150
Connection ~ 8350 6150
Wire Wire Line
	9050 5550 9050 4950
Connection ~ 9050 5550
Connection ~ 9050 4950
Wire Wire Line
	9050 4950 9300 4950
$Comp
L power:+3.3V #PWR0140
U 1 1 5E03DFC9
P 6000 4450
F 0 "#PWR0140" H 6000 4300 50  0001 C CNN
F 1 "+3.3V" H 6015 4623 50  0000 C CNN
F 2 "" H 6000 4450 50  0001 C CNN
F 3 "" H 6000 4450 50  0001 C CNN
	1    6000 4450
	1    0    0    -1  
$EndComp
Text Label 5600 5650 2    50   ~ 0
MPU_ADO
$Comp
L Device:R R5
U 1 1 5E056B20
P 6000 4850
F 0 "R5" H 6070 4896 50  0000 L CNN
F 1 "4.7k" H 6070 4805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 5930 4850 50  0001 C CNN
F 3 "~" H 6000 4850 50  0001 C CNN
	1    6000 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4600 6000 4700
Connection ~ 6000 4600
Wire Wire Line
	6000 4450 6000 4600
Wire Wire Line
	5600 5550 6000 5550
Wire Wire Line
	6000 5000 6000 5550
Connection ~ 6000 5550
Wire Wire Line
	6000 5550 6500 5550
Wire Wire Line
	5550 5150 6500 5150
Wire Wire Line
	5600 5650 6500 5650
$Comp
L Device:R R4
U 1 1 5E056FB6
P 5650 4850
F 0 "R4" H 5720 4896 50  0000 L CNN
F 1 "4.7k" H 5720 4805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 5580 4850 50  0001 C CNN
F 3 "~" H 5650 4850 50  0001 C CNN
	1    5650 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 5450 5650 5450
Wire Wire Line
	5650 5000 5650 5450
Connection ~ 5650 5450
Wire Wire Line
	5650 5450 6500 5450
Wire Wire Line
	5650 4700 5650 4600
Wire Wire Line
	5650 4600 6000 4600
Wire Wire Line
	6000 4600 6300 4600
Wire Wire Line
	6300 5350 6500 5350
$Comp
L Device:C C13
U 1 1 5E100695
P 8600 5750
F 0 "C13" H 8715 5796 50  0000 L CNN
F 1 "0.1uF" H 8715 5705 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 8638 5600 50  0001 C CNN
F 3 "~" H 8600 5750 50  0001 C CNN
	1    8600 5750
	1    0    0    -1  
$EndComp
Wire Wire Line
	8100 5350 8600 5350
Wire Wire Line
	8600 5350 8600 5600
$Comp
L power:GND #PWR0141
U 1 1 5E132299
P 8850 6000
F 0 "#PWR0141" H 8850 5750 50  0001 C CNN
F 1 "GND" H 8855 5827 50  0000 C CNN
F 2 "" H 8850 6000 50  0001 C CNN
F 3 "" H 8850 6000 50  0001 C CNN
	1    8850 6000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8850 6000 8600 6000
Wire Wire Line
	8600 6000 8600 5900
Wire Wire Line
	8850 6000 9050 6000
Wire Wire Line
	9050 6000 9050 5900
Connection ~ 8850 6000
Wire Notes Line
	9850 4200 5100 4200
Text Notes 6950 7050 0    50   ~ 0
Gyroscope & Accelerometer & Magnetometer with I2C interface
$Comp
L Connector:Conn_01x10_Female J4
U 1 1 5E17AF86
P 6450 6450
F 0 "J4" H 6350 6950 50  0000 C CNN
F 1 "Conn_01x10_Female" H 6400 5850 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x10_P2.54mm_Vertical" H 6450 6450 50  0001 C CNN
F 3 "~" H 6450 6450 50  0001 C CNN
	1    6450 6450
	1    0    0    -1  
$EndComp
Wire Notes Line
	5100 7150 9850 7150
Wire Notes Line
	5100 4200 5100 7150
Wire Notes Line
	9850 4200 9850 7150
$Comp
L power:+3.3V #PWR0142
U 1 1 5E18DF2A
P 5600 6000
F 0 "#PWR0142" H 5600 5850 50  0001 C CNN
F 1 "+3.3V" H 5615 6173 50  0000 C CNN
F 2 "" H 5600 6000 50  0001 C CNN
F 3 "" H 5600 6000 50  0001 C CNN
	1    5600 6000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0143
U 1 1 5E1A84C8
P 5600 6150
F 0 "#PWR0143" H 5600 5900 50  0001 C CNN
F 1 "GND" V 5605 6022 50  0000 R CNN
F 2 "" H 5600 6150 50  0001 C CNN
F 3 "" H 5600 6150 50  0001 C CNN
	1    5600 6150
	0    1    1    0   
$EndComp
Text Label 6050 6250 2    50   ~ 0
MPU_SCLK
Text Label 6050 6350 2    50   ~ 0
MPU_SDA
Text Label 6050 6650 2    50   ~ 0
MPU_ADO
Text Label 6050 6750 2    50   ~ 0
MPU_INT
$Comp
L Device:R R6
U 1 1 5E1EE4B7
P 6300 4850
F 0 "R6" H 6370 4896 50  0000 L CNN
F 1 "4.7k" H 6370 4805 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 6230 4850 50  0001 C CNN
F 3 "~" H 6300 4850 50  0001 C CNN
	1    6300 4850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 4700 6300 4600
Wire Wire Line
	6300 5000 6300 5350
Wire Wire Line
	5600 6050 6250 6050
Wire Wire Line
	5600 6050 5600 6000
Wire Wire Line
	5600 6150 6250 6150
Wire Wire Line
	6050 6250 6250 6250
Wire Wire Line
	6250 6350 6050 6350
Text Label 6050 6950 2    50   ~ 0
MPU_SYNC
Wire Wire Line
	6050 6650 6250 6650
Wire Wire Line
	6250 6750 6050 6750
Wire Wire Line
	6050 6950 6250 6950
Wire Wire Line
	8100 4850 8800 4850
Wire Wire Line
	8600 5350 8800 5350
Wire Wire Line
	8800 5350 8800 4850
Connection ~ 8600 5350
Connection ~ 8800 4850
Wire Wire Line
	8800 4850 9550 4850
Wire Wire Line
	8100 5150 8300 5150
$Comp
L power:+3.3V #PWR0144
U 1 1 5E322130
P 8300 4450
F 0 "#PWR0144" H 8300 4300 50  0001 C CNN
F 1 "+3.3V" H 8315 4623 50  0000 C CNN
F 2 "" H 8300 4450 50  0001 C CNN
F 3 "" H 8300 4450 50  0001 C CNN
	1    8300 4450
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 5E3229F5
P 8300 4650
F 0 "R7" H 8370 4696 50  0000 L CNN
F 1 "3.3k" H 8370 4605 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 8230 4650 50  0001 C CNN
F 3 "~" H 8300 4650 50  0001 C CNN
	1    8300 4650
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 4500 8300 4450
Wire Wire Line
	8300 4800 8300 5150
Connection ~ 8300 5150
Wire Wire Line
	8300 5150 8400 5150
$Comp
L power:+5V #PWR0145
U 1 1 5E352503
P 4100 8000
F 0 "#PWR0145" H 4100 7850 50  0001 C CNN
F 1 "+5V" H 4115 8173 50  0000 C CNN
F 2 "" H 4100 8000 50  0001 C CNN
F 3 "" H 4100 8000 50  0001 C CNN
	1    4100 8000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0146
U 1 1 5E3630C9
P 3050 8850
F 0 "#PWR0146" H 3050 8600 50  0001 C CNN
F 1 "GND" H 3055 8677 50  0000 C CNN
F 2 "" H 3050 8850 50  0001 C CNN
F 3 "" H 3050 8850 50  0001 C CNN
	1    3050 8850
	1    0    0    -1  
$EndComp
$Comp
L Device:Polyfuse F1
U 1 1 5E382ABB
P 3750 8100
F 0 "F1" V 3525 8100 50  0000 C CNN
F 1 "Polyfuse" V 3616 8100 50  0000 C CNN
F 2 "Fuse:Fuse_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 3800 7900 50  0001 L CNN
F 3 "~" H 3750 8100 50  0001 C CNN
	1    3750 8100
	0    1    1    0   
$EndComp
Wire Wire Line
	4100 8000 4100 8100
Wire Wire Line
	4100 8100 3900 8100
Wire Wire Line
	3600 8100 3400 8100
Wire Wire Line
	3000 8700 3000 8750
Wire Wire Line
	3000 8750 3050 8750
Wire Wire Line
	3050 8750 3050 8850
Wire Wire Line
	3050 8750 3100 8750
Wire Wire Line
	3100 8750 3100 8700
Connection ~ 3050 8750
$Comp
L Connector:USB_B_Mini J3
U 1 1 5E3D5CF4
P 3100 8300
F 0 "J3" H 3157 8767 50  0000 C CNN
F 1 "USB_B_Mini" H 3157 8676 50  0000 C CNN
F 2 "Connector_USB:USB_Mini-B_Lumberg_2486_01_Horizontal" H 3250 8250 50  0001 C CNN
F 3 "~" H 3250 8250 50  0001 C CNN
	1    3100 8300
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0114
U 1 1 5E48CE40
P 950 8950
F 0 "#PWR0114" H 950 8800 50  0001 C CNN
F 1 "+3.3V" H 965 9123 50  0000 C CNN
F 2 "" H 950 8950 50  0001 C CNN
F 3 "" H 950 8950 50  0001 C CNN
	1    950  8950
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0116
U 1 1 5E48DD63
P 950 10150
F 0 "#PWR0116" H 950 10000 50  0001 C CNN
F 1 "+3.3V" H 965 10323 50  0000 C CNN
F 2 "" H 950 10150 50  0001 C CNN
F 3 "" H 950 10150 50  0001 C CNN
	1    950  10150
	1    0    0    -1  
$EndComp
$Comp
L Device:C C4
U 1 1 5E49C3BA
P 2500 10450
F 0 "C4" H 2550 10550 50  0000 L CNN
F 1 "0.1uF" H 2500 10350 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2538 10300 50  0001 C CNN
F 3 "~" H 2500 10450 50  0001 C CNN
	1    2500 10450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2150 10750 2500 10750
Connection ~ 2150 10750
Wire Wire Line
	2050 10250 2500 10250
Wire Wire Line
	2500 10250 2500 10300
Wire Wire Line
	2500 10250 2500 10150
Connection ~ 2500 10250
Wire Wire Line
	2500 10600 2500 10750
Wire Notes Line
	600  11200 2750 11200
Wire Notes Line
	2750 7750 2750 11200
Wire Notes Line
	600  7750 2750 7750
$Comp
L Connector:Conn_01x06_Female J5
U 1 1 5E566FEB
P 10850 1900
F 0 "J5" H 10878 1876 50  0000 L CNN
F 1 "Conn_01x06_Female" H 10878 1785 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x06_P2.54mm_Vertical" H 10850 1900 50  0001 C CNN
F 3 "~" H 10850 1900 50  0001 C CNN
	1    10850 1900
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0123
U 1 1 5E568227
P 10150 1650
F 0 "#PWR0123" H 10150 1500 50  0001 C CNN
F 1 "+3.3V" H 10165 1823 50  0000 C CNN
F 2 "" H 10150 1650 50  0001 C CNN
F 3 "" H 10150 1650 50  0001 C CNN
	1    10150 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	10650 1700 10150 1700
Wire Wire Line
	10150 1700 10150 1650
Text Label 10500 1800 2    50   ~ 0
FLASH_CS
Wire Wire Line
	10500 1800 10650 1800
Text Label 10550 1900 2    50   ~ 0
FLASH_MISO
Wire Wire Line
	10550 1900 10650 1900
$Comp
L power:GND #PWR0124
U 1 1 5E596D1A
P 10350 2000
F 0 "#PWR0124" H 10350 1750 50  0001 C CNN
F 1 "GND" V 10355 1872 50  0000 R CNN
F 2 "" H 10350 2000 50  0001 C CNN
F 3 "" H 10350 2000 50  0001 C CNN
	1    10350 2000
	0    1    1    0   
$EndComp
Wire Wire Line
	10350 2000 10650 2000
Text Label 10500 2100 2    50   ~ 0
FLASH_SCK
Wire Wire Line
	10500 2100 10650 2100
Text Label 10500 2200 2    50   ~ 0
FLASH_MOSI
Wire Wire Line
	10500 2200 10650 2200
$Comp
L Connector:Conn_01x04_Male J6
U 1 1 5E5D9D4C
P 4700 8250
F 0 "J6" H 4808 8531 50  0000 C CNN
F 1 "Conn_01x04_Male" H 4808 8440 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 4700 8250 50  0001 C CNN
F 3 "~" H 4700 8250 50  0001 C CNN
	1    4700 8250
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0125
U 1 1 5E5DA91F
P 5050 8500
F 0 "#PWR0125" H 5050 8250 50  0001 C CNN
F 1 "GND" H 5055 8327 50  0000 C CNN
F 2 "" H 5050 8500 50  0001 C CNN
F 3 "" H 5050 8500 50  0001 C CNN
	1    5050 8500
	1    0    0    -1  
$EndComp
Wire Wire Line
	5050 8500 5050 8450
Wire Wire Line
	5050 8450 4900 8450
$Comp
L power:+3.3V #PWR0127
U 1 1 5E5EAD9C
P 5300 8150
F 0 "#PWR0127" H 5300 8000 50  0001 C CNN
F 1 "+3.3V" H 5315 8323 50  0000 C CNN
F 2 "" H 5300 8150 50  0001 C CNN
F 3 "" H 5300 8150 50  0001 C CNN
	1    5300 8150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5300 8150 4900 8150
Text Label 4950 8350 0    50   ~ 0
UART1_RX
Wire Wire Line
	4950 8350 4900 8350
Text Label 4950 8250 0    50   ~ 0
UART1_TX
Wire Wire Line
	4950 8250 4900 8250
$Comp
L Switch:SW_Push SW1
U 1 1 5E6439F5
P 3300 9900
F 0 "SW1" H 3300 10185 50  0000 C CNN
F 1 "SW_Push" H 3300 10094 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_SPST_SKQG_WithStem" H 3300 10100 50  0001 C CNN
F 3 "~" H 3300 10100 50  0001 C CNN
	1    3300 9900
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0134
U 1 1 5E645807
P 3700 9500
F 0 "#PWR0134" H 3700 9350 50  0001 C CNN
F 1 "+3.3V" H 3715 9673 50  0000 C CNN
F 2 "" H 3700 9500 50  0001 C CNN
F 3 "" H 3700 9500 50  0001 C CNN
	1    3700 9500
	1    0    0    -1  
$EndComp
$Comp
L Device:R R8
U 1 1 5E659671
P 3700 9700
F 0 "R8" H 3770 9746 50  0000 L CNN
F 1 "2k" H 3770 9655 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 3630 9700 50  0001 C CNN
F 3 "~" H 3700 9700 50  0001 C CNN
	1    3700 9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 9900 3700 9900
Wire Wire Line
	3700 9900 3700 9850
Wire Wire Line
	3700 9550 3700 9500
$Comp
L power:GND #PWR0136
U 1 1 5E67A207
P 3000 10500
F 0 "#PWR0136" H 3000 10250 50  0001 C CNN
F 1 "GND" H 3005 10327 50  0000 C CNN
F 2 "" H 3000 10500 50  0001 C CNN
F 3 "" H 3000 10500 50  0001 C CNN
	1    3000 10500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 10250 3100 10250
Wire Wire Line
	3000 9900 3100 9900
$Comp
L Device:R R9
U 1 1 5E6ACBD3
P 3900 10050
F 0 "R9" H 3970 10096 50  0000 L CNN
F 1 "2k" H 3970 10005 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" V 3830 10050 50  0001 C CNN
F 3 "~" H 3900 10050 50  0001 C CNN
	1    3900 10050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3500 10250 3900 10250
Wire Wire Line
	3900 10250 3900 10200
$Comp
L power:+3.3V #PWR0147
U 1 1 5E6D0DE8
P 3900 9750
F 0 "#PWR0147" H 3900 9600 50  0001 C CNN
F 1 "+3.3V" H 3915 9923 50  0000 C CNN
F 2 "" H 3900 9750 50  0001 C CNN
F 3 "" H 3900 9750 50  0001 C CNN
	1    3900 9750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 9750 3900 9900
$Comp
L Switch:SW_Push SW2
U 1 1 5E644C11
P 3300 10250
F 0 "SW2" H 3300 10535 50  0000 C CNN
F 1 "SW_Push" H 3300 10444 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_SPST_SKQG_WithStem" H 3300 10450 50  0001 C CNN
F 3 "~" H 3300 10450 50  0001 C CNN
	1    3300 10250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 9900 3000 10250
Connection ~ 3000 10250
Wire Wire Line
	3000 10250 3000 10500
$Comp
L Switch:SW_Push RESET
U 1 1 5E7B968E
P 5100 9850
F 0 "RESET" H 5100 10135 50  0000 C CNN
F 1 "SW_Push" H 5100 10044 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_SPST_SKQG_WithStem" H 5100 10050 50  0001 C CNN
F 3 "~" H 5100 10050 50  0001 C CNN
	1    5100 9850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0148
U 1 1 5E7BB451
P 5350 10100
F 0 "#PWR0148" H 5350 9850 50  0001 C CNN
F 1 "GND" H 5355 9927 50  0000 C CNN
F 2 "" H 5350 10100 50  0001 C CNN
F 3 "" H 5350 10100 50  0001 C CNN
	1    5350 10100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 10100 5350 9850
Wire Wire Line
	5350 9850 5300 9850
Text Label 4900 9850 2    50   ~ 0
SWD_RESET
$EndSCHEMATC
