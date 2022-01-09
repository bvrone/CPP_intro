#include <iostream>

int main()
{
	std::string str 		= "HI THIS IS BRAIN";
	std::string *stringPTR	= &str;
	std::string &stringREF	= str;
	
	std::cout << "the address of the string:\t\t" << &str << std::endl;
	std::cout << "the address of the string by pointer:\t" << stringPTR << std::endl;
	std::cout << "the address of the string by reference:\t" << &stringREF << std::endl;
	std::cout << "the string by pointer:\t" << *stringPTR << std::endl;
	std::cout << "the string by reference:" << stringREF << std::endl;
	return 0;
}