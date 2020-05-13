#ifndef MAPA_HPP_INCLUDED
#define MAPA_HPP_INCLUDED
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
        bool OtkljucavanjeExita;
        bool Exit1;
        bool Exit2;
        bool Hatch;
    public:
        Mapa(string im, string l, bool oe, bool e1, bool e2, bool h)
        {
            ImeMape=im;
            Lokacija=l;
            OtkljucavanjeExita=oe;
            Exit1=e1;
            Exit2=e2;
            Hatch=h;
        }

        void pozivcitanja()
        {
            citanje("Mapa.txt");
        }


};

#endif // MAPA_HPP_INCLUDED
