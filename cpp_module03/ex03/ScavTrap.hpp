#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	public:
		ScavTrap(std::string const& name);
		virtual ~ScavTrap();
		virtual void Attack(std::string const& target);
		virtual void TakeDamage(unsigned int amount);
		virtual void BeRepaired(unsigned int amount);
		virtual void guardGate();
};

#endif