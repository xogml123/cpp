#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public:
		ClapTrap(const std::string& name);
		virtual void Attack(std::string const& target);
		virtual void TakeDamage(unsigned int amount);
		virtual void BeRepaired(unsigned int amount);
		virtual ~ClapTrap();
	protected:
		std::string	mName;
		long long	mHitpoints;
		long long	mEnergyPoints;
		int			mAttackDamage;
		int			mMaxHitpoints;
		int			mAttackEnergypoints;

};

#endif