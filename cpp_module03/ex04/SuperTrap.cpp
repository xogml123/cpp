#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const& name)
: ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout<<this->name<<" Super Trap constructor."<<std::endl;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
}

SuperTrap::SuperTrap(SuperTrap const& ft)
{
	*this = ft;
}

SuperTrap& SuperTrap::operator=(SuperTrap const& ft)
{
	copy(ft);
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout<<this->name<<" Super Trap destructor."<<std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Super Trap"<< this->name<< " attacks "<< target<< " at range, causing "<<this->rangedAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Super Trap"<< this->name<< " attacks "<< target<< " at melee, causing "<<this->meleeAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}
