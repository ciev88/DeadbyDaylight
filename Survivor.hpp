#ifndef SURVIVORI_HPP_INCLUDED
#define SURVIVORI_HPP_INCLUDED
class Survivor
{
protected:
    string Ime,Prezime;
    bool DLC,Povezanost;
    SurvivorItem item;
    StanjeSurvivora stanje;
public:
    Survivor(string Ime="",string Prezime="", bool DLC=false, bool Povezanost=false, string ImeItema="", string OpisItema="", string VrstaItema="", bool FastHeal=false, double BPM=0)
    :item(ImeItema, OpisItema, VrstaItema, FastHeal, BPM)
    {
        this->Ime=Ime;
        this->Prezime=Prezime;
        this->DLC=DLC;
        this->Povezanost=Povezanost;
    }
    Survivor(const Survivor& s)
    {
        Ime=s.Ime;
        Prezime=s.Prezime;
        DLC=s.DLC;
        Povezanost=s.Povezanost;
        item=s.item;
    }
    bool interactable()
    {
        result r=stanje.getResult();
        if(r==ingame)
            return true;
        else return false;
    }
    void hurt()
    {
        health h=stanje.getHealth();
        if(h==healthy)
        {
            h=injured;
            cout << "Survivor injured." << endl;
        }
        else if(h==injured)
        {
            h=downed;
            cout << "Survivor downed." << endl;
        }
        else cout << "Survivor already downed." << endl;
        stanje.setHealth(h);
    }
    void hook()
    {
        if(stanje.getHealth()==downed&&stanje.getResult()==ingame)
        {
            stanje.setResult(sacrificed);
            cout << "Survivor sacrificed" << endl;
        }
        else
            cout << "Ne moguce sacrifice." << endl;
    }
    void kill()
    {
        if(stanje.getExposed())
            stanje.setResult(killed);
        else cout<<"Ne moguce ubiti!" << endl;
    }
    void heal()
    {
        health h=stanje.getHealth();
        if(h==healthy)
            cout << "Vec je full health." << endl;
        else if(h==injured)
        {
            cout << "Healthy!" << endl;
            h=healthy;
        }
        else if(h==downed)
        {
            cout << "Healed one state!" << endl;
            h=injured;
        }
        else cout << "Ne moguce healovati." << endl;
        stanje.setHealth(h);
    }
    void escape()
    {
        health h=stanje.getHealth();
        if(h==healthy||h==injured)
            stanje.setResult(escaped);
    }
    string rezultat()const
    {
        result r=stanje.getResult();
        if(r==sacrificed)
            return "sacrificed";
        if(r==killed)
            return "killed";
        if(r==escaped)
            return "escaped";
        return ""; //zbog nekog warninga
    }
    friend ostream& operator<<(ostream& izlaz, const  Survivor &s)
    {

        izlaz<<s.Ime<<" "<<s.Prezime<<" ";
        izlaz<<"DLC: "<<s.DLC<<" ";
        izlaz<<s.rezultat()<<" ";
        izlaz<<s.item<<endl;
        return izlaz;
    }
    void Povezan()
    {
        if(Povezanost)
            cout<<"Survivor je online"<<endl;
    }
    bool isingame()
    {
        if(stanje.getResult()==ingame)
            return true;
        else return false;
    }
};

#endif // SURVIVORI_HPP_INCLUDED
