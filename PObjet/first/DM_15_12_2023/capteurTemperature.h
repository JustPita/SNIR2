//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#ifndef CAPTEUR_TEMPERATURE_H
#define CAPTEUR_TEMPERATURE_H

#include "capteur.h"

class CapteurTemperature : public Capteur{
protected:
    double temperatureMinAutorisee;
    double temperatureMaxAutorisee;

public:
    CapteurTemperature(std::string noSerie, double min, double max);
    double getTemperature();
};

#endif