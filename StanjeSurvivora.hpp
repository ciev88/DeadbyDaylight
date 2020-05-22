#ifndef STANJE_SURVIVORA_HPP_INCLUDED
#define STANJE_SURVIVORA_HPP_INCLUDED
enum health {healthy, injured, downed};
enum action {normal, chased, healing, genning, mending, locker, chest, openingexit};
enum result {ingame, escaped, sacrificed, killed};
class StanjeSurvivora
{
protected:
    health h;
    action a;
    result r;
    static bool exposed;
public:
    StanjeSurvivora()
    {
        h=healthy;
        a=normal;
        r=ingame;
    }
    static bool getExposed()
    {
        return exposed;
    }
    void Expose()
    {
        exposed=true;
    }
    void setHealth(health h)
    {
        this->h=h;
    }
    void setAction(action a)
    {
        this->a=a;
    }
    void setResult(result r)
    {
        this->r=r;
    }
    health getHealth()const
    {
        return h;
    }
    action getAction()const
    {
        return a;
    }
    result getResult()const
    {
        return r;
    }
};

#endif // STANJE_SURVIVORA_HPP_INCLUDED
