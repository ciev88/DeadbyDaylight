#ifndef MAPA_HPP_INCLUDED
#define MAPA_HPP_INCLUDED
#include "Generator.hpp"

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

    public:
        Mapa(string im, string l, bool e, bool h)
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
