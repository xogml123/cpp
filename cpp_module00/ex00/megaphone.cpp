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
			std::string temp=argv[i];
			std::cout << toupper(temp);
		}
		std::cout <<std::endl;
	}
}