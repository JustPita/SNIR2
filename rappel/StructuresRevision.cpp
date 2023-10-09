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

int menu()
{
    int rep;
    cout << endl;
    cout << "Que voulez-vous faire ? (1->6)"<<endl;
    cout << "1. Ajouter un produit (on tape le code produit et l'intitule, la quantite est initialisee à 0)." << endl
         << "2. Afficher la liste de produits." << endl
         << "3. Supprimer un produit en tapant le code produit." << endl
         << "4. Acheter un produit en tapant le code produit et la quantite achetee." << endl
         << "5. Vendre un produit en tapant le code produit et la quantite vendue." << endl
         << "6.Quitter" << endl;
    cin >> rep;
    return rep;
}

void affichage(vector<Produit> &lesProduits)
{
    for (int i =0 ;i<lesProduits.size();i++)
    {
        cout << "Product Code: " << lesProduits[i].CProduit << endl;
        cout << "Product Name: " << lesProduits[i].PotsDePeinture << endl;
        cout << "Stock: " << lesProduits[i].Stock << endl;
    }
}

void supprimer(vector<Produit> &lesProduits, string Cprod)
{
    for (auto it = lesProduits.begin(); it != lesProduits.end(); ++it)
    {
        if (it->CProduit == Cprod)
        {
            lesProduits.erase(it);
            cout <<Cprod <<"a ete supprime" << endl;
            return;
        }
    }
    cout <<Cprod<< " non trouve." << endl;
}
void acheter(vector<Produit> &lesProduits, string Cprod, int qteprod)
{
    for (auto it = lesProduits.begin(); it != lesProduits.end(); ++it)
    {
        if (it->CProduit == Cprod)
        {
            lesProduits.erase(it);
            cout <<Cprod <<"a ete acheter" << endl;
            cout<<"il reste "<< qteprod;
            return;
        }
    }
    cout <<Cprod<< " non trouve." << endl;
}
// FONCTION PRINCIPALE
int main()
{
    int rep;
    int qteProd=0;
    string CProd, intituleProd,suppr;
    Produit envoi;
    vector<Produit> lesProduits;
    do
    {
        rep = menu();
        switch (rep)
        {
        case 1:
            cout << "Code du Produit: ";
            cin >> CProd;
            cout << endl<< "Intitule du Produit: ";
            cin >> intituleProd;
            envoi = {CProd, intituleProd, qteProd};
            lesProduits.push_back(envoi);
            break;
        case 2:
            affichage(lesProduits);
            break;
        case 3:
            cout <<"Le code produit a supprimer ? ";cin>>CProd;cout<<endl;
            supprimer(lesProduits,CProd);
            break;
        case 4:
            cout <<"Le code produit que vous voulez acheter ? ";cin>>CProd;cout<<endl;
            cout <<"La quantite que vous voulez acheter ? ";cin>>qteProd;
            acheter(lesProduits,CProd,qteProd);
            break;
        case 5:
            break;
        case 6:
            return EXIT_SUCCESS;
        }
    } while (rep != 6);

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}