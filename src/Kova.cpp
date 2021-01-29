/**
* @description Bu programda heap bellek b�lgesinde �e�itli nesneler olu�turulur ve pointerler ile nesnelerin y�netilmesi sa�lan�r.
* @course 1. ��retim- B Grubu
* @assignment 1. �dev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#include <cstdlib>
#include <iostream>
#include "Kova.hpp"
#include "Top.hpp"
using namespace std;

Kova::Kova()
{
	Toop = nullptr;
	kovarengi = rand() % 13 + 1;//
}

void Kova::topolustur()
{
	Toop = new Top();
	char harfmiz = rand() % 26 + 'A';
	Toop->harfiata(harfmiz);
}

void Kova::topsil()
{
	if (Toop != nullptr)
	{
		Toop = nullptr;
	}
}


int Kova::rengibas()
{
	return kovarengi;
}


void Kova::kovabas() {
	char top;
	if (Toop == nullptr)
	{
		top = '-';
	}
	else
	{
		top=Toop->harfial();
	}

	cout << "    . | .  " << endl;
	cout << "   .     . " << endl;
	cout << "  .       ." << endl;
	cout << "  #       #" << endl;
	cout << "  #   " << top << "   #" << endl;
	cout << "  #       #" << endl;
	cout << "  #########" << endl;
	cout << "Kova Adresi: " << this << endl;
	cout << "Topun Adresi:" << this->Toop << endl<<endl;
}


Top* Kova::setadres(Top *a) 
{
	Toop = a;
	return Toop;
}

Top* Kova::topadresal()
{
	return Toop;
}



