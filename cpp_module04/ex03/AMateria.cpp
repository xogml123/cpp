#include "AMateria.hpp"
#include "iostream"

AMateria::AMateria(std::string const& type)
:mType(type)
{
}

AMateria& AMateria::operator=(AMateria const& am)//do nothing
{
	if (this->mType == am.mType)
		return (*this);
	else
		return (*this);
}

std::string const& AMateria::getType() const
{
	return (mType);
}

AMateria::~AMateria()
{
}
