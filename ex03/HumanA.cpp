#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &wpn) : _name(name), _wpn(wpn) {}

void HumanA::attack()
{
	std::cout << _name << "  attacks with his " << _wpn.getType() << std::endl;
}