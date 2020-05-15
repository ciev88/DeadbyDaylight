#include <iostream>
#include<fstream>
using namespace std;
#include <vector>
#include "Mapa.hpp"
#include "Generator.hpp"
#include "Item.hpp"
#include "Killeri.hpp"
#include "Mapa.hpp"
#include "Rezultat_Meca.hpp"
#include "Stanje_Survivora.hpp"
#include "Survivori.hpp"
#include "Zvukovi.hpp"
#include "Igrac.hpp"

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

    Generator g1(false, 100);
    Generator g2(false, 100);
    Generator g3(false, 100);
    Generator g4(false, 100);
    Generator g5(false, 100);
    Generator g6(false, 0);
    Generator g7(false, 0);
    

    Zvukovi z("Zvuk 1", "Zvuk 2", false);
    cout<<z<<endl;

    Killer k("Shape", true, true, "ime", "opis", "vrsta", false, 1.25);
    cout<<k<<endl;

    Survivor s("William Bill Overback", true, true, "ime", "opis", "vrsta", false, 1.5);


    Totem t(true, true);

    StanjeSurvivora ss(healthy, chased, escaped);

    k.Povezan();
    s.Povezan();     

    ss.provera(t);

    Mapa m("Ime", "Lokacija", true, true, true, true);
    m.brojGeneratora();
    m.dodajGen(g);
    m.dodajGen(g1);
    m.dodajGen(g2);
    m.dodajGen(g3);
    m.dodajGen(g4);
    m.dodajGen(g5);
    m.dodajGen(g6);
    m.dodajGen(g7);
    m.brojGeneratora();
    m.ukloniGen();
    m.brojGeneratora();
    m.Pretraga();
    m.ispisSvihGeneratora();
    return 0;
}
