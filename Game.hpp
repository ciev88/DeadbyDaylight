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
public:
	Game()
	{
		UnosKillera();
		UnosSurvivora();
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
			string Ime_Prezime;
			cout << "Ime i prezime: ";
			cin >> Ime_Prezime;
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
			Survivor s(Ime_Prezime,DLC,Povezanost,ImeItema,OpisItema,VrstaItema,FastHeal,BPM);
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
};






#endif // GAME_HPP_INCLUDED