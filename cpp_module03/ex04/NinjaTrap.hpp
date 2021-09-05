
#ifndef Ninja_TRAP_HPP
# define Ninja_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class NinjaTrap : virtual public ClapTrap{		
	public:
		NinjaTrap();
		NinjaTrap(NinjaTrap const& ft);
		NinjaTrap(std::string const& name);
		virtual	~NinjaTrap();
		NinjaTrap& operator=(NinjaTrap const& ft);
		virtual void	rangedAttack(std::string const & target) override;
		virtual void	meleeAttack(std::string const & target) override;
		void	ninjaShoebox(FragTrap const& ft);
		void	ninjaShoebox(ClapTrap const& ct);
		void	ninjaShoebox(ScavTrap const& st);
		void	ninjaShoebox(NinjaTrap const& nt);
};
#endif