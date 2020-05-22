#ifndef GENERATOR_HPP_INCLUDED
#define GENERATOR_HPP_INCLUDED
class Generator
{
    protected:
        bool Popravljen;
        double ProcenatPopravljenosti;
    public:
        Generator(bool popp=false, double ppp=0)
        {
            Popravljen=popp;
            ProcenatPopravljenosti=ppp;
        }

        void setGenerator(double pp)
        {
            if(Popravljen)
            {
                cout << "Generator je vec popravljen!" << endl;
                return;
            }
            ProcenatPopravljenosti=pp;
            ProveraPopravljen();
        }
        void ProveraPopravljen()
        {
            if(ProcenatPopravljenosti>=100)
            {
                ProcenatPopravljenosti=100;
                Popravljen=true;
                cout << "Generator popravljen!" << endl;
            }
        }
        friend ostream& operator<<(ostream& izlaz, const Generator& g)
        {
            izlaz<<"Generator: ispis"<<endl;
            if(g.Popravljen)
                izlaz<<"Popravljen: da"<<endl;
            else
                izlaz<<"Popravljen: ne"<<endl;
            izlaz<<"Procenat Popravljenosti: "<<g.ProcenatPopravljenosti<<endl<<endl;
            return izlaz;
        }
};

#endif // GENERATOR_HPP_INCLUDED
