#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(std::string const& name);
		virtual ~FragTrap();
		void Attack(std::string const& target);
		void TakeDamage(unsigned int amount);
		void BeRepaired(unsigned int amount);
		void highFivesGuys();
};

#endif