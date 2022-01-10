#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _wpn(0) {}

void HumanB::setWeapon(Weapon &wpn) {_wpn = &wpn;}

void HumanB::attack()
{
	std::cout << _name;
	if (_wpn)	
		std::cout << "  attacks with his " << _wpn->getType() << std::endl;
	else
		std::cout << "  has no weapon " << std::endl;
}