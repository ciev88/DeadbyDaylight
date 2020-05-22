#include "Game.hpp"
bool StanjeSurvivora::exposed=false;
int main()
{
    Game g;
    g.play();



    /*Funkcionalnost jeste da na kraju ispisemo statistku rezultata meca

      dakle, koji survivor je zavrsio u kom stanju, koji item je izgubljen,

      koliko je  ko zaradi bloodpointsa, rank progres i sl.*/

    //Mapa m("Mapa", "Mapa", false, false, false, false); 
    //m.pozivcitanja();
    

    /*Generator g(false, 0);
    cout<<g<<endl;
    
    Zvukovi z("Zvuk 1", "Zvuk 2", false);
    cout<<z<<endl;

    Killer k("Shape", true, true, "ime", "opis", "vrsta", false, 1.25);
    cout<<k<<endl;

    Survivor s("Cloudette Morrel", true, true, "ime", "opis", "vrsta", true, 1.5);
    cout<<s<<endl;

    Totem t(true, true);

    StanjeSurvivora ss(healthy, chased, escaped);

    k.Povezan();
    s.Povezan();     

    ss.provera(t);

    Mapa m("Ime", "Lokacija", true, true, true, true);*/
    g.SacuvajPerkove();
    return 0;
}
