#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
:ClapTrap(name)
{
	mName = name;
	mHitpoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 20;
	mMaxHitpoints = 100;
	mAttackEnergypoints = 11;
	std::cout<<"ScavTrap "<<mName<<" is created."<<std::endl;
}

void ScavTrap::Attack(std::string const& target)
{
	if (mEnergyPoints - mAttackEnergypoints < 0)
	{
		std::cout<<"Not enough energypoints."<<std::endl;
	}
	else
	{
		std::cout<<"ScavTrap "<< mName<< " attacks " <<target<<" , causing " <<mAttackDamage;
		std::cout<<" points of damage!"<<std::endl;
		mEnergyPoints -= mAttackEnergypoints;
	}
	
}

void ScavTrap::TakeDamage(unsigned int amount)
{
	int	damage;

	if (mHitpoints - (long long)amount <= 0)
	{
		damage = mHitpoints;
		mHitpoints = 0;
	}
	else
	{
		damage = (long long)amount;
		mHitpoints -= (long long)amount;
	}
	std::cout<<"ScavTrap "<< mName<< " take "<<damage<< " damage " <<std::endl;
}

void ScavTrap::BeRepaired(unsigned int amount)
{
	int	heal;
	
	if (mHitpoints + (long long)amount >= mMaxHitpoints)
	{
		heal = mMaxHitpoints - mHitpoints;
		mHitpoints = mMaxHitpoints;
	}
	else
	{
		heal = (long long)amount;
		mHitpoints += (long long)amount;
	}
	std::cout<<"ScavTrap "<< mName<< " is "<<heal<< " points repaired. " <<std::endl;	
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap "<< mName<< " have enterred in Gate keeper mode."<<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap "<<mName<<" is destructed."<<std::endl;
}