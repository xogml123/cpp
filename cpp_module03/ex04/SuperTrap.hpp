#ifndef Super_TRAP_HPP
# define Super_TRAP_HPP
#include <string>
#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{

		
	public:
		SuperTrap(SuperTrap const& ft);
		SuperTrap(std::string const& name);
		virtual	~SuperTrap();
		SuperTrap& operator=(SuperTrap const& ft);
		void	rangedAttack(std::string const & target) override;
		void	meleeAttack(std::string const & target) override;
};
#endif