#ifndef Etudiant
#define Etudiant
#include <string>
#include "Personne.h"

class Etudiant : public Personne
{
public:
    Etudiant(std::string leNom,std::string lePrenom,std::string laClasse);
    std::string getClasse();
    void setMoyenne(double laMoyenne);
    double getMoyenne();
    static int getNombreEtudiants();

private:
    std::string classe;
    double moyenne;
    static int nombreEtudiants;
};

#endif
