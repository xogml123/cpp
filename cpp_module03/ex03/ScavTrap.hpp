#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
		static const int	nbrQuotes = 5;
		static const std::string	quotes[nbrQuotes];
		
	public:
		ScavTrap();
		ScavTrap(ScavTrap const& ft);
		ScavTrap(std::string const& name);
		virtual	~ScavTrap();
		ScavTrap& operator=(ScavTrap const& ft);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	challengeNewcomer();
};
#endif