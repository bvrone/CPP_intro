#include <iostream>
#include "Karen.hpp"

void Karen::debug(void)		{std::cout << DEBUG_LVL << std::endl;}
void Karen::info(void)		{std::cout << INFO_LVL << std::endl;}
void Karen::warning(void)	{std::cout << WARN_LVL << std::endl;}
void Karen::error(void)		{std::cout << ERROR_LVL << std::endl;}

void Karen::complain(int level)
{
	switch(level)
	{
		case ('D' - 'A'):
			this->debug();
		case ('I' - 'A'):
			this->info();
		case ('W' - 'A'):
			this->warning();
		case ('E' - 'A'):
			this->error();
			break;
		default:
			std::cout << DEFAULT_LVL << std::endl;
	}
	
}