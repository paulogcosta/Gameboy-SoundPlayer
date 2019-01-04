/*========================================
	Programmed by P.G.Costa(S.L.)
==========================================*/
#include<stdio.h>
#include<stdlib.h>
#include<gb/gb.h>

int notes_frequency[] = {44, 156, 262, 363, 457, 547, 631, 710, 786, 854, 923, 986,1046, 1102, 1155, 1205, 1253, 1297, 1339, 1379, 1417, 1452, 1486, 1517,1546, 1575, 1602, 1627, 1650, 1673, 1694, 1714, 1732, 1750, 1767, 1783,1798, 1812, 1825, 1837, 1849, 1860, 1871, 1881, 1890, 1899, 1907, 1915,1923, 1930, 1936, 1943, 1949, 1954, 1959, 1964, 1969, 1974, 1978, 1982,1985, 1988, 1992, 1995, 1998, 2001, 2004, 2006, 2009, 2011, 2013, 2015,0};

void play_note_S1(int index,int duration){
	//Square1
	NR10_REG = 0x00;
	NR11_REG = 0x84;
	NR12_REG = 0xa1;
	NR13_REG = notes_frequency[index];
	NR14_REG = 0x80U | ((UWORD)notes_frequency[index]>>8);

	//Square2
	NR21_REG = 0x00;
	NR22_REG = 0xa1;
	NR23_REG = notes_frequency[index+24];
	NR24_REG = 0x80U | ((UWORD)notes_frequency[index+24]>>8);
	delay(duration);
	
}

