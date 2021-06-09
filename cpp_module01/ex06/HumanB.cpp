#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
:weapon(0), name(name)
{
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(const Weapon& wp)
{
	weapon = &wp;
}

void	HumanB::attack() const
{
	std::cout<<name<< " attacks with his "<<weapon->getType()<<std::endl;
}
