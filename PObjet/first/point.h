#pragma once

class Point
{
private:
    float x, y;

public:
    Point(float x1 = 0, float y1 = 0);
    void affiche();
    void deplace(float tx, float ty);
};