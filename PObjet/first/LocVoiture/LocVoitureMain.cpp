//~~~~
// Peter SARRITZU
// SNIR2
// 07/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "roue.h"
#include "moteur.h"
#include "voiture.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
//AUTRES

void affichageVoituresDisponibles(vector<Voiture *> lesVoitures) {
    for (int i = 0; i < lesVoitures.size(); i++) {
        if (lesVoitures[i]->getDisponibilite()) {
            cout << "Voiture disponible: " << lesVoitures[i]->getNoImmatriculation() << endl;
        }
    }
}
int main(){

    /*
    Voiture voiture("EF-654-RT");
    voiture.getNoImmatriculation();
    voiture.getDisponibilite();
    voiture.louer();
    voiture.getDisponibilite();
    voiture.faireLePlein();
    voiture.getDisponibilite();
    voiture.setDisponibilite(true);
    voiture.getDisponibilite();*/

    vector<Voiture *> voiture(101);

    for (int i=0;i<101;i++){
        string Imma;
        char immatriculation[10];
        sprintf(immatriculation, "GR-%03d-YB", i);
        Imma=immatriculation;
        voiture[i] = new Voiture(Imma);
    }

    for(int i=39; i<=63; i++){
        voiture[i]->leMoteur.vidanger();
    }
    affichageVoituresDisponibles(voiture);

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}