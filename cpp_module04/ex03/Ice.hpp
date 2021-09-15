#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "Character.hpp"
#include <string>
#include "AMateria.hpp"
class Ice : public AMateria{

	public:
		Ice();
		Ice* clone() const;
		void use(ICharacter& target);
		~Ice();
};
#endif