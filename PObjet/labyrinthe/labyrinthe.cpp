#include "labyrinthe.h"
#include <math.h>

void ordonner(int X1, int Y1, int X2, int Y2) {
    int temp;
    if(X1 > X2) {
        temp = X1;
        X1 = X2;
        X2 = temp;
    }
    if(Y1 > Y2) {
        temp = Y1;
        Y1 = Y2;
        Y2 = temp;
    }
}

bool estCarre(int X1,int X2,int Y1, int Y2) {
    if((X2 - X1) == (Y2 - Y1))return true;
    else return false;
}

bool dedans(_complex p, int X1, int X2, int Y1, int Y2) {
    return (p.x >= X1 && p.x <= X2 && p.y >= Y1 && p.y <= Y2);
}