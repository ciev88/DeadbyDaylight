#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED 

class Game
{
protected:
	Mapa m;
	Killer k;
	Survivor s1;
	Survivor s2;
	Survivor s3;
	Survivor s4;
	Generator g1;
	Generator g2;
	Generator g3;
	Generator g4;
	Generator g5;
	Generator g6;
	Generator g7;
	Generator g8;
	Totem t1;
	Totem t2;
	Totem t3;
	Totem t4;
	Totem t5;
public:
	Game(string IM, string L, bool E, bool H,
		 string Ime_Killera, bool DLC_Killer, bool Povezanost_Killera, string Ime_Killer_itema, string Opis_Killer_Itema,
		 string Vrsta_Killer_Itema, bool Oneshot, double Movespeed, 
		 string Ime_Prezime, bool DLC_Survivor, bool Povezanost_Survivora, string Naziv_Survivor_Itema, 
		 string Opis_Survivor_Itema, string Vrsta_Survivor_Itema, bool Fastheal, double Blood_Points_Multiplier ):m(IM, L, E, H), k(Ime_Killera, DLC_Killer, Povezanost_Killera, Ime_Killer_itema, Opis_Killer_Itema), s(Ime_Prezime, DLC_Survivor, Povezanost_Survivora, Naziv_Survivor_Itema, Opis_Survivor_Itema, Vrsta_Survivor_Itema, Fastheal, Blood_Points_Multiplier)
		{}

	void Promeni_Stanje_Survivora()
	{
		cout<<"Izaberi survivora 1, 2, 3, 4"<<endl;
		int br;
		cin>> br;

		if(br==1)
		{
			
		}
	}


};






#endif // GAME_HPP_INCLUDED