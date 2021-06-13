#include "ScavTrap.hpp"

std::string const ScavTrap::quotes[ScavTrap::nbrQuotes] = {
	"Red",
	"Black",
	"Coffee",
	"Fire",
	"Light"
};

ScavTrap::ScavTrap()
:hitPoints(100), maxHitPoints(100), energyPoints(50),
	maxEnergyPoints(50), level(1), name(std::string()),
	meleeAttackDamage(20), rangedAttackDamage(15),
	armorDamageReduction(3)
{
	std::cout<<"no name, Scav Trap constructor."<<std::endl;
}

ScavTrap::ScavTrap(std::string const& name)
:hitPoints(100), maxHitPoints(100), energyPoints(50),
	maxEnergyPoints(50), level(1), name(name),
	meleeAttackDamage(20), rangedAttackDamage(15),
	armorDamageReduction(3)
{
	std::cout<<this->name<<" Scav Trap constructor."<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& ft)
{
	*this = ft;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& ft)
{
	hitPoints = ft.hitPoints;
	maxHitPoints = ft.maxHitPoints;
	energyPoints = ft.energyPoints;
	maxEnergyPoints = ft.maxEnergyPoints;
	level = ft.level;
	name = ft.level;
	meleeAttackDamage = ft.meleeAttackDamage;
	rangedAttackDamage = ft.rangedAttackDamage;
	armorDamageReduction = ft.armorDamageReduction;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	int deal = (int)amount - this->armorDamageReduction;
	if (this->hitPoints <= deal)
	{
		deal = this->hitPoints - 0;
		this->hitPoints = 0;
	}
	else
		this->hitPoints -= deal;
	std::cout << this->name << "Scav Trap take "
			<< deal << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + (int)amount >= this->maxHitPoints)
	{
		amount = this->maxHitPoints - this->hitPoints;
		this->hitPoints = this->maxHitPoints;
	}
	else
		this->hitPoints += amount;
	std::cout << this->name << "Scav Trap be repaired "
			<< amount << " points of amount!" << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	
	std::cout<<this->quotes[rand() % this->nbrQuotes]<<std::endl;
}
