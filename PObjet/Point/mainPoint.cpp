#include <iostream>
#include "point.h"
using namespace std;

int main(){
    /*
    Point p1;
    p1.affiche();

    float x,y;
    cout<<"saisir x et y ";
    cin>>x>>y;

    Point *pp2;
    pp2 = new Point(x,y);
    pp2->affiche();
    pp2->deplace(3.5,6.4);
    pp2->affiche();

    delete pp2;

    //plusieurs objets
    Point tab[10];
    for (unsigned i=0;i<10;i++){
        cout<<"PTS n= "<<i;
        tab[i].affiche();
    }

    tab[3].deplace(6,9);
    tab[3].affiche();


   Point *tab[3];
   tab[0]=new Point(1,1);
   tab[1]=new Point(3,2);
   tab[2]=new Point(4,5);

   for (unsigned i=0;i<3;i++){
        cout<<"PTS n= "<<i;
        tab[i]->affiche();
    }

    for (unsigned i=0;i<3;i++){
        delete tab[i];
    }
*/

    cout<<"NB en memoire: "<< Point::getNbPoints()<<endl;

    Point p1(2.3,6.4);
    cout<<"NB en memoire: "<< Point::getNbPoints()<<endl;

    Point *p2=new Point(3.2,4.34);
    cout<<"NB en memoire: "<< Point::getNbPoints()<<endl;

    cout<<"Delete point p2"<<endl;
    delete p2;

    cout<<"NB en memoire: "<< Point::getNbPoints()<<endl;


    cin.get();cin.ignore();
    return EXIT_SUCCESS;
}