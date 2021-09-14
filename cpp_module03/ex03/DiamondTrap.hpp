#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	public:
		DiamondTrap(std::string const& name);
		~DiamondTrap();
		void Attack(std::string const& target);
		void TakeDamage(unsigned int amount);
		void BeRepaired(unsigned int amount);
		void guardGate();
		void highFivesGuys();
		void whoAmI();
	private:
		std::string mName;
};

#endif