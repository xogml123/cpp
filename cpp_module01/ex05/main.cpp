#include "Karen.hpp"

int	main()
{
	Karen k;

	std::cout<<"-------------------------------------------------------------"<<std::endl;
	k.complain("debug");
	std::cout<<"-------------------------------------------------------------"<<std::endl;
	k.complain("info");
	std::cout<<"-------------------------------------------------------------"<<std::endl;
	k.complain("warning");
	std::cout<<"-------------------------------------------------------------"<<std::endl;
	k.complain("error");
	std::cout<<"-------------------------------------------------------------"<<std::endl;
	k.complain("asdfasg");

}