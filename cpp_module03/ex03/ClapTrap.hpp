#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public:
		ClapTrap(const std::string& name);
		void Attack(std::string const& target);
		void TakeDamage(unsigned int amount);
		void BeRepaired(unsigned int amount);
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