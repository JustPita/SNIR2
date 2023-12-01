#include <string>
#ifndef PERSONNE
#define PERSONNE


class Personne{
protected:
    std::string nom;
    std::string prenom;

public:
    Personne(std::string leNom,std::string lePrenom);
    std::string getNom();
    std::string getPrenom();
};

#endif