#include "Character.hpp"

const	sInventorySize = 4;

Character::Character(std::string const& name)
:mName(name)
{
	for (int i = 0; i < sInventorySize; i++)
		mInventory[i] = 0;
}

Character::Character(Character const& ch)
{
	*this = ch;
}

Character& Character::operator=(Character const& ch)
{
	this->mName = ch.mName;
	for (int i =0; i< sInventorySize; i++)
	{
		delete this->mInventory[i];
		this->mInventory[i] = ch.mInventory[i]->clone();
	}
	return (*this);
}

std::string const& getName() const
{
	return (mName);
}

void equip(AMateria* m)
{}

void unequip(int idx)
{}

void use(int idx, character& target)
{}

~Character()
{
	for (int i =0; i< sInventorySize; i++)
		delete mInventory[i];
}