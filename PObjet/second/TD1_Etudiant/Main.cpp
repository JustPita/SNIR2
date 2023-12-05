//~~~~
// Peter SARRITZU
// SNIR2
// 28/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
using namespace std;
//AUTRES

//FONCTION PRINCIPALE
int main() {
    vector<Etudiant> etudiants = {
        // Ajoutez vos étudiants ici
        // {"Nom", "Prenom", {note1, note2, note3, ...}},
    };
    double sommeMoyennes = 0.0;
    for (const auto& etudiant : etudiants) {
        double moyenne = calculerMoyenne(etudiant.notes);
        sommeMoyennes += moyenne;
        cout << "Nom: " << etudiant.nom << ", Prenom: " << etudiant.prenom
             << ", Moyenne: " << moyenne << endl;
    }

    cout << "Moyenne generale de la classe: " << sommeMoyennes / etudiants.size() << endl;

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}
