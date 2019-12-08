#include "BecReglabil.h"
#include "Candelabru.h"
#include <iostream>
using namespace std;

BecReglabil::BecReglabil()
{
    //ctor
}

BecReglabil::~BecReglabil()
{
    //dtor
}

void BecReglabil::Aprinde()
{
    aprins = true;
    putereCurenta = putereMaxima;
}

void BecReglabil::Stinge()
{
    aprins = false;
    putereCurenta = 0;
}

void BecReglabil::MaresteLumina(unsigned short parametru1)
{
    putereCurenta += parametru1;
    if (putereCurenta>putereMaxima)
    {
        putereCurenta = putereMaxima;
    }
    aprins = true;
}

void BecReglabil::ReduceLumina(unsigned short parametru2)
{
    if (putereCurenta <=parametru2)
    {
        putereCurenta = 0;
        aprins = false;
    }
    else putereCurenta -=parametru2;
}

void BecReglabil::StareBec()
{
    (aprins)?cout<<"Becul e aprins":cout<<"Becul e stins";

}
