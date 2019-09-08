#include <iostream>
#include <fstream>

#include "TXTgame.h"

using namespace std;

int sprawdzRozmiar(std::string a)
{
	ifstream file;
	file.open(a, std::ios::binary);

	int h = 0;
	string linia;

	while (getline(file, linia))
	{
		h++;
	}

	file.close();
	return h;
}

int main()
{
	TXTgame g("start.txt", sprawdzRozmiar("start.txt"));
	std::string a = "start.txt";  //???
	g.start(a);   //???
	return 0;
}
