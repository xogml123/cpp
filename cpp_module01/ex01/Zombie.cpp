#include "Zombie.hpp"

Zombie::Zombie()
:name_(std::string())
{
}

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

void	Zombie::setName(const std::string& name)
{
	name_ = name;
}

