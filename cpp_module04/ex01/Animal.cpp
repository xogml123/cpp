#include "Animal.hpp"

Animal::Animal()
:mType(std::string())
{
	std::cout<<"Animal "<<mType<<" has just been created."<<std::endl;
}

void Animal::makeSound() const
{
	std::cout<<"Animal "<<mType<<" make sound."<<std::endl;
}

std::string Animal::getType() const
{
	return (mType);
}

Animal::~Animal()
{
	std::cout<<"Animal "<<mType<<" has just been destructed."<<std::endl;
}