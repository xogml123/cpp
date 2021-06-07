#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
:type_(type), name_(name)
{
}

void	Zombie::announce()
{
	std::cout<<"<"<<name_<<" ("<<type_<<")> Braiiiiiiinnnssss..."<<std::endl;
}