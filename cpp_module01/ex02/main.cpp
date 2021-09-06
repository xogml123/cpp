#include <iostream>
#include <string>

int	main()
{
	std::string*	stringPTR;
	std::string		temp="HI THIS IS BRAIN";
	std::string& 	stringREF=temp;

	stringPTR = &temp;
	std::cout<<"the address in memory of the string:"<<&temp<<std::endl;
	std::cout<<"the address stringPTR:"<<stringPTR<<std::endl;
	std::cout<<"the address stringREF:"<<&stringREF<<std::endl;

	std::cout<<"using pointer:"<<*stringPTR<<std::endl;
	std::cout<<"using reference:"<<stringREF<<std::endl;
	return(0);
}