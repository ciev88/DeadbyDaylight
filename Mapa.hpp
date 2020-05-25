#ifndef MAPA_HPP_INCLUDED
#define MAPA_HPP_INCLUDED
#include "Generator.hpp"
#include "Totem.hpp"
class Mapa
{
protected:
    string Ime_Mape;
    string Lokacija;
    bool Exiti;
    bool Hatch;
    int brojPopravljenih;
    Generator g[8];
    Totem t[5];
public:
    Mapa(string im="", string l="")
    {
        Ime_Mape=im;
        Lokacija=l;
        Exiti=false;
        Hatch=false;
        brojPopravljenih=0;
    }
    void popraviGen()
    {
        if(brojPopravljenih==5)
            cout<<"Generatori vec popravljeni!"<<endl;
        else
            g[brojPopravljenih++].setProcenatPopravljenosti(100);
    }
    void openExit()
    {
        if(brojPopravljenih==5)
        {
            cout<<"Exiti otvoreni, svi healthy i injured survivori pobegli!"<<endl;
            Exiti=true;
        }
        else
            cout<<"Generatori nisu popravljeni!"<<endl;
    }
    bool otvoreniExiti()
    {
        return Exiti;
    }
    void citanje(string Mapa="Mapa.txt")
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
};

#endif // MAPA_HPP_INCLUDED
