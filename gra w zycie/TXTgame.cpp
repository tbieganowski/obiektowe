#include "TXTgame.h"



TXTgame::TXTgame()
{

}

TXTgame::TXTgame(std::string a, int b) :
	game(a, b)
{
}


TXTgame::~TXTgame()
{
}

void TXTgame::wyswietl() //??? {std::cout<<"TXTgame"<<std::endl;}

//void TXTgame::wyswietl()
{

	Sleep(200);
	system("cls");

	for (int i = 1; i < plansza::getRozmiar(); i++)
	{
		for (int j = 1; j < plansza::getRozmiar(); j++)
		{
			if (plansza::tab1[i][j].getStan() == true)
			{
				cout << "x ";
			}
			else
			{
				cout << "o ";
			}
		}
		cout << endl;
	}
	cout << endl;
}
