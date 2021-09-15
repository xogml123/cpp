#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Unequiped.hpp"

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
		void use(int idx, ICharacter& target);
	private:
		void	appendList(AMateria* m);
		static const	int sInventorySize = 4;
		std::string mName;
		AMateria*	mInventory[sInventorySize];
		Unequiped*	mUnequipedList;
};

#endif