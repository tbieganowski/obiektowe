#include "plansza.h"

plansza::plansza() :
	rozmiar(0)
{
}

plansza::plansza(int x)
{
	setRozmiar(x);
	tab1 = new komorka *[x + 2];
	tab2 = new komorka *[x + 2];
	for (int i = 0; i < x + 2; i++)
	{
		tab1[i] = new komorka[x + 2];
		tab2[i] = new komorka[x + 2];
	}
	for (int i = 0; i < x + 2; i++)
	{
		for (int j = 0; j < x + 2; j++)
		{
			tab1[i][j] = komorka();
			tab2[i][j] = komorka();
		}
	}
}
plansza::~plansza()
{
	delete[] tab1;
	delete[] tab2;
}

int plansza::getRozmiar()
{
	return rozmiar;
}

void plansza::setRozmiar(int r)
{
	rozmiar = r;
}


void plansza::sprawdzSasiadow()
{
	int t = 0;

	for (int i = 1; i <= rozmiar; i++)
	{
		for (int j = 1; j <= rozmiar; j++)
		{
			for (int x = i - 1; x <= i + 1; x++)
			{
				for (int y = j - 1; y <= j + 1; y++)
				{
					if (!(x == i && y == j))
					{
						if (tab1[x][y].getStan() == true)
						{
							t++;
						}
					}

				}
			}
			if (t == 3)
			{
				tab2[i][j].setStan(true);
			}
			else if (t == 2 && tab1[i][j].getStan() == true)
			{
				tab2[i][j].setStan(true);
			}
			else if (t <= 2 || t > 3)
			{
				tab2[i][j].setStan(false);
			}
			t = 0;
		}
	}
}

void plansza::copyTab()
{
	for (int i = 0; i < rozmiar + 1; i++)
	{
		for (int j = 0; j < rozmiar + 1; j++)
		{
			tab1[i][j] = tab2[i][j];
		}
	}
}

void plansza::clearTab()
{
	for (int i = 0; i < rozmiar + 1; i++)
	{
		for (int j = 0; j < rozmiar + 1; j++)
		{
			tab2[i][j].setStan(false);
		}
	}
}
