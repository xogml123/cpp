#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria* am);
		AMateria* createMateria(std::string const & type);
	private:
		static const int	sMemorySize = 4;
		AMateria*	mInventory[sMemorySize];
		int					index;
};

#endif