#pragma once

class Point{
private:
    float x, y;
    static int nbPoints;

public:
    Point(float x1 = 0, float y1 = 0);
    ~Point();
    void affiche();
    void deplace(float tx, float ty);
    static int getNbPoints();
};