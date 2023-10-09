//~~~~
// Peter SARRITZU
// SNIR2
// DD/MM/AAAA
//~~~~
#include <iostream> // bibliotheque de gestion des E/S

#include "point.h"

using namespace std;
int Point::nbPoints=0;

// AUTRES
Point::Point(float x1, float y1){
    this->x = x1;
    this->y = y1;
    this ->nbPoints++;
}

Point::~Point(){
    this->nbPoints--;
}

int Point::getNbPoints(){
    return Point::nbPoints;
}

void Point::affiche(){
    cout << "\nx=" << this->x << " y=" << this->y << endl;
}
void Point::deplace(float tx, float ty){
    this->x += tx;
    this->y += ty;
}
