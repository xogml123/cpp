#include "Karen.hpp"

Karen::Karen()
{
	funcNames[0] = "debug";
	funcNames[1] = "info";
	funcNames[2] = "warning";
	funcNames[3] = "error";

	funcs[0] = debug;
	funcs[1] = info;
	funcs[2] = warning;
	funcs[3] = error;
}

void Karen::debug( void )
{
	std::cout<<"I love to get extra bacon for my 7XL-do"
		<< "uble-cheese-triple-pickle-special-ketchup burger. I just love it!"<<std::endl;
}
void Karen::info( void )
{
	std::cout<<"I cannot believe adding extra"
		<< "bacon cost more money. You don’t put enough! If you did I would not have to ask"
		<< "for it!"<<std::endl;
}
void Karen::warning( void )
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been"
		<< "coming here for years and you just started working here last month."<<std::endl;
}
void Karen::error( void )
{
	std::cout<<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}
int		findFuncIndex(const std::string& comp)
{
	for (int i = 0; i < 4; i++)
	{
		if (funcNames[i] == comp)
			return (i);
	}
	return (-1);
}

void Karen::complain( std::string level )
{
	int	index = findFuncIndex(level);

	if (index == -1)
	{
		std::cout<<"Wrong Level!"<<std::endl;
		return ;
	}
	funcs[index];
}