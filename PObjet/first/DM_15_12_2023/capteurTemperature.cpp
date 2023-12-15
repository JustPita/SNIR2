//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#include "capteurTemperature.h"
#include <cstdlib>
#include <ctime>

CapteurTemperature::CapteurTemperature(std::string noSerie, double min, double max) : Capteur("TEMP", noSerie), temperatureMinAutorisee(min), temperatureMaxAutorisee(max){}
double CapteurTemperature::getTemperature(){
    srand(time(0));
    return temperatureMinAutorisee + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX/(temperatureMaxAutorisee-temperatureMinAutorisee)));
}