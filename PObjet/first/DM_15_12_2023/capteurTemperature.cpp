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
    double range = temperatureMaxAutorisee - temperatureMinAutorisee;
    double div = RAND_MAX / range;
    return temperatureMinAutorisee + (rand() / div);
}