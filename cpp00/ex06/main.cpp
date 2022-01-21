#include <iostream>
#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	std::string lvl;

	if (argc != 2)
		std::cerr << "Usage: wrong number of arguments" << std::endl;
	else
	{
		lvl = argv[1];
		if (lvl == "DEBUG" or lvl == "INFO" or lvl == "WARNING" or lvl == "ERROR") 
			karen.complain(argv[1][0] - 'A');
		else
			karen.complain(DEF_LVL);
	}
	return 0;
}