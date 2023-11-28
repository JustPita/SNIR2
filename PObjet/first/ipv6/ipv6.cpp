#include <string>
#include <vector>
#include <iostream>
#include "ipv6.h"


vector<string> IPV6::split(const string& s, char c) 
{
    vector<string> v;
    unsigned int i = 0;
    unsigned int j = s.find(c);
    while (j < s.length()) {
        v.push_back(s.substr(i, j - i));
        i = ++j;
        j = s.find(c, j);
        if (j >= s.length()) {
            v.push_back(s.substr(i, s.length()));
            break;
        }
    }
    return v;
}

void IPV6::suppressionDesZerosDeDebut(){
    for (unsigned i=0; i<this->strHextets.size(); i++){
        while(this->strHextets[i].size() > 1 && this->strHextets[i][0] == '0') {
            this->strHextets[i].erase(0, 1);
        }
    }
    std::cout<<std::endl<<"Voici les hextets: "<<std::endl;
    for (unsigned i=0;i<this ->strHextets.size();i++){
        std::cout<<this->strHextets[i]<<"\t";
    }
}

void IPV6::remplacementSuiteDeZeros() {
    int debutSuiteZerosLaPlusLongue = -1;
    int longueurSuiteZerosLaPlusLongue = 0;
    int debutSuiteZerosActuelle = -1;
    int longueurSuiteZerosActuelle = 0;

    for (unsigned i = 0; i < this->strHextets.size(); i++) {
        if (this->strHextets[i] == "0") {
            if (debutSuiteZerosActuelle == -1) {
                debutSuiteZerosActuelle = i;
            }
            longueurSuiteZerosActuelle++;
            if (longueurSuiteZerosActuelle > longueurSuiteZerosLaPlusLongue) {
                debutSuiteZerosLaPlusLongue = debutSuiteZerosActuelle;
                longueurSuiteZerosLaPlusLongue = longueurSuiteZerosActuelle;
            }
        } else {
            debutSuiteZerosActuelle = -1;
            longueurSuiteZerosActuelle = 0;
        }
    }
    if (longueurSuiteZerosLaPlusLongue > 1) {
        this->strHextets.erase(this->strHextets.begin() + debutSuiteZerosLaPlusLongue, this->strHextets.begin() + debutSuiteZerosLaPlusLongue + longueurSuiteZerosLaPlusLongue);
        this->strHextets.insert(this->strHextets.begin() + debutSuiteZerosLaPlusLongue, "::");
    }
    std::cout<<std::endl<<"Voici les hextets: "<<std::endl;
    for (unsigned i=0;i<this ->strHextets.size();i++){
        std::cout<<this->strHextets[i]<<"\t";
    }
}

void IPV6::reconstructionFinale() {
    for (unsigned i = 0; i < this->strHextets.size(); i++) {
        if (i != this->strHextets.size() - 1) {
            if (this->strHextets[i] == "::"){
            }
            else if (this->strHextets[i+1] == "::"){

            }
            else{this->strHextets[i] += ":";}
        }
    }
    std::cout<<std::endl<<"Voici les hextets: "<<std::endl;
    for (unsigned i=0;i<this ->strHextets.size();i++){
        std::cout<<this->strHextets[i];
    }

}

IPV6::IPV6(string adr) {
    this->adresse=adr;
    this->strHextets=IPV6::split(adr,':');
    int pasHexa = 0;
    for (unsigned i = 0; i < this->strHextets.size(); i++) {
        for (char c : this->strHextets[i]) {
            if (!(c >= '0' && c <= '9') && !(c >= 'a' && c <= 'f') && !(c >= 'A' && c <= 'F')) {
                pasHexa++;
            }
        }
    }
    int digitPQuatre=0;
    for (unsigned int i = 0; i < this->strHextets.size(); i++) {
        if (this->strHextets[i].length() > 4) {
            digitPQuatre++;
        }
    }
    if (strHextets.size()!=8){
        this->error=false;
        std::cout<<getError()<<"Le format de l'addresse IPV6 de 8 Hextets n'est pas respecter."<<endl;
    }
    else if (pasHexa !=0){
        this->error=false;
        std::cout<<getError()<<"Le format de l'addresse IPV6 de 8 Hextets n'est pas remplit de caracteres Hexadecimal."<<endl;
    }
    else if (digitPQuatre !=0){
        this->error=false;
        std::cout<<getError()<<"Le format de l'addresse IPV6 de 8 Hextets n'est pas remplit de 4 caracteres Hexadecimal."<<endl;
    }
    else{
        std::cout<<"Voici les hextets: "<<std::endl;
        for (unsigned i=0;i<this ->strHextets.size();i++){
            std::cout<<this->strHextets[i]<<"\t";
        }
        suppressionDesZerosDeDebut();
        remplacementSuiteDeZeros();
        reconstructionFinale();
    }
}