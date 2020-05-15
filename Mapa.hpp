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
        string ImeMape;
        string Lokacija;
        bool Exiti;
        bool Hatch;
        Generator g;
        vector<Generator>Generatori;

    public:
        Mapa(string im, string l, bool e, bool h, bool p, bool pp):g(p, pp)
        {
            ImeMape=im;
            Lokacija=l;
            Exiti=e;
            Hatch=h;
        }

        void pozivcitanja()
        {
            citanje("Mapa.txt");
        }

        void dodajGen(Generator g)
        {
            Generatori.push_back(g);
            cout<<"Generator je dodat"<<endl;
        }   

        void ukloniGen()
        {
            Generatori.erase(Generatori.begin()/*+n*/);
            cout<<"Generator uklonjen"<<endl;
        }

        int brojGeneratora()
        {
            cout<<"Broj Generatora je: "<<Generatori.size()<<endl;
            return Generatori.size();
            
        }

        void Pretraga()
        {
            int x=0;

            for(auto it=Generatori.begin(); it!=Generatori.end(); it++)
            {
                if(it->ProveraPopravljen()==true)
                    x++;
            }

            if(x==5)
            {
                Exiti=true;
                cout<<"Exiti otvoreni"<<endl;
            }
            else
                cout<<"Exiti zatvoreni"<<endl;

        }

        void ispisJednogGeneratora(Generator g)
        {
            cout<<g<<endl;
        }

        void ispisSvihGeneratora()
        {
            for(auto it=Generatori.begin(); it!=Generatori.end(); it++)
            {
                ispisJednogGeneratora(*it);   
            }

        }

};

#endif // MAPA_HPP_INCLUDED
