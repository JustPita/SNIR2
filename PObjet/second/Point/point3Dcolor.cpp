/*
#include <iostream>
#include "point3Dcolor.h"

using namespace std;

Point3DColor::Point3DColor(float xi , float yi , float zi , int epaisseur,unsigned long couleur) :Point3D(xi ,yi ,zi ,epaisseur)
{
color=couleur;
}


void Point3DColor::affiche(){
	Point::affiche();
	Point3D::affiche();
	cout<<" couleur ="<<color;
}

void Point3DColor::changeColor(unsigned long NewColor)
{
	color=NewColor;
}
*/

#include <iostream>
#include "point3Dcolor.h"

using namespace std;

Point3DColor::Point3DColor(float xi , float yi , float zi , int epaisseur,unsigned long couleur) :Point3D(xi ,yi ,zi ,epaisseur)
{
color = couleur;
}

void Point3DColor::affiche(){
	Point3D::affiche();
	cout<<" couleur ="<<color;
}

void Point3DColor::changeColor(unsigned long NewColor)
{
	color = NewColor;
}