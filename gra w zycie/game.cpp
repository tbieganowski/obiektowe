#include "game.h"


game::game()
{
	//ctor
}

game::game(std::string a, int b) :
	plansza(b)
{
	start(a);
}

game::~game()
{
	//std::cout << "game" << std::endl; //???
}

void game::start(std::string a)
{
	//std::cout << "f_start" << std::endl; //???

	wczytajPlik(a);

	//   std::cout<<"f_start2"<<std::endl; //???

	for (int i = 0; i < 100; i++)
	{
		wyswietl();
		//std::cout<<"i= "<<i<<std::endl; //???
		//std::cout<<"f_start11"<<std::endl; //???
		plansza::sprawdzSasiadow();
		//std::cout<<"f_start12"<<std::endl; //???
		plansza::copyTab();
		//std::cout<<"f_start13"<<std::endl; //???
		plansza::clearTab();
		//std::cout<<"f_start14"<<std::endl; //???
		//Sleep(300);
		//system("cls");
	}
	//   std::cout<<"f_start3"<<std::endl; //???
}

void game::wczytajPlik(std::string a)
{
	ifstream file;
	file.open(a, std::ios::in);

	int inf;

	for (int i = 1; i <= plansza::getRozmiar(); i++)
	{
		for (int j = 1; j <= plansza::getRozmiar(); j++)
		{
			file >> inf;
			if (inf == 1)
			{
				plansza::tab1[i][j].setStan(true);
			}
			else
			{
				plansza::tab1[i][j].setStan(false);
			}
		}
	}
}
