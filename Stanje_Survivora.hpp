#ifndef STANJE_SURVIVORA_HPP_INCLUDED
#define STANJE_SURVIVORA_HPP_INCLUDED
#include "Totemi.hpp"
enum health {healthy, injured, broken, downed};
enum action {normal, chased, healing, genning, mending, bold, locker, chest, openingexit};
enum result {escaped, sacrificed, killed};
class StanjeSurvivora
{
protected:
    health h;
    action a;
    result r;
public:

    StanjeSurvivora(health hh, action aa, result rr)
    {
        h=hh;
        a=aa;
        r=rr;
    }

    static bool exposed;

    health gethealth()const
    {
        return h;
    }

    action getaction()const
    {
        return a;
    }

    result getresult()const
    {
        return r;
    }

    void provera(Totem &t)
    {
        if(t.getSrusen()==true && t.getHex()==true)
        {
            exposed=true;
        }
        cout<<"Tacnost exposovanja je:"<< exposed<<endl;
    }




};

#endif // STANJE_SURVIVORA_HPP_INCLUDED
