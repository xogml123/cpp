#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	public:
		ScavTrap(std::string const& name);
		virtual ~ScavTrap();
		void Attack(std::string const& target);
		void TakeDamage(unsigned int amount);
		void BeRepaired(unsigned int amount);
		void guardGate();
};

#endif