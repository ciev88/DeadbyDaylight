#ifndef TOTEMI_HPP_INCLUDED
#define TOTEMI_HPP_INCLUDED

class Totem{

protected:
    bool srusen;
    bool hex;
public:
    Totem(bool s ,bool h)
    {
        srusen=s;
        hex=h;
    }

    bool getSrusen()
    {
        return srusen;
    }

    bool getHex()
    {
        return hex;
    }
};
#endif // TOTEMI_HPP_INCLUDED
