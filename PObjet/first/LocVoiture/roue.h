#pragma once
#include <string>
#include <vector>

using namespace std;

class Roue
{
    private:
    double pression;
    
    public:
    void crever();
    Roue(double pression=2.5);
    double getPression();
};