#include "Cure.hpp"

Cure::Cure()
:AMateria("cure")
{}

Cure* Cure::clone() const
{
	Cure* ret= new Cure();
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}

