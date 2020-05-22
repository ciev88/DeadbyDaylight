#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
const char clear[]="clear"; //UNIX
//const char clear[]="cls"; //Windows
#include "Mapa.hpp"
#include "Item.hpp"
#include "Perk.hpp"
#include "StanjeSurvivora.hpp"
#include "Killer.hpp"
#include "Survivor.hpp"
class Game
{
protected:
	Mapa m;
	Killer k;
	Survivor s1;
	Survivor s2;
	Survivor s3;
	Survivor s4;
	vector<Perk*> perkovi;
public:
	Game()
	{
		UcitajPerkove();
		ListaPerkova();
		//UnosKillera();
		//UnosSurvivora();
	}
	void UcitajPerkove()
    {
        ifstream file("perkovi.txt");
        if (file.is_open())
        {
            string ImePerka,sTier,sHex,sNeedsNerf,tip;
            Tier tier;
            bool hex,needsNerf;
            while(!file.eof())
            {
                file>>ImePerka>>sTier>>sHex>>sNeedsNerf>>tip;
                if(file.eof()) break;
                if(sTier=="Yellow")
                	tier=Yellow;
                else if(sTier=="Green")
                	tier=Green;
                else tier=Purple;
                if(tip=="KillerPerk")
                {
                	if(sHex=="Hex")
                		hex=true;
                	else hex=false;
                	if(sNeedsNerf=="OK")
                		needsNerf=false;
                	else needsNerf=true;
                    KillerPerk* p=new KillerPerk(ImePerka,tier,hex,needsNerf);
                    perkovi.push_back((Perk*)p);
                }
                else
                {
                    Perk* p=new Perk(ImePerka,tier);
                    perkovi.push_back(p);
                }
            }
            file.close();
        }
        else
        {
        	cout << "Unable to open file. Creating one." << endl;
        	ofstream file1("perkovi.txt");
        	file1.close();
        }
    }
	void ListaPerkova()const
    {
        if(perkovi.empty())
            cout << "No perks in file.\n";
        else
        {
        	int j=1;
        	for(auto i=perkovi.begin();i!=perkovi.end();i++)
            {
            	if((*i)->iskiller())
            		 cout<<j<<". "<<*((KillerPerk*)*i)<<endl;
            	else cout<<j<<". "<<**i<<endl;
            	j++;
            }
    	}
    }
	void SacuvajPerkove()
	{
        ofstream file("perkovi.txt");
        for(auto i=perkovi.begin();i!=perkovi.end();i++)
        {
            if((*i)->iskiller())
            {
            	file<<*((KillerPerk*)*i)<<" KillerPerk"<<endl;
            }
            else
            {
            	file<<**i<<" Perk"<<endl;
            }
        }
        file.close();
    }
    void DodajPerk()
    {
    	char izbor;
    	cout << "Perk ili KillerPerk? p/k ";
    	cin >> izbor;
    	string ImePerka,sTier;
    	bool hex,needsNerf;
    	Tier tier;
    	cout << "Ime perka: ";
    	cin >> ImePerka;
    	cout << "Tier: ";
    	cin >> sTier;
    	if(sTier=="Yellow")
    		tier=Yellow;
    	else if(sTier=="Green")
    		tier=Green;
    	else tier=Purple;
    	if(izbor=='k')
    	{
    		char cHex;
    		cout<<"Hex? d/n ";
    		cin >> cHex;
    		if(cHex=='d')
    			hex=true;
    		else hex=false;
    		char cNeedsNerf;
    		cout << "Needs nerf? d/n ";
    		cin >> cNeedsNerf;
    		if(cNeedsNerf=='d')
    			needsNerf=true;
    		else needsNerf=false;
    		KillerPerk* p=new KillerPerk(ImePerka,tier,hex,needsNerf);
    		perkovi.push_back(p);
    	}
    	else
    	{
    		Perk* p=new Perk(ImePerka,tier);
    		perkovi.push_back(p);
    	}
    }
    void ObrisiPerk()
    {
    	cout << "Izaberite perk za brisanje:";
    	ListaPerkova();
    	int izbor;
    	cout << "Vas izbor: ";
    	cin >> izbor;
    	izbor--;
    	delete *(perkovi.begin()+izbor);
    	perkovi.erase(perkovi.begin()+izbor);
    }
    void HexPerkovi()
    {
        cout << "Svi hex perkovi:\n";
        for(auto i=perkovi.begin();i!=perkovi.end();i++)
        {
        	if((*i)->iskiller() && (*i)->isHex())
                cout<<*((KillerPerk*)*i);
        }
    }
    void ObicniPerkovi()
    {
    	cout << "Obicni perkovi:\n";
        for(auto i=perkovi.begin();i!=perkovi.end();i++)
        {
        	if(!((*i)->iskiller()))
                cout<<*((KillerPerk*)*i);
        }
    }
    void KillerPerkovi()
    {
    	cout << "Killer perkovi:\n";
        for(auto i=perkovi.begin();i!=perkovi.end();i++)
        {
        	if((*i)->iskiller())
                cout<<*((KillerPerk*)*i);
        }
    }
    void TraziPerkove()
    {
    	cout<<"1) Obicni perkovi"<<endl
    	cout<<"2) Killer perkovi"<<endl;
    	cout<<"3) Hex perkovi"<<endl;
    	char izbor;
    	cin >> izbor;
    	if(izbor=='1') ObicniPerkovi();
    	else if(izbor=='2') KillerPerkovi();
    	else if(izbor=='3') HexPerkovi();
    	else ListaPerkova();
    }




