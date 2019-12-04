#include <iostream>
#include "Candelabru.h"
#include "BecReglabil.h"

using namespace std;

int main()
{
    Candelabru cand3, cand5;
    cand3.ConfigureazaCandelabru(3);
    cand5.ConfigureazaCandelabru(5);
    cout<<"StareCandelabru (dupa configurare):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cand3.AprindeLumina();
    cand5.AprindeLumina();
    cout<<"StareCandelabru (dupa ce aprind lumina):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cand3.StingeLumina();
    cand5.StingeLumina();
    cout<<"StareCandelabru (dupa ce sting lumina):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cand3.MaresteLumina(150);
    cand5.MaresteLumina(150);
    cout<<"StareCandelabru (dupa ce maresc lumina cu 150):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cand3.ReduceLumina(75);
    cand5.ReduceLumina(75);
    cout<<"StareCandelabru (dupa ce reduc lumina cu 75):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cand3.ReduceLumina(30);
    cand5.ReduceLumina(30);
    cout<<"StareCandelabru (dupa ce reduc lumina cu 30):"<<endl;
    cout<< (cand3.StareCandelabru()? "aprins" : "stins")<<endl;
    cout<< (cand5.StareCandelabru()? "aprins" : "stins")<<endl;

    cout<<"PutereMaximaCandelabru:"<<endl;
    cand3.PutereMaximaCandelabru(); cout<< " "<<endl;
    cand5.PutereMaximaCandelabru();

    return 0;
}

/*Creați o clasă, Candelabru.

Declarați ca private următorii membri de tip date:
    unsigned short nrBecuri
    BecReglabil* listaBecuri

Mai declarați și următorii membri publici de tip metoda:
a)ConfigureazaCandelabru
    primește numărul de becuri al candelabrului sub forma unui parametru unsigned short
    inițializează corespunzător membrul nrBecuri
    inițializează listaBecuri prin crearea pe heap a unui array cu numărul necesar de elemente
    inițializează fiecare bec din listă punându-i puteream curentă pe 0 și cea maximă pe 100
    nu returnează nimic
b)AprindeLumina
    nu primește parametri
    pune la fiecare bec puterea curentă pe maxim și membrul aprins pe true
    nu returnează nimic
    StingeLumina
    nu primește parametri
    pune la fiecare bec puterea curentă pe 0 și membrul aprins pe false
    nu returnează nimic
c)MaresteLumina
    primește un parametru de tip unsigned short
    crește valoarea lui putereCurenta a fiecărui bec cu parametrul primit
    nu returnează nimic
    ReduceLumina
    primește un parametru de tip unsigned short
    scade valoarea lui putereCurenta a fiecărui bec cu parametrul primit
    nu returnează nimic
d)PutereMaximaCandelabru
    nu primește parametri
    returneză suma puterilor maxime ale becurilor din listă
    StareCandelabru
    nu primește parametri
    returneză true dacă cel puțin un bec are membrul aprins pe true. Dacă nu, returnează false

Pentru BecReglabil refolosiți clasa din tema anterioară.
În acest scop copiați fișierele clasei BecReglabil (.h și .cpp) din celălalt proiect în folderele include respectiv src ale proiectului curent.
Apoi pe fiecare din cele două foldere (src și include) faceți click dreapta, alegeți din meniul contextual „Add file” și selectați fișierul dorit.

În funcția main declarați două obiecte de tip Candelabru, cand3 și cand5.
Apelați metoda ConfigureazaCandelabru pentru ambele obiecte cu parametru 3, respectiv 5 (numărul de becuri al acelui obiect Candelabru)
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Apelați metoda  AprindeLumina pentru  ambele obiecte
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Apelați metoda  StingeLumina pentru  ambele obiecte
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Apelați metoda  MaresteLumina pentru  ambele obiecte cu parametru 150
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Apelați metoda  ReduceLuminapentru  ambele obiecte cu parametru 75
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Apelați metoda  ReduceLuminapentru  ambele obiecte cu parametru 30
Afișați starea fiecărui obiect Candelabru ( dacă e aprins sau stins)
Afișați puterea maximă a  fiecărui obiect Candelabru*/
