#include <iostream>
#include "Zombie.hpp"

int main()
{
	int n;
	Zombie *horde;
	std::string name;

	std::cout << "Enter the size of zombie horde" << std::endl;
	std::cin >> n;
	std::cout << "Enter the name of ordinary zombie from the horde" << std::endl;
	std::cin >> name;
	horde = zombieHorde(n, name);
	for (int i = 0; i < n; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}