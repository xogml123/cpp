#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
:index(0)
{
	for (int i = 0; i < sMemorySize; i++)
		mInventory[i] = 0;	
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < sMemorySize; i++)
		delete mInventory[i];
}

void MateriaSource::learnMateria(AMateria* am)
{
	if (index >= 0 && index < sMemorySize)
		mInventory[index++] = am;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < sMemorySize; i++)
	{
		if (mInventory[i] && (!mInventory[i]->getType().compare(type)))
			return (mInventory[i]->clone());
	}
	return (0);
}