//~~~~
// Peter SARRITZU
// SNIR2
// DD/MM/AAAA
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
using namespace std;

// AUTRES
struct Produit
{
    string CProduit;
    string PotsDePeinture;
    int Stock;
};

Produit saisie()
{
    Produit tmp;
    cout << endl;
    cout << "Code Produit ? ";
    getline(cin, tmp.CProduit);
    cout << "Pots de Peinture ?";
    getline(cin, tmp.PotsDePeinture);
    cout << "Stock : ? ";
    cin >> tmp.Stock;
    fflush(stdin); // vider buffer clavier
    return tmp;
}

void affichage(const Produit &instance)
{
    cout << endl;
    cout << "NOM : " << instance.CProduit << endl;
    cout << "Prenom : " << instance.PotsDePeinture << endl;
    cout << "Age : " << instance.Stock << endl;
}
// FONCTION PRINCIPALE
int main()
{
    saisie();
    affichage(Personne[1]);

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}