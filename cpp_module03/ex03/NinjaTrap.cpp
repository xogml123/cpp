#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
:ClapTrap()
{
	std::cout<<"no name, Ninja Trap constructor."<<std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string const& name)
:ClapTrap(name)
{
	std::cout<<this->name<<"Ninja Trap constructor."<<std::endl;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const& ft)
{
	*this = ft;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& ft)
{
	copy(ft);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout<<this->name<<" Ninja Trap destructor."<<std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Ninja Trap "<< this->name<< " attacks "<< target<< " at range, causing "<<this->rangedAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP Ninja Trap "<< this->name<< " attacks "<< target<< " at melee, causing "<<this->meleeAttackDamage;
	std::cout<<" points of damage!"<<std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const& ft)
{
	std::cout<<"Ninja Shoe Box : FragTrap!"<<ft.getName()<<std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const& ct)
{
	std::cout<<"Ninja Shoe Box : ClapTrap!"<<ct.getName()<<std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const& st)
{
	std::cout<<"Ninja Shoe Box : ScavTrap!"<<st.getName()<<std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const& nt)
{
	std::cout<<"Ninja Shoe Box : NinjaTrap!"<<nt.getName()<<std::endl;
}

