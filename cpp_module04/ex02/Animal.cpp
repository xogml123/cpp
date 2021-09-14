#include "Animal.hpp"

Animal::Animal()
:mType(std::string())
{
	std::cout<<"Animal "<<mType<<" has just been created."<<std::endl;
}

std::string Animal::getType() const
{
	return (mType);
}

Animal::~Animal()
{
	std::cout<<"Animal "<<mType<<" has just been destructed."<<std::endl;
}