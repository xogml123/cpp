#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"
class HumanA{
	private:
		const Weapon& weapon;
		std::string name;
	public:
		HumanA(const std::string& name, const Weapon& weapon);
		virtual ~HumanA();

		void	attack() const;
};
#endif