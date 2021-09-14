#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name)
:ClapTrap(name)
{
	mName = name;
	mHitpoints = 100;
	mEnergyPoints = 100;
	mAttackDamage = 30;
	mMaxHitpoints = 100;
	mAttackEnergypoints = 22;
	std::cout<<"FragTrap "<<mName<<" is created."<<std::endl;
}

void FragTrap::Attack(std::string const& target)
{
	if (mEnergyPoints - mAttackEnergypoints < 0)
	{
		std::cout<<"Not enough energypoints."<<std::endl;
	}
	else
	{
		std::cout<<"FragTrap "<< mName<< " attacks " <<target<<" , causing " <<mAttackDamage;
		std::cout<<" points of damage!"<<std::endl;
		mEnergyPoints -= mAttackEnergypoints;
	}
	
}

void FragTrap::TakeDamage(unsigned int amount)
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
	std::cout<<"FragTrap "<< mName<< " take "<<damage<< " damage " <<std::endl;
}

void FragTrap::BeRepaired(unsigned int amount)
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
	std::cout<<"FragTrap "<< mName<< " is "<<heal<< " points repaired. " <<std::endl;	
}

void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap "<< mName<< " request high fives to guys."<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<<mName<<" is destructed."<<std::endl;
}