#include "FragTrap.hpp"

std::string const FragTrap::quotes[FragTrap::nbrQuotes] = {
	"Take that!",
	"Get off my lawn!",
	"Coffee? Black... like my soul.",
	"I am Fire, I am Death!",
	"Lightening! Kukachow!"
};

FragTrap::FragTrap()
:ClapTrap()
{
	std::cout<<"no name, Frag Trap constructor."<<std::endl;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string const& name)
:ClapTrap(name)
{
	std::cout<<this->name<<"Frag Trap constructor."<<std::endl;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap(FragTrap const& ft)
{
	*this = ft;
}

FragTrap& FragTrap::operator=(FragTrap const& ft)
{
	copy(ft);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout<<this->name<<" Frag Trap destructor."<<std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Frag Trap "<< this->name<< " attacks "<< target<< " at range, causing "<<this->rangedAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Frag Trap "<< this->name<< " attacks "<< target<< " at melee, causing "<<this->meleeAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energyPoints < 25)
		std::cout << this->name << " is lack of "
			<<"points of energy to!" << std::endl;
	else
	{
		std::cout << "to " << target<< " ";
		std::cout<<this->quotes[rand() % this->nbrQuotes]<<std::endl;
		this->energyPoints -= 25;
	}
}
