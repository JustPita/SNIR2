//********* Point.cpp ***********
#include <iostream>
#include "point.h"

using namespace std;

//***********************************
Point::Point(float abs , float ord)
{
x=abs ; y=ord;
}

//************************************
void Point::affiche()
{
cout <<"\nx= "<<x<<" y="<<y;
}
