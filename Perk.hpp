#ifndef PERKOVI_HPP_INCLUDED
#define PERKOVI_HPP_INCLUDED
enum Tier{Yellow=1,Green,Purple};
class Perk
{
protected:
	string Ime_Perka;
	Tier tier;
public:
	Perk(string Ime_Perka="",Tier tier=Yellow)
	{
		this->Ime_Perka=Ime_Perka;
		this->tier=tier;
	}
};
class KillerPerk:public Perk
{
protected:
	bool hex;
	bool needsNerf; //za noed
public:
	KillerPerk(string Ime_Perka="",Tier tier=Yellow,bool hex=false,bool needsNerf=false)
	:Perk(Ime_Perka,tier)
	{
		this->hex=hex;
		this->needsNerf=needsNerf;
	}
};


#endif // PERKOVI_HPP_INCLUDED
