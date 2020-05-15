#ifndef KILLERI_HPP_INCLUDED
#define KILLERI_HPP_INCLUDED
#include "Item.hpp"
#include "Igrac.hpp"
enum killer{Trapper, Wraith, Hillbilly, Nurse, Shape, Hag, Doctor, Huntress, Cannibal, Nightmare, Pig, Clown, Spirit, Legion, Plague, Ghost_Face, Demogorgon, Oni, Deathslinger};

class Killer:public Igrac
{
protected:
    string Ime;
    bool DLC;
    KillerItem item;
public:


        Killer(string I, bool D, bool po, string n, string o, string v, bool os, double ms):Igrac(po), item(n, o, v, os, ms)

        {
            Ime=I;
            DLC=D;
        }
        
    friend ostream& operator<<(ostream& izlaz, const  Killer &k)
    {

        izlaz<<"Killer: ispis"<<endl;
        izlaz<<"Ime: "<<k.Ime<<endl;
        izlaz<<"DLC: "<<k.DLC<<endl;
        izlaz<<k.item<<endl<<endl;

        return izlaz;
    }
    

    void Povezan()
    {
    	Igrac::Povezan();
    	cout<<"Killer je online"<<endl;
    }

};


#endif // KILLERI_HPP_INCLUDED
