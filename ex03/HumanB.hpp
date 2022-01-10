#ifndef __HumanB__
#define __HumanB__

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_wpn;

	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &wpn);
};

#endif // __HumanB__