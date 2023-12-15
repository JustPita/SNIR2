//~~~~
// Peter SARRITZU
// SNIR2
// 12/12/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include <windows.h>
//AUTRES
#include "capteur.h"
#include "capteurTemperature.h"
#include "capteurTemperatureExterieure.h"

//FONCTION PRINCIPALE
int main(){
    SetConsoleOutputCP(CP_UTF8);
    CapteurTemperature capteurTemp("123456", -10.0, 50.0);
    CapteurTemperatureExterieure capteurTempExt("456789", -60.0, 70.0);

    std::cout <<u8"Nombre de capteurs : " << Capteur::getNombreCapteurs() << std::endl;
    std::cout <<u8"Température : " << capteurTemp.getTemperature()<<u8"°C" << std::endl;
    std::cout <<u8"Température extérieure : " << capteurTempExt.getTemperature()<<u8"°C" << std::endl;
    std::cout <<u8"Conformite du capteur extérieur : " << capteurTempExt.verifieConformite() << std::endl;

    std::cin.get();
    std::cin.ignore();
    return EXIT_SUCCESS;
}

//Dans ce code, j'ai essayer d'include <windows.h> et de set SetConsoleOutputCP(CP_UTF8); pour essayer d'avoir les caractères utf8 c'est pour cela la présence des u8 avant la chaine de caractère après std::cout<<