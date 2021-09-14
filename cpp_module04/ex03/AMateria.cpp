#include "AMateria.hpp"
#include "iostream"

AMateria::AMateria(std::string const& type)
:mType(type)
{
	std::cout<<"AMateria "<<mType<<" has just been created."<<std::endl;
}

AMateria::~AMateria();
