#ifndef SURVIVORI_HPP_INCLUDED
#define SURVIVORI_HPP_INCLUDED
#include "Item.hpp"
enum survivor{Dwight_Fairfield, Meg_Thomas, Claudette_Morel, Jake_Park, Nea_Karlsson, Laurie_Strode, Ace_Visconti, Bill_Overbeck, Feng_Min, David_King, Quentin_Smith, David_Tapp, Kate_Denson, Adam_Francis, Jeff_Johansen, Jane_Romero, Ash_Williams, Nancy_Wheeler, Steve_Harrington, Yui_Kimura, Zarina_Kassir};
class Survivor
{
    protected:
        string ImePrezime;
        bool DLC;
        SurvivorItem item;
    public:

    Survivor(string IP, bool D, string n, string o, string v, bool fh, double bpm):item(n, o, v, fh, bpm)
    {
        ImePrezime=IP;
        DLC=D;
    }
};

#endif // SURVIVORI_HPP_INCLUDED
