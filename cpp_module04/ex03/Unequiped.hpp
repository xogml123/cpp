#ifndef UNDQUIPED_HPP
# define UNDQUIPED_HPP

#include "AMateria.hpp"

struct Unequiped{
		Unequiped(AMateria* am);
		~Unequiped();
		AMateria* m;
		Unequiped* link;
	};
#endif