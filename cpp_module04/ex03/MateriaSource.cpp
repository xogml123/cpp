#include "MateriaSource"
const int	sMemorySize = 4;

MateriaSource()
:index(0)
{
	for (int i = 0; i < sMemorySize; i++)
		mInventory[i] = 0;	
}

~MateriaSource()
{
	for (int i = 0; i < sMemorySize; i++)
		delete mInventory[i]
}

void learnMateria(AMateria* am)
{
	if (index >= 0 && index < sMemorySize)
		mInventory[index++] = am->clone();
}

AMateria* createMateria(std::string const & type)
{
	for (int i = 0; i < sMemorySize; i++)
	{
		if (!mInventory[i]->getType().compare(type))
			return (mInventory[i]->clone());
	}
}