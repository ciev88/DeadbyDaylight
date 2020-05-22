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
    friend ostream& operator<<(ostream& izlaz, const  Killer &k)
    {

        izlaz<<"Killer: ispis"<<endl;
        izlaz<<"Ime: "<<k.Ime<<endl;
        izlaz<<"DLC: "<<k.DLC<<endl;
        izlaz<<k.item<<endl<<endl;
        return izlaz;
    }
    void Povezan()
    {
    	if(Povezanost)
    	   cout<<"Killer je online"<<endl;
    }
};


#endif // KILLERI_HPP_INCLUDED
