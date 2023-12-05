#include <iostream>
#include <string>
#include "Etudiant.h"
using namespace std;

Etudiant::Etudiant(string leNom,string lePrenom,string laClasse) : Personne(leNom, lePrenom){
    nom=leNom;
    prenom=lePrenom;
    classe = laClasse;
}

std::string Etudiant::getClasse(){
    std::cout<<classe<<std::endl;
    return classe;
}

void Etudiant::setMoyenne(double laMoyenne){
    moyenne = laMoyenne;
}

double Etudiant::getMoyenne(){
    std::cout <<moyenne<<std::endl;
    return moyenne;
}

static int Etudiant::getNombreEtudiants(){
    std::cout<<nombreEtudiants<<std::endl;
    return nombreEtudiants;
}