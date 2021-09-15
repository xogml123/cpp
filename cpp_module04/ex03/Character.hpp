#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const& name);
		Character(Character const& ch);
		Character& operator=(Character const& ch);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
	private:
		std::string mName;
		AMateria*	mInventory[sInventorySize];
		static const	sInventorySize;
};

#endif