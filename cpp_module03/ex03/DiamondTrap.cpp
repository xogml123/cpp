#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(const std::string& name)
:ClapTrap(name+ "_clap_name")
, ScavTrap(name+ "_clap_name")
, FragTrap(name+ "_clap_name")
{
	mName = name;
	ClapTrap::mName = name + "_clap_name";
	mHitpoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 30;
	mMaxHitpoints = 100;
	mAttackEnergypoints = 11;
	std::cout<<"DiamondTrap "<<mName<<" is created."<<std::endl;
}

void DiamondTrap::Attack(std::string const& target)
{
	ScavTrap::Attack(target);
}

void DiamondTrap::TakeDamage(unsigned int amount)
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
	std::cout<<"DiamondTrap "<< mName<< " take "<<damage<< " damage " <<std::endl;
}

void DiamondTrap::BeRepaired(unsigned int amount)
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
	std::cout<<"DiamondTrap "<< mName<< " is "<<heal<< " points repaired. " <<std::endl;	
}

void DiamondTrap::guardGate()
{
	std::cout<<"DiamondTrap "<< mName<< " have enterred in Gate keeper mode."<<std::endl;
}

void DiamondTrap::highFivesGuys()
{
	std::cout<<"DiamondTrap "<< mName<< " request high fives to guys."<<std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout<<"DiamondTrap name is "<< mName <<" and ClapTrap name is "<< ClapTrap::mName<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap "<<mName<<" is destructed."<<std::endl;
}