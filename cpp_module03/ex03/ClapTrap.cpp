#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:hitPoints(100), maxHitPoints(100), energyPoints(100),
	maxEnergyPoints(100), level(1), name(std::string()),
	meleeAttackDamage(100), rangedAttackDamage(100),
	armorDamageReduction(100)
{
	std::cout<<"no name, Clap Trap constructor."<<std::endl;
}

ClapTrap::ClapTrap(std::string const& name)
:hitPoints(100), maxHitPoints(100), energyPoints(100),
	maxEnergyPoints(100), level(1), name(name),
	meleeAttackDamage(100), rangedAttackDamage(100),
	armorDamageReduction(100)
{
	std::cout<<this->name<<" Clap Trap constructor."<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& ft)
{
	*this = ft;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& ft)
{
	copy(ft);
	return (*this);
}

void	ClapTrap::copy(ClapTrap const& ft)
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
}

ClapTrap::~ClapTrap()
{
	std::cout<<this->name<<" Clap Trap destructor."<<std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Clap Trap"<< this->name<< " attacks "<< target<< " at range, causing "<<this->rangedAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Clap Trap"<< this->name<< " attacks "<< target<< " at melee, causing "<<this->meleeAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int deal = (int)amount - this->armorDamageReduction;
	if (this->hitPoints <= deal)
	{
		deal = this->hitPoints - 0;
		this->hitPoints = 0;
	}
	else
		this->hitPoints -= deal;
	std::cout << this->name << "take "
			<< deal << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + (int)amount >= this->maxHitPoints)
	{
		amount = this->maxHitPoints - this->hitPoints;
		this->hitPoints = this->maxHitPoints;
	}
	else
		this->hitPoints += amount;
	std::cout << this->name << "be repaired "
			<< amount << " points of amount!" << std::endl;
}

std::string const& ClapTrap::getName() const
{
	return (this->name);
}

