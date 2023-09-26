//~~~~
// Peter SARRITZU
// SNIR2
// DD/MM/AAAA
//~~~~
#include <iostream> // bibliotheque de gestion des E/S

#include "point.h"

using namespace std;

// AUTRES
Point::Point(float x1, float y1)
{
    this->x = x1;
    this->y = y1;
}
void Point::affiche()
{
    cout << "\nx=" << this->x << " y=" << this->y << endl;
}
void Point::deplace(float tx, float ty)
{
    this->x += tx;
    this->y += ty;
}
