//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <string>

class Capteur{
protected:
    static int nombreDeCapteurs;
    std::string type;
    std::string noSerie;
public:
    Capteur(std::string type, std::string noSerie);
    std::string getType();
    std::string getNoSerie();
    static int getNombreCapteurs();
    ~Capteur();
};

#endif