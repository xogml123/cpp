#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap{
	private:
		static const int	nbrQuotes = 5;
		static const std::string	quotes[nbrQuotes];
		
	public:
		FragTrap();
		FragTrap(FragTrap const& ft);
		FragTrap(std::string const& name);
		virtual	~FragTrap();
		FragTrap& operator=(FragTrap const& ft);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);
};
#endif