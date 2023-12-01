// fiche_4_1.cpp
#include <iostream>
#include <conio.h>    
#include "point3DColor.h"

using namespace std;

int main()
{
    Point   p1(2,4);
    Point3D p2(5,7,11,3);
    Point3DColor *p3; 
    p3 = new Point3DColor;

    p1.affiche();
    p2.affiche();
    p2.changeGrosseur(2);
    p2.affiche();
    p3->affiche();
    
    delete p3;
    _getch();
    return 0 ;
}