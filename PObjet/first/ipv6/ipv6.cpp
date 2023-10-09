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
    
}

void IPV6::remplacementSuiteDeZeros() {

}

void IPV6::reconstructionFinale() {

}

IPV6::IPV6(string adr) {
    this->adresse=adr;
    this->strHextets=IPV6::split(adr,':');
    std::cout<<"Voici les hextets "<<std::endl;
    for (unsigned i=0;i<this ->strHextets.size();i++){
        std::cout<<this->strHextets[i]<<"\t";
    }

}