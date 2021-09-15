#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria* am);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria*	mInventory[sInventory_size];
		static const int	sMemorySize;
		int					index;
};

#endif