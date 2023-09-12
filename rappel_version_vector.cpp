//~~~~
//Peter SARRITZU
// SNIR2
// 12/09/2023
//~~~~
#include <iostream> // biblioth�que de gestion des E/S
#include <conio.h> // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using std::cout;


void affichage(vector<double> tab)
{
    for (unsigned i =0;i<tab.size();i++)
    {
        cout<<tab[i]<<endl;
    }
}

void permut(double &x,double &y)
{
    double tmp =x;
    x=y;
    y=tmp;
}

int main()
{
    unsigned i;
    double taille =100;
    vector<double>tab(taille);
    for (unsigned i=0;i<tab.size();i++)
    {
        tab[i]=(i+1)*2;
    }
    affichage(tab);
    permut(tab[2],tab[6]);
    affichage(tab);
    for (unsigned i = 0; i < tab.size(); i++)
        cout << tab[i] << " ";
    cout << endl;
    cout << "\nMax Element = "
        << *max_element(tab.begin(), tab.end());
    cout << "\nMin Element = "
        << *min_element(tab.begin(), tab.end());
        cout<<"\n";
    tab.erase(tab.begin()+10);
   for (unsigned i =11;i<100;i++)
   {
        tab[i]=tab[i+1];
   }
   tab.insert(tab.begin()+99,0);
   affichage(tab);

    cin.get();cin.ignore();
    return EXIT_SUCCESS;
}