#include "Zombie.hpp"

int main()
{
	Zombie *zomb = newZombie("Arseny");
	Zombie zz("Tieguanyin");

	zomb->announce();
	randomChump("Mekan");
	
	delete zomb;
	return (0);
}