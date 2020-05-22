#ifndef SURVIVORI_HPP_INCLUDED
#define SURVIVORI_HPP_INCLUDED
class Survivor
{
protected:
    string Ime_Prezime;
    bool DLC,Povezanost;
    SurvivorItem item;
public:
    Survivor(string Ime_Prezime="", bool DLC=false, bool Povezanost=false, string ImeItema="", string OpisItema="", string VrstaItema="", bool FastHeal=false, double BPM=0)
    :item(ImeItema, OpisItema, VrstaItema, FastHeal, BPM)
    {
        this->Ime_Prezime=Ime_Prezime;
        this->DLC=DLC;
        this->Povezanost=Povezanost;
    }
    Survivor(const Survivor& s)
    {
        Ime_Prezime=s.Ime_Prezime;
        DLC=s.DLC;
        Povezanost=s.Povezanost;
        item=s.item;
    }
    friend ostream& operator<<(ostream& izlaz, const  Survivor &s)
    {

        izlaz<<"Survivor: ispis"<<endl;
        izlaz<<"Ime i Prezime: "<<s.Ime_Prezime<<endl;
        izlaz<<"DLC: "<<s.DLC<<endl;
        izlaz<<s.item<<endl<<endl;
        return izlaz;
    }
    void Povezan()
    {
        if(Povezanost)
            cout<<"Survivor je online"<<endl;
    }
};

#endif // SURVIVORI_HPP_INCLUDED
