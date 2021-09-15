#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:
		AMateria(std::string const& type);
		AMateria& operator=(AMateria const& am);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		virtual ~AMateria();
	protected:
		std::string mType;
};
#endif