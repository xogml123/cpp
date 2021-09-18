#include "Character.hpp"

Character::Character(std::string const& name)
:mName(name)
, mUnequipedList(0)
{
	for (int i = 0; i < sInventorySize; i++)
		mInventory[i] = 0;
}

Character::Character(Character const& ch)
:mUnequipedList(0)
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

std::string const& Character::getName() const
{
	return (mName);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < sInventorySize; i++)
	{
		if (!mInventory[i])
		{
			mInventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (mInventory[idx])
	{
		appendList(mInventory[idx]);
		mInventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (mInventory[idx])
		mInventory[idx]->use(target);
}

void	Character::appendList(AMateria* m)
{
	Unequiped* node = new Unequiped(m);
	if (!mUnequipedList)
		mUnequipedList = node;
	else
	{
		while (mUnequipedList->link)
			mUnequipedList = mUnequipedList->link;
		mUnequipedList->link = node;
	}
}


Character::~Character()
{
	Unequiped* temp = mUnequipedList;

	for (int i =0; i< sInventorySize; i++)
		delete mInventory[i];
	while (mUnequipedList)
	{
		temp = mUnequipedList->link;
		delete mUnequipedList;
		mUnequipedList = temp;
	}
}