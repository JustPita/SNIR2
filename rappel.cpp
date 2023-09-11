//~~~~
//Peter SARRITZU
// SNIR2
// 08/09/2022
//~~~~
#include <iostream> // bibliothèque de gestion des E/S
#include <conio.h> // gestion de la console (ici _getch())
#include <string>
using namespace std;


int main()
{
	int a = 0;
	double tab[100];
	for (int i = 0; i < 100; i++)
	{
		a += 2;
		tab[i] = a;
	}
	cout << "contenu du tableau " << endl;
	for (unsigned i = 0; i < 100; i++)
	{
		cout << tab[i] << endl;
	}
	cout << endl << endl;
	
	int tmp = tab[3];
	tab[3] = tab[7];
	tab[7] = tmp;
	cout <<tab[3]<<endl<<tab[7]<<endl << endl;

	int max, min,tmpmax,tmpmin;
	max = tab[0];
	min = tab[0];
	for (int i = 0; i < 100; i++)
	{
		if (max > tab[i])
		{
			tmpmax = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmpmax;
		}
		else if (max < tab[i])
		{
			max = tab[i];
		}
		else if (min < tab[i])
		{
			tmpmin = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmpmin;
		}
		else if (min > tab[i])
		{
			min = tab[i];
		}
	}
	cout <<max<<endl<<min<< endl;

	cout << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}
