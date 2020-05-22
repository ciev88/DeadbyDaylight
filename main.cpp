#include "Game.hpp"
bool StanjeSurvivora::exposed=false;
int main()
{
    Game g;
    g.play();

    
    // Profesorka, licno vas molim da me baas dooobro propitate, Aleksa je mi je previse pomogao, al nisam ga mogao odgovoriti 

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
   // g.SacuvajPerkove();
    return 0;
}