	void UnosKillera()
	{
		cout << "Unos killera:" << endl;
		string Ime;
		cout << "Ime killera: ";
		cin >> Ime;
		char cDLC;
		cout << "DLC? d/n ";
		cin >> cDLC;
		bool DLC;
		if(cDLC=='d')
			DLC=true;
		else DLC=false;
		bool Povezanost=true;
		string ImeItema,OpisItema,VrstaItema;
		char cOneShot;
		bool OneShot;
		double MovementSpeed;
		cout << "Ime itema: ";
		cin >> Ime;
		cout << "Opis itema: ";
		cin >> OpisItema;
		cout << "Vrsta itema: ";
		cin >> VrstaItema;
		cout << "Oneshot? d/n ";
		cin >> cOneShot;
		if(cOneShot=='d')
			OneShot=true;
		else OneShot=false;
		cout << "MovementSpeed: ";
		cin >> MovementSpeed;
		Killer k(Ime,DLC,Povezanost,ImeItema,OpisItema,VrstaItema,OneShot,MovementSpeed);
		this->k=k;
	}
	void UnosSurvivora()
	{
		for(int i=0;i<4;i++)
		{
			cout << "Unos "<<i+1<<". survivora:";
			string Ime,Prezime;
			cout << "Ime i prezime: ";
			cin >> Ime >> Prezime;
			char cDLC;
			cout << "DLC? d/n ";
			cin >> cDLC;
			bool DLC;
			if(cDLC=='d')
				DLC=true;
			else DLC=false;
	        bool Povezanost=true;
	        string ImeItema,OpisItema,VrstaItema;
	        char cFastHeal;
	        bool FastHeal;
	        double BPM;
	        cout << "Ime itema: ";
			cin >> ImeItema;
			cout << "Opis itema: ";
			cin >> OpisItema;
			cout << "Vrsta itema: ";
			cin >> VrstaItema;
			cout << "Fast heal? d/n ";
			cin >> cFastHeal;
			if(cFastHeal=='d')
				FastHeal=true;
			else
				FastHeal=false;
			cout << "Blood point multiplier: ";
			cin >> BPM;
			Survivor s(Ime,Prezime,DLC,Povezanost,ImeItema,OpisItema,VrstaItema,FastHeal,BPM);
			if(i==0) s1=s;
			else if(i==1) s2=s;
			else if(i==2) s3=s;
			else if(i==3) s4=s;
		}
	}
	void Promeni_Stanje_Survivora()
	{
		cout<<"Izaberi survivora (1,2,3,4): "<<endl;
		int br;
		cin >> br;
	}
	~Game()
	{
		for(auto i=perkovi.begin();i!=perkovi.end();i++) delete *i;
	}
};






#endif // GAME_HPP_INCLUDED