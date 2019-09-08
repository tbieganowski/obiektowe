#pragma once
#include <iostream>
#include <string>
#include "game.h"


class TXTgame :
	public game
{
public:

	TXTgame();
	TXTgame(std::string, int);
	virtual ~TXTgame();
	//???	virtual void wyswietl() {std::cout<<"TXTgame"<<std::endl;}
	virtual void wyswietl(); // {std::cout<<"TXTgame"<<std::endl;}
};

