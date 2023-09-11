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

	int max = tab[0];
	int min = tab[0];
	for (int i = 1; i < 100; i++)
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

	cout << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}
