#include "Pony.hpp"

Pony::Pony(std::string name)
{
	name_ = name;
	std::cout<<"Pony is born"<<std::endl;
}

Pony::~Pony()
{
	std::cout<<"Pony is dead"<<std::endl;
}

void	Pony::cry()
{
	std::cout<<"crying!!!!!!"<<std::endl;
}

void	Pony::run()
{
	std::cout<<"running!!!!!!"<<std::endl;
}