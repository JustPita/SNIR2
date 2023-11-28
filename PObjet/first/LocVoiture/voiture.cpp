//~~~~
// Peter SARRITZU
// SNIR2
// 07/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "voiture.h"
using namespace std;
//AUTRES
Voiture::Voiture(){};
Voiture::Voiture(string laPlaqueImmatriculation){
    this -> noImmatriculation = laPlaqueImmatriculation;
    setDisponibilite(true);
    leMoteur.laVoiture=this;
}
void Voiture::louer(){
    this ->disponibilite = false;
    cout<<"Voiture louer"<<endl;
}
void Voiture::faireLePlein(){
    this ->disponibilite = false;
    cout<<"Voiture a la pompe"<<endl;
}
string Voiture::getNoImmatriculation() {
    cout<<noImmatriculation<<endl;
    return this ->noImmatriculation;
}

bool Voiture::getDisponibilite() {
   /*if(this-> disponibilite == 1){
        cout<<"Voiture disponible"<<endl;
    }
    else if(this->disponibilite ==0){
        cout<<"Voiture non disponible"<<endl;
    }
    */
    return disponibilite;
}

void Voiture::setDisponibilite(bool valeur) {
    this -> disponibilite = valeur;
}

