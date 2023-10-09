#pragma once
#include <math.h>
#define min(x,y) ((x)<(y)?(x):(y))
#define max(x,y) ((x)>(y)?(x):(y))

class CRect {
    private:
        double X1, Y1, X2, Y2;

public:
    CRect(int X1i, int Y1i, int X2i, int Y2i);
    CRect(_complex p1, _complex p2);
    void ordonner();
    bool estCarre();
    bool dedans(_complex p);
    
    double getX1();
    double getY1();
    double getX2();
    double getY2();
};
