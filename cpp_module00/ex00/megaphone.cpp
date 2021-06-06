#include <iostream>
#include <string>


int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string temp = argv[i];
			for (char ch : temp)
				std::cout << (char)toupper(ch);
		}
		std::cout <<std::endl;
	}
}