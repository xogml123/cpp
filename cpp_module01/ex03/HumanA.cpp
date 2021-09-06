#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon)
:weapon(weapon), name(name)
{
}
HumanA::~HumanA()
{

}

void	HumanA::attack() const
{
	std::cout<<name<< " attacks with his "<<weapon.getType()<<std::endl;
}

