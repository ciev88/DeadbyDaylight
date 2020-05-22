#ifndef PERKOVI_HPP_INCLUDED
#define PERKOVI_HPP_INCLUDED
enum Tier{Yellow=1,Green,Purple};
class Perk
{
protected:
	string ImePerka;
	Tier tier;
public:
	Perk(string ImePerka="",Tier tier=Yellow)
	{
		this->ImePerka=ImePerka;
		this->tier=tier;
	}
	virtual bool iskiller()const {return false;}
	string getImePerka()const
	{
		return ImePerka;
	}
	string getTier()const
	{
		if(tier==Yellow)
			return "Yellow";
		else if(tier==Green)
			return "Green";
		else return "Purple";
	}
	void ispisPerka()
	{
		cout<<ImePerka<<" ";
        if(tier==Yellow)
        	cout<<"Yellow";
        else if(tier==Green)
        	cout<<"Green";
        else cout<<"Purple";
        cout<<" 0 0";
	}
	friend ostream& operator<<(ostream& izlaz, const  Perk& p)
	{
        izlaz<<p.ImePerka<<" ";
        if(p.tier==Yellow)
            izlaz<<"Yellow";
        else if(p.tier==Green)
            izlaz<<"Green";
        else izlaz<<"Purple";
        izlaz<<" 0 0";
        return izlaz;
    }
};
class KillerPerk:public Perk
{
protected:
	bool hex;
	bool needsNerf; //za noed
public:
	KillerPerk(string ImePerka="",Tier tier=Yellow,bool hex=false,bool needsNerf=false)
	:Perk(ImePerka,tier)
	{
		this->hex=hex;
		this->needsNerf=needsNerf;
	}
	bool iskiller()const {return true;}
	bool isHex()const
	{
		return hex;
	}
	string getHex()const
	{
		if(hex)
			return "Hex";
		else return "nHex";
	}
	string getNeedsNerf()
	{
		if(needsNerf)
			return "PlzNerf";
		else return "OK";
	}
	void ispisPerka()
	{
		cout<<ImePerka<<" ";
        if(tier==Yellow)
        	cout<<"Yellow";
        else if(tier==Green)
        	cout<<"Green";
        else cout<<"Purple";
        cout<<" ";
        if(hex)
			cout<<"Hex";
		else cout<<"nHex";
		cout<<" ";
		if(needsNerf)
			cout<<"PlzNerf";
		else cout<<"OK";
	}
	friend ostream& operator<<(ostream& izlaz, const  KillerPerk& kp)
	{
        izlaz<<kp.ImePerka<<" ";
        if(kp.tier==Yellow)
            izlaz<<"Yellow";
        else if(kp.tier==Green)
            izlaz<<"Green";
        else izlaz<<"Purple";
        izlaz<<" ";
        if(kp.hex)
            izlaz<<"Hex";
        else izlaz<<"nHex";
        izlaz<<" ";
        if(kp.needsNerf)
            izlaz<<"PlzNerf";
        else izlaz<<"OK";
        return izlaz;
    }
};


#endif // PERKOVI_HPP_INCLUDED
