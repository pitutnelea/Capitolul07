#include <iostream>
#include "Candelabru.h"
#include "BecReglabil.h"

using namespace std;

int main()
{
    Candelabru cand3, cand5;
    cand3.ConfigureazaCandelabru(3);
    cand5.ConfigureazaCandelabru(5);
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    cand3.AprindeLumina();
    cand5.AprindeLumina();
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    cand3.StingeLumina();
    cand5.StingeLumina();
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    cand3.MaresteLumina(150);
    cand5.MaresteLumina(150);
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    cand3.ReduceLumina(75);
    cand5.ReduceLumina(75);
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    cand3.ReduceLumina(30);
    cand5.ReduceLumina(30);
    cand3.StareCandelabru(); cout<<""<<endl;
    cand5.StareCandelabru(); cout<<""<<endl;

    //cand3.PutereMaximaCandelabru(); cout<< ""<<endl;
    //cand5.PutereMaximaCandelabru();

    return 0;
}
