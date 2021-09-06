#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{
	
	public:
		HumanA(const std::string& name, const Weapon& weapon);
		virtual ~HumanA();

		void	attack() const;
	private:
		const Weapon& weapon;
		std::string name;
};
#endif