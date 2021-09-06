#include <iostream>
#include <fstream>
#include <string>

void	lineReplace(std::string& temp, std::ofstream& replace, std::string s1, std::string s2)
{
	std::string::size_type	pos;

	while ((pos = temp.find(s1)) != std::string::npos)
	{
		std::string	t1;
		std::string	t2;

		t1 = temp.substr(0, pos);
		t2 = temp.substr(pos + s1.length(), temp.length());
		temp = t1 + s2 +t2;
	}
	replace<<temp<<std::endl;
}

int	main(int argc, char *argv[])
{
	std::ifstream	line;
	std::ofstream	replace;
	std::string	fileName;

	if (argc != 4)
	{
		std::cout<<"error : invalid arguments num."<<std::endl;
		return (1);
	}
	fileName = argv[1];
	line.open(fileName);
	if (!line.is_open())
	{
		std::cout<<"error : invalid filename."<<std::endl;
		return(1);
	}
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