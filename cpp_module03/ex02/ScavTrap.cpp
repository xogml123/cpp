#include "ScavTrap.hpp"

std::string const ScavTrap::quotes[ScavTrap::nbrQuotes] = {
	"Red",
	"Black",
	"Coffee",
	"Fire",
	"Light"
};

ScavTrap::ScavTrap()
:ClapTrap()
{
	std::cout<<"no name, Scav Trap constructor."<<std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string const& name)
:ClapTrap(name)
{
	std::cout<<this->name<<" Scav Trap constructor."<<std::endl;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const& ft)
{
	*this = ft;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& ft)
{
	copy(ft);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<this->name<<" Scav Trap destructor."<<std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Scav Trap"<< this->name<< " attacks "<< target<< " at range, causing "<<this->rangedAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Scav Trap"<< this->name<< " attacks "<< target<< " at melee, causing "<<this->meleeAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	
	std::cout<<this->quotes[rand() % this->nbrQuotes]<<std::endl;
}
