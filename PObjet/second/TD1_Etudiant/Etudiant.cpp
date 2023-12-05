#include <iostream>
#include <string>
#include "Etudiant.h"
#include "Personne.h"

Etudiant::Etudiant(std::string leNom, std::string lePrenom,std::string laClasse) : Personne(leNom, lePrenom) {
    classe = laClasse;
    moyenne = 0.0;
    nombreEtudiants = 0;
}

std::string Etudiant::getClasse() {
    std::cout<<classe<<std::endl;
    return classe;
}

void Etudiant::setMoyenne(double laMoyenne) {
    moyenne = laMoyenne;
}

double Etudiant::getMoyenne() {
    std::cout <<moyenne<<std::endl;
    return moyenne;
}

int Etudiant::getNombreEtudiants() {
    std::cout<<nombreEtudiants<<std::endl;
    return nombreEtudiants;
}