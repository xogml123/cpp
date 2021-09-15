#include "Ice.hpp"

Ice::Ice()
:AMateria("Ice")
{}

AMateria* Ice::clone() const
{
	AMateria* ret= new Ice();
	return (ret);
}

void use(ICharacter& target)
{
	std::cout<< "* heals"<<target.getName()<<"’s wounds *"<<std::endl;
}

