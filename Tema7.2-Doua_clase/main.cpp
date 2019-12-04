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

    //delete listaBecuri;
    //listaBecuri = nullptr;

    return 0;
}
