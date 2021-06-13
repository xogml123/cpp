#ifndef Clap_TRAP_HPP
# define Clap_TRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class ClapTrap{
	protected:
		int	hitPoints;
		int 	maxHitPoints;
		int	energyPoints;
		int	maxEnergyPoints;
		int	level;
		std::string		name;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
		void	copy(ClapTrap const& ft);
	public:
		ClapTrap();
		ClapTrap(ClapTrap const& ft);
		ClapTrap(std::string const& name);
		virtual	~ClapTrap();
		ClapTrap& operator=(ClapTrap const& ft);
		virtual void	rangedAttack(std::string const & target);
		virtual void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string const& getName() const;
};
#endif