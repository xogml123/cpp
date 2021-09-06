#include "Zombie.hpp"


Zombie::Zombie(std::string name)
:name_(name)
{
	std::cout<<name_<<" creation!"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<name_<<" dead!"<<std::endl;	
}

void	Zombie::announce() const
{
	std::cout<<"<"<<name_<<"> "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
}
