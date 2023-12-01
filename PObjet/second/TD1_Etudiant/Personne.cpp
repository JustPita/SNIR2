#include <iostream>
#include "Personne.h"

Personne::Personne(std::string leNom,std::string lePrenom){
    nom=leNom;
    prenom=lePrenom;
}

std::string Personne::getNom(){
    std::cout<<"Nom = "<<nom<<std::endl;
}

std::string Personne::getPrenom(){
    std::cout<<"Prenom = "<<prenom<<std::endl;
}