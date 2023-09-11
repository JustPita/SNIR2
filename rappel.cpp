//~~~~
//Peter SARRITZU
// SNIR2
// 08/09/2022
//~~~~
#include <iostream> // biblioth�que de gestion des E/S
#include <conio.h> // gestion de la console (ici _getch())
#include <string>
using namespace std;


int main()
{
	int a = 0;
	double tab[100];
	for (int i = 0; i < 99; i++)
	{
		a += 2;
		tab[i] = a;
	}
	cout << "contenu du tableau " << endl;
	for (unsigned i = 0; i < 99; i++)
	{
		cout << tab[i] << endl;
	}
	cout << endl << endl;
	
	int tmp = tab[2];
	tab[2] = tab[6];
	tab[6] = tmp;
	cout <<tab[2]<<endl<<tab[6]<<endl << endl;

	int max = tab[0];
	int min = tab[0];
	for (int i = 1; i < 99; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		if (tab[i] < min)
		{
			min = tab[i];
		}
	}
	cout <<max<<endl<<min<< endl;


	for (int i=10;i<99;i++)
	{
		tab[i]=tab[i+1];
	}
	tab[100]=0;

	for (unsigned i = 0; i < 98; i++)
	{
		cout << tab[i] << endl;
	}
	cout << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}
