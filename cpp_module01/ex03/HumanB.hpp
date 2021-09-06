#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB{
	
	public:
		HumanB(const std::string& name);
		virtual ~HumanB();
		void	setWeapon(const Weapon& wp);
		void	attack() const;

	private:
		const Weapon* weapon;
		std::string name;
};
#endif