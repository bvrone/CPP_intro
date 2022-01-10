#ifndef __HumanA__
#define __HumanA__

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_wpn;

	public:
		HumanA(std::string name, Weapon &wpn);
		void attack();
};

#endif // __HumanA__