//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#include "capteur.h"

int Capteur::nombreDeCapteurs=0;
Capteur::Capteur(std::string type, std::string noSerie) : type(type), noSerie(noSerie){
    nombreDeCapteurs++;
}
Capteur::~Capteur(){
    nombreDeCapteurs--;
}
std::string Capteur::getType(){
    return type;
}
std::string Capteur::getNoSerie(){
    return noSerie;
}
int Capteur::getNombreCapteurs(){
    return nombreDeCapteurs;
}