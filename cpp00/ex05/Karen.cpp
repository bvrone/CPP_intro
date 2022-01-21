#include <iostream>
#include "Karen.hpp"

void Karen::debug(void)		{std::cout << DEBUG_LVL << std::endl;}
void Karen::info(void)		{std::cout << INFO_LVL << std::endl;}
void Karen::warning(void)	{std::cout << WARN_LVL << std::endl;}
void Karen::error(void)		{std::cout << ERROR_LVL << std::endl;}

void Karen::complain(std::string level)
{
	void (Karen:: *cmd[32])(void);

	cmd['d' - 'a'] = &Karen::debug;
	cmd['i' - 'a'] = &Karen::info;
	cmd['w' - 'a'] = &Karen::warning;
	cmd['e' - 'a'] = &Karen::error;

	(this->*cmd[level[0] - 'a'])();
}