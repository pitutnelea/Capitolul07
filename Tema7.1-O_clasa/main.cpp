#include <iostream>
#include "BecReglabil.h"

using namespace std;

int main()
{
    BecReglabil bec75, bec100;
    bec75.SetPutereCurenta(0);
    bec75.SetPutereMaxima(75);
    bec100.SetPutereCurenta(0);
    bec100.SetPutereMaxima(100);

    cout<<"Putere curenta pentru bec75 este: " << bec75.GetPutereCurenta()<<endl;
    cout<<"Putere curenta pentru bec100 este " << bec100.GetPutereCurenta()<<endl;

    bec75.Aprinde();
    bec75.StareaBec();
    bec100.Aprinde();
    bec100.StareaBec();

    bec75.Stinge();
    bec75.StareaBec();
    bec100.Stinge();
    bec100.StareaBec();

    bec75.MaresteLumina(90);
    bec75.StareaBec();
    bec100.MaresteLumina(90);
    bec100.StareaBec();

    bec75.ReduceLumina(75);
    bec75.StareaBec();
    bec100.ReduceLumina(75);
    bec100.StareaBec();

    cout<<"Putere curenta pentru bec75 este: " << bec75.GetPutereCurenta()<<endl;
    cout<<"Putere curenta pentru bec100 este " << bec100.GetPutereCurenta()<<endl;

    return 0;
}
