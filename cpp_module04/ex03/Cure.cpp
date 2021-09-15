#include "Cure.hpp"

Cure::Cure()
:AMateria("Cure")
{}

AMateria* Cure::clone() const
{
	AMateria* ret= new Cure();
	return (ret);
}

void use(ICharacter& target)
{
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}

