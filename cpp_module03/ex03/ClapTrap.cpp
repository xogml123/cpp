#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
:mName(name)
, mHitpoints(10)
, mEnergyPoints(10)
, mAttackDamage(0)
, mMaxHitpoints(10)
, mAttackEnergypoints(2)
{
	std::cout<<"ClapTrap "<<mName<<" is created."<<std::endl;
}

void ClapTrap::Attack(std::string const& target)
{
	if (mEnergyPoints - mAttackEnergypoints < 0)
	{
		std::cout<<"Not enough energypoints."<<std::endl;
	}
	else
	{
		std::cout<<"ClapTrap "<< mName<< " attacks " <<target<<" , causing " <<mAttackDamage;
		std::cout<<" points of damage!"<<std::endl;
		mEnergyPoints -= mAttackEnergypoints;
	}
	
}

void ClapTrap::TakeDamage(unsigned int amount)
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
	std::cout<<"ClapTrap "<< mName<< " take "<<damage<< " damage " <<std::endl;
}

void ClapTrap::BeRepaired(unsigned int amount)
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
	std::cout<<"ClapTrap "<< mName<< " is "<<heal<< " points repaired. " <<std::endl;	
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap "<<mName<<" is destructed."<<std::endl;
}