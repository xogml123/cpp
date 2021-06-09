#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanB{
	private:
		const Weapon* weapon;
		std::string name;
	public:
		HumanB(const std::string& name);
		virtual ~HumanB();
		void	setWeapon(const Weapon& wp);
		void	attack() const;
};
#endif