//***************** Point3D.h ************************
#ifndef POINT3D
#define POINT3D

#include "point.h"

class Point3D : public Point  
{
public:
	void changeGrosseur(int NewGrosseur);

	void affiche(void);
	Point3D(float xi=0 , float yi=0 , float zi=0 , int epaisseur=1);
	

private:
	float z;
	int grosseur;
};

#endif