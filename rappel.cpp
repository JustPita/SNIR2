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
	int taille=100;
	double tab[100];
	for (int i = 0; i < taille; i++)
	{
		tab[i] = (i+1)*2;
	}
	cout << "contenu du tableau " << endl;

void permut(double & x, double &y)
{
	double tmp =x;
	x=y;
	y=tmp;
}	
void affichage(double *tab,int taille)
{
	for (unsigned i=0; i<taille;i++)
	{
		cout<<tab[i]<<"\t";
		if ((i+1)%10==0)
	}
}

	cout << endl << endl;
	void permut
	{

	}
	int tmp = tab[2];
	tab[2] = tab[6];
	tab[6] = tmp;
	cout <<tab[2]<<endl<<tab[6]<<endl << endl;

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
	cout <<"max:"<<max<<endl<<"min:"<<min<< endl;
	cout <<endl<<endl;


	for (int i=10; i<99; i++)
	{
		tab[i]=tab[i+1];
	}
	tab[99]=0;

	for (unsigned i = 0; i < 100; i++)
	{
		cout << tab[i] << endl;
	}
	cout << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}



