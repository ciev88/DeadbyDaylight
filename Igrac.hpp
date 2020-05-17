#ifndef IGRAC_HPP_INCLUDED
#define IGRAC_HPP_INCLUDED

class Igrac
{
	protected:
		bool povezanost;
	public:
		Igrac(bool p=false)
		{
			povezanost=p;
		}
		virtual void Povezan()
		{
			povezanost=true;
		}

};




#endif // IGRAC_HPP_INCLUDED 
