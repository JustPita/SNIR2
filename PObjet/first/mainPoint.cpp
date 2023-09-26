#include <iostream>
#include "point.h"
using namespace std;

int main(){
    Point p1;
    p1.affiche();
    p1.deplace(2,2);
    p1.affiche();

    cin.get();cin.ignore();
    return EXIT_SUCCESS;
}