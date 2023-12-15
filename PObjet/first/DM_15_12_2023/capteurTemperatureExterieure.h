//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#ifndef CAPTEUR_TEMPERATURE_EXTERIEURE_H
#define CAPTEUR_TEMPERATURE_EXTERIEURE_H

#include "capteurTemperature.h"

class CapteurTemperatureExterieure : public CapteurTemperature{
public:
    CapteurTemperatureExterieure(std::string derniersChiffresNumeroSerie, double min, double max);
    bool verifieConformite();
};

#endif