#include <iostream>
#include <string>

int	main()
{
	std::string*	ptr;
	std::string		temp="HI THIS IS BRAIN";
	std::string& 	ref=temp;

	ptr = &temp;
	std::cout<<"using pointer"<<std::endl;
	std::cout<<*ptr<<std::endl;
	std::cout<<"using reference"<<std::endl;
	std::cout<<ref<<std::endl;
	return(0);
}