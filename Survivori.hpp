#ifndef SURVIVORI_HPP_INCLUDED
#define SURVIVORI_HPP_INCLUDED
#include "Item.hpp"
#include "Igrac.hpp"

class Survivor:public Igrac
{
    protected:
        string Ime_Prezime;
        bool DLC;
        SurvivorItem item;
    public:

    Survivor(string IP, bool D, bool po, string n, string o, string v, bool fh, double bpm):Igrac(po), item(n, o, v, fh, bpm)
    {
        Ime_Prezime=IP;
        DLC=D;
    }

    friend ostream& operator<<(ostream& izlaz, const  Survivor &s)
    {

        izlaz<<"Survivor: ispis"<<endl;
        izlaz<<"Ime i Prezime: "<<s.Ime_Prezime<<endl;
        izlaz<<"DLC: "<<s.DLC<<endl;
        izlaz<<s.item<<endl<<endl;

        return izlaz;
    }

    void Povezan()
    {
        Igrac::Povezan();
        cout<<"Survivor je online"<<endl;
    }
};

#endif // SURVIVORI_HPP_INCLUDED
