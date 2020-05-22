#ifndef MAPA_HPP_INCLUDED
#define MAPA_HPP_INCLUDED
#include "Generator.hpp"
#include "Totem.hpp"
void citanje(string Mapa)
{
    string linija;
    ifstream fajl (Mapa);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";
}
class Mapa
{
protected:
    string Ime_Mape;
    string Lokacija;
    bool Exiti;
    bool Hatch;
    Generator g1;
    Generator g2;
    Generator g3;
    Generator g4;
    Generator g5;
    Generator g6;
    Generator g7;
    Generator g8;
    Totem t1;
    Totem t2;
    Totem t3;
    Totem t4;
    Totem t5;
public:
    Mapa(string im="", string l="", bool e=false, bool h=false)
    {
        Ime_Mape=im;
        Lokacija=l;
        Exiti=e;
        Hatch=h;
    }
    void pozivcitanja()
    {
        citanje("Mapa.txt");
    }
};

#endif // MAPA_HPP_INCLUDED
