#pragma once
#include <string>
#include <vector>
#include "moteur.h"
#include "roue.h"

using namespace std;

class Voiture
{
    private:
    string noImmatriculation;
    bool disponibilite;
    
    public:
    Voiture();
    Voiture(string laPlaqueImmatriculation);
    void louer();
    void faireLePlein();
    string getNoImmatriculation();
    bool getDisponibilite();
    void setDisponibilite(bool disponibilite);
    Moteur leMoteur;
};