#ifndef KILLERI_HPP_INCLUDED
#define KILLERI_HPP_INCLUDED
#include "Item.hpp"
enum killer{Trapper, Wraith, Hillbilly, Nurse, Shape, Hag, Doctor, Huntress, Cannibal, Nightmare, Pig, Clown, Spirit, Legion, Plague, Ghost_Face, Demogorgon, Oni, Deathslinger};

class Killer
{
protected:
    string Ime;
    bool DLC;
    KillerItem item;
public:
        Killer(string I, bool D, string n, string o, string v, bool os, double ms):item(n, o, v, os, ms)
    {
        Ime=I;
        DLC=D;
    }
    friend ostream& operator<<(ostream& izlaz, const  Killer &k);
};


#endif // KILLERI_HPP_INCLUDED
