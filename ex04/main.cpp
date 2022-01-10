#include <iostream>
#include <fstream>

void replaceString(std::ofstream &outf, std::string str, char **argv)
{
	std::size_t substart	= 0;
	std::size_t subend		= 0;
	std::string substr(argv[2]);

	if (!substr.length())
		outf << str;
	else
	{
		while (substart != std::string::npos)
		{
			substart = str.find(substr, subend);
			outf << str.substr(subend, substart - subend);
			subend = substart + substr.length();
			if (substart != std::string::npos)
				outf << argv[3];
		}
	}
}

int	replace(char **argv)
{
	std::string strInput;
	std::ifstream inf(argv[1]);
	if (!inf)
	{
		std::cerr << "Error: " << argv[1] << " couldn't be opened for reading" << std::endl;
		return 1;
	}
	std::string outfname(argv[1]);
	outfname += ".replace";
	std::ofstream outf(outfname, std::ios::trunc);
	if (!outf)
	{
		std::cerr << "Error: " << outfname << " couldn't be opened for writing" << std::endl;
		return 1;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		replaceString(outf, strInput, argv);
		if (inf)
			outf << "\n";
	}
	outf.close();
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cerr << "Usage: wrong number of arguments" << std::endl;
	else if (!strcmp(argv[1], ""))
		std::cerr << "Usage: the filename can't be empty" << std::endl;
	else if (replace(argv))
		return 1;
	return 0;
}