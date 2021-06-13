#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap{
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
		ScavTrap();
		ScavTrap(ScavTrap const& ft);
		ScavTrap(std::string const& name);
		virtual	~ScavTrap();
		ScavTrap& operator=(ScavTrap const& ft);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer();
};
#endif