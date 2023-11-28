//***************** Point3D.h ************************
#ifndef POINT3DColor
#define POINT3DColor

#include "Point.h"
#include "point3D.h"

class Point3DColor : public Point3D
{
public:
	void changeColor(unsigned long NewColor);

	void affiche(void);
	Point3DColor(float xi=1 , float yi=2 , float zi=5 , int epaisseur=3,unsigned long color=128);
	

private:
	unsigned long color;
};

#endif