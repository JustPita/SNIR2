//~~~~
// Peter SARRITZU
// SNIR2
// 07/11/2023
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "roue.h"
using namespace std;
//AUTRES

Roue::Roue(double pre){
    this -> pression = pre;
}
void crever(){
    cout<<"pneu mort"<<endl;
}
