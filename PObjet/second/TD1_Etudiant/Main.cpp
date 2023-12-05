//~~~~
// Peter SARRITZU
// SNIR2
// 28/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "Etudiant.h"
using namespace std;
//AUTRES

//FONCTION PRINCIPALE
int main() {
    vector<Etudiant> etudiants = {
        // {"Nom", "Prenom", {note1, note2, note3, ...}},
    };
    double sommeMoyennes = 0.0;
    for (vector<Etudiant>::int i = etudiants.begin(); i != etudiants.end(); ++i) {
        double moyenne = calculerMoyenne(it->notes);
        sommeMoyennes += moyenne;
        cout << "Nom: " << it->nom << ", Prenom: " << it->prenom
             << ", Moyenne: " << moyenne << endl;
    }

    cout << "Moyenne generale de la classe: " << sommeMoyennes / etudiants.size() << endl;

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}
