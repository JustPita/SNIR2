//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#include "capteurTemperatureExterieure.h"
CapteurTemperatureExterieure::CapteurTemperatureExterieure(std::string derniersChiffresNumeroSerie, double min, double max) : CapteurTemperature("33" + derniersChiffresNumeroSerie, min, max){}
bool CapteurTemperatureExterieure::verifieConformite(){
    return temperatureMinAutorisee < -50 && temperatureMaxAutorisee > 60;
}