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
    delete[] listaBecuri;
    listaBecuri = NULL;
}

void Candelabru::ConfigureazaCandelabru(unsigned short par1_nr_becuri)
{
    nrBecuri = par1_nr_becuri;
    listaBecuri = new BecReglabil[nrBecuri];
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

unsigned short Candelabru::PutereMaximaCandelabru()
{
    unsigned short sum = 0;
    for (int i=0; i < nrBecuri;i++)
    {
        sum += listaBecuri[i].GetPutereMaxima();
    }
    cout<<sum;
    return sum;
}

bool Candelabru::StareCandelabru()
{
    for (int i=0; i < nrBecuri;i++)
    {
        if (listaBecuri[i].GetPutereCurenta()>0) return true;
    }
    return false;
}
