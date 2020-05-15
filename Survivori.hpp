#ifndef SURVIVORI_HPP_INCLUDED
#define SURVIVORI_HPP_INCLUDED
#include "Item.hpp"
#include "Igrac.hpp"
enum survivor{Dwight_Fairfield, Meg_Thomas, Claudette_Morel, Jake_Park, Nea_Karlsson, Laurie_Strode, Ace_Visconti, Bill_Overbeck, Feng_Min, David_King, Quentin_Smith, David_Tapp, Kate_Denson, Adam_Francis, Jeff_Johansen, Jane_Romero, Ash_Williams, Nancy_Wheeler, Steve_Harrington, Yui_Kimura, Zarina_Kassir};
class Survivor:public Igrac
{
    protected:
        string ImePrezime;
        bool DLC;
        SurvivorItem item;
    public:

    Survivor(string IP, bool D, bool po, string n, string o, string v, bool fh, double bpm):Igrac(po), item(n, o, v, fh, bpm)
    {
        ImePrezime=IP;
        DLC=D;
    }

    void Povezan()
    {
        Igrac::Povezan();
        cout<<"Survivor je online"<<endl;
    }
};

#endif // SURVIVORI_HPP_INCLUDED
