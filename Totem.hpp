#ifndef TOTEMI_HPP_INCLUDED
#define TOTEMI_HPP_INCLUDED
class Totem{

protected:
    bool srusen;
    bool hex;
public:
    Totem(bool s=false,bool h=false)
    {
        srusen=s;
        hex=h;
    }

    bool getSrusen()const
    {
        return srusen;
    }
    void Srusi()
    {
        srusen=true;
    }

    bool getHex()const
    {
        return hex;
    }
    void Hex()
    {
        hex=true;
    }
};
#endif // TOTEMI_HPP_INCLUDED
