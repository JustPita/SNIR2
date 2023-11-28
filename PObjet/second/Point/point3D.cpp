//*******************Point3D.cpp **********************
#include <iostream>
#include "point3D.h"

using namespace std;

//************************
Point3D::Point3D(float xi , float yi , float zi , int epaisseur) : Point(xi ,yi)
{
z=zi;
grosseur=epaisseur;
}


//*************************
void Point3D::affiche()
{
	Point::affiche();
	cout <<" z= "<<z;
	cout <<" Grosseur ="<<grosseur;
}

//*************************
void Point3D::changeGrosseur(int NewGrosseur)
{
grosseur=NewGrosseur;
}
