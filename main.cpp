#include <iostream>
#include<fstream>
using namespace std;
#include "Mapa.hpp"
#include "Generator.hpp"
#include "Item.hpp"
#include "Killeri.hpp"
#include "Mapa.hpp"
#include "Rezultat_Meca.hpp"
#include "Stanje_Survivora.hpp"
#include "Survivori.hpp"
#include "Zvukovi.hpp"

ostream& operator<<(ostream& izlaz, const Generator &g)
{

    izlaz<<"Generator: ispis"<<endl;
    izlaz<<"Popravljen: "<<g.Popravljen<<endl;
    izlaz<<"Procenat Popravljenosti: "<<g.ProcenatPopravljenosti<<endl<<endl;

return izlaz;
}

ostream& operator<<(ostream& izlaz, const Zvukovi &z)
{

    izlaz<<"Zvukovi: ispis"<<endl;
    izlaz<<"GlavniZvuk: "<<z.GlavniZvuk<<endl;
    izlaz<<"SporedniZvuk: "<<z.SporedniZvuk<<endl;
    izlaz<<"Heartbeat: "<<z.Heartbeat<<endl<<endl;

return izlaz;
}

ostream& operator<<(ostream& izlaz, const Killer &k)
{

    izlaz<<"Killer: ispis"<<endl;
    izlaz<<"Ime: "<<k.Ime<<endl;
    izlaz<<"DLC: "<<k.DLC<<endl;
    izlaz<<k.item<<endl<<endl;

return izlaz;
}

ostream& operator<<(ostream& izlaz, const KillerItem &ki)
{


    izlaz<<"Naziv Itema: "<<ki.Naziv<<endl;
    izlaz<<"Opis Itema: "<<ki.Opis<<endl;
    izlaz<<"Vrsta Itema: "<<ki.Vrsta_Itema<<endl;
    izlaz<<"Oneshot:"<<ki.Oneshot<<endl;
    izlaz<<"Movespeed:"<<ki.Movespeed<<endl<<endl;

return izlaz;
}

bool StanjeSurvivora::exposed=false;

int main()
{
    /*Funkcionalnost jeste da na kraju ispisemo statistku rezultata meca

      dakle, koji survivor je zavrsio u kom stanju, koji item je izgubljen,

      koliko je  ko zaradi bloodpointsa, rank progres i sl.*/

    //Mapa m("Mapa", "Mapa", false, false, false, false);
    //m.pozivcitanja();
    //niggatoni

    Generator g(false, 0);
    cout<<g<<endl;

    Zvukovi z("Zvuk 1", "Zvuk 2", false);
    cout<<z<<endl;

    Killer k("Shape", true, "ime", "opis", "vrsta", false, 1.25);
    cout<<k<<endl;

    Totem t(true, true);

    StanjeSurvivora s(healthy, chased, escaped);

    s.provera(t);
    return 0;
}
