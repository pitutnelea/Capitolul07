#ifndef CANDELABRU_H
#define CANDELABRU_H

class BecReglabil;
class Candelabru
{
    private:
        unsigned short nrBecuri;
        BecReglabil *listaBecuri;

    public:
        void ConfigureazaCandelabru(unsigned short nr_becuri);
        void AprindeLumina();
        void StingeLumina();
        void MaresteLumina(unsigned short);
        void ReduceLumina(unsigned short);
        void PutereMaximaCandelabru();
        void StareCandelabru();

        Candelabru();
        virtual ~Candelabru();

    protected:
};

#endif // CANDELABRU_H

