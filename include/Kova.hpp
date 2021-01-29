/**
* @description Bu programda heap bellek b�lgesinde �e�itli nesneler olu�turulur ve pointerler ile nesnelerin y�netilmesi sa�lan�r.
* @course 1. ��retim- B Grubu
* @assignment 1. �dev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#ifndef KOVA_HPP
#define KOVA_HPP
#include "Top.hpp"

class Kova
{
private:
	int kovarengi;
	Top* Toop;

public:

	Kova();

	void topolustur();

	int  rengibas();

	void kovabas();

	void topsil();

	Top* topadresal();

	Top* setadres(Top*);
};
#endif