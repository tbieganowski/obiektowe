#ifndef GAME_H
#define GAME_H


#include <string>
#include <iostream>
#include <fstream>

#include "windows.h"
#include "plansza.h"


class game : public plansza
{
public:
	game();
	game(std::string, int);
	virtual ~game();

	virtual void wyswietl() {};  //???
	void start(std::string);
	void wczytajPlik(std::string);

};

#endif // GAME_H
