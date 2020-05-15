#ifndef GENERATOR_HPP_INCLUDED
#define GENERATOR_HPP_INCLUDED
#include <fstream>
class Generator
{
    protected:
        bool Popravljen;
        double ProcenatPopravljenosti;
    public:
        Generator()
        {
        Popravljen=false;
        ProcenatPopravljenosti=0;
        }

        Generator(bool popp, double ppp)
        {
            Popravljen=popp;
            ProcenatPopravljenosti=ppp;
        }

        Generator(double pp)
        {
            ProcenatPopravljenosti=pp;
            ProveraPopravljen();
        }
        bool ProveraPopravljen()
        {
            if(ProcenatPopravljenosti==100)
            {
                Popravljen=true;
                return true;
            }
            else
                return false;
        }

        

        friend ostream& operator<<(ostream& izlaz, const Generator &g)
        {
            izlaz<<"Generator: ispis"<<endl;
            izlaz<<"Popravljen: "<<g.Popravljen<<endl;
            izlaz<<"Procenat Popravljenosti: "<<g.ProcenatPopravljenosti<<endl<<endl;

            return izlaz;
        }

};

#endif // GENERATOR_HPP_INCLUDED
