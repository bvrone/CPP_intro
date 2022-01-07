#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie(void) {std::cout << this->getName() << DYING_MSG << std::endl;}

void Zombie::announce(void) {std::cout << this->getName() << ANNOUNCE_MSG << std::endl;}
void Zombie::setName(std::string name) {_name = name;}
std::string Zombie::getName(void) {return (_name);}
