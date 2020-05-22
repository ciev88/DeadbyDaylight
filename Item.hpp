#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED

class Item
{
    protected:
        string Naziv;
        string Opis;
        string Vrsta_Itema;
    public:
        Item(){
            Naziv="Flashlight";
            Opis="Emits a beam of light, which could cause killer blindness";
            Vrsta_Itema="Anti Killer";
        }

        Item(string n, string o, string v)
        {
            Naziv=n;
            Opis=o;
            Vrsta_Itema=v;
        }
};

class KillerItem:public Item
{
    protected:
        bool Oneshot;
        double Movespeed;
    public:
        KillerItem():Item()
        {
         Oneshot=true;
         Movespeed=1.5;
        }

        KillerItem(string n, string o, string v, bool os, double ms):Item(n, o, v)
        {
         Oneshot=os;
         Movespeed=ms;
        }

        friend ostream& operator<<(ostream& izlaz, const KillerItem& ki)
        {
            izlaz<<"Naziv itema: "<<ki.Naziv<<endl;
            izlaz<<"Opis itema: "<<ki.Opis<<endl;
            izlaz<<"Vrsta itema: "<<ki.Vrsta_Itema<<endl;
            izlaz<<"Oneshot:"<<ki.Oneshot<<endl;
            izlaz<<"Movespeed:"<<ki.Movespeed<<endl<<endl;

            return izlaz;
        }

};

class SurvivorItem:public Item
{
    protected:
        bool Fastheal;
        double BloodPointsMultiplier;
    public:
        SurvivorItem():Item(),Fastheal(true),BloodPointsMultiplier(1.5){}

        SurvivorItem(string n, string o, string v, bool fh, double bpm):Item(n, o, v)
        {
         Fastheal=fh;
         BloodPointsMultiplier=bpm;
        }

        friend ostream& operator<<(ostream& izlaz, const SurvivorItem& si)
        {
            izlaz<<"Naziv itema:"<<si.Naziv<<endl;
            izlaz<<"Opis itema:"<<si.Opis<<endl;
            izlaz<<"Vrsta itema"<<si.Vrsta_Itema<<endl;
            izlaz<<"Fastheal:"<<si.Fastheal<<endl;
            izlaz<<"Blood points multiplier:"<<si.BloodPointsMultiplier<<endl;

            return izlaz;
        }

};

#endif // ITEM_HPP_INCLUDED
