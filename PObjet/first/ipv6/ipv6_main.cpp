//~~~~
// Peter SARRITZU
// SNIR2
// DD/MM/AAAA
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "ipv6.h"

using namespace std;
//AUTRES

//FONCTION PRINCIPALE
int main()
{
    IPV6 adr("1E64:2010:0001:0000:0000:0000:0012:0000");
    string simplifie=adr.getAdresse();
    

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}