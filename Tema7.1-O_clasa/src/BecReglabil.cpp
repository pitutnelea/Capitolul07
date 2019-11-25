#include "BecReglabil.h"
#include <iostream>

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

unsigned short BecReglabil::MaresteLumina(unsigned short parametru1)
{
    putereCurenta += parametru1;
    if (putereCurenta>putereMaxima)
    {
        putereCurenta = putereMaxima;
    }
    return aprins = true;
}

unsigned short BecReglabil::ReduceLumina(unsigned short parametru2)
{
    putereCurenta -= parametru2;
    if (putereCurenta<0)
    {
        putereCurenta = 0;
    }
    return aprins = false;
}

void BecReglabil::StareaBec()
{
    if (aprins ==true) {std::cout << "Becul e aprins"<<std::endl;}
    else std::cout<< "Becul e stins"<<std::endl;
}
