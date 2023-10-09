#pragma once
#include <string>
#include <vector>

using namespace std;

class IPV6
{
    protected:
    string adresse;
    vector<string> strHextets;
    bool error;
    void suppressionDesZerosDeDebut();
    void remplacementSuiteDeZeros();
    void reconstructionFinale();
    static vector<string> split(const string& s, char c);
    
    public:
    IPV6(string adr);
    string getAdresse() { return adresse; }
    bool getError() { return error; }
};