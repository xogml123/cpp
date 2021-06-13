#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap{
	private:
		static const int	nbrQuotes = 5;
		static const std::string	quotes[nbrQuotes];
		
	public:
		FragTrap();
		FragTrap(FragTrap const& ft);
		FragTrap(std::string const& name);
		virtual	~FragTrap();
		FragTrap& operator=(FragTrap const& ft);
		virtual void	rangedAttack(std::string const & target) override;
		virtual void	meleeAttack(std::string const & target) override;
		void	vaulthunter_dot_exe(std::string const & target);
};
#endif