#ifndef ZVUKOVI_HPP_INCLUDED
#define ZVUKOVI_HPP_INCLUDED
#include "Stanje_Survivora.hpp"
class Zvukovi{
    protected:
        string GlavniZvuk;
        string SporedniZvuk;
        bool Heartbeat;
    public:
        Zvukovi(string z1, string z2, bool h)
        {
            GlavniZvuk=z1;
            SporedniZvuk=z2;
            Heartbeat=h;
        }

            void UpaliZvuk(StanjeSurvivora s)
            {
                if(s.getaction()==chased)
                {
                    GlavniZvuk="Jurnjava muzka";
                }
            }

            friend ostream& operator<<(ostream& izlaz, const Zvukovi &z)
            {   

                izlaz<<"Zvukovi: ispis"<<endl;
                izlaz<<"GlavniZvuk: "<<z.GlavniZvuk<<endl;
                izlaz<<"SporedniZvuk: "<<z.SporedniZvuk<<endl;
                izlaz<<"Heartbeat: "<<z.Heartbeat<<endl<<endl;

                return izlaz;
            }            
};

#endif // ZVUKOVI_HPP_INCLUDED
