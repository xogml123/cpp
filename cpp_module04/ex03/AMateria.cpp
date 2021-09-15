#include "AMateria.hpp"
#include "iostream"

AMateria::AMateria(std::string const& type)
:mType(type)
{
	std::cout<<"AMateria "<<mType<<" has just been created."<<std::endl;
}

AMateria& AMateria::operator=(AMateria const& am)//do nothing
{}

std::string const& AMateria::getType() const
{
	return (mType);
}

virtual void AMateria::use(ICharacter& target)
{

}

AMateria::~AMateria()
{
	std::cout<<"AMateria "<<mType<<" has just been destructed."<<std::endl;
}
