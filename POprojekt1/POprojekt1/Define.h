#pragma once

#include <iostream>

using namespace std;

#define ILOSC_GATUNKOW 10 

#define WILK 'W'
#define OWCA 'O'
#define LIS 'L'
#define ZOLW 'Z'
#define ANTYLOPA 'A'

#define GRASS '"'
#define MLECZ '@' 
#define GUARANA '&' //guarana
#define WILCZE_JAGODY '*' //wilcze jagody
#define BARSZ_SOSNOWSKIEGO '$'

#define ESC 0x1b			
#define ARROW_UP 72		
#define ARROW_DOWN 80
#define ARROW_RIGHT 77
#define ARROW_LEFT 75
#define ENTER 0x0d 

struct POZYCJA {
	int x;
	int y;
};
