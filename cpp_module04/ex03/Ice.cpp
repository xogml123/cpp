#include "Ice.hpp"

Ice::Ice()
:AMateria("ice")
{}

Ice* Ice::clone() const
{
	Ice* ret= new Ice();
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout<< "* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}

