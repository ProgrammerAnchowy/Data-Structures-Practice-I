/**
* @description Bu programda heap bellek b�lgesinde �e�itli nesneler olu�turulur ve pointerler ile nesnelerin y�netilmesi sa�lan�r.
* @course 1. ��retim- B Grubu
* @assignment 1. �dev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#include "Top.hpp"
#include"Kova.hpp"
#include<iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void Top::harfiata(char x)
{
	harf = x;
}

char Top::harfial()
{
	return harf;
}