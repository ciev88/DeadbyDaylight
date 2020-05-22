#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED
class Item
{
protected:
    string Naziv;
    string Opis;
    string VrstaItema;
public:
    Item(){
        Naziv="Flashlight";
        Opis="Emits a beam of light, which could cause killer blindness";
        VrstaItema="Anti Killer";
    }
    Item(string n, string o, string v)
    {
        Naziv=n;
        Opis=o;
        VrstaItema=v;
    }
    Item(const Item& i)
    {
        Naziv=i.Naziv;
        Opis=i.Opis;
        VrstaItema=i.VrstaItema;
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
        KillerItem(const KillerItem& i)
        {
            Naziv=i.Naziv;
            Opis=i.Opis;
            VrstaItema=i.VrstaItema;
            Oneshot=i.Oneshot;
            Movespeed=i.Movespeed;
        }

        friend ostream& operator<<(ostream& izlaz, const KillerItem& ki)
        {
            izlaz<<"Naziv itema: "<<ki.Naziv<<endl;
            izlaz<<"Opis itema: "<<ki.Opis<<endl;
            izlaz<<"Vrsta itema: "<<ki.VrstaItema<<endl;
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
        SurvivorItem(const SurvivorItem& i)
        {
            Naziv=i.Naziv;
            Opis=i.Opis;
            VrstaItema=i.VrstaItema;
            Fastheal=i.Fastheal;
            BloodPointsMultiplier=i.BloodPointsMultiplier;
        }

        friend ostream& operator<<(ostream& izlaz, const SurvivorItem& si)
        {
            izlaz<<"Naziv itema:"<<si.Naziv<<endl;
            izlaz<<"Opis itema:"<<si.Opis<<endl;
            izlaz<<"Vrsta itema"<<si.VrstaItema<<endl;
            izlaz<<"Fastheal:"<<si.Fastheal<<endl;
            izlaz<<"Blood points multiplier:"<<si.BloodPointsMultiplier<<endl;

            return izlaz;
        }

};

#endif // ITEM_HPP_INCLUDED
