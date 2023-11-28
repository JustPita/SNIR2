//~~~~
// Peter SARRITZU
// SNIR2
// 07/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "moteur.h"
#include "voiture.h"
using namespace std;
//AUTRES

Moteur::Moteur(){}
void Moteur::vidanger(){
    laVoiture->setDisponibilite(false);
}
