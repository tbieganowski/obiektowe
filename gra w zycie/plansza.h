#ifndef PLANSZA_H
#define PLANSZA_H

#include <iostream>
#include <string>

#include "komorka.h"

using namespace std;

class plansza
{
public:
	plansza();
	plansza(int);
	~plansza();

	void setRozmiar(int);
	void sprawdzSasiadow();
	void copyTab();
	void clearTab();
	int getRozmiar();

protected:

	komorka ** tab1;
	komorka ** tab2;

private:

	int rozmiar;

	//???
	//friend class game;

};

#endif // PLANSZA_H
