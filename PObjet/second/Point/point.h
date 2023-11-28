//******* Point.h ***********

// directives de pr�compilation pour n'inclure qu'une fois ce fichier
// on peut les remplacer par #pragma once, directive non standard,
// mais support�e par beaucoup de compilateurs dont Visual Studio
#ifndef POINT	
#define POINT

class Point  
{
public:
	void affiche();
	Point(float abs=0,float ord=0);

private:
	float y;
	float x;
};

#endif 