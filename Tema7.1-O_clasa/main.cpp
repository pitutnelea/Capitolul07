#include <iostream>
#include "BecReglabil.h"

using namespace std;

int main()
{
    //la final 75 stins si 100 sa fie aprins
    BecReglabil bec75, bec100;
    bec75.SetPutereCurenta(0);
    bec75.SetPutereMaxima(75);
    bec100.SetPutereCurenta(0);
    bec100.SetPutereMaxima(100);

    cout<<"Putere curenta pentru bec75 este: " << bec75.GetPutereCurenta()<<endl;
    cout<<"Putere curenta pentru bec100 este " << bec100.GetPutereCurenta()<<endl;

    bec75.Aprinde();
    bec75.StareBec();cout << ""<<endl;
    bec100.Aprinde();
    bec100.StareBec();cout << ""<<endl;

    bec75.Stinge();
    bec75.StareBec();cout << ""<<endl;
    bec100.Stinge();
    bec100.StareBec();cout << ""<<endl;

    bec75.MaresteLumina(90);
    bec75.StareBec();cout << ""<<endl;
    bec100.MaresteLumina(90);
    bec100.StareBec();cout << ""<<endl;

    bec75.ReduceLumina(75);
    bec75.StareBec();cout << ""<<endl;
    bec100.ReduceLumina(75);
    bec100.StareBec();cout << ""<<endl;

    cout<<"Putere curenta pentru bec75 este: " << bec75.GetPutereCurenta()<<endl;
    cout<<"Putere curenta pentru bec100 este " << bec100.GetPutereCurenta()<<endl;

    return 0;
}

/*
Definiți o clasă BecReglabil.
Declarați, respectând principiul încapsulării, următorii membri de tip dată:
unsigned short putereMaxima
unsigned short putereCurenta
bool aprins

Pentru membrii putereMaxima și putereCurenta creați câte o metodă de tip setter
1. Metoda are numele Set<nume membru> (SetPutereMaxima respectiv SetPutereCurenta)
2. Primește ca parametru de intrare un parametru de acelați tip cu membrul clasei
3. Modifică valoarea membrului respectiv să fie egală cu parametrul.
4. Nu returnează nimic

Pentru membrii putereMaxima și putereCurenta creați câte o metodă de tip getter
1. Metoda are numele Get<nume membru> (GetPutereMaxima respectiv GetPutereCurenta)
2. Nu primește parametri
3. Returnează valoarea membrului corespunzător (putereMaxima respectiv putereCurenta)

Mai declarați și următorii membri de tip metoda:
A. Aprinde
1. nu primește parametri
2. pune aprins pe true
3. modifică valoarea lui putereCurenta să fie egal cu putereMaxima
4. nu returnează nimic

B. Stinge
1. nu primește parametri
2. pune aprins pe false
3. modifică valoarea lui putereCurenta să fie egal cu 0
4. nu returnează nimic

C. MaresteLumina
1. primește un parametru de tip short
2. crește valoarea lui putereCurenta cu parametrul primit
3. dacă în urma adunării, putereCurenta > putereMaxima, modifică valoarea lui putereCurenta încât să fie egal cu putereMaxima
4. pune aprins pe true
5. nu returnează nimic

D. ReduceLumina
1. primește un parametru de tip short
2. scade din valoarea lui putereCurenta parametrul primit
3. dacă în urma scăderii, putereCurenta < 0, modifică valoarea lui putereCurenta încât să fie egal cu 0
4. dacă putereCurentă devine 0 pune aprins pe false
5. nu returnează nimic

E. StareaBec
1. nu primește parametri
2. dacă aprins e true afișează „Becul e aprins”
3. dacă aprins e false afișează „Becul e stins”
4. nu returnează nimic

În funcția main declarați două obiecte de tip BecReglabil, bec75 și bec100.
La bec75 puneți putereCurenta pe 0 și  putereMaxima pe 75.
La bec100 puneți putereCurenta pe 0 și  putereMaxima pe 100.
Apelați la ambele obiecte metoda Aprinde și apoi metoda StareBec
Apelați la ambele obiecte metoda Stinge și apoi metoda StareBec
Apelați la ambele obiecte metoda MaresteLumina(90) și apoi metoda StareBec
Apelați la ambele obiecte metoda ReduceLumina (75)  și apoi metoda StareBec
Afișați puterea curentă a fiecărui bec.
*/
