#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class FragTrap{
	private:
		static const int	nbrQuotes = 5;
		static const std::string	quotes[nbrQuotes];
		int	hitPoints;
		int 	maxHitPoints;
		int	energyPoints;
		int	maxEnergyPoints;
		int	level;
		std::string		name;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
	public:
		FragTrap();
		FragTrap(FragTrap const& ft);
		FragTrap(std::string const& name);
		virtual	~FragTrap();
		FragTrap& operator=(FragTrap const& ft);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};
#endif