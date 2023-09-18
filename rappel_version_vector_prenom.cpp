//~~~~
// Peter SARRITZU
// SNIR2
// 12/09/2023
//~~~~
#include <iostream> // biblioth�que de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
using std::cout;

void affichage_string(vector<string> tab)
{
    for (unsigned i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
}

int main()
{
    vector<string> tabprenom;
    string temp;
    ifstream fichier;
    fichier.open("Prenoms.txt");
    if (!fichier.is_open())
    {
        cout << "Impossible d'ouvrir le fichier " << endl;
        _getch();
        return (1);
    }
    cout << "Les Donnees lues dans le fichier sont " << endl;
    while (!fichier.eof())
    {
        while (fichier >> temp)
        {
            tabprenom.push_back(temp);
        }
    }
    fichier.close();
    sort(tabprenom.begin(), tabprenom.end());
    affichage_string(tabprenom);

    tabprenom.erase(tabprenom.begin() + 10);
    for (unsigned i = 11; i < tabprenom.size(); i++)
    {
        tabprenom[i] = tabprenom[i + 1];
    }
    tabprenom.insert(tabprenom.begin() + ((tabprenom.size()) - 1), 0);
    affichage_string(tabprenom);

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}