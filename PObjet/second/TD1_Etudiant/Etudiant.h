#include <string>
#include "Personne.h"
#ifndef Etudiant
#define Etudiant

class Etudiant : public Personne{
private:
    std::string classe;
    double moyenne;
    int nombreEtudiants;

public:
    Etudiant(std::string leNom,std::string lePrenom,std::string laClasse);
    std::string getClasse();
    void setMoyenne(double laMoyenne);
    double getMoyenne();
    int getNombreEtudiants();
};

#endif
