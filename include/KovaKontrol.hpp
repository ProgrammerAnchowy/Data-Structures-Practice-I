/**
* @description Bu programda heap bellek b�lgesinde �e�itli nesneler olu�turulur ve pointerler ile nesnelerin y�netilmesi sa�lan�r.
* @course 1. ��retim- B Grubu
* @assignment 1. �dev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#ifndef KOVAKONTROL_HPP
#define KOVAKONTROL_HPP
#include "Kova.hpp"

class KovaKontrol
{
private:
	int kovasayisi;

	Kova** Kovadizisi;//Double pointer

public:

	KovaKontrol(int kovasayisi);

	~KovaKontrol();

	void kovalariolustur();

	void kovalaribas();

	void toplarikoy();//

	void toplarisil();

	void kovalariterstenyerlestir();

	void kovalaridegis(int a, int b);

	void toplaridegis(int,int);

	void toplariterstenyerlestir();

};
#endif
