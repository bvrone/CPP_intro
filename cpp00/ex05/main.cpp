#include <iostream>
#include "Karen.hpp"

int main()
{
	Karen karen;

	karen.complain("info");
	karen.complain("debug");
	karen.complain("error");
	karen.complain("warning");

	return 0;
}