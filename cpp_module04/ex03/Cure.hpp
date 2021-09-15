#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "Character.hpp"
#include <string>
#include "AMateria.hpp"
class Cure : public AMateria{

	public:
		Cure();
		Cure* clone() const;
		void use(ICharacter& target);
		~Cure();
};

#endif