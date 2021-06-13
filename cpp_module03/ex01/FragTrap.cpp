#include "FragTrap.hpp"

std::string const FragTrap::quotes[FragTrap::nbrQuotes] = {
	"Take that!",
	"Get off my lawn!",
	"Coffee? Black... like my soul.",
	"I am Fire, I am Death!",
	"Lightening! Kukachow!"
};

FragTrap::FragTrap()
:hitPoints(100), maxHitPoints(100), energyPoints(100),
	maxEnergyPoints(100), level(1), name(std::string()),
	meleeAttackDamage(30), rangedAttackDamage(20),
	armorDamageReduction(5)
{
	std::cout<<"no name, Frag Trap constructor."<<std::endl;
}

FragTrap::FragTrap(std::string const& name)
:hitPoints(100), maxHitPoints(100), energyPoints(100),
	maxEnergyPoints(100), level(1), name(name),
	meleeAttackDamage(30), rangedAttackDamage(20),
	armorDamageReduction(5)
{
	std::cout<<this->name<<"Frag Trap constructor."<<std::endl;
}

FragTrap::FragTrap(FragTrap const& ft)
{
	*this = ft;
}

FragTrap& FragTrap::operator=(FragTrap const& ft)
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

void	FragTrap::takeDamage(unsigned int amount)
{
	int deal = (int)amount - this->armorDamageReduction;
	if (this->hitPoints <= deal)
	{
		deal = this->hitPoints - 0;
		this->hitPoints = 0;
	}
	else
		this->hitPoints -= deal;
	std::cout << this->name << " take "
			<< deal << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + (int)amount >= this->maxHitPoints)
	{
		amount = this->maxHitPoints - this->hitPoints;
		this->hitPoints = this->maxHitPoints;
	}
	else
		this->hitPoints += amount;
	std::cout << this->name << " be repaired "
			<< amount << " points of amount!" << std::endl;
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
