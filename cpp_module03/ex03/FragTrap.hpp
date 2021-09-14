#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(std::string const& name);
		virtual ~FragTrap();
		virtual void Attack(std::string const& target);
		virtual void TakeDamage(unsigned int amount);
		virtual void BeRepaired(unsigned int amount);
		virtual void highFivesGuys();
};

#endif