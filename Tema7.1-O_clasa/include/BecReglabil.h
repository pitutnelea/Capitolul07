#ifndef BECREGLABIL_H
#define BECREGLABIL_H


class BecReglabil
{
    private:
        unsigned short putereMaxima;
        unsigned short putereCurenta;
        bool aprins;

    public:
        void SetPutereMaxima(unsigned short putMax){putereMaxima = putMax;}
        void SetPutereCurenta(unsigned short putCrt){putereCurenta = putCrt;}
        unsigned short GetPutereMaxima(){return putereMaxima;}
        unsigned short GetPutereCurenta(){return putereCurenta;}
        void Aprinde();
        void Stinge();
        unsigned short MaresteLumina(unsigned short);
        unsigned short ReduceLumina(unsigned short);
        void StareaBec();

        BecReglabil();
        virtual ~BecReglabil();

    protected:



};

#endif // BECREGLABIL_H
