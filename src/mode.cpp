#include <iostream>
#include <ctime>
#include "mode.hpp"

using namespace std;

Mode mode{};

void Mode::Facile()
{
	srand(time(nullptr));

	mode.nb_random = rand() % 100;
	mode.nb_try = 10;

	while (mode.nb_choisi != mode.nb_random)
	{
		cout << "Choisis un nombre entre 1 et 100 : ";
		cin >> mode.nb_choisi;

		mode.nb_try = mode.nb_try - 1;

		if (mode.nb_choisi == mode.nb_random)
		{
			cout << "Gagner" << endl;
			break;
		}

		else if (mode.nb_try == 0)
		{
			cout << "Perdu" << endl;
			cout << "Le nombre mystere était " << mode.nb_random << endl;
			break;
		}

		else if (mode.nb_choisi < mode.nb_random)
		{
			cout << "Trop petit" << endl;
		}

		else if (mode.nb_choisi > mode.nb_random)
		{
			cout << "Trop grand" << endl;
		}

		cout << "Il vous reste " << mode.nb_try << " essaie" << endl;
	}
}

void Mode::Moyen()
{
	srand(time(nullptr));

	mode.nb_random = rand() % 100;
	mode.nb_try = 6;

	while (mode.nb_choisi != mode.nb_random)
	{
		cout << "Choisis un nombre entre 1 et 100 : ";
		cin >> mode.nb_choisi;

		mode.nb_try = mode.nb_try - 1;

		if (mode.nb_choisi == mode.nb_random)
		{
			cout << "Gagner" << endl;
			break;
		}

		else if (mode.nb_try == 0)
		{
			cout << "Perdu" << endl;
			cout << "Le nombre mystere était " << mode.nb_random << endl;
			break;
		}

		else if (mode.nb_choisi < mode.nb_random)
		{
			cout << "Trop petit" << endl;
		}

		else if (mode.nb_choisi > mode.nb_random)
		{
			cout << "Trop grand" << endl;
		}

		cout << "Il vous reste " << mode.nb_try << " essaie" << endl;
	}
}

void Mode::Difficile()
{
	srand(time(nullptr));

	mode.nb_random = rand() % 200;
	mode.nb_try = 8;

	while (mode.nb_choisi != mode.nb_random)
	{
		cout << "Choisis un nombre entre 1 et 200 : ";
		cin >> mode.nb_choisi;

		mode.nb_try = mode.nb_try - 1;

		if (mode.nb_choisi == mode.nb_random)
		{
			cout << "Gagner" << endl;
			break;
		}

		else if (mode.nb_try == 0)
		{
			cout << "Perdu" << endl;
			cout << "Le nombre mystere était " << mode.nb_random << endl;
			break;
		}

		else if (mode.nb_choisi < mode.nb_random)
		{
			cout << "Trop petit" << endl;
		}

		else if (mode.nb_choisi > mode.nb_random)
		{
			cout << "Trop grand" << endl;
		}

		cout << "Il vous reste " << mode.nb_try << " essaie" << endl;
	}
}

void Mode::Personnalisé()
{
	srand(time(nullptr));

	cout << "Choisisser le nombre déssaie : ";
	cin >> mode.nb_try;

	cout << "Choisisser la borne mximum : ";
	cin >> mode.borne_max;

	cout << "Choisisser la borne minimum : ";
	cin >> mode.borne_min;

	mode.nb_random = rand() % (mode.borne_max - mode.borne_min) - mode.borne_min;

	while (mode.nb_choisi != mode.nb_random)
	{
		cout << "Trouver le nombre aléatoire entre " << mode.borne_min << " et " << mode.borne_max << " : ";
		cin >> mode.nb_choisi;
		
		mode.nb_try = mode.nb_try - 1;

		if (mode.nb_choisi == mode.nb_random)
		{
			cout << "Gagner" << endl;
			break;
		}

		else if (mode.nb_try == 0)
		{
			cout << "Perdu" << endl;
			cout << "Le nombre mystere était " << mode.nb_random << endl;
			break;
		}

		else if (mode.nb_choisi < mode.nb_random)
		{
			cout << "Trop petit" << endl;
		}

		else if (mode.nb_choisi > mode.nb_random)
		{
			cout << "Trop grand" << endl;
		}

		cout << "Il vous reste " << mode.nb_try << " essaie" << endl;
	}
}
