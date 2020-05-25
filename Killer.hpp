#ifndef KILLERI_HPP_INCLUDED
#define KILLERI_HPP_INCLUDED
class Killer
{
protected:
    string Ime;
    bool DLC,Povezanost;
    KillerItem item;
public:
    Killer(string Ime="", bool DLC=false, bool Povezanost=false, string ImeItema="", string OpisItema="", string VrstaItema="", bool OneShot=false, double MovementSpeed=0):item(ImeItema, OpisItema, VrstaItema, OneShot, MovementSpeed)
    {
        this->Ime=Ime;
        this->DLC=DLC;
        this->Povezanost=Povezanost;
    }
    Killer(const Killer& k)
    {
        Ime=k.Ime;
        DLC=k.DLC;
        Povezanost=k.Povezanost;
        item=k.item;
    }
    void Povezan()
    {
    	if(Povezanost)
    	   cout<<"Killer je online"<<endl;
    }
    friend ostream& operator<<(ostream& izlaz, const  Killer &k)
    {
        izlaz<<k.Ime<<" ";
        izlaz<<"DLC: "<<k.DLC<<" ";
        izlaz<<k.item<<endl;
        return izlaz;
    }
};


#endif // KILLERI_HPP_INCLUDED
