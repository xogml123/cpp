#include <iostream>
#include <fstream>
#include <string>

void	lineReplace(std::string& temp, std::ofstream& replace, std::string s1, std::string s2)
{
	std::string::size_type	pos;

	while ((pos = temp.find(s1)) != std::string::npos)
	{
		temp.replace(pos,s1.length(), s2);
	}
	replace<<temp<<std::endl;
}

int	main(int argc, char *argv[])
{
	std::ifstream	line;
	std::ofstream	replace;
	std::string	fileName;

	if (argc != 4)
		std::cout<<"error : invalid arguments num."<<std::endl;
	fileName = argv[1];
	line.open(fileName);
	replace.open(fileName + (std::string)".replace");
	if (line.is_open() && replace.is_open())
	{
		while (!line.eof())
		{
			std::string temp;
			std::getline(line, temp);
			lineReplace(temp, replace, argv[2], argv[3]);
		}
	}
	else
		std::cout<<"file open failure."<<std::endl;
	line.close();
	replace.close();
}