#include "Candelabru.h"
#include "BecReglabil.h"
#include <iostream>
#include <cmath>
using namespace std;

Candelabru::Candelabru()
{
    //ctor
}

Candelabru::~Candelabru()
{
    //dtor
}

void Candelabru::ConfigureazaCandelabru(unsigned short par1_nr_becuri)
{
    nrBecuri = par1_nr_becuri;
    BecReglabil *listaBecuri = new BecReglabil[nrBecuri];
    for (int i = 0 ; i < nrBecuri; i++)
    {
        listaBecuri[i].SetPutereCurenta(0);
        listaBecuri[i].SetPutereMaxima(100);
    }
}

void Candelabru::AprindeLumina()
{
    for (int i=0; i < nrBecuri;i++)
    {
        listaBecuri[i].Aprinde();
    }
}

void Candelabru::StingeLumina()
{
    for (int i=0; i < nrBecuri;i++)
    {
        listaBecuri[i].Stinge();
    }
}

void Candelabru::MaresteLumina(unsigned short par2)
{
    for (int i=0; i < nrBecuri;i++)
    {
        listaBecuri[i].MaresteLumina(par2);
    }
}

void Candelabru::ReduceLumina(unsigned short par3)
{
    for (int i=0; i < nrBecuri;i++)
    {
        listaBecuri[i].ReduceLumina(par3);
    }
}

void Candelabru::PutereMaximaCandelabru()
{
    unsigned short sum = 0;
    for (int i=0; i < nrBecuri;i++)
    {
        sum += listaBecuri[i].GetPutereMaxima();
    }
    cout<<"Suma puterilor maxime este:"<< sum << endl;
}

//returneză true dacă cel puțin un bec are membrul aprins pe true. Dacă nu, returnează false
void Candelabru::StareCandelabru()
{
    for (int i=0; i < nrBecuri;i++)
    {
        listaBecuri[i].StareBec();
        //(listaBecuri[i].StareBec())? cout<<"Candelabrul e aprins" : cout <<"Candelabrul e stins";
        if (listaBecuri[i].StareBec()== true) {StareCandelabru() = true;}
        esle listaBecuri[i].StareBec()== false;
    }
}
