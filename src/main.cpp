#include <iostream>
#include <ctime>
#include "mode.hpp"

using namespace std;

int main()
{
	Mode mode{};

	int choix_mode = 0;

	cout << "Bienvenue dans le jeu Nombre Mystere" << endl;
	cout << "Mode de jeu : " << endl;
	cout << "	1 - Facile" << endl;
	cout << "	2 - Moyen" << endl;
	cout << "	3 - Difficile" << endl;
	cout << "	4 - Personnalisé" << endl;

	cout << "Mode jeu : ";
	cin >> choix_mode;

	if (choix_mode == 1)
	{
		mode.Facile();
	}

	else if (choix_mode == 2)
	{
		mode.Moyen();
	}

	else if (choix_mode == 3)
	{
		mode.Difficile();
	}

	else if (choix_mode == 4)
	{
		mode.Personnalisé();
	}

	return 0;
}